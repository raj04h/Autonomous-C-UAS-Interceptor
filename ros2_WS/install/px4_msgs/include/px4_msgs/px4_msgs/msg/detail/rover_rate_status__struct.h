// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RoverRateStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_RATE_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ROVER_RATE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RoverRateStatus in the package px4_msgs.
/**
  * Rover Rate Status
 */
typedef struct px4_msgs__msg__RoverRateStatus
{
  /// Time since system start
  uint64_t timestamp;
  /// [rad/s] [@range -inf, inf] [@frame NED] Measured yaw rate
  float measured_yaw_rate;
  /// [rad/s] [@range -inf, inf] [@frame NED] Yaw rate setpoint that is being tracked (Applied slew rates)
  float adjusted_yaw_rate_setpoint;
  /// [@range -1, 1] Integral of the PID for the closed loop yaw rate controller
  float pid_yaw_rate_integral;
} px4_msgs__msg__RoverRateStatus;

// Struct for a sequence of px4_msgs__msg__RoverRateStatus.
typedef struct px4_msgs__msg__RoverRateStatus__Sequence
{
  px4_msgs__msg__RoverRateStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RoverRateStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_RATE_STATUS__STRUCT_H_
