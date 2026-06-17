// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FixedWingLongitudinalSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIXED_WING_LONGITUDINAL_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FIXED_WING_LONGITUDINAL_SETPOINT__STRUCT_H_

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
  px4_msgs__msg__FixedWingLongitudinalSetpoint__MESSAGE_VERSION = 0ul
};

/// Struct defined in msg/FixedWingLongitudinalSetpoint in the package px4_msgs.
/**
  * Fixed Wing Longitudinal Setpoint message
  *
  * Used by the fw_lateral_longitudinal_control module
  * If pitch_direct and throttle_direct are not both finite, then the controller relies on altitude/height_rate and equivalent_airspeed to control vertical motion.
  * If both altitude and height_rate are NAN, the controller maintains the current altitude.
 */
typedef struct px4_msgs__msg__FixedWingLongitudinalSetpoint
{
  /// Time since system start
  uint64_t timestamp;
  /// Altitude setpoint AMSL, not controlled directly if NAN or if height_rate is finite
  float altitude;
  /// [m/s] [@frame ENU] Scalar height rate setpoint. NAN if not controlled directly
  float height_rate;
  /// [@range 0, inf] Scalar equivalent airspeed setpoint. NAN if system default should be used
  float equivalent_airspeed;
  /// [rad] [@range -pi, pi] [@frame FRD] NAN if not controlled, overrides total energy controller
  float pitch_direct;
  /// [@range 0,1] NAN if not controlled, overrides total energy controller
  float throttle_direct;
} px4_msgs__msg__FixedWingLongitudinalSetpoint;

// Struct for a sequence of px4_msgs__msg__FixedWingLongitudinalSetpoint.
typedef struct px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence
{
  px4_msgs__msg__FixedWingLongitudinalSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FIXED_WING_LONGITUDINAL_SETPOINT__STRUCT_H_
