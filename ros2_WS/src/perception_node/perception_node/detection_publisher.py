
# Detection Node
# data- video streaming and object tracking 

# msg typ- interfaces/msg/detection

# topic- /detection

# action logic- publish

# import ros, node, msg_typ, qos

import rclpy

from rclpy.node import Node

from interfaces.msg import Detection

from rclpy.qos import QoSProfile
from rclpy.qos import ReliabilityPolicy
from rclpy.qos import HistoryPolicy

# Node class
class DetectionPublisher(Node):

    # init logic
    def __init__(self):

        # init ros node
        super().__init__(
            "detection_publisher"
        )
        
        # config qos
        qos = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )

        # publisher/suscriber- msgtyp, topic, action
        self.publisher = (
            self.create_publisher(
                Detection,
                "/detections",
                qos
            )
        )


    # action logic
    def publish_detection(
        self,
        detection
    ):

        msg = Detection()

        msg.class_name = (
            detection["class_name"]
        )

        msg.confidence = float(
            detection["confidence"]
        )

        msg.x1 = int(
            detection["bbox"][0]
        )

        msg.y1 = int(
            detection["bbox"][1]
        )

        msg.x2 = int(
            detection["bbox"][2]
        )

        msg.y2 = int(
            detection["bbox"][3]
        )

        self.publisher.publish(
            msg
        )

# execution class
def main():


    # ros2 initialize
    rclpy.init()

    # node object
    node = DetectionPublisher()

    # cleanup ros
    try:

        rclpy.spin(node)

    except KeyboardInterrupt:

        pass

    finally:

        node.destroy_node()

        rclpy.shutdown()


if __name__ == "__main__":

    main()