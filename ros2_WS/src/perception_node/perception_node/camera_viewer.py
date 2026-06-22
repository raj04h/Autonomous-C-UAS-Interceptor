# ==========================================
# Camera Viewer
#
# Responsibility:
#   1. Read Video Frames
#   2. Draw Bounding Boxes
#   3. Draw Overlay
#   4. Display Frames
#   5. Calculate FPS
# ==========================================

# ==========================================
# Imports
# ==========================================

import cv2
import time

from perception_node.config_loader import (
    PROJECT_ROOT,
    load_config
)

# ==========================================
# Load Configuration
# ==========================================

CONFIG = load_config()

# ==========================================
# Configuration
# ==========================================

class Configuration:

    VIDEO_PATH = (
        PROJECT_ROOT
        / CONFIG["assets"]["video_path"]
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
        # Performance
        # ------------------

        self.previous_time = time.time()

        self.frame_count = 0

    # ======================================
    # Read Frame
    # ======================================

    def get_frame(self):

        ret, frame = self.cap.read()

        if not ret:

            return None

        self.frame_count += 1

        return frame

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

            x1 = detection["x1"]
            y1 = detection["y1"]

            x2 = detection["x2"]
            y2 = detection["y2"]

            center_x = detection["center_x"]
            center_y = detection["center_y"]

            class_name = detection["class_name"]

            confidence = float(
                detection["confidence"]
            )

            # ==================================
            # Corner Brackets
            # ==================================

            corner_len = 20
            thickness = 2
            color = (0, 255, 0)

            # Top Left
            cv2.line(
                frame,
                (x1, y1),
                (x1 + corner_len, y1),
                color,
                thickness
            )

            cv2.line(
                frame,
                (x1, y1),
                (x1, y1 + corner_len),
                color,
                thickness
            )

            # Top Right
            cv2.line(
                frame,
                (x2, y1),
                (x2 - corner_len, y1),
                color,
                thickness
            )

            cv2.line(
                frame,
                (x2, y1),
                (x2, y1 + corner_len),
                color,
                thickness
            )

            # Bottom Left
            cv2.line(
                frame,
                (x1, y2),
                (x1 + corner_len, y2),
                color,
                thickness
            )

            cv2.line(
                frame,
                (x1, y2),
                (x1, y2 - corner_len),
                color,
                thickness
            )

            # Bottom Right
            cv2.line(
                frame,
                (x2, y2),
                (x2 - corner_len, y2),
                color,
                thickness
            )

            cv2.line(
                frame,
                (x2, y2),
                (x2, y2 - corner_len),
                color,
                thickness
            )

            # ==================================
            # Center Crosshair
            # ==================================

            crosshair_size = 15

            cv2.line(
                frame,
                (center_x - crosshair_size, center_y),
                (center_x + crosshair_size, center_y),
                color,
                1
            )

            cv2.line(
                frame,
                (center_x, center_y - crosshair_size),
                (center_x, center_y + crosshair_size),
                color,
                1
            )

            cv2.circle(
                frame,
                (center_x, center_y),
                4,
                color,
                -1
            )

            # ==================================
            # Target Label
            # ==================================

            label = (
                f"TARGET | "
                f"{class_name.upper()} | "
                f"{confidence:.2f}"
            )

            cv2.putText(
                frame,
                label,
                (x1, y1 - 15),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.6,
                color,
                2
            )

            # ==================================
            # Tracking Status
            # ==================================

            cv2.putText(
                frame,
                "Target LOCK",
                (x1, y2 + 25),
                cv2.FONT_HERSHEY_SIMPLEX,
                0.55,
                color,
                2
            )

        return frame

    # ======================================
    # Draw Overlay
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

        cv2.putText(
            frame,
            f"Frame: "
            f"{self.frame_count}",
            (20, 200),
            cv2.FONT_HERSHEY_SIMPLEX,
            0.8,
            (0, 255, 0),
            2
        )

        return frame

    # ======================================
    # Render Frame
    # ======================================

    def render(
        self,
        frame,
        detections,
        inference_time
    ):

        frame = self.draw_detections(
            frame,
            detections
        )

        fps = self.calculate_fps()

        frame = self.draw_overlay(
            frame,
            fps,
            inference_time,
            len(detections)
        )

        cv2.imshow(
            self.config.WINDOW_NAME,
            frame
        )

        return fps

    # ======================================
    # Exit Check
    # ======================================

    def should_exit(self):

        return (
            cv2.waitKey(1) & 0xFF
        ) == 27

    # ======================================
    # Cleanup
    # ======================================

    def cleanup(self):

        self.cap.release()

        cv2.destroyAllWindows()