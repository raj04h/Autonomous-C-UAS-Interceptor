"""
DeepSORT Tracker Wrapper

Responsibilities:
- Initialize DeepSORT
- Convert detections to DeepSORT format
- Run tracking update
- Return track objects
"""

from typing import List, Dict, Any

from deep_sort_realtime.deepsort_tracker import DeepSort

from tracking_node.tracking_config import (
    TrackingConfig
)


class DeepsortTracker:

    def __init__(self) -> None:

        self.tracker = DeepSort(

            max_age=
            TrackingConfig.MAX_AGE,

            n_init=
            TrackingConfig.N_INIT,

            max_iou_distance=
            TrackingConfig.MAX_IOU_DISTANCE,

            max_cosine_distance=
            TrackingConfig.MAX_COSINE_DISTANCE,

            embedder=
            TrackingConfig.EMBEDDER,

            half=
            TrackingConfig.HALF_PRECISION,

            bgr=
            TrackingConfig.BGR
        )

    # ======================================
    # Update Tracks
    # ======================================

    def update(
        self,
        detections: List[Dict[str, Any]],
        frame: Any
    ):

        # ------------------------------
        # Validation
        # ------------------------------

        if not detections:
            return []

        if frame is None:
            return []

        # ------------------------------
        # DeepSORT Format Conversion
        #
        # ROS:
        # x1, y1, x2, y2
        #
        # DeepSORT:
        # x, y, width, height
        # ------------------------------

        deepsort_detections = []

        for detection in detections:

            class_name = (
                detection["class_name"]
            )

            confidence = (
                detection["confidence"]
            )

            x1 = detection["x1"]
            y1 = detection["y1"]

            x2 = detection["x2"]
            y2 = detection["y2"]

            width = x2 - x1
            height = y2 - y1

            deepsort_detections.append(

                (
                    [x1, y1, width, height],
                    confidence,
                    class_name
                )
            )

        # ------------------------------
        # Tracking
        # ------------------------------

        tracks = self.tracker.update_tracks(

            deepsort_detections,

            frame=frame
        )

        return tracks