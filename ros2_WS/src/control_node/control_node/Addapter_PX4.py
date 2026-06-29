"""
PX4 Flight Controller Adapter

Converts generic ControlCommand messages into PX4-specific messages.

ControlCommand
        │
        ▼
PX4 Adapter
        │
        ├── OffboardControlMode
        ├── VehicleAttitudeSetpoint
        ├── VehicleCommand (Offboard)
        └── VehicleCommand (Arm)
"""

# Imports
import math

from px4_msgs.msg import (
    VehicleAttitudeSetpoint,
    OffboardControlMode,
    VehicleCommand,
)

from interfaces.msg import ControlCommand

from control_node.config_control import ControlConfig


class PX4Adapter:

    def __init__(self):
        pass

    # Public API

    def convert_to_px4(
        self,
        control_cmd: ControlCommand,
    ):

        offboard_mode = self._create_offboard_mode(control_cmd)

        attitude_setpoint = self._create_attitude_setpoint(control_cmd)

        offboard_command = self._create_offboard_command()

        arm_command = self._create_arm_command()

        return (
            offboard_mode,
            attitude_setpoint,
            offboard_command,
            arm_command,
        )

    # Offboard Control Mode

    def _create_offboard_mode(
        self,
        control_cmd: ControlCommand,
    ) -> OffboardControlMode:

        msg = OffboardControlMode()

        # Timestamp will be assigned in control_pipeline.py
        # msg.timestamp = ...

        if control_cmd.offboard_enabled:

            msg.position = False
            msg.velocity = False
            msg.acceleration = False

            # We are sending attitude setpoints
            msg.attitude = True

            msg.body_rate = False
            msg.thrust_and_torque = False
            msg.direct_actuator = False

        else:

            msg.position = False
            msg.velocity = False
            msg.acceleration = False

            msg.attitude = False

            msg.body_rate = False
            msg.thrust_and_torque = False
            msg.direct_actuator = False

        return msg

    # Vehicle Attitude Setpoint

    def _create_attitude_setpoint(
        self,
        control_cmd: ControlCommand,
    ) -> VehicleAttitudeSetpoint:

        msg = VehicleAttitudeSetpoint()

        # Timestamp will be assigned in control_pipeline.py
        # msg.timestamp = ...

        # PX4 expects quaternion order:
        # [w, x, y, z]
        msg.q_d = self._euler_to_quaternion(
            control_cmd.roll_setpoint,
            control_cmd.pitch_setpoint,
            control_cmd.yaw_setpoint,
        )

        # We control attitude, not yaw rate.
        msg.yaw_sp_move_rate = 0.0

        # Body thrust (FRD frame)
        # Multicopter:
        # X = 0
        # Y = 0
        # Z = Negative collective thrust
        msg.thrust_body = [
            0.0,
            0.0,
            -control_cmd.collective_thrust,
        ]

        return msg

    # Enter Offboard Mode

    def _create_offboard_command(
        self,
    ) -> VehicleCommand:

        msg = VehicleCommand()

        # Timestamp will be assigned in control_pipeline.py
        # msg.timestamp = ...

        # Switch Flight Mode
        msg.command = VehicleCommand.VEHICLE_CMD_DO_SET_MODE

        # Enable PX4 Custom Mode
        msg.param1 = 1.0

        # PX4 Offboard Mode
        msg.param2 = 6.0

        self._fill_vehicle_command_header(msg)

        return msg

    # Arm Vehicle

    def _create_arm_command(
        self,
    ) -> VehicleCommand:

        msg = VehicleCommand()

        # Timestamp will be assigned in control_pipeline.py
        # msg.timestamp = ...

        msg.command = VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM

        # Arm
        msg.param1 = float(VehicleCommand.ARMING_ACTION_ARM)

        self._fill_vehicle_command_header(msg)

        return msg

    # Common Vehicle Command Header

    def _fill_vehicle_command_header(
        self,
        msg: VehicleCommand,
    ):

        msg.target_system = ControlConfig.TARGET_SYSTEM
        msg.target_component = ControlConfig.TARGET_COMPONENT

        msg.source_system = ControlConfig.SOURCE_SYSTEM
        msg.source_component = ControlConfig.SOURCE_COMPONENT

        msg.confirmation = 0

        msg.from_external = True

    # Euler -> Quaternion

    def _euler_to_quaternion(
        self,
        roll: float,
        pitch: float,
        yaw: float,
    ):

        # Half Angles
        roll_half = roll * 0.5
        pitch_half = pitch * 0.5
        yaw_half = yaw * 0.5

        # Trigonometric Values
        cos_roll = math.cos(roll_half)
        sin_roll = math.sin(roll_half)

        cos_pitch = math.cos(pitch_half)
        sin_pitch = math.sin(pitch_half)

        cos_yaw = math.cos(yaw_half)
        sin_yaw = math.sin(yaw_half)

        # Quaternion equations
        w = cos_roll * cos_pitch * cos_yaw + sin_roll * sin_pitch * sin_yaw
        x = sin_roll * cos_pitch * cos_yaw - cos_roll * sin_pitch * sin_yaw
        y = cos_roll * sin_pitch * cos_yaw + sin_roll * cos_pitch * sin_yaw
        z = cos_roll * cos_pitch * sin_yaw - sin_roll * sin_pitch * cos_yaw

        # PX4 Quaternion Order
        return [w, x, y, z]
