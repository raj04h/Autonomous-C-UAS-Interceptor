import math
from typing import Optional

from px4_msgs.msg import (
    VehicleLocalPosition,
    VehicleAttitude,
    VehicleStatus,
    BatteryStatus,
)

from interfaces.msg import (
    TargetState,
    Detection,
    Track,
    GuidanceCommand,
    ControlCommand,
)


from backend.orm_schemas.schema_telemetry import TelemetryCreate
from backend.orm_schemas.schema_target_state import TargetStateCreate


class MapperManager:

    # Convert PX4 quaternion to Euler angles (radians).
    @staticmethod
    def quaternion_to_euler(attitude: Optional[VehicleAttitude]) -> tuple[float, float, float]:

        if attitude is None:
            return 0.0, 0.0, 0.0

        q= attitude.q

        w=q[0]
        x=q[1]
        y=q[2]
        z=q[3]

        # Roll
        sinr_cosp=2.0*(w*x+y*z)
        cosr_cosp=1.0-2.0*(x*x+y*y)
        roll=math.atan2(sinr_cosp, cosr_cosp)

        # Pitch
        sinp = 2.0 * (w * y - z * x)
        if abs(sinp) >= 1.0:
            pitch = math.copysign(math.pi / 2.0, sinp)
        else:
            pitch = math.asin(sinp)

        # Yaw
        siny_cosp = 2.0 * (w * z + x * y)
        cosy_cosp = 1.0 - 2.0 * (y * y + z * z)
        yaw = math.atan2(siny_cosp, cosy_cosp)

        return roll, pitch, yaw

    #  Convert PX4 telemetry messages into a TelemetryCreate schema.
    @staticmethod
    def telemetry_to_schema(
        mission_id: int,
        position: Optional[VehicleLocalPosition],
        attitude: Optional[VehicleAttitude],
        status: Optional[VehicleStatus],
        battery: Optional[BatteryStatus],
    ) -> TelemetryCreate:

        roll, pitch, yaw = MapperManager.quaternion_to_euler(attitude)

        return TelemetryCreate(
            mission_id=mission_id,
            # Position
            x=position.x if position else 0.0,
            y=position.y if position else 0.0,
            z=position.z if position else 0.0,

            # Velocity
            vx=position.vx if position else 0.0,
            vy=position.vy if position else 0.0,
            vz=position.vz if position else 0.0,

            # Attitude
            roll=roll,
            pitch=pitch,
            yaw=yaw,

            # Battery
            battery=battery.remaining * 100.0 if battery else 0.0,
            # Flight Mode
            flight_mode=status.nav_state if status else 0,
        )

    # Convert TargetState ROS2 message into TargetStateCreate schema.
    @staticmethod
    def target_state_to_schema(
        mission_id: int,
        target_state: Optional[TargetState],
    ) -> TargetStateCreate:

        if target_state is None:

            track_id = -1

            x = 0.0
            y = 0.0

            vx = 0.0
            vy = 0.0

            ax = 0.0
            ay = 0.0

            pred_x = 0.0
            pred_y = 0.0

            valid = False

        else:

            track_id = target_state.track_id

            x = target_state.x
            y = target_state.y

            vx = target_state.vx
            vy = target_state.vy

            ax = target_state.ax
            ay = target_state.ay

            pred_x = target_state.pred_x
            pred_y = target_state.pred_y

            valid = target_state.valid

        return TargetStateCreate(

            mission_id=mission_id,

            track_id=track_id,

            x=x,
            y=y,

            vx=vx,
            vy=vy,

            ax=ax,
            ay=ay,

            pred_x=pred_x,
            pred_y=pred_y,

            valid=valid,
        )

    # Convert Detection ROS2 message into dictionary.
    @staticmethod
    def detection_to_dict(
        detection: Optional[Detection],
    ) -> dict:

        if detection is None:

            return {
                "valid": False,
            }

        return {

            "valid": detection.valid,

            "class_name": detection.class_name,

            "fps": detection.fps,

            "inference_time": detection.inference_time,

            "confidence": detection.confidence,

            "x1": detection.x1,
            "y1": detection.y1,

            "x2": detection.x2,
            "y2": detection.y2,

            "center_x": detection.center_x,
            "center_y": detection.center_y,
        }
    
    # Convert Track ROS2 message into dictionary.
    @staticmethod
    def track_to_dict(
        track: Optional[Track],
    ) -> dict:

        if track is None:

            return {
                "valid": False,
            }

        return {
            "valid": track.valid,
            "track_id": track.track_id,
            "class_name": track.class_name,
            "confidence": track.confidence,
            "x1": track.x1,
            "y1": track.y1,
            "x2": track.x2,
            "y2": track.y2,
            "center_x": track.center_x,
            "center_y": track.center_y,
            "confirmed": track.confirmed,
        }

    # Convert GuidanceCommand ROS2 message into dictionary.
    @staticmethod
    def guidance_to_dict(
        guidance: Optional[GuidanceCommand],
    ) -> dict:

        if guidance is None:

            return {
                "valid": False,
            }

        return {
            "track_id": guidance.track_id,
            "error_x": guidance.error_x,
            "error_y": guidance.error_y,
            "yaw_command": guidance.yaw_command,
            "pitch_command": guidance.pitch_command,
            "target_locked": guidance.target_locked,
            "valid": guidance.valid,
        }

    # Convert ControlCommand ROS2 message into dictionary.
    @staticmethod
    def control_to_dict(
        control: Optional[ControlCommand],
    ) -> dict:

        if control is None:

            return {
                "valid": False,
            }

        return {
            "track_id": control.track_id,
            "roll_setpoint": control.roll_setpoint,
            "pitch_setpoint": control.pitch_setpoint,
            "yaw_setpoint": control.yaw_setpoint,
            "collective_thrust": control.collective_thrust,
            "offboard_enabled": control.offboard_enabled,
            "valid": control.valid,
        }
