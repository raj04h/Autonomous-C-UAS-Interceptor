// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TargetGnss.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TARGET_GNSS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__TARGET_GNSS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TargetGnss in the package px4_msgs.
/**
  * Landing target GNSS position in WGS84 coordinates, and optional NED velocity, from a target-mounted receiver.
  *
  * Published by: mavlink_receiver (when decoding TARGET_ABSOLUTE with position/velocity capability bits set).
  * Subscribed by: vision_target_estimator (VTEPosition).
  *
  * abs_pos_updated / vel_ned_updated tell the estimator which fields in this sample are fresh.
 */
typedef struct px4_msgs__msg__TargetGnss
{
  /// Time since system start
  uint64_t timestamp;
  /// Timestamp of the raw observation
  uint64_t timestamp_sample;
  /// Latitude, allows centimeter level RTK precision
  double latitude_deg;
  /// Longitude, allows centimeter level RTK precision
  double longitude_deg;
  /// Altitude above MSL
  float altitude_msl_m;
  /// GNSS horizontal position accuracy
  float eph;
  /// GNSS vertical position accuracy
  float epv;
  /// True if WGS84 position is updated
  bool abs_pos_updated;
  /// GNSS North velocity
  float vel_n_m_s;
  /// GNSS East velocity
  float vel_e_m_s;
  /// GNSS Down velocity
  float vel_d_m_s;
  /// GNSS speed accuracy estimate
  float s_acc_m_s;
  /// True if NED velocity is updated
  bool vel_ned_updated;
} px4_msgs__msg__TargetGnss;

// Struct for a sequence of px4_msgs__msg__TargetGnss.
typedef struct px4_msgs__msg__TargetGnss__Sequence
{
  px4_msgs__msg__TargetGnss * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TargetGnss__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__TARGET_GNSS__STRUCT_H_
