"""
Tracking Benchmark

Responsibilities:
- Measure Tracking FPS
- Measure Tracking Latency
- Measure Track Quality
- Measure Track Stability
"""

import time


class TrackingBenchmark:

    def __init__(self):

        self.start_time = time.time()

        # Performance
        self.total_updates = 0
        self.total_tracking_time = 0.0

        # Detection Statistics
        self.total_detections = 0

        # Tracking Statistics
        self.total_tracks = 0
        self.confirmed_tracks = 0

        # Identity Statistics
        self.unique_track_ids = set()

        # Stability Metrics
        self.track_lifetime = {}
        self.track_last_seen = {}

        self.track_losses = 0

    def update(
        self,
        detection_count,
        tracks,
        tracking_time
    ):

        current_time = time.time()

        self.total_updates += 1

        self.total_detections += detection_count

        self.total_tracks += len(tracks)

        self.total_tracking_time += tracking_time

        active_track_ids = set()

        for track in tracks:

            if not track.is_confirmed():
                continue

            self.confirmed_tracks += 1

            track_id = int(track.track_id)

            active_track_ids.add(track_id)

            self.unique_track_ids.add(track_id)

            if track_id not in self.track_lifetime:

                self.track_lifetime[track_id] = 0

            self.track_lifetime[track_id] += 1

            self.track_last_seen[
                track_id
            ] = current_time

        # Track Loss Detection
        lost_ids = []

        for track_id, last_seen in (
            self.track_last_seen.items()
        ):

            if (
                current_time - last_seen
            ) > 1.0:

                lost_ids.append(track_id)

        for track_id in lost_ids:

            self.track_losses += 1

            del self.track_last_seen[
                track_id
            ]

    def get_statistics(self):

        runtime = (
            time.time()
            - self.start_time
        )

        tracking_fps = 0.0

        if runtime > 0:

            tracking_fps = (
                self.total_updates
                / runtime
            )

        avg_tracking_ms = 0.0

        if self.total_updates > 0:

            avg_tracking_ms = (

                self.total_tracking_time
                /
                self.total_updates

            ) * 1000

        avg_track_lifetime = 0.0

        if self.track_lifetime:

            avg_track_lifetime = (

                sum(
                    self.track_lifetime.values()
                )
                /
                len(
                    self.track_lifetime
                )
            )

        tracking_success_rate = 0.0

        if self.total_detections > 0:

            tracking_success_rate = (

                self.confirmed_tracks
                /
                self.total_detections

            ) * 100

        return {

            "runtime_sec":
                round(runtime, 2),

            "tracking_fps":
                round(
                    tracking_fps,
                    2
                ),

            "avg_tracking_ms":
                round(
                    avg_tracking_ms,
                    2
                ),

            "detections":
                self.total_detections,

            "tracks":
                self.total_tracks,

            "confirmed_tracks":
                self.confirmed_tracks,

            "unique_track_ids":
                len(
                    self.unique_track_ids
                ),

            "track_losses":
                self.track_losses,

            "avg_track_lifetime":
                round(
                    avg_track_lifetime,
                    2
                ),

            "tracking_success_rate":
                round(
                    tracking_success_rate,
                    2
                )
        }