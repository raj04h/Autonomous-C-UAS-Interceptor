"""
Control Publisher Manager
"""

from interfaces.msg import ControlCommand


class ControlPublisherManager:

    def __init__(
        self,
        offboard_mode_pub,
        attitude_setpoint_pub,
        vehicle_command_pub,
    ):

        self.offboard_mode_pub = offboard_mode_pub
        self.attitude_setpoint_pub = attitude_setpoint_pub
        self.vehicle_command_pub = vehicle_command_pub



    def publish_offboard_mode(self, msg):
        self.offboard_mode_pub.publish(msg)


    def publish_attitude_setpoint(self, msg):
        self.attitude_setpoint_pub.publish(msg)


    def publish_vehicle_command(self, msg):
        self.vehicle_command_pub.publish(msg)