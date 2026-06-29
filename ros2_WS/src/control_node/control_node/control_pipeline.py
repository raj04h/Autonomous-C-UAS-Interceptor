import rclpy

from rclpy.node import Node

from rclpy.qos import (
    QoSProfile,
    ReliabilityPolicy,
    HistoryPolicy,
)

from interfaces.msg import (
    GuidanceCommand,
    ControlCommand,
)

from px4_msgs.msg import (
    VehicleAttitudeSetpoint,
    OffboardControlMode,
    VehicleCommand,
)

from control_node.config_control import ControlConfig

from control_node.cmd_controller import FlightControllerCmd

from control_node.Addapter_PX4 import PX4Adapter

from control_node.control_subscriber_manager import (
    ControlSubscriberManager,
)

from control_node.control_publisher_manager import (
    ControlPublisherManager,
)

from control_node.control_benchmark import (
    ControlBenchmark,
)

class ControlPipeline(Node):

    def __init__(self):

        super().__init__("control_pipeline")

        # QoS Configuration

        qos = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10,
        )

        # --------------------------------------------------
        # Subscriber Manager
        # --------------------------------------------------

        self.subscriber_manager = ControlSubscriberManager()

        # --------------------------------------------------
        # Generic Control Publisher
        # --------------------------------------------------

        control_publisher = self.create_publisher(
            ControlCommand,
            "/control_command",
            qos,
        )

        self.publisher_manager = ControlPublisherManager(control_publisher)

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
        # PX4 State
        # --------------------------------------------------

        self.offboard_requested = False

        self.vehicle_armed = False

        # --------------------------------------------------
        # Guidance Subscriber
        # --------------------------------------------------

        self.create_subscription(
            GuidanceCommand,
            "/guidance_command",
            self.subscriber_manager.guidance_callback,
            qos,
        )

        # --------------------------------------------------
        # PX4 Publishers
        # --------------------------------------------------

        self.offboard_mode_publisher = self.create_publisher(
            OffboardControlMode,
            "/fmu/in/offboard_control_mode",
            qos,
        )

        self.attitude_setpoint_publisher = self.create_publisher(
            VehicleAttitudeSetpoint,
            "/fmu/in/vehicle_attitude_setpoint",
            qos,
        )

        self.vehicle_command_publisher = self.create_publisher(
            VehicleCommand,
            "/fmu/in/vehicle_command",
            qos,
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

        # --------------------------------------------------
        # Benchmark Start
        # --------------------------------------------------

        self.benchmark.start_frame()

        # --------------------------------------------------
        # Flight Controller
        # --------------------------------------------------

        control_command = self.controller.compute_control_command(guidance)

        # --------------------------------------------------
        # Publish Generic Control Command
        # --------------------------------------------------

        self.publisher_manager.publish_control_command(control_command)

        # --------------------------------------------------
        # Convert to PX4 Messages
        # --------------------------------------------------

        (
            offboard_mode,
            attitude_setpoint,
            offboard_command,
            arm_command,
        ) = self.px4_adapter.convert_to_px4(control_command)

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

        self.offboard_mode_publisher.publish(offboard_mode)

        self.attitude_setpoint_publisher.publish(attitude_setpoint)

        # --------------------------------------------------
        # Request Offboard Mode (Once)
        # --------------------------------------------------

        if not self.offboard_requested:

            self.vehicle_command_publisher.publish(offboard_command)

            self.offboard_requested = True

            self.get_logger().info("Offboard mode requested.")

        # --------------------------------------------------
        # Arm Vehicle (Once)
        # --------------------------------------------------

        if self.offboard_requested and not self.vehicle_armed:

            self.vehicle_command_publisher.publish(arm_command)

            self.vehicle_armed = True

            self.get_logger().info("Vehicle arm requested.")

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
