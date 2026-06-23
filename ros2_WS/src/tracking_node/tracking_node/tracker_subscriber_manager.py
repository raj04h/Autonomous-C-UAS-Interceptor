"""
Subscriber Manager

Responsibilities:
- Receive ROS messages
- Store latest data
- Provide getters

"""

from cv_bridge import CvBridge


class TrackerSubscriberManager:

    def __init__(self):

        self.bridge = CvBridge()

        self.latest_frame = None

        self.latest_detection = None

 

    def frame_callback(
        self,
        msg
    ):

        self.latest_frame = (
            self.bridge.imgmsg_to_cv2(
                msg,
                desired_encoding="bgr8"
            )
        )


    def detection_callback(
        self,
        msg
    ):

        self.latest_detection = msg


    def get_frame(self):

        return self.latest_frame


    def get_detection(self):

        return self.latest_detection


    def clear_detection(self):

        self.latest_detection = None