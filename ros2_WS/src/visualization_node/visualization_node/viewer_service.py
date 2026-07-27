
"""
Responsibilities:
    1. Create Visualization Window
    2. Display Frames
    3. Handle Window Events
    4. Cleanup Resources
"""

import cv2

from visualization_node.config_visualization import (
    VisualizationConfig,
)


class ViewerService:

    def __init__(self):

        self.window_name = VisualizationConfig.WINDOW_NAME

        self.width = VisualizationConfig.WINDOW_WIDTH

        self.height = VisualizationConfig.WINDOW_HEIGHT

        # Create Window
        cv2.namedWindow(
            self.window_name,
            cv2.WINDOW_NORMAL,
        )

        cv2.resizeWindow(
            self.window_name,
            self.width,
            self.height,
        )

    # Dispay Frame
    def render(
        self,
        frame,
    ):

        cv2.imshow(
            self.window_name,
            frame,
        )

    # Exit
    def should_exit(self):

        return (cv2.waitKey(1) & 0xFF) == 27

    # Cleaup
    def cleanup(self):

        cv2.destroyAllWindows()
