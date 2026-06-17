// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RoverSpeedSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_SPEED_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ROVER_SPEED_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RoverSpeedSetpoint in the package px4_msgs.
/**
  * Rover Speed Setpoint
 */
typedef struct px4_msgs__msg__RoverSpeedSetpoint
{
  /// Time since system start
  uint64_t timestamp;
  /// [m/s] [@range -inf (Backwards), inf (Forwards)] [@frame Body] Speed setpoint in body x direction
  float speed_body_x;
  /// [m/s] [@range -inf (Left), inf (Right)] [@frame Body] [@invalid NaN If not mecanum] Mecanum only: Speed setpoint in body y direction
  float speed_body_y;
} px4_msgs__msg__RoverSpeedSetpoint;

// Struct for a sequence of px4_msgs__msg__RoverSpeedSetpoint.
typedef struct px4_msgs__msg__RoverSpeedSetpoint__Sequence
{
  px4_msgs__msg__RoverSpeedSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RoverSpeedSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_SPEED_SETPOINT__STRUCT_H_
