"""
ROS2 Guidance Pipeline
"""


"""
ROS2 Guidance Pipeline
"""

# Imports
import rclpy

from rclpy.node import Node

from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy

from interfaces.msg import TargetState, GuidanceCommand

from guidance_node.config_guidance import GuidanceConfig

from guidance_node.cmd_guidance import GuidanceCmd

from guidance_node.guidance_subscriber_manager import GuidanceSubscriberManager

from guidance_node.guidance_publisher_manager import GuidancePublisherManager

from guidance_node.guidance_benchmark import GuidanceBenchmark

# Guidance Pipeline
class GuidancePipeline(Node):

    def __init__(self):

        super().__init__("guidance_pipeline")

        # QoS
        qos = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10,
        )

        # Managers
        self.subscriber_manager = GuidanceSubscriberManager()

        guidance_publisher = self.create_publisher(
            GuidanceCommand, "/guidance_command", qos
        )

        self.publisher_manager = GuidancePublisherManager(guidance_publisher)

        # Guidance Logic
        self.guidance_controller = GuidanceCmd()

        # Benchmark
        self.benchmark = GuidanceBenchmark()

        # Subscriber
        self.create_subscription(
            TargetState,
            "/target_state",
            self.subscriber_manager.target_state_callback,
            qos,
        )

        # Main Timer
        self.create_timer(GuidanceConfig.PIPELINE_PERIOD, self.run_guidance)

        # Main Guidance Pipeline
    def run_guidance(self):

        # Get Latest Target State
        target_state = self.subscriber_manager.get_target_state()

        if target_state is None:
            return

        # Benchmark Start
        self.benchmark.start_frame()

        # Guidance Controller
        guidance_result = self.guidance_controller.compute_guidance(target_state)

        # Publish Guidance Command
        self.publisher_manager.publish_guidance_command(guidance_result)

        # Benchmark End
        self.benchmark.end_frame()

        # Benchmark Statistics
        if self.benchmark.frame_count % 30 == 0:

            stats = self.benchmark.get_statistics()

            self.get_logger().info(
                f"[BENCHMARK] "
                f"FPS={stats['fps']:.2f} | "
                f"AVG={stats['avg_ms']:.2f} ms | "
                f"MIN={stats['min_ms']:.2f} ms | "
                f"MAX={stats['max_ms']:.2f} ms"
            )

            self.get_logger().info(
                f"Track={guidance_result['track_id']} | "
                f"Error=("
                f"{guidance_result['error_x']:.1f}, "
                f"{guidance_result['error_y']:.1f}) | "
                f"Yaw={guidance_result['yaw_command']:.2f} | "
                f"Pitch={guidance_result['pitch_command']:.2f} | "
                f"Locked={guidance_result['target_locked']}"
            )


# Main
def main():

    rclpy.init()

    node = GuidancePipeline()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":

    main()
