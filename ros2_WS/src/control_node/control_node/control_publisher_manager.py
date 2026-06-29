"""
Control Publisher Manager
"""

from interfaces.msg import ControlCommand


class ControlPublisherManager:

    def __init__(
        self,
        publisher,
    ):

        self.publisher = publisher

    def publish_control_command(
        self,
        command: ControlCommand,
    ):

        self.publisher.publish(command)
