"""
Responsibilities:
    1. Create Visualization Window
    2. Display Frames
    3. Record Displayed Frames
    4. Handle Window Events
    5. Cleanup Resources
"""

# Import

import cv2
import time
from visualization_node.config_visualization import (
    VisualizationConfig,
)


class ViewerService:

    def __init__(self):

        self.cfg = VisualizationConfig

        self.window_name = self.cfg.WINDOW_NAME

        self.width = self.cfg.WINDOW_WIDTH
        self.height = self.cfg.WINDOW_HEIGHT

        # Recording

        self.output_file = self.cfg.RECORDING_PATH

        self.recording_fps = self.cfg.RECORDING_FPS

        self.video_writer: cv2.VideoWriter | None = None

        # Visualization FPS Measurement

        self.frame_count = 0
        self.fps_start_time = time.perf_counter()
        self.render_fps = 0.0

        # Create output directory

        self.output_file.parent.mkdir(
            parents=True,
            exist_ok=True,
        )

        # Visualization Window

        cv2.namedWindow(
            self.window_name,
            cv2.WINDOW_NORMAL,
        )

        cv2.resizeWindow(
            self.window_name,
            self.width,
            self.height,
        )

    # Initialize Video Writer

    def initialize_writer(
        self,
        frame,
    ):

        frame_height, frame_width = frame.shape[:2]

        fourcc = cv2.VideoWriter.fourcc(*"mp4v")

        writer = cv2.VideoWriter(
            str(self.output_file),
            fourcc,
            self.recording_fps,
            (
                frame_width,
                frame_height,
            ),
        )

        if not writer.isOpened():

            writer.release()

            raise RuntimeError(
                "Failed to initialize video writer: " f"{self.output_file}"
            )

        # Assign only after successful initialization

        self.video_writer = writer

        print("[Visualization] Recording started")

        print(
            "[Visualization] Output:",
            self.output_file,
        )

        print("[Visualization] Resolution:" f" {frame_width}x{frame_height}")

        print("[Visualization] FPS:" f" {self.recording_fps}")

    # Display + Record Frame

    def render(
        self,
        frame,
    ):

        # Measure Actual Visualization Render FPS

        self.frame_count += 1

        current_time = time.perf_counter()

        elapsed_time = current_time - self.fps_start_time

        if elapsed_time >= 1.0:

            self.render_fps = self.frame_count / elapsed_time

            print("[Visualization] Render FPS:" f" {self.render_fps:.2f}")

            self.frame_count = 0
            self.fps_start_time = current_time

        # Initialize Video Writer

        if self.video_writer is None:

            self.initialize_writer(frame)

        # Display

        cv2.imshow(
            self.window_name,
            frame,
        )

        # Record

        if self.video_writer is not None:

            self.video_writer.write(frame)

    # Exit

    def should_exit(self):

        return (cv2.waitKey(1) & 0xFF) == 27

    # Cleanup

    def cleanup(self):

        if self.video_writer is not None:

            self.video_writer.release()

            print(
                "[Visualization] Recording saved:",
                self.output_file,
            )

            self.video_writer = None

        cv2.destroyAllWindows()
