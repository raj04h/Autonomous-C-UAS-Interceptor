// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VteOrientation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_ORIENTATION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VTE_ORIENTATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VteOrientation in the package px4_msgs.
/**
  * Vision Target Estimator orientation state, exposing the full yaw filter output with covariances for logging and tuning.
  *
  * Published by: vision_target_estimator (VTEOrientation).
  * Subscribed by: logger only. The orientation-related fields consumed elsewhere (precision landing) are exposed on landing_target_pose.
 */
typedef struct px4_msgs__msg__VteOrientation
{
  /// Time since system start
  uint64_t timestamp;
  /// Relative orientation estimate valid
  bool orientation_valid;
  /// [rad] [@frame NED] Target yaw angle
  float yaw;
  /// Variance of yaw
  float cov_yaw;
  /// [rad/s] [@frame NED] Target yaw rate
  float yaw_rate;
  /// Variance of yaw_rate
  float cov_yaw_rate;
} px4_msgs__msg__VteOrientation;

// Struct for a sequence of px4_msgs__msg__VteOrientation.
typedef struct px4_msgs__msg__VteOrientation__Sequence
{
  px4_msgs__msg__VteOrientation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VteOrientation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VTE_ORIENTATION__STRUCT_H_
