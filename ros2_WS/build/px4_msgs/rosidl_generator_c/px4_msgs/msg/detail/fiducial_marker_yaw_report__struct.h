// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FiducialMarkerYawReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_YAW_REPORT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_YAW_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FiducialMarkerYawReport in the package px4_msgs.
/**
  * Yaw of a precision-landing target relative to the NED (North, East, Down) frame, reported by a vision pipeline.
  *
  * Published by: vision pipelines (on-board or off-board over MAVLink TARGET_RELATIVE), decoded in mavlink_receiver.
  * Subscribed by: vision_target_estimator (VTEOrientation).
 */
typedef struct px4_msgs__msg__FiducialMarkerYawReport
{
  /// Time since system start
  uint64_t timestamp;
  /// Timestamp of the raw observation
  uint64_t timestamp_sample;
  /// [rad] [@frame NED] Orientation of the target relative to the NED frame [-Pi ; Pi]
  float yaw_ned;
  /// Orientation uncertainty
  float yaw_var_ned;
} px4_msgs__msg__FiducialMarkerYawReport;

// Struct for a sequence of px4_msgs__msg__FiducialMarkerYawReport.
typedef struct px4_msgs__msg__FiducialMarkerYawReport__Sequence
{
  px4_msgs__msg__FiducialMarkerYawReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FiducialMarkerYawReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_YAW_REPORT__STRUCT_H_
