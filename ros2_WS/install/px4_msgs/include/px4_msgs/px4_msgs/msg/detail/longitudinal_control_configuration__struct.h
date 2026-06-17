// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/LongitudinalControlConfiguration.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LONGITUDINAL_CONTROL_CONFIGURATION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__LONGITUDINAL_CONTROL_CONFIGURATION__STRUCT_H_

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
  px4_msgs__msg__LongitudinalControlConfiguration__MESSAGE_VERSION = 0ul
};

/// Struct defined in msg/LongitudinalControlConfiguration in the package px4_msgs.
/**
  * Fixed Wing Longitudinal Control Configuration message
  *
  * Used by the fw_lateral_longitudinal_control module and TECS to constrain FixedWingLongitudinalSetpoint messages
  * and configure the resultant setpoints.
 */
typedef struct px4_msgs__msg__LongitudinalControlConfiguration
{
  /// Time since system start
  uint64_t timestamp;
  /// [@range -pi, pi] Defaults to FW_P_LIM_MIN if NAN.
  float pitch_min;
  /// [@range -pi, pi] Defaults to FW_P_LIM_MAX if NAN.
  float pitch_max;
  /// [@range 0,1] Defaults to FW_THR_MIN if NAN.
  float throttle_min;
  /// [@range 0,1] Defaults to FW_THR_MAX if NAN.
  float throttle_max;
  /// Target climbrate to change altitude. Defaults to FW_T_CLIMB_MAX if NAN. Not used if height_rate is directly set in FixedWingLongitudinalSetpoint.
  float climb_rate_target;
  /// Target sinkrate to change altitude. Defaults to FW_T_SINK_MAX if NAN. Not used if height_rate is directly set in FixedWingLongitudinalSetpoint.
  float sink_rate_target;
  /// [@range 0,2] 0=pitch controls altitude only, 2=pitch controls airspeed only
  float speed_weight;
  /// If true, the altitude controller is configured with an alternative timeconstant for tighter altitude tracking
  bool enforce_low_height_condition;
  /// If true, underspeed handling is disabled in the altitude controller
  bool disable_underspeed_protection;
} px4_msgs__msg__LongitudinalControlConfiguration;

// Struct for a sequence of px4_msgs__msg__LongitudinalControlConfiguration.
typedef struct px4_msgs__msg__LongitudinalControlConfiguration__Sequence
{
  px4_msgs__msg__LongitudinalControlConfiguration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__LongitudinalControlConfiguration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__LONGITUDINAL_CONTROL_CONFIGURATION__STRUCT_H_
