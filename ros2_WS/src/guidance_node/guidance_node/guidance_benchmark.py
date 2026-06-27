import time


class GuidanceBenchmark:

    def __init__(self):

        self.frame_count = 0

        self.start_time = None

        self.processing_times = []

    def start_frame(self):

        self.start_time = time.perf_counter()

    def end_frame(self):

        if self.start_time is None:
            return

        elapsed_time = time.perf_counter() - self.start_time

        self.processing_times.append(elapsed_time)

        self.frame_count += 1

    def get_statistics(self):

        if not self.processing_times:

            return {"fps": 0.0, "avg_ms": 0.0, "min_ms": 0.0, "max_ms": 0.0}

        avg_time = sum(self.processing_times) / len(self.processing_times)

        return {
            "fps": (1.0 / avg_time if avg_time > 0 else 0.0),
            "avg_ms": (avg_time * 1000),
            "min_ms": (min(self.processing_times) * 1000),
            "max_ms": (max(self.processing_times) * 1000),
        }
