from interfaces.msg import Track


class EstimatorSubscriberManager:

    def __init__(self):

        self.latest_track = None

    def track_callback(
        self,
        msg,
    ):

        # No valid track
        if not msg.valid:

            self.latest_track = None

            return

        # Ignore tentative tracks
        if not msg.confirmed:

            return

        # Store latest confirmed track
        self.latest_track = msg

    def get_track(self):

        return self.latest_track
    
    def clear_track(self):
        self.latest_track=None