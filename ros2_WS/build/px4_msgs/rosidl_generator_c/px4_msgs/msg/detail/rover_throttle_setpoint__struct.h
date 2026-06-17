// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RoverThrottleSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_THROTTLE_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ROVER_THROTTLE_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RoverThrottleSetpoint in the package px4_msgs.
/**
  * Rover Throttle setpoint
 */
typedef struct px4_msgs__msg__RoverThrottleSetpoint
{
  /// Time since system start
  uint64_t timestamp;
  /// [-] [@range -1 (Backwards), 1 (Forwards)] [@frame Body] Throttle setpoint along body X axis
  float throttle_body_x;
  /// [-] [@range -1 (Left), 1 (Right)] [@frame Body] [@invalid NaN If not mecanum] Mecanum only: Throttle setpoint along body Y axis
  float throttle_body_y;
} px4_msgs__msg__RoverThrottleSetpoint;

// Struct for a sequence of px4_msgs__msg__RoverThrottleSetpoint.
typedef struct px4_msgs__msg__RoverThrottleSetpoint__Sequence
{
  px4_msgs__msg__RoverThrottleSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RoverThrottleSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_THROTTLE_SETPOINT__STRUCT_H_
