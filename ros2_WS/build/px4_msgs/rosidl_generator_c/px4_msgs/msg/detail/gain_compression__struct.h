// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GainCompression.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GAIN_COMPRESSION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GAIN_COMPRESSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GainCompression in the package px4_msgs.
typedef struct px4_msgs__msg__GainCompression
{
  /// Time since system start (microseconds)
  uint64_t timestamp;
  /// [-] [@frame FRD] [@range 0, 1] Multiplicative gain to modify the output of the controller per axis
  float compression_gains[3];
  /// [-] [@frame FRD] Squared output of spectral damper high-pass filter
  float spectral_damper_hpf[3];
  /// [-] [@frame FRD] Spectral damper output squared
  float spectral_damper_out[3];
} px4_msgs__msg__GainCompression;

// Struct for a sequence of px4_msgs__msg__GainCompression.
typedef struct px4_msgs__msg__GainCompression__Sequence
{
  px4_msgs__msg__GainCompression * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__GainCompression__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GAIN_COMPRESSION__STRUCT_H_
