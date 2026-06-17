// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RoverRateSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_RATE_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ROVER_RATE_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RoverRateSetpoint in the package px4_msgs.
/**
  * Rover Rate setpoint
 */
typedef struct px4_msgs__msg__RoverRateSetpoint
{
  /// Time since system start
  uint64_t timestamp;
  /// [rad/s] [@range -inf, inf] [@frame NED] Yaw rate setpoint
  float yaw_rate_setpoint;
} px4_msgs__msg__RoverRateSetpoint;

// Struct for a sequence of px4_msgs__msg__RoverRateSetpoint.
typedef struct px4_msgs__msg__RoverRateSetpoint__Sequence
{
  px4_msgs__msg__RoverRateSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RoverRateSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_RATE_SETPOINT__STRUCT_H_
