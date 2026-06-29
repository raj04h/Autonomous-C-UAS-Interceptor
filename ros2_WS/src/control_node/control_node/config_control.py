class ControlConfig:

    # Control Loop
    CONTROL_RATE = 30.0

    # Default Setpoints
    DEFAULT_ROLL = 0.0
    DEFAULT_PITCH = 0.0
    DEFAULT_YAW = 0.0
    DEFAULT_COLLECTIVE_THRUST = 0.60

    # Roll Limits
    MAX_ROLL = 0.30
    MIN_ROLL = -0.30

    # Pitch Limits
    MAX_PITCH = 0.30
    MIN_PITCH = -0.30

    # Yaw Limits
    MAX_YAW = 1.00
    MIN_YAW = -1.00

    # Thrust Limits
    MAX_COLLECTIVE_THRUST = 0.80
    MIN_COLLECTIVE_THRUST = 0.30

    # Safety
    OFFBOARD_ENABLED = True
    ENABLE_SATURATION = True

    # PX4 System IDs
    TARGET_SYSTEM = 1
    TARGET_COMPONENT = 1

    SOURCE_SYSTEM = 1
    SOURCE_COMPONENT = 1
