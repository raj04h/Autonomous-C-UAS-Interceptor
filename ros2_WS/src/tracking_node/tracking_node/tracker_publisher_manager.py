"""
Publisher Manager

Responsibilities:
- Publish ROS topics
- Convert Track Data -> Track.msg

"""

from interfaces.msg import Track


class TrackerPublisherManager:

    def __init__(
        self,
        track_publisher
    ):

        self.track_publisher = (
            track_publisher
        )

    def publish_track(
        self,
        track_data
    ):

        msg = Track()

        msg.track_id = int(
            track_data["track_id"]
        )

        msg.class_name = (
            track_data["class_name"]
        )

        msg.confidence = float(
            track_data["confidence"]
        )

        msg.x1 = int(
            track_data["x1"]
        )

        msg.y1 = int(
            track_data["y1"]
        )

        msg.x2 = int(
            track_data["x2"]
        )

        msg.y2 = int(
            track_data["y2"]
        )

        msg.center_x = int(
            track_data["center_x"]
        )

        msg.center_y = int(
            track_data["center_y"]
        )

        msg.confirmed = bool(
            track_data["confirmed"]
        )

        self.track_publisher.publish(
            msg
        )