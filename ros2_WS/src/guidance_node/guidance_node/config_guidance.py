# Output = KP × Error

# Small KP → slow response
# Large KP → aggressive response
# Too large → oscillation or instability

# ==================================================
# Proportional Controller
#
# Output = KP × Error
#
# Small KP  -> Slow response
# Large KP  -> Aggressive response
# Too large -> Oscillation / Instability
# ==================================================


class GuidanceConfig:
    
    FRAME_WIDTH = 1280
    FRAME_HEIGHT = 720

    FRAME_CENTER_X = FRAME_WIDTH / 2
    FRAME_CENTER_Y = FRAME_HEIGHT / 2

    KP_YAW = 0.01
    KP_PITCH = 0.01

    MAX_YAW_CMD = 1.0
    MIN_YAW_CMD = -1.0

    MAX_PITCH_CMD = 1.0
    MIN_PITCH_CMD = -1.0

    LOCK_THRESHOLD_X = 20
    LOCK_THRESHOLD_Y = 20

    DEFAULT_YAW_CMD = 0.0
    DEFAULT_PITCH_CMD = 0.0

    PIPELINE_PERIOD = 0.03
