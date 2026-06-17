// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VteInput.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_INPUT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VTE_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VteInput in the package px4_msgs.
/**
  * Vehicle inputs fed into the Vision Target Estimator position prediction step, logged for tuning.
  *
  * Published by: vision_target_estimator (VisionTargetEst work item).
  * Subscribed by: logger only.
 */
typedef struct px4_msgs__msg__VteInput
{
  /// Time since system start
  uint64_t timestamp;
  /// Timestamp of the raw input data
  uint64_t timestamp_sample;
  /// [m/s^2] [@frame NED] Downsampled UAV bias-corrected acceleration (including gravity)
  float acc_xyz[3];
  /// Downsampled UAV attitude quaternion (FRD body -> NED earth)
  float q_att[4];
  /// Number of raw samples averaged into acc_xyz this cycle
  uint32_t acc_sample_count;
} px4_msgs__msg__VteInput;

// Struct for a sequence of px4_msgs__msg__VteInput.
typedef struct px4_msgs__msg__VteInput__Sequence
{
  px4_msgs__msg__VteInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VteInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VTE_INPUT__STRUCT_H_
