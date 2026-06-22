# ==========================================
# Detection Publisher
#
# Responsibility:
#   1. Convert Detection Object
#   2. Create Detection.msg
#   3. Publish /detections
# ==========================================

# ==========================================
# Imports
# ==========================================

from rclpy.node import Node

from interfaces.msg import Detection

from rclpy.qos import (
    QoSProfile,
    ReliabilityPolicy,
    HistoryPolicy
)

# ==========================================
# Configuration
# ==========================================

class Configuration:

    TOPIC_NAME = (
        "/detections"
    )

# ==========================================
# Detection Publisher
# ==========================================

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
                Configuration.TOPIC_NAME,
                qos
            )
        )

    # ======================================
    # Publish Detection
    # ======================================

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
            detection["x1"]
        )

        msg.y1 = int(
            detection["y1"]
        )

        msg.x2 = int(
            detection["x2"]
        )

        msg.y2 = int(
            detection["y2"]
        )

        self.publisher.publish(
            msg
        )