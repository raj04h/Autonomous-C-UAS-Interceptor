"""
Perception Publisher Manager

Responsibilities:
- Publish Detection Messages
- Publish Camera Frames
"""

from cv_bridge import CvBridge

from sensor_msgs.msg import Image

from interfaces.msg import Detection


class PerceptionPublisherManager:

    def __init__(
        self,
        detection_publisher,
        frame_publisher
    ):

        self.detection_publisher = (
            detection_publisher
        )

        self.frame_publisher = (
            frame_publisher
        )

        self.bridge = CvBridge()


    def publish_empty_detection(
        self,
        fps,
        inference_time,
    ):

        msg = Detection()

        msg.valid = False

        msg.fps = float(
            fps
        )

        msg.inference_time = float(
            inference_time
        )

        self.detection_publisher.publish(
            msg
        )
        

    def publish_detection(
        self,
        detection,
        fps,
        inference_time,
    ):

        msg = Detection()

        msg.valid = True

        msg.class_name = (
            detection["class_name"]
        )

        msg.fps = float(
            fps
        )

        msg.inference_time = float(
            inference_time
        )

        msg.confidence = float(
            detection["confidence"]
        )

        msg.x1 = int(
            detection["x1"]
        )

        msg.y1 = int(
            detection["y1"]
        )

        msg.x2 = int(
            detection["x2"]
        )

        msg.y2 = int(
            detection["y2"]
        )

        msg.center_x = int(
            detection["center_x"]
        )

        msg.center_y = int(
            detection["center_y"]
        )

        self.detection_publisher.publish(
            msg
        )

    def publish_frame(
        self,
        frame
    ):

        image_msg = (
            self.bridge.cv2_to_imgmsg(
                frame,
                encoding="bgr8"
            )
        )

        self.frame_publisher.publish(
            image_msg
        )
