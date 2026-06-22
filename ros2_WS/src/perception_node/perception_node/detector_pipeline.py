# ==========================================
# Detector Pipeline
#
# Responsibility:
#   1. Read Video Frames
#   2. Run YOLO Detection
#   3. Publish Detections
#   4. Visualize Results
# ==========================================

# ==========================================
# Imports
# ==========================================

import time

import rclpy

from perception_node.camera_viewer import (
    CameraViewer,
    Configuration as ViewerConfig
)

from perception_node.yolo_detector import (
    YOLODetector,
    Configuration as YOLOConfig
)

from perception_node.detection_publisher import (
    DetectionPublisher
)

# ==========================================
# Detector Pipeline
# ==========================================

class DetectorPipeline:

    def __init__(self):

        # ------------------
        # ROS2
        # ------------------

        rclpy.init()

        # ------------------
        # Components
        # ------------------

        self.viewer = CameraViewer(
            ViewerConfig()
        )

        self.detector = YOLODetector(
            YOLOConfig()
        )

        self.publisher = (
            DetectionPublisher()
        )

    # ======================================
    # Run
    # ======================================

    def run(self):

        try:

            while True:

                # ------------------
                # Read Frame
                # ------------------

                frame = (
                    self.viewer.get_frame()
                )

                if frame is None:

                    print(
                        "End of Video"
                    )

                    break

                # ------------------
                # Detection
                # ------------------

                start_time = (
                    time.time()
                )

                results = (
                    self.detector.detect(
                        frame
                    )
                )

                detections = (
                    self.detector.get_detections(
                        results
                    )
                )

                inference_time = (
                    time.time()
                    - start_time
                ) * 1000

                # ------------------
                # Publish
                # ------------------

                for detection in detections:

                    self.publisher.publish_detection(
                        detection
                    )

                # ------------------
                # Process ROS Events
                # ------------------

                rclpy.spin_once(
                    self.publisher,
                    timeout_sec=0.0
                )

                # ------------------
                # Visualization
                # ------------------

                self.viewer.render(
                    frame,
                    detections,
                    inference_time
                )

                # ------------------
                # Exit
                # ------------------

                if self.viewer.should_exit():

                    break

        finally:

            self.cleanup()

    # ======================================
    # Cleanup
    # ======================================

    def cleanup(self):

        self.viewer.cleanup()

        self.publisher.destroy_node()

        if rclpy.ok():

            rclpy.shutdown()

# ==========================================
# Main
# ==========================================

def main():

    pipeline = None

    try:

        pipeline = (
            DetectorPipeline()
        )

        pipeline.run()

    except Exception as e:

        print(
            f"Error: {e}"
        )

    finally:

        if pipeline is not None:

            pipeline.cleanup()


if __name__ == "__main__":

    main()