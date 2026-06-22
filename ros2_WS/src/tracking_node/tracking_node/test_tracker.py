"""
DeepSORT Tracking Test
"""
from deepsort_tracker import DeepSortTracker


# ==========================================================
# CONFIGURATION
# ==========================================================

class TestConfig:

    TOTAL_FRAMES = 10

    START_X = 100

    START_Y = 100

    WIDTH = 50

    HEIGHT = 50

    STEP_SIZE = 5


# ==========================================================
# TEST LOGIC
# ==========================================================

class TrackerTester:

    def __init__(self):

        self.tracker = DeepSortTracker()

    def run(self):

        for frame_id in range(TestConfig.TOTAL_FRAMES):

            detections = [
                (
                    [
                        TestConfig.START_X +
                        frame_id * TestConfig.STEP_SIZE,

                        TestConfig.START_Y,

                        TestConfig.WIDTH,

                        TestConfig.HEIGHT
                    ],
                    0.95,
                    "drone"
                )
            ]

            tracks = self.tracker.update(detections)

            print(f"\nFrame: {frame_id}")

            for track in tracks:

                if not track.is_confirmed():
                    continue

                print(
                    f"Track ID: {track.track_id}"
                )


# ==========================================================
# EXECUTION
# ==========================================================

def main():

    tester = TrackerTester()

    tester.run()


if __name__ == "__main__":
    main()