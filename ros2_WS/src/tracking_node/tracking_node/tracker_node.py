# ==========================================
# Imports
# ==========================================

import rclpy

from rclpy.node import Node

from interfaces.msg import (
    Detection,
    Track
)

from deepsort_tracker import (
    DeepSortTracker
)

from rclpy.qos import (
    QoSProfile,
    ReliabilityPolicy,
    HistoryPolicy
)


# ==========================================
# Configuration
# ==========================================

class Configuration:

    TOPIC_DETECTIONS = (
        "/detections"
    )

    TOPIC_TRACKS = (
        "/tracks"
    )


# ==========================================
# Tracker Node
# ==========================================

class TrackerNode(Node):

    def __init__(self):

        super().__init__(
            "tracker_node"
        )

        qos = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )

        self.tracker = (
            DeepSortTracker()
        )

        self.subscription = (
            self.create_subscription(
                Detection,
                Configuration.TOPIC_DETECTIONS,
                self.detection_callback,
                qos
            )
        )

        self.publisher = (
            self.create_publisher(
                Track,
                Configuration.TOPIC_TRACKS,
                qos
            )
        )

        self.get_logger().info(
            "Tracker Node Started"
        )

    # ======================================
    # Detection Callback
    # ======================================

    def detection_callback(
        self,
        msg
    ):

        left = msg.x1

        top = msg.y1

        width = (
            msg.x2 - msg.x1
        )

        height = (
            msg.y2 - msg.y1
        )

        detection = (
            [
                left,
                top,
                width,
                height
            ],
            msg.confidence,
            msg.class_name
        )

        tracks = (
            self.tracker.update(
                [detection]
            )
        )

        self.publish_tracks(
            tracks,
            msg
        )

    # ======================================
    # Publish Tracks
    # ======================================

    def publish_tracks(
        self,
        tracks,
        detection_msg
    ):

        for track in tracks:

            if not track.is_confirmed():

                continue

            track_msg = Track()

            track_msg.track_id = (
                int(track.track_id)
            )

            track_msg.class_name = (
                detection_msg.class_name
            )

            track_msg.confidence = (
                detection_msg.confidence
            )

            track_msg.x1 = (
                detection_msg.x1
            )

            track_msg.y1 = (
                detection_msg.y1
            )

            track_msg.x2 = (
                detection_msg.x2
            )

            track_msg.y2 = (
                detection_msg.y2
            )

            track_msg.center_x = int(
                (
                    detection_msg.x1
                    +
                    detection_msg.x2
                ) / 2
            )

            track_msg.center_y = int(
                (
                    detection_msg.y1
                    +
                    detection_msg.y2
                ) / 2
            )

            self.publisher.publish(
                track_msg
            )

            self.get_logger().info(
                f"Track ID: "
                f"{track_msg.track_id}"
            )


# ==========================================
# Main
# ==========================================

def main():

    rclpy.init()

    node = TrackerNode()

    try:

        rclpy.spin(node)

    except KeyboardInterrupt:

        pass

    finally:

        node.destroy_node()

        rclpy.shutdown()


if __name__ == "__main__":

    main()