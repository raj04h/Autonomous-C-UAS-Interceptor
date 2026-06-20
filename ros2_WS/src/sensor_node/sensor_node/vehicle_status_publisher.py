# Data Needed: Vehicle Status

# Topic: /fmu/out/vehicle_status

# Message Type: VehicleStatus

# Action logic: Print vehicle status to terminal


import rclpy
from rclpy.node import Node

from rclpy.qos import QoSProfile
from rclpy.qos import ReliabilityPolicy
from rclpy.qos import HistoryPolicy

from px4_msgs.msg import VehicleStatus


class VehicleStatusListenerNode(Node):

    def __init__(self):

        # Initialize ROS2 Node
        super().__init__("vehicle_status_listener")

        # QoS Configuration
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )

        # Subscribe to Vehicle Status Topic
        self.subscription = self.create_subscription(
            VehicleStatus,                 # Message Type
            "/fmu/out/vehicle_status",     # Topic
            self.status_callback,          # action logic
            qos_profile                    # QoS Profile
        )

    # action Logic
    def status_callback(self, msg):

        print(
            f"ARMING:{msg.arming_state} "
            f"NAV:{msg.nav_state} "
            f"FAILSAFE:{msg.failsafe}"
        )


def main(args=None):

    # Initialize ROS2
    rclpy.init(args=args)

    # Create Node Object
    node = VehicleStatusListenerNode()

    # Keep Node Running
    rclpy.spin(node)

    # Cleanup
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()

