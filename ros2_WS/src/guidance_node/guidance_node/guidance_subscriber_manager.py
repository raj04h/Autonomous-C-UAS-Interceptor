"""
subscribe targetstate.msg
"""

from interfaces.msg import TargetState


class GuidanceSubscriberManager:

    def __init__(self):
        self.target_state = None

    def target_state_callback(self, target_state: TargetState):
        self.target_state = target_state

    def get_target_state(self):
        return self.target_state
