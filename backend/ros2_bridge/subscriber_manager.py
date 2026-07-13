from typing import Optional

from px4_msgs.msg import (
    VehicleLocalPosition,
    VehicleAttitude,
    VehicleStatus,
    BatteryStatus,
)

from interfaces.msg import (
    Detection,
    Track,
    TargetState,
    GuidanceCommand,
    ControlCommand,
)

class SubscriberManager:

    def __init__(self):
        # Cache the latest message received from each subscribed ROS2 topic.
        self._vehicle_position:Optional[VehicleLocalPosition] =None
        self._vehicle_attitude: Optional[VehicleAttitude] = None
        self._battery_status: Optional[BatteryStatus] = None
        self._vehicle_status: Optional[VehicleStatus] = None

        self._detection: Optional[Detection] = None
        self._track: Optional[Track]=None

        self._target_state: Optional[TargetState]=None

        self._guidance_cmd: Optional[GuidanceCommand]=None
        self._control_cmd: Optional[ControlCommand]= None

    # Callback functions for each subscribed topic to receive the latest message and store it in the corresponding attribute.
    def vehicle_position_callback(self,msg: VehicleLocalPosition) -> None:
        self._vehicle_position = msg

    def vehicle_attitude_callback(self, msg: VehicleAttitude) -> None:
        self._vehicle_attitude = msg

    def battery_callback(self,msg: BatteryStatus) -> None:
        self._battery_status = msg

    def vehicle_status_callback(self, msg: VehicleStatus) -> None:
        self._vehicle_status=msg
    def detection_callback(self, msg: Detection) -> None:
        self._detection = msg

    def tracking_callback(self, msg: Track) -> None:
        self._track = msg

    def target_state_callback(self, msg: TargetState) -> None:
        self._target_state = msg

    def guidance_callback(self, msg: GuidanceCommand) -> None:
        self._guidance_cmd = msg

    def control_callback(self, msg: ControlCommand) -> None:
        self._control_cmd = msg

    # Getters for only provides the latest messages and returns None if no message has been received yet.

    def get_vehicle_position(self) -> Optional[VehicleLocalPosition]:
        return self._vehicle_position

    def get_vehicle_attitude(self) -> Optional[VehicleAttitude]:
        return self._vehicle_attitude

    def get_battery_status(self) -> Optional[BatteryStatus]:
        return self._battery_status

    def get_vehicle_status(self) -> Optional[VehicleStatus]:
        return self._vehicle_status

    def get_detection(self) -> Optional[Detection]:
        return self._detection

    def get_tracking(self) -> Optional[Track]:
        return self._track

    def get_target_state(self)  -> Optional[TargetState]:
        return self._target_state

    def get_guidance(self) -> Optional[GuidanceCommand]:
        return self._guidance_cmd

    def get_control(self) -> Optional[ControlCommand]:
        return self._control_cmd
