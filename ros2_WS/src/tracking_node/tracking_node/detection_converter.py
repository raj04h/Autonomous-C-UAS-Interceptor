# convert ROS Detection Message -> (bbox, class name, confidence)
 
#  DeepSORT  input format -> (x,y, height, width)
# Validate detections


from typing import List, Dict, Any

from tracking_node.tracking_config import TrackingConfig


class DetectionConverter:

    @staticmethod
    def convert(detection) -> List[Dict[str, Any]]:

        if (
            detection.confidence <
            TrackingConfig.MIN_CONFIDENCE
        ):
            return []

        if (
            TrackingConfig.TARGET_CLASSES
            and
            detection.class_name
            not in TrackingConfig.TARGET_CLASSES
        ):
            return []

        if detection.x2 <= detection.x1:
            return []

        if detection.y2 <= detection.y1:
            return []

        return [
            {
                "class_name": detection.class_name,

                "confidence": float(
                    detection.confidence
                ),

                "x1": int(detection.x1),
                "y1": int(detection.y1),

                "x2": int(detection.x2),
                "y2": int(detection.y2),

                "center_x": int(
                    detection.center_x
                ),

                "center_y": int(
                    detection.center_y
                )
            }
        ]