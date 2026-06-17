// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RoverAttitudeSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_ATTITUDE_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ROVER_ATTITUDE_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RoverAttitudeSetpoint in the package px4_msgs.
/**
  * Rover Attitude Setpoint
 */
typedef struct px4_msgs__msg__RoverAttitudeSetpoint
{
  /// Time since system start
  uint64_t timestamp;
  /// [rad] [@range -inf, inf] [@frame NED] Yaw setpoint
  float yaw_setpoint;
} px4_msgs__msg__RoverAttitudeSetpoint;

// Struct for a sequence of px4_msgs__msg__RoverAttitudeSetpoint.
typedef struct px4_msgs__msg__RoverAttitudeSetpoint__Sequence
{
  px4_msgs__msg__RoverAttitudeSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RoverAttitudeSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_ATTITUDE_SETPOINT__STRUCT_H_
