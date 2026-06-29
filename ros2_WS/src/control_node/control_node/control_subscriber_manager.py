"""
Control Subscriber Manager
"""

from interfaces.msg import GuidanceCommand


class ControlSubscriberManager:

    def __init__(self):

        self.latest_guidance = None

    def guidance_callback(
        self,
        msg: GuidanceCommand,
    ):

        self.latest_guidance = msg

    def get_guidance(self):

        return self.latest_guidance
