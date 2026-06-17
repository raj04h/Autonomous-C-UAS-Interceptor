// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VtePosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_POSITION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VTE_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VtePosition in the package px4_msgs.
/**
  * Vision Target Estimator position state, exposing the full per-axis Kalman filter state with covariances for logging and tuning.
  *
  * Published by: vision_target_estimator (VTEPosition).
  * Subscribed by: logger only. The position-related fields consumed elsewhere (precision landing, EKF2 aiding) are exposed on landing_target_pose.
  *
  * vel_target and acc_target are only populated when the firmware is built with CONFIG_VTEST_MOVING=y; otherwise they stay at zero.
 */
typedef struct px4_msgs__msg__VtePosition
{
  /// Time since system start
  uint64_t timestamp;
  /// Relative position estimate valid
  bool rel_pos_valid;
  /// Relative velocity estimate valid
  bool rel_vel_valid;
  /// [m] [@frame NED] Target position relative to vehicle
  float rel_pos[3];
  /// [m/s] [@frame NED] Vehicle velocity
  float vel_uav[3];
  /// [m/s] [@frame NED] Target velocity
  float vel_target[3];
  /// [m] [@frame NED] GNSS bias between vehicle and target receivers
  float bias[3];
  /// [m/s^2] [@frame NED] Target acceleration
  float acc_target[3];
  /// [m^2] [@frame NED] Variance of rel_pos
  float cov_rel_pos[3];
  /// [(m/s)^2] [@frame NED] Variance of vel_uav
  float cov_vel_uav[3];
  /// [m^2] [@frame NED] Variance of bias
  float cov_bias[3];
  /// [(m/s)^2] [@frame NED] Variance of vel_target
  float cov_vel_target[3];
  /// [(m/s^2)^2] [@frame NED] Variance of acc_target
  float cov_acc_target[3];
} px4_msgs__msg__VtePosition;

// Struct for a sequence of px4_msgs__msg__VtePosition.
typedef struct px4_msgs__msg__VtePosition__Sequence
{
  px4_msgs__msg__VtePosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VtePosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VTE_POSITION__STRUCT_H_
