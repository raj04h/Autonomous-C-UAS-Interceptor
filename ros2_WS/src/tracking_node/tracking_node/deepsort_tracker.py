"""
DeepSORT Tracking Module

Input:
    YOLO Detections

Output:
    DeepSORT Tracks
"""
from deep_sort_realtime.deepsort_tracker import DeepSort
import numpy as np


# ==========================================================
# CONFIGURATION
# ==========================================================

class TrackingConfig:

    MAX_AGE = 30

    N_INIT = 3

    MAX_COSINE_DISTANCE = 0.4


# ==========================================================
# TRACKER LOGIC
# ==========================================================

class DeepSortTracker:

    def __init__(self):

        self.tracker = DeepSort(
            max_age=TrackingConfig.MAX_AGE,
            n_init=TrackingConfig.N_INIT,
            max_cosine_distance=TrackingConfig.MAX_COSINE_DISTANCE
        )




    def update(self, detections):

        dummy_frame = np.zeros(
            (720, 1280, 3),
            dtype=np.uint8
        )

        tracks = self.tracker.update_tracks(
            detections,
            frame=dummy_frame
        )

        return tracks


# ==========================================================
# EXECUTION
# ==========================================================

def main():

    detections = [
        (
            [100, 100, 50, 50],
            0.95,
            "drone"
        )
    ]

    tracker = DeepSortTracker()

    tracks = tracker.update(detections)

    print(tracks)


if __name__ == "__main__":
    main()