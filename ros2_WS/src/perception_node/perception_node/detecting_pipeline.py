
# Responsibilities:
#   1. Read Video Frames
#   2. Run YOLO Detection
#   3. Publish Detections
#   4. Publish Frames
#   5. Visualize Results
import time

import rclpy

from rclpy.node import Node

from sensor_msgs.msg import Image

from interfaces.msg import Detection

from rclpy.qos import (
    QoSProfile,
    ReliabilityPolicy,
    HistoryPolicy
)

from perception_node.camera_viewer import (
    CameraViewer,
    Configuration as ViewerConfig
)

from perception_node.yolo_detector import (
    YOLODetector,
    Configuration as YOLOConfig
)

from perception_node.perception_publisher_manager import (
    PerceptionPublisherManager
)


class DetectorNode(Node):

    def __init__(self):

        super().__init__(
            "perception_pipeline"
        )

        qos = QoSProfile(

            reliability=
            ReliabilityPolicy.RELIABLE,

            history=
            HistoryPolicy.KEEP_LAST,

            depth=10
        )

        detection_publisher = (
            self.create_publisher(
                Detection,
                "/detections",
                qos
            )
        )

        frame_publisher = (
            self.create_publisher(
                Image,
                "/camera/frame",
                qos
            )
        )

        self.publisher_manager = (
            PerceptionPublisherManager(
                detection_publisher,
                frame_publisher
            )
        )

        self.camera = CameraViewer(ViewerConfig())

        self.detector = YOLODetector(
            YOLOConfig()
        )

    def run(self):

        try:

            while True:

                frame = self.camera.get_frame()

                if frame is None:

                    print(
                        "End of Video"
                    )

                    break
                start_time = time.perf_counter()

                results = self.detector.detect(frame)
                detections = self.detector.get_detections(results)

                inference_time = (time.perf_counter() - start_time) * 1000

                fps = 1000.0 / inference_time if inference_time > 0.0 else 0.0

                self.publisher_manager.publish_frame(frame)

                # Publish Detection

                if detections:

                    for detection in detections:

                        self.publisher_manager.publish_detection(
                            detection,
                            fps,
                            inference_time,
                        )

                else:

                    self.publisher_manager.publish_empty_detection(
                        fps,
                        inference_time,
                    )

        finally:

            self.cleanup()

    def cleanup(self):

        self.camera.cleanup()

        self.destroy_node()


def main():

    rclpy.init()

    detector_node = DetectorNode()

    try:

        detector_node.run()

    finally:

        detector_node.cleanup()

        rclpy.shutdown()


if __name__ == "__main__":

    main()
