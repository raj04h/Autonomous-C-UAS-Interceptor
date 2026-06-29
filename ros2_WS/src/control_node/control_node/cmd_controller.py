# Flight Controller logic

# Control offboard mode


from interfaces.msg import GuidanceCommand, ControlCommand

from control_node.config_control import ControlConfig


class FlightControllerCmd:
    def  __init__(self):

        # Default val init
        self.default_roll = ControlConfig.DEFAULT_ROLL
        self.default_pitch = ControlConfig.DEFAULT_PITCH
        self.default_yaw = ControlConfig.DEFAULT_YAW

        self.default_collective_thrust = ControlConfig.DEFAULT_COLLECTIVE_THRUST

        # Attitude control
        self.max_roll=ControlConfig.MAX_ROLL
        self.min_roll=ControlConfig.MIN_ROLL

        self.max_yaw=ControlConfig.MAX_YAW
        self.min_yaw=ControlConfig.MIN_YAW

        self.max_pitch=ControlConfig.MAX_PITCH
        self.min_pitch=ControlConfig.MIN_PITCH

        # Thrust control
        self.max_collective_thrust= ControlConfig.MAX_COLLECTIVE_THRUST
        self.min_collective_thrust=ControlConfig.MIN_COLLECTIVE_THRUST

        # safety
        self.offboard_enabled=ControlConfig.OFFBOARD_ENABLED
        self.enable_saturation = ControlConfig.ENABLE_SATURATION

    # send safe mode cmd -- default val pre applied
    def _generate_safe_command(
        self,
        guidance: GuidanceCommand,
    ) -> ControlCommand:

        cmd = ControlCommand()

        cmd.track_id = guidance.track_id

        cmd.roll_setpoint = self.default_roll
        cmd.pitch_setpoint = self.default_pitch
        cmd.yaw_setpoint = self.default_yaw

        cmd.collective_thrust = self.default_collective_thrust

        cmd.offboard_enabled = False

        return cmd

    @staticmethod
    def _clamp(value, minimum, maximum):
        return max(minimum, min(value,maximum))

    # Main Control Logic
    def compute_control_command(self, guidance:GuidanceCommand)-> ControlCommand:

        if not guidance.valid:
            return self._generate_safe_command(guidance)

        cmd=ControlCommand()

        cmd.track_id = guidance.track_id

        # Convert Guidance -> Control

        # Keep roll level in V1
        cmd.roll_setpoint = self.default_roll

        # Use Guidance commands
        cmd.pitch_setpoint = guidance.pitch_command
        cmd.yaw_setpoint = guidance.yaw_command

        # Constant hover thrust
        cmd.collective_thrust = self.default_collective_thrust

        # Enable Offboard mode
        cmd.offboard_enabled = self.offboard_enabled

        
        if self.enable_saturation:

            # clamp/ saturation Roll
            cmd.roll_setpoint=self._clamp(
                cmd.roll_setpoint,
                self.min_roll,
                self.max_roll
                )

            # Clamp/Saturation Pitch
            cmd.pitch_setpoint = self._clamp(
                cmd.pitch_setpoint,
                self.min_pitch,
                self.max_pitch,
            )

            # Clamp/Saturation Yaw-- val is greater or lower than max or min  then it set that val
            cmd.yaw_setpoint = self._clamp(
                cmd.yaw_setpoint,
                self.min_yaw,
                self.max_yaw,
            )

            # Clamp Thrust
            cmd.collective_thrust = self._clamp(
                cmd.collective_thrust,
                self.min_collective_thrust,
                self.max_collective_thrust,
            )

        return cmd
