"""
Guidance Controller
"""

from guidance_node.config_guidance import GuidanceConfig


class GuidanceCmd:

    def __init__(self):

        # Frame Configuration
        self.frame_center_x = GuidanceConfig.FRAME_CENTER_X
        self.frame_center_y = GuidanceConfig.FRAME_CENTER_Y

        # Controller Gains
        self.kp_yaw = GuidanceConfig.KP_YAW
        self.kp_pitch = GuidanceConfig.KP_PITCH

        # Command Limits
        self.max_yaw_cmd = GuidanceConfig.MAX_YAW_CMD
        self.min_yaw_cmd = GuidanceConfig.MIN_YAW_CMD

        self.max_pitch_cmd = GuidanceConfig.MAX_PITCH_CMD
        self.min_pitch_cmd = GuidanceConfig.MIN_PITCH_CMD

        # Target Lock Threshold
        self.lock_threshold_x = GuidanceConfig.LOCK_THRESHOLD_X
        self.lock_threshold_y = GuidanceConfig.LOCK_THRESHOLD_Y

        # Default Commands
        self.default_yaw_cmd = GuidanceConfig.DEFAULT_YAW_CMD
        self.default_pitch_cmd = GuidanceConfig.DEFAULT_PITCH_CMD

    # Helper Methods
    def _validate_target(self, valid):
        return valid

    def _compute_error(self, pred_x, pred_y):

        error_x = pred_x - self.frame_center_x

        error_y = pred_y - self.frame_center_y

        return (error_x, error_y)

    def _compute_guidance_command(self, error_x, error_y):

        yaw_command = self.kp_yaw * error_x

        pitch_command = self.kp_pitch * error_y

        return (yaw_command, pitch_command)

    def _saturate_command(self, yaw_command, pitch_command):

        yaw_command = max(self.min_yaw_cmd, min(yaw_command, self.max_yaw_cmd))

        pitch_command = max(self.min_pitch_cmd, min(pitch_command, self.max_pitch_cmd))

        return (yaw_command, pitch_command)

    def _check_target_lock(self, error_x, error_y):

        return (
            abs(error_x) <= self.lock_threshold_x
            and abs(error_y) <= self.lock_threshold_y
        )

    # Main Guidance Logic
    def compute_guidance(self, target_state):

        # Validate Target
        if not self._validate_target(target_state.valid):

            return {
                "track_id": target_state.track_id,
                "error_x": 0.0,
                "error_y": 0.0,
                "yaw_command": self.default_yaw_cmd,
                "pitch_command": self.default_pitch_cmd,
                "target_locked": False,
            }

        # Compute Image Error
        error_x, error_y = self._compute_error(target_state.pred_x, target_state.pred_y)

        # Guidance Controller
        yaw_command, pitch_command = self._compute_guidance_command(error_x, error_y)

        # Saturate Commands
        yaw_command, pitch_command = self._saturate_command(yaw_command, pitch_command)

        # Target Lock
        target_locked = self._check_target_lock(error_x, error_y)

        # Return Guidance Result
        return {
            "track_id": target_state.track_id,
            "error_x": error_x,
            "error_y": error_y,
            "yaw_command": yaw_command,
            "pitch_command": pitch_command,
            "valid": target_state.valid,
            "target_locked": target_locked,
        }
