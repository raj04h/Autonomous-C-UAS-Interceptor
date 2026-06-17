// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/Wind.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__WIND__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__WIND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MESSAGE_VERSION'.
enum
{
  px4_msgs__msg__Wind__MESSAGE_VERSION = 0ul
};

/// Struct defined in msg/Wind in the package px4_msgs.
/**
  * Wind estimate (from EKF2)
  *
  * Contains the system-wide estimate of horizontal wind velocity and its variance.
  * Published by the navigation filter (EKF2) for use by other flight modules and libraries.
 */
typedef struct px4_msgs__msg__Wind
{
  /// Time since system start
  uint64_t timestamp;
  /// Timestamp of the raw data
  uint64_t timestamp_sample;
  /// Wind component in north / X direction
  float windspeed_north;
  /// Wind component in east / Y direction
  float windspeed_east;
  /// [(m/s)^2] [@invalid 0 if not estimated] Wind estimate error variance in north / X direction
  float variance_north;
  /// [(m/s)^2] [@invalid 0 if not estimated] Wind estimate error variance in east / Y direction
  float variance_east;
  /// True airspeed innovation
  float tas_innov;
  /// True airspeed innovation variance
  float tas_innov_var;
  /// Sideslip measurement innovation
  float beta_innov;
  /// Sideslip measurement innovation variance
  float beta_innov_var;
} px4_msgs__msg__Wind;

// Struct for a sequence of px4_msgs__msg__Wind.
typedef struct px4_msgs__msg__Wind__Sequence
{
  px4_msgs__msg__Wind * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__Wind__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__WIND__STRUCT_H_
