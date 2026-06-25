import time


class EstimatingBenchmark:

    def __init__(self):

        self.frame_count = 0

        self.start_time = time.time()

        self.total_processing_time = 0.0

        self.max_processing_time = 0.0

        self.min_processing_time = float("inf")


    def start_frame(self):

        self.frame_start = time.time()


    def end_frame(self):

        processing_time = (
            time.time() - self.frame_start
        )

        self.frame_count += 1

        self.total_processing_time += processing_time

        self.max_processing_time = max(
            self.max_processing_time,
            processing_time
        )

        self.min_processing_time = min(
            self.min_processing_time,
            processing_time
        )


    def get_statistics(self):

        elapsed = (
            time.time() - self.start_time
        )

        fps = (
            self.frame_count / elapsed
            if elapsed > 0
            else 0.0
        )

        avg_time = (
            self.total_processing_time /
            self.frame_count
            if self.frame_count
            else 0.0
        )

        return {

            "fps": fps,

            "avg_ms": avg_time * 1000,

            "max_ms": self.max_processing_time * 1000,

            "min_ms": self.min_processing_time * 1000,

            "frames": self.frame_count
        }