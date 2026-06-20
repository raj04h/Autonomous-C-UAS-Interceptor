
# ==========================================
# Camera Viewer
#
# Responsibility:
#   1. Read Video Frames
#   2. Run YOLO Detection
#   3. Publish Detections
#   4. Draw Bounding Boxes
#   5. Display FPS
#   6. Display Inference Time
# ==========================================

# ==========================================
# Imports
# ==========================================

import cv2
import time

from pathlib import Path

import rclpy

from perception_node.detection_publisher import (
    DetectionPublisher
)

from perception_node.yolo_detector import (
    Configuration as YOLOConfig,
    YOLODetector
)


# ==========================================
# Configuration
# ==========================================

def get_project_root():

    current_path = Path(__file__).resolve()

    while current_path.name != "Counter_UAS":

        if current_path.parent == current_path:

            raise RuntimeError(
                "Counter_UAS project root not found."
            )

        current_path = current_path.parent

    return current_path


PROJECT_ROOT = get_project_root()


# ==========================================
# Configuration
# ==========================================

class Configuration:

    VIDEO_PATH = (
        PROJECT_ROOT
        / "assets"
        / "drone_video.mp4"
    )

    WINDOW_NAME = (
        "Counter-UAS Vision"
    )


# ==========================================
# Camera Viewer
# ==========================================

class CameraViewer:

    def __init__(self, config):

        self.config = config

        # ------------------
        # Verify Video
        # ------------------

        if not self.config.VIDEO_PATH.exists():

            raise FileNotFoundError(
                f"Video not found: "
                f"{self.config.VIDEO_PATH}"
            )

        # ------------------
        # Open Video
        # ------------------

        self.cap = cv2.VideoCapture(
            str(self.config.VIDEO_PATH)
        )

        if not self.cap.isOpened():

            raise RuntimeError(
                f"Failed to open video: "
                f"{self.config.VIDEO_PATH}"
            )

        # ------------------
        # YOLO Detector
        # ------------------

        self.detector = YOLODetector(
            YOLOConfig()
        )

        # ------------------
        # ROS
        # ------------------

        rclpy.init()

        self.publisher_node = (
            DetectionPublisher()
        )

        # ------------------
        # Performance
        # ------------------

        self.previous_time = (
            time.time()
        )

    # ======================================
    # FPS Calculation
    # ======================================

    def calculate_fps(self):

        current_time = time.time()

        fps = 1.0 / max(
            current_time - self.previous_time,
            1e-6
        )

        self.previous_time = current_time

        return fps

    # ======================================
    # Draw Detections
    # ======================================

    def draw_detections(
        self,
        frame,
        detections
    ):

        for detection in detections:

            x1, y1, x2, y2 = (
                detection["bbox"]
            )

            class_name = (
                detection["class_name"]
            )

            confidence = (
                detection["confidence"]
            )

            cv2.rectangle(
                frame,
                (x1, y1),
                (x2, y2),
                (0, 255, 0),
                2
            )

            cv2.putText(
                frame,
                f"{class_name} "
                f"{confidence:.2f}",
                (x1, y1 - 10),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.6,
                (0, 255, 0),
                2
            )

        return frame

    # ======================================
    # Overlay
    # ======================================

    def draw_overlay(
        self,
        frame,
        fps,
        inference_time,
        detection_count
    ):

        height, width = (
            frame.shape[:2]
        )

        cv2.putText(
            frame,
            f"FPS: {fps:.2f}",
            (20, 40),
            cv2.FONT_HERSHEY_SIMPLEX,
            1,
            (0, 255, 0),
            2
        )

        cv2.putText(
            frame,
            f"Inference: "
            f"{inference_time:.2f} ms",
            (20, 80),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.8,
            (0, 255, 0),
            2
        )

        cv2.putText(
            frame,
            f"Objects: "
            f"{detection_count}",
            (20, 120),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.8,
            (0, 255, 0),
            2
        )

        cv2.putText(
            frame,
            f"Resolution: "
            f"{width}x{height}",
            (20, 160),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.8,
            (0, 255, 0),
            2
        )

        return frame

    # ======================================
    # Main Processing Loop
    # ======================================

    def process(self):

        while True:

            ret, frame = (
                self.cap.read()
            )

            if not ret:

                print(
                    "End of Video"
                )

                break

            # ------------------
            # YOLO Inference
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
            # Publish Detections
            # ------------------

            for detection in detections:

                self.publisher_node.publish_detection(
                    detection
                )

            # ------------------
            # Draw Results
            # ------------------

            frame = (
                self.draw_detections(
                    frame,
                    detections
                )
            )

            fps = (
                self.calculate_fps()
            )

            frame = (
                self.draw_overlay(
                    frame,
                    fps,
                    inference_time,
                    len(detections)
                )
            )

            # ------------------
            # Display
            # ------------------

            cv2.imshow(
                self.config.WINDOW_NAME,
                frame
            )

            key = cv2.waitKey(1)

            if key == 27:

                break

    # ======================================
    # Cleanup
    # ======================================

    def cleanup(self):

        self.cap.release()

        self.publisher_node.destroy_node()

        if rclpy.ok():

            rclpy.shutdown()

        cv2.destroyAllWindows()


# ==========================================
# Main
# ==========================================

def main():

    viewer = None

    try:

        config = Configuration()

        viewer = CameraViewer(
            config
        )

        viewer.process()

    except Exception as e:

        print(
            f"Error: {e}"
        )

    finally:

        if viewer is not None:

            viewer.cleanup()


if __name__ == "__main__":

    main()