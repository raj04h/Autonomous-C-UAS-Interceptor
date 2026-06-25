"""
ROS2 Tracking Node

Responsibilities:
- Initialize ROS Interfaces
- Manage Subscribers
- Manage Publishers
- Run Tracking Pipeline
"""

import rclpy

from rclpy.node import Node

from sensor_msgs.msg import Image

from interfaces.msg import Detection
from interfaces.msg import Track

from rclpy.qos import (
    QoSProfile,
    ReliabilityPolicy,
    HistoryPolicy
)

from tracking_node.tracker_subscriber_manager import (
    TrackerSubscriberManager
)

from tracking_node.tracker_publisher_manager import (
    TrackerPublisherManager
)

from tracking_node.detection_converter import (
    DetectionConverter
)

from tracking_node.deepsort_tracker import (
    DeepsortTracker
)

import time

from tracking_node.tracking_benchmark import (
    TrackingBenchmark
)


class TrackerNode(Node):

    def __init__(self):

        super().__init__(
            "tracking_pipeline" 
        )

        # QoS Configuration

        qos = QoSProfile(

            reliability=
            ReliabilityPolicy.RELIABLE,

            history=
            HistoryPolicy.KEEP_LAST,

            depth=10 
        )

        # Managers

        self.subscriber_manager = (
            TrackerSubscriberManager()
        )

        self.publisher_manager = (
            TrackerPublisherManager(
                self.create_publisher(
                    Track,
                    "/tracks",
                    qos
                )
            )
        )

        # Tracking Engine

        self.tracker = (
            DeepsortTracker()
        )

        self.benchmark = (
            TrackingBenchmark()
        )
        self.last_benchmark_print = 0


        # Subscribers

        self.frame_subscription = (
            self.create_subscription(

                Image,

                "/camera/frame",

                self.subscriber_manager.frame_callback,

                qos
            )
        )

        self.detection_subscription = (
            self.create_subscription(

                Detection,

                "/detections",

                self.subscriber_manager.detection_callback,

                qos
            )
        )


        # Main Tracking Loop

        self.timer = self.create_timer(
            0.01,
            self.process_tracking
        )

        self.get_logger().info(
            "Tracker Node Started"
        )

    # Tracking Pipeline
    def process_tracking(self):

        detection_msg = (
            self.subscriber_manager.get_detection()
        )

        if detection_msg is None:
            return

        frame = (
            self.subscriber_manager.get_frame()
        )

        if frame is None:
            return

        detections = (
            DetectionConverter.convert(
                detection_msg
            )
        )

        if not detections:

            self.subscriber_manager.clear_detection()

            return

        tracking_start = time.time()

        tracks = self.tracker.update(
            detections,
            frame
        )

        tracking_time = (
            time.time()
            - tracking_start
        )

        self.benchmark.update(
            len(detections),
            tracks,
            tracking_time
        )

        for track in tracks:

            if not track.is_confirmed():
                continue

            x1, y1, x2, y2 = (
                track.to_ltrb()
            )

            center_x = int(
                (x1 + x2) / 2
            )

            center_y = int(
                (y1 + y2) / 2
            )

            track_data = {

                "track_id":
                    int(track.track_id),

                "class_name":
                    detections[0]["class_name"],

                "confidence":
                    detections[0]["confidence"],

                "x1":
                    int(x1),

                "y1":
                    int(y1),

                "x2":
                    int(x2),

                "y2":
                    int(y2),

                "center_x":
                    center_x,

                "center_y":
                    center_y,

                "confirmed":
                    True
            }

            self.publisher_manager.publish_track(
                track_data
            )

            self.get_logger().info(
                f"Track ID: "
                f"{track.track_id}"
            )

        stats = (
            self.benchmark.get_statistics()
        )

        current_runtime = int(
            stats["runtime_sec"]
        )

        if (
            current_runtime > 0
            and
            current_runtime % 5 == 0
            and
            current_runtime != self.last_benchmark_print
        ):

            self.last_benchmark_print = (
                current_runtime
            )

            self.get_logger().info(

                f"[BENCHMARK] "

                f"FPS={stats['tracking_fps']} | "

                f"AVG={stats['avg_tracking_ms']}ms | "

                f"DET={stats['detections']} | "

                f"TRACKS={stats['tracks']} | "

                f"CONF={stats['confirmed_tracks']} | "

                f"IDS={stats['unique_track_ids']} | "

                f"LOSS={stats['track_losses']} | "

                f"SUCCESS={stats['tracking_success_rate']}%"
            )

        self.subscriber_manager.clear_detection()


# ==========================================
# Main
# ==========================================

def main(args=None):

    rclpy.init(args=args)

    tracker_node = TrackerNode()

    try:

        rclpy.spin(
            tracker_node
        )

    finally:

        tracker_node.destroy_node()

        rclpy.shutdown()


if __name__ == "__main__":

    main()