import rclpy

from rclpy.node import Node

from rclpy.qos import (
    QoSProfile,
    ReliabilityPolicy,
    HistoryPolicy,
)

from interfaces.msg import (
    GuidanceCommand,
)

from px4_msgs.msg import (
    VehicleAttitudeSetpoint,
    OffboardControlMode,
    VehicleCommand,
)

from control_node.config_control import ControlConfig

from control_node.cmd_controller import FlightControllerCmd

from control_node.Addapter_PX4 import PX4Adapter

from control_node.offboard_state_machine import (
    OffboardStateMachine,
    OffboardState,
)


from control_node.control_subscriber_manager import (
    ControlSubscriberManager,
)

from control_node.control_publisher_manager import (
    ControlPublisherManager,
)

from control_node.control_benchmark import (
    ControlBenchmark,
)

from px4_msgs.msg import VehicleStatus

class ControlPipeline(Node):

    def __init__(self):

        super().__init__("control_pipeline")

        # QoS Configuration

        # PX4 Topics
        px4_qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=10,
        )

        # ROS Application Topics
        ros_qos = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10,
        )

        # --------------------------------------------------
        # Subscriber Manager
        # --------------------------------------------------

        self.subscriber_manager = ControlSubscriberManager()

        # --------------------------------------------------
        # Flight Controller
        # --------------------------------------------------

        self.controller = FlightControllerCmd()

        # --------------------------------------------------
        # PX4 Adapter
        # --------------------------------------------------

        self.px4_adapter = PX4Adapter()

        # --------------------------------------------------
        # Benchmark
        # --------------------------------------------------

        self.benchmark = ControlBenchmark()

        # --------------------------------------------------
        # Offboard State Machine
        # --------------------------------------------------

        self.state_machine = OffboardStateMachine()

        # --------------------------------------------------
        # Guidance Subscriber
        # --------------------------------------------------

        self.create_subscription(
            GuidanceCommand,
            "/guidance_command",
            self.subscriber_manager.guidance_callback,
            ros_qos,
        )

        self.create_subscription(
            VehicleStatus,
            "/fmu/out/vehicle_status",
            self.subscriber_manager.vehicle_status_callback,
            px4_qos,
        )

        # --------------------------------------------------
        # PX4 Publishers
        # --------------------------------------------------

        self.offboard_mode_publisher = self.create_publisher(
            OffboardControlMode,
            "/fmu/in/offboard_control_mode",
            px4_qos,
        )

        self.attitude_setpoint_publisher = self.create_publisher(
            VehicleAttitudeSetpoint,
            "/fmu/in/vehicle_attitude_setpoint",
            px4_qos,
        )

        self.vehicle_command_publisher = self.create_publisher(
            VehicleCommand,
            "/fmu/in/vehicle_command",
            px4_qos,
        )

        self.publisher_manager = ControlPublisherManager(
            self.offboard_mode_publisher,
            self.attitude_setpoint_publisher,
            self.vehicle_command_publisher,
        )

        # --------------------------------------------------
        # Control Timer
        # --------------------------------------------------

        self.create_timer(
            1.0 / ControlConfig.CONTROL_RATE,
            self.run_control,
        )

    # --------------------------------------------------
    # Main Control Pipeline
    # --------------------------------------------------

    def run_control(self):

        # --------------------------------------------------
        # Get Latest Guidance Command
        # --------------------------------------------------

        guidance = self.subscriber_manager.get_guidance()

        if guidance is None:
            return

        vehicle_status = self.subscriber_manager.get_vehicle_status()

        if vehicle_status is None:
            return

        self.get_logger().info(
            f"[GUIDANCE] "
            f"track={guidance.track_id} | "
            f"pitch={guidance.pitch_command:.3f} | "
            f"yaw={guidance.yaw_command:.3f}"
        )

        # --------------------------------------------------
        # Benchmark Start
        # --------------------------------------------------

        self.benchmark.start_frame()

        # --------------------------------------------------
        # Flight Controller
        # --------------------------------------------------

        control_command = self.controller.compute_control_command(guidance)

        self.get_logger().info(
            f"[CONTROL] "
            f"pitch={control_command.pitch_setpoint:.3f} | "
            f"yaw={control_command.yaw_setpoint:.3f}"
        )
        # --------------------------------------------------
        # Convert to PX4 Messages
        # --------------------------------------------------

        (
            offboard_mode,
            attitude_setpoint,
            offboard_command,
            arm_command,
        ) = self.px4_adapter.convert_to_px4(control_command)

        self.get_logger().info(
            f"[PX4] "
            f"q={attitude_setpoint.q_d} | "
            f"thrust={attitude_setpoint.thrust_body}"
        )

        # --------------------------------------------------
        # Generate Timestamp
        # --------------------------------------------------

        timestamp = int(self.get_clock().now().nanoseconds / 1000)

        offboard_mode.timestamp = timestamp

        attitude_setpoint.timestamp = timestamp

        offboard_command.timestamp = timestamp

        arm_command.timestamp = timestamp

        # --------------------------------------------------
        # Publish Continuous PX4 Messages
        # --------------------------------------------------

        self.publisher_manager.publish_offboard_mode(
            offboard_mode
        )

        self.publisher_manager.publish_attitude_setpoint(
            attitude_setpoint
        )

        # --------------------------------------------------
        # Update State Machine
        # --------------------------------------------------

        self.state_machine.update(vehicle_status)

        state = self.state_machine.get_state()

        self.get_logger().info(f"[STATE] {state.name}")

        # --------------------------------------------------
        # State Actions
        # --------------------------------------------------

        if state == OffboardState.WAIT_OFFBOARD:

            self.state_machine.increment_heartbeat()

        # Send OFFBOARD command only once
        if self.state_machine.should_send_offboard():

            self.get_logger().info("Publishing OFFBOARD command")

            self.publisher_manager.publish_vehicle_command(
                offboard_command
            )

            self.state_machine.mark_offboard_sent()

        # Send ARM command only once
        if self.state_machine.should_send_arm():

            self.get_logger().info("Publishing ARM command")

            self.publisher_manager.publish_vehicle_command(
                arm_command
            )

            self.state_machine.mark_arm_sent()

        # --------------------------------------------------
        # Benchmark End
        # --------------------------------------------------

        self.benchmark.end_frame()

        # --------------------------------------------------
        # Benchmark Statistics
        # --------------------------------------------------

        if self.benchmark.frame_count % 30 == 0:

            stats = self.benchmark.get_statistics()

            self.get_logger().info(
                f"[CONTROL] "
                f"FPS={stats['fps']:.2f} | "
                f"AVG={stats['avg_ms']:.2f} ms | "
                f"MIN={stats['min_ms']:.2f} ms | "
                f"MAX={stats['max_ms']:.2f} ms"
            )


# --------------------------------------------------
# Main
# --------------------------------------------------

def main():

    rclpy.init()

    node = ControlPipeline()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":

    main()
