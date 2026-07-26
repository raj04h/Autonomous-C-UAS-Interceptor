import cv2

from perception_node.config_perception import (
    PROJECT_ROOT,
    load_config,
)

CONFIG = load_config()


class Configuration:

    VIDEO_PATH = PROJECT_ROOT / CONFIG["assets"]["video_path"]


class CameraViewer:

    def __init__(self, config):

        self.config = config

        if not self.config.VIDEO_PATH.exists():

            raise FileNotFoundError(f"Video not found: {self.config.VIDEO_PATH}")

        self.cap = cv2.VideoCapture(str(self.config.VIDEO_PATH))

        if not self.cap.isOpened():

            raise RuntimeError(f"Failed to open video: {self.config.VIDEO_PATH}")

    # Read Frame
    def get_frame(self):

        success, frame = self.cap.read()

        if not success:

            return None

        return frame

    # Cleanup
    def cleanup(self):

        if self.cap.isOpened():

            self.cap.release()
