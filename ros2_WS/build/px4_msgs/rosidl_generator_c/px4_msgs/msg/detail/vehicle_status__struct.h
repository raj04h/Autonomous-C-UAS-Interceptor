// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MESSAGE_VERSION'.
enum
{
  px4_msgs__msg__VehicleStatus__MESSAGE_VERSION = 4ul
};

/// Constant 'ARMING_STATE_DISARMED'.
enum
{
  px4_msgs__msg__VehicleStatus__ARMING_STATE_DISARMED = 1
};

/// Constant 'ARMING_STATE_ARMED'.
enum
{
  px4_msgs__msg__VehicleStatus__ARMING_STATE_ARMED = 2
};

/// Constant 'ARM_DISARM_REASON_STICK_GESTURE'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_STICK_GESTURE = 1
};

/// Constant 'ARM_DISARM_REASON_RC_SWITCH'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_RC_SWITCH = 2
};

/// Constant 'ARM_DISARM_REASON_COMMAND_INTERNAL'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_COMMAND_INTERNAL = 3
};

/// Constant 'ARM_DISARM_REASON_COMMAND_EXTERNAL'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_COMMAND_EXTERNAL = 4
};

/// Constant 'ARM_DISARM_REASON_MISSION_START'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_MISSION_START = 5
};

/// Constant 'ARM_DISARM_REASON_LANDING'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_LANDING = 6
};

/// Constant 'ARM_DISARM_REASON_PREFLIGHT_INACTION'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_PREFLIGHT_INACTION = 7
};

/// Constant 'ARM_DISARM_REASON_KILL_SWITCH'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_KILL_SWITCH = 8
};

/// Constant 'ARM_DISARM_REASON_RC_BUTTON'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_RC_BUTTON = 13
};

/// Constant 'ARM_DISARM_REASON_FAILSAFE'.
enum
{
  px4_msgs__msg__VehicleStatus__ARM_DISARM_REASON_FAILSAFE = 14
};

/// Constant 'NAVIGATION_STATE_MANUAL'.
/**
  * Manual mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_MANUAL = 0
};

/// Constant 'NAVIGATION_STATE_ALTCTL'.
/**
  * Altitude control mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_ALTCTL = 1
};

/// Constant 'NAVIGATION_STATE_POSCTL'.
/**
  * Position control mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_POSCTL = 2
};

/// Constant 'NAVIGATION_STATE_AUTO_MISSION'.
/**
  * Auto mission mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_MISSION = 3
};

/// Constant 'NAVIGATION_STATE_AUTO_LOITER'.
/**
  * Auto loiter mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_LOITER = 4
};

/// Constant 'NAVIGATION_STATE_AUTO_RTL'.
/**
  * Auto return to launch mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_RTL = 5
};

/// Constant 'NAVIGATION_STATE_POSITION_SLOW'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_POSITION_SLOW = 6
};

/// Constant 'NAVIGATION_STATE_GUIDED_COURSE'.
/**
  * Guided Course mode (FW: maintain course/alt/speed)
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_GUIDED_COURSE = 7
};

/// Constant 'NAVIGATION_STATE_ALTITUDE_CRUISE'.
/**
  * Altitude with Cruise mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_ALTITUDE_CRUISE = 8
};

/// Constant 'NAVIGATION_STATE_FREE3'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_FREE3 = 9
};

/// Constant 'NAVIGATION_STATE_ACRO'.
/**
  * Acro mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_ACRO = 10
};

/// Constant 'NAVIGATION_STATE_FREE2'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_FREE2 = 11
};

/// Constant 'NAVIGATION_STATE_DESCEND'.
/**
  * Descend mode (no position control)
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_DESCEND = 12
};

/// Constant 'NAVIGATION_STATE_TERMINATION'.
/**
  * Termination mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_TERMINATION = 13
};

/// Constant 'NAVIGATION_STATE_OFFBOARD'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_OFFBOARD = 14
};

/// Constant 'NAVIGATION_STATE_STAB'.
/**
  * Stabilized mode
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_STAB = 15
};

/// Constant 'NAVIGATION_STATE_FREE1'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_FREE1 = 16
};

/// Constant 'NAVIGATION_STATE_AUTO_TAKEOFF'.
/**
  * Takeoff
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_TAKEOFF = 17
};

/// Constant 'NAVIGATION_STATE_AUTO_LAND'.
/**
  * Land
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_LAND = 18
};

/// Constant 'NAVIGATION_STATE_AUTO_FOLLOW_TARGET'.
/**
  * Auto Follow
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_FOLLOW_TARGET = 19
};

/// Constant 'NAVIGATION_STATE_AUTO_PRECLAND'.
/**
  * Precision land with landing target
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_PRECLAND = 20
};

/// Constant 'NAVIGATION_STATE_ORBIT'.
/**
  * Orbit in a circle
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_ORBIT = 21
};

/// Constant 'NAVIGATION_STATE_AUTO_VTOL_TAKEOFF'.
/**
  * Takeoff, transition, establish loiter
 */
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_AUTO_VTOL_TAKEOFF = 22
};

/// Constant 'NAVIGATION_STATE_EXTERNAL1'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_EXTERNAL1 = 23
};

/// Constant 'NAVIGATION_STATE_EXTERNAL2'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_EXTERNAL2 = 24
};

/// Constant 'NAVIGATION_STATE_EXTERNAL3'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_EXTERNAL3 = 25
};

/// Constant 'NAVIGATION_STATE_EXTERNAL4'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_EXTERNAL4 = 26
};

/// Constant 'NAVIGATION_STATE_EXTERNAL5'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_EXTERNAL5 = 27
};

/// Constant 'NAVIGATION_STATE_EXTERNAL6'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_EXTERNAL6 = 28
};

/// Constant 'NAVIGATION_STATE_EXTERNAL7'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_EXTERNAL7 = 29
};

/// Constant 'NAVIGATION_STATE_EXTERNAL8'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_EXTERNAL8 = 30
};

/// Constant 'NAVIGATION_STATE_MAX'.
enum
{
  px4_msgs__msg__VehicleStatus__NAVIGATION_STATE_MAX = 31
};

/// Constant 'HIL_STATE_OFF'.
enum
{
  px4_msgs__msg__VehicleStatus__HIL_STATE_OFF = 0
};

/// Constant 'HIL_STATE_ON'.
enum
{
  px4_msgs__msg__VehicleStatus__HIL_STATE_ON = 1
};

/// Constant 'VEHICLE_TYPE_UNSPECIFIED'.
enum
{
  px4_msgs__msg__VehicleStatus__VEHICLE_TYPE_UNSPECIFIED = 0
};

/// Constant 'VEHICLE_TYPE_ROTARY_WING'.
enum
{
  px4_msgs__msg__VehicleStatus__VEHICLE_TYPE_ROTARY_WING = 1
};

/// Constant 'VEHICLE_TYPE_FIXED_WING'.
enum
{
  px4_msgs__msg__VehicleStatus__VEHICLE_TYPE_FIXED_WING = 2
};

/// Constant 'VEHICLE_TYPE_ROVER'.
enum
{
  px4_msgs__msg__VehicleStatus__VEHICLE_TYPE_ROVER = 3
};

/// Constant 'FAILSAFE_DEFER_STATE_DISABLED'.
enum
{
  px4_msgs__msg__VehicleStatus__FAILSAFE_DEFER_STATE_DISABLED = 0
};

/// Constant 'FAILSAFE_DEFER_STATE_ENABLED'.
enum
{
  px4_msgs__msg__VehicleStatus__FAILSAFE_DEFER_STATE_ENABLED = 1
};

/// Constant 'FAILSAFE_DEFER_STATE_WOULD_FAILSAFE'.
/**
  * Failsafes deferred, but would trigger a failsafe
 */
enum
{
  px4_msgs__msg__VehicleStatus__FAILSAFE_DEFER_STATE_WOULD_FAILSAFE = 2
};

/// Struct defined in msg/VehicleStatus in the package px4_msgs.
/**
  * Encodes the system state of the vehicle published by commander
 */
typedef struct px4_msgs__msg__VehicleStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Arming timestamp (microseconds)
  uint64_t armed_time;
  /// Takeoff timestamp (microseconds)
  uint64_t takeoff_time;
  uint8_t arming_state;
  uint8_t latest_arming_reason;
  uint8_t latest_disarming_reason;
  /// time when current nav_state activated
  uint64_t nav_state_timestamp;
  /// Mode that the user selected (might be different from nav_state in a failsafe situation)
  uint8_t nav_state_user_intention;
  /// Currently active mode
  uint8_t nav_state;
  /// Current mode executor in charge (0=Autopilot)
  uint8_t executor_in_charge;
  /// User-visible nav state sent via MAVLink (executor state if active, otherwise nav_state)
  uint8_t nav_state_display;
  /// True if the current mode accepts offboard trajectory setpoints via MAVLink
  bool accepts_offboard_setpoints;
  /// Bitmask for all valid nav_state values
  uint32_t valid_nav_states_mask;
  /// Bitmask for all modes that a user can select
  uint32_t can_set_nav_states_mask;
  uint8_t hil_state;
  /// Current vehicle locomotion method. A vehicle can have different methods (e.g. VTOL transitions from RW to FW method)
  uint8_t vehicle_type;
  /// true if system is in failsafe state (e.g.:RTL, Hover, Terminate, ...)
  bool failsafe;
  /// true if system is in failsafe state but the user took over control
  bool failsafe_and_user_took_over;
  /// one of FAILSAFE_DEFER_STATE_*
  uint8_t failsafe_defer_state;
  /// Link loss
  /// datalink to GCS lost
  bool gcs_connection_lost;
  /// counts unique GCS connection lost events
  uint8_t gcs_connection_lost_counter;
  /// Set to true if the high latency data link (eg. RockBlock Iridium 9603 telemetry module) is lost
  bool high_latency_data_link_lost;
  /// VTOL flags
  /// True if the system is VTOL capable
  bool is_vtol;
  /// True if the system performs a 90° pitch down rotation during transition from MC to FW
  bool is_vtol_tailsitter;
  /// True if VTOL is doing a transition
  bool in_transition_mode;
  /// True if VTOL is doing a transition from MC to FW
  bool in_transition_to_fw;
  /// MAVLink identification
  /// system type, contains mavlink MAV_TYPE
  uint8_t system_type;
  /// system id, contains MAVLink's system ID field
  uint8_t system_id;
  /// subsystem / component id, contains MAVLink's component ID field
  uint8_t component_id;
  /// Set to true if a safety button is connected
  bool safety_button_available;
  /// Set to true if safety is off
  bool safety_off;
  /// set if input power is valid
  bool power_input_valid;
  /// set to true (never cleared) once telemetry received from usb link
  bool usb_connected;
  bool open_drone_id_system_present;
  bool open_drone_id_system_healthy;
  bool parachute_system_present;
  bool parachute_system_healthy;
  bool traffic_avoidance_system_present;
  bool rc_calibration_in_progress;
  bool calibration_enabled;
  /// true if all checks necessary to arm pass
  bool pre_flight_checks_pass;
} px4_msgs__msg__VehicleStatus;

// Struct for a sequence of px4_msgs__msg__VehicleStatus.
typedef struct px4_msgs__msg__VehicleStatus__Sequence
{
  px4_msgs__msg__VehicleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_H_
