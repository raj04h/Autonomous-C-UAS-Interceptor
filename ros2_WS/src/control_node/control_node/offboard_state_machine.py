"""
PX4 Offboard State Machine
"""

from enum import Enum


class OffboardState(Enum):

    INIT = 0

    WAIT_OFFBOARD = 1

    WAIT_ARM = 2
    WAIT_ACTIVE = 3

    ACTIVE = 4

    FAILSAFE = 5


class OffboardStateMachine:

    def __init__(self):

        self.state = OffboardState.INIT

        # Heartbeat Counter
        self.heartbeat_count = 0

        # Required heartbeats before requesting Offboard
        self.required_heartbeats = 30

        # Command Status
        self.offboard_sent = False
        self.arm_sent = False

    def get_state(self):
        return self.state

    def set_state(self, new_state: OffboardState):
        self.state = new_state
    def reset(self):
        self.state = OffboardState.INIT
        self.heartbeat_count = 0

        self.offboard_sent = False

        self.arm_sent = False

    # Heartbeat Counter

    def increment_heartbeat(self):

        self.heartbeat_count += 1

    # Ready for Offboard?

    def offboard_ready(self):
        return self.heartbeat_count >= self.required_heartbeats

    # ------------------------------
    # Offboard Command
    # ------------------------------

    def should_send_offboard(self):

        return self.state == OffboardState.WAIT_ARM and not self.offboard_sent

    def mark_offboard_sent(self):

        self.offboard_sent = True

    # ------------------------------
    # Arm Command
    # ------------------------------

    def should_send_arm(self):

        return (
            self.state == OffboardState.WAIT_ACTIVE
            and not self.arm_sent
        )

    def mark_arm_sent(self):

        self.arm_sent = True

    # ------------------------------
    # Update State Machine
    # ------------------------------

    def update(self, vehicle_status):

        # INIT -> WAIT_OFFBOARD
        if self.state == OffboardState.INIT:

            self.state = OffboardState.WAIT_OFFBOARD

        # WAIT_OFFBOARD -> WAIT_ARM
        elif self.state == OffboardState.WAIT_OFFBOARD:

            if self.offboard_ready():

                self.state = OffboardState.WAIT_ARM

        # WAIT_ARM -> WAIT_ACTIVE
        elif self.state == OffboardState.WAIT_ARM:

            if (
                vehicle_status.nav_state
                == vehicle_status.NAVIGATION_STATE_OFFBOARD
            ):

                self.state = OffboardState.WAIT_ACTIVE


        # WAIT_ACTIVE -> ACTIVE
        elif self.state == OffboardState.WAIT_ACTIVE:

            if (
                vehicle_status.arming_state
                == vehicle_status.ARMING_STATE_ARMED
            ):

                self.state = OffboardState.ACTIVE

        # FAILSAFE
        elif self.state == OffboardState.FAILSAFE:

            pass
