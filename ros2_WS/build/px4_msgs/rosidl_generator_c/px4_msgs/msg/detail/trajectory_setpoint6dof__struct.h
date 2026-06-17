// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TrajectorySetpoint6dof.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TRAJECTORY_SETPOINT6DOF__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__TRAJECTORY_SETPOINT6DOF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TrajectorySetpoint6dof in the package px4_msgs.
/**
  * Trajectory setpoint in NED frame
  * Input to position controller.
 */
typedef struct px4_msgs__msg__TrajectorySetpoint6dof
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// NED local world frame
  /// in meters
  float position[3];
  /// in meters/second
  float velocity[3];
  /// in meters/second^2
  float acceleration[3];
  /// in meters/second^3 (for logging only)
  float jerk[3];
  /// unit quaternion
  float quaternion[4];
  /// angular velocity in radians/second
  float angular_velocity[3];
} px4_msgs__msg__TrajectorySetpoint6dof;

// Struct for a sequence of px4_msgs__msg__TrajectorySetpoint6dof.
typedef struct px4_msgs__msg__TrajectorySetpoint6dof__Sequence
{
  px4_msgs__msg__TrajectorySetpoint6dof * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TrajectorySetpoint6dof__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__TRAJECTORY_SETPOINT6DOF__STRUCT_H_
