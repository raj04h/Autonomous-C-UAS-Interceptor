# ==========================================
# YOLO Detector
#
# Responsibility:
#   1. Load YOLO Model
#   2. Run Inference
#   3. Convert YOLO Results
#   4. Return Standard Detection Format
#
# Output Format:
#
# [
#     {
#         "class_name": "drone",
#         "confidence": 0.91,
#         "bbox": [x1, y1, x2, y2]
#     }
# ]
# ==========================================

# ==========================================
# Imports
# ==========================================

from ultralytics import YOLO

from perception_node.config_loader import (
    PROJECT_ROOT,
    load_config
)


# ==========================================
# Load Configuration
# ==========================================

CONFIG = load_config()


class Configuration:

    MODEL_PATH = (
        PROJECT_ROOT
        / CONFIG["models"]["yolo_model_path"]
    )

    CONFIDENCE_THRESHOLD = 0.20

# ==========================================
# YOLO Detector
# ==========================================

class YOLODetector:

    def __init__(self, config):

        self.config = config

        # Verify model exists

        if not self.config.MODEL_PATH.exists():

            raise FileNotFoundError(
                f"Model not found: "
                f"{self.config.MODEL_PATH}"
            )

        # Load YOLO model

        self.model = YOLO(
            str(self.config.MODEL_PATH)
        )

        print(
            f"Model Loaded: "
            f"{self.config.MODEL_PATH}"
        )

    # ======================================
    # Run Inference
    # ======================================

    def detect(self, frame):

        results = self.model(
            frame,
            conf=self.config.CONFIDENCE_THRESHOLD,
            verbose=False
        )

        return results[0]

    # ======================================
    # Convert Results
    # ======================================

    def get_detections(self, results):

        detections = []

        for box in results.boxes:

            x1, y1, x2, y2 = map(
                int,
                box.xyxy[0]
            )

            confidence = float(
                box.conf[0]
            )

            if (
                confidence
                < self.config.CONFIDENCE_THRESHOLD
            ):
                continue

            class_id = int(
                box.cls[0]
            )

            class_name = (
                results.names[class_id]
            )

            center_x = int(
                (x1 + x2) / 2
            )

            center_y = int(
                (y1 + y2) / 2
            )

            detections.append(
                {
                    "class_name": class_name,

                    "confidence": confidence,

                    "x1": x1,
                    "y1": y1,

                    "x2": x2,
                    "y2": y2,

                    "center_x": center_x,
                    "center_y": center_y
                }
            )

        return detections
