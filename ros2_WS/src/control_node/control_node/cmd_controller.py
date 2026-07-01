"""
Responsibilities:
- Maintain desired aircraft attitude
- Incrementally update attitude setpoints
- Apply rate limiting
- Apply saturation
- Generate safe commands
"""

import time

from interfaces.msg import GuidanceCommand, ControlCommand

from control_node.config_control import ControlConfig

from control_node.controller_graph import ControllerGraph

class FlightControllerCmd:

    def __init__(self):

        # Default Setpoints
        self.default_roll = ControlConfig.DEFAULT_ROLL
        self.default_pitch = ControlConfig.DEFAULT_PITCH
        self.default_yaw = ControlConfig.DEFAULT_YAW

        self.default_collective_thrust = ControlConfig.DEFAULT_COLLECTIVE_THRUST

        # Desired Aircraft Attitude (Persistent State)
        self.desired_roll = self.default_roll
        self.desired_pitch = self.default_pitch
        self.desired_yaw = self.default_yaw

        # Controller Timing
        self.previous_time = time.monotonic()

        # Controller Gains
        self.pitch_gain = ControlConfig.PITCH_GAIN
        self.yaw_gain = ControlConfig.YAW_GAIN

        # Attitude Limits
        self.max_roll = ControlConfig.MAX_ROLL
        self.min_roll = ControlConfig.MIN_ROLL

        self.max_pitch = ControlConfig.MAX_PITCH
        self.min_pitch = ControlConfig.MIN_PITCH

        self.max_yaw = ControlConfig.MAX_YAW
        self.min_yaw = ControlConfig.MIN_YAW

        # Rate Limits
        self.max_pitch_rate = ControlConfig.MAX_PITCH_RATE
        self.max_yaw_rate = ControlConfig.MAX_YAW_RATE

        # Thrust Limits
        self.max_collective_thrust = ControlConfig.MAX_COLLECTIVE_THRUST

        self.min_collective_thrust = ControlConfig.MIN_COLLECTIVE_THRUST

        # Safety
        self.offboard_enabled = ControlConfig.OFFBOARD_ENABLED
        self.enable_saturation = ControlConfig.ENABLE_SATURATION

        # graph logic
        self.graph = ControllerGraph()

    # Clamp Utility
    @staticmethod
    def _clamp(value, minimum, maximum):
        return max(minimum, min(value, maximum))

    # Safe Command Generation
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

    # Main Controller Function
    def compute_control_command(
        self,
        guidance: GuidanceCommand,
    ) -> ControlCommand:

        # Invalid Guidance
        if not guidance.valid:

            self.desired_roll = self.default_roll
            self.desired_pitch = self.default_pitch
            self.desired_yaw = self.default_yaw

            self.previous_time = time.monotonic()

            # Update graph with safe controller state
            self.graph.update(
                time.monotonic(),
                0.0,                        # error_x
                0.0,                        # error_y
                0.0,                        # guidance_pitch
                0.0,                        # guidance_yaw
                self.desired_pitch,
                self.desired_yaw,
                0.0,                        # delta_pitch
                0.0,                        # delta_yaw
                False,                      # target_locked
            )

            self.graph.draw()

            return self._generate_safe_command(guidance)

        # Compute dt
        now = time.monotonic()

        dt = now - self.previous_time

        self.previous_time = now

        dt = self._clamp(dt, 0.001, 0.1)

        # Compute Increment
        if guidance.target_locked:

            delta_pitch = 0.0
            delta_yaw = 0.0

        else:

            delta_pitch = guidance.pitch_command * self.pitch_gain * dt

            delta_yaw = guidance.yaw_command * self.yaw_gain * dt

        # Rate Limiting
        max_pitch_delta = self.max_pitch_rate * dt
        max_yaw_delta = self.max_yaw_rate * dt

        delta_pitch = self._clamp(
            delta_pitch,
            -max_pitch_delta,
            max_pitch_delta,
        )

        delta_yaw = self._clamp(
            delta_yaw,
            -max_yaw_delta,
            max_yaw_delta,
        )

        # Update Desired Attitude
        self.desired_pitch += delta_pitch
        self.desired_yaw += delta_yaw



        # Saturation
        if self.enable_saturation:

            self.desired_roll = self._clamp(
                self.desired_roll,
                self.min_roll,
                self.max_roll,
            )

            self.desired_pitch = self._clamp(
                self.desired_pitch,
                self.min_pitch,
                self.max_pitch,
            )

            self.desired_yaw = self._clamp(
                self.desired_yaw,
                self.min_yaw,
                self.max_yaw,
            )

        self.graph.update(
                now,
                guidance.error_x,
                guidance.error_y,
                guidance.pitch_command,
                guidance.yaw_command,
                self.desired_pitch,
                self.desired_yaw,
                delta_pitch,
                delta_yaw,
                guidance.target_locked,
            )

        self.graph.draw()

        # Create Output Command
        cmd = ControlCommand()

        cmd.track_id = guidance.track_id

        cmd.roll_setpoint = self.desired_roll
        cmd.pitch_setpoint = self.desired_pitch
        cmd.yaw_setpoint = self.desired_yaw

        cmd.collective_thrust = self._clamp(
            self.default_collective_thrust,
            self.min_collective_thrust,
            self.max_collective_thrust,
        )

        cmd.offboard_enabled = self.offboard_enabled

        return cmd
