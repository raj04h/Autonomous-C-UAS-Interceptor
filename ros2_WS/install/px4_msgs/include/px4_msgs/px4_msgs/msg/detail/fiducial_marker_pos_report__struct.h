// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FiducialMarkerPosReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_POS_REPORT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_POS_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FiducialMarkerPosReport in the package px4_msgs.
/**
  * Relative position of a precision-landing target detected by a vision pipeline (e.g. an ArUco marker).
  *
  * Published by: vision pipelines (on-board or off-board over MAVLink TARGET_RELATIVE), decoded in mavlink_receiver.
  * Subscribed by: vision_target_estimator (VTEPosition).
  *
  * The measurement is expressed in an arbitrary sensor frame; the quaternion q rotates it into the NED earth frame.
 */
typedef struct px4_msgs__msg__FiducialMarkerPosReport
{
  /// Time since system start
  uint64_t timestamp;
  /// Timestamp of the raw observation
  uint64_t timestamp_sample;
  /// Target position relative to vehicle, expressed in the frame defined by q
  float rel_pos[3];
  /// Target position variance, expressed in the frame defined by q
  float cov_rel_pos[3];
  /// Quaternion rotation from the rel_pos frame to the NED earth frame
  float q[4];
} px4_msgs__msg__FiducialMarkerPosReport;

// Struct for a sequence of px4_msgs__msg__FiducialMarkerPosReport.
typedef struct px4_msgs__msg__FiducialMarkerPosReport__Sequence
{
  px4_msgs__msg__FiducialMarkerPosReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FiducialMarkerPosReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_POS_REPORT__STRUCT_H_
