# detection_publisher.py

import rclpy

from rclpy.node import Node

from interfaces.msg import Detection

from rclpy.qos import (
    QoSProfile,
    ReliabilityPolicy,
    HistoryPolicy
)


class DetectionPublisher(Node):

    def __init__(self):

        super().__init__(
            "detection_publisher"
        )

        qos = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )

        self.publisher = (
            self.create_publisher(
                Detection,
                "/detections",
                qos
            )
        )

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


def main():

    rclpy.init()

    node = DetectionPublisher()

    try:

        rclpy.spin(node)

    except KeyboardInterrupt:

        pass

    finally:

        node.destroy_node()

        rclpy.shutdown()


if __name__ == "__main__":

    main()