import rclpy
from rclpy.node import Node

from rclpy.qos import QoSProfile
from rclpy.qos import ReliabilityPolicy
from rclpy.qos import HistoryPolicy

from px4_msgs.msg import VehicleLocalPosition


class TelemetryListenerNode(Node):

    def __init__(self):

        # Initialize ROS2 Node
        super().__init__("telemetry_listener")
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )

        # Subscribe to PX4 position topic
        self.subscription = self.create_subscription(
            VehicleLocalPosition,
            "/fmu/out/vehicle_local_position",
            self.position_callback,
            qos_profile
        )
    # Business Logic
    def position_callback(self, msg):
        self.get_logger().info(
            f"X:{msg.x:.2f} "
            f"Y:{msg.y:.2f} "
            f"Z:{msg.z:.2f} "
            f"VX:{msg.vx:.2f} "
            f"VY:{msg.vy:.2f} "
            f"VZ:{msg.vz:.2f}"
        )

def main(args=None):

    # Initialize ROS2 Runtime
    rclpy.init(args=args)

    # Create Node Object
    node = TelemetryListenerNode()

    # Keep Node Running
    rclpy.spin(node)

    # Cleanup
    node.destroy_node()

    # Shutdown ROS2
    rclpy.shutdown()


if __name__ == "__main__":
    main()