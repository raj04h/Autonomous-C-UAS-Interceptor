// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FixedWingLateralStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FixedWingLateralStatus in the package px4_msgs.
/**
  * Fixed Wing Lateral Status message
  * Published by the fw_lateral_longitudinal_control module to report the resultant lateral setpoint
 */
typedef struct px4_msgs__msg__FixedWingLateralStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// [m/s^2] [FRD] resultant lateral acceleration setpoint
  float lateral_acceleration_setpoint;
  /// [@range 0, 1] estimate of certainty of the correct functionality of the npfg roll setpoint
  float can_run_factor;
} px4_msgs__msg__FixedWingLateralStatus;

// Struct for a sequence of px4_msgs__msg__FixedWingLateralStatus.
typedef struct px4_msgs__msg__FixedWingLateralStatus__Sequence
{
  px4_msgs__msg__FixedWingLateralStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FixedWingLateralStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_STATUS__STRUCT_H_
