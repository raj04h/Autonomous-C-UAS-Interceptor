// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RoverPositionSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_POSITION_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ROVER_POSITION_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RoverPositionSetpoint in the package px4_msgs.
/**
  * Rover Position Setpoint
 */
typedef struct px4_msgs__msg__RoverPositionSetpoint
{
  /// Time since system start
  uint64_t timestamp;
  /// [m] [@range -inf, inf] [@frame NED] Target position
  float position_ned[2];
  /// [m] [@range -inf, inf] [@frame NED] [@invalid NaN Defaults to vehicle position] Start position which specifies a line for the rover to track
  float start_ned[2];
  /// [m/s] [@range 0, inf] [@invalid NaN Defaults to maximum speed] Cruising speed
  float cruising_speed;
  /// [m/s] [@range 0, inf] [@invalid NaN Defaults to 0] Speed the rover should arrive at the target with
  float arrival_speed;
  /// [rad] [@range -pi,pi] [@frame NED] [@invalid NaN Defaults to vehicle yaw] Mecanum only: Specify vehicle yaw during travel
  float yaw;
} px4_msgs__msg__RoverPositionSetpoint;

// Struct for a sequence of px4_msgs__msg__RoverPositionSetpoint.
typedef struct px4_msgs__msg__RoverPositionSetpoint__Sequence
{
  px4_msgs__msg__RoverPositionSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RoverPositionSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_POSITION_SETPOINT__STRUCT_H_
