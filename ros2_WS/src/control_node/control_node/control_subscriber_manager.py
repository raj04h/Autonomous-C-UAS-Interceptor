
from interfaces.msg import GuidanceCommand


class ControlSubscriberManager:

    def __init__(self):

        self.latest_guidance = None
        self.vehicle_status = None
        
    def guidance_callback(
        self,
        msg: GuidanceCommand,
    ):

        if not msg.valid:

            self.latest_guidance = None

            return

        self.latest_guidance = msg

    def get_guidance(self):

        return self.latest_guidance
    
    def vehicle_status_callback(
        self,
        msg,
    ):

        self.vehicle_status = msg

    def get_vehicle_status(self):

        return self.vehicle_status
    
    def clear_guidance(
        self,
    ):

        self.latest_guidance = None
