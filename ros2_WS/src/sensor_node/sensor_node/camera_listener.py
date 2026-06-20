# what data? Image

# topic? /world/default/model/x500_0/link/base_link/sensor/front_camera/image

# msg type? sensor_msgs/msg/Image

# action logic? Print Frame Count, Width, Height, Encoding


# import ros
import rclpy

# import Node, msg typ
from rclpy.node import Node
from sensor_msgs.msg import Image

# import QoS
from rclpy.qos import QoSProfile
from rclpy.qos import ReliabilityPolicy
from rclpy.qos import HistoryPolicy


# Node Class
class CameraListener(Node):

    # Initialization Logic
    def __init__(self):

        # Initialize ROS2 Node
        super().__init__("camera_listener")

        # Frame Counter
        self.frame_count = 0

        # Configure QoS
        qos = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )

        # Subscriber
        self.subscription = self.create_subscription(
            Image,    # Message Type    
            "/world/default/model/x500_0/link/base_link/sensor/front_camera/image",  # Topic
            self.image_callback,    # Action Logic
            qos
        )

        self.get_logger().info("Camera Listener Started")

    # Action Logic
    def image_callback(self, msg):

        self.frame_count += 1

        self.get_logger().info(
            f"Frame:{self.frame_count} | "
            f"Width:{msg.width} | "
            f"Height:{msg.height} | "
            f"Encoding:{msg.encoding}"
        )


# Main Function
def main(args=None):

    # Initialize ROS2
    rclpy.init(args=args)

    # Create Node Object
    node = CameraListener()

    # Keep Node Running
    try:
        rclpy.spin(node)

    except KeyboardInterrupt:
        pass

    # Cleanup ROS2
    finally:
        node.destroy_node()
        rclpy.shutdown()


# Entry Point
if __name__ == "__main__":
    main()