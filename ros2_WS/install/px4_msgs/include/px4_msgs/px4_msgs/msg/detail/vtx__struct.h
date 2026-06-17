// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/Vtx.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTX__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VTX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BAND_NAME_LENGTH'.
enum
{
  px4_msgs__msg__Vtx__BAND_NAME_LENGTH = 12
};

/// Constant 'POWER_LABEL_LENGTH'.
enum
{
  px4_msgs__msg__Vtx__POWER_LABEL_LENGTH = 4
};

/// Constant 'PROTOCOL_NONE'.
/**
  * No protocol is detected, usually an error
 */
enum
{
  px4_msgs__msg__Vtx__PROTOCOL_NONE = 0
};

/// Constant 'PROTOCOL_SMART_AUDIO_V1'.
enum
{
  px4_msgs__msg__Vtx__PROTOCOL_SMART_AUDIO_V1 = 10
};

/// Constant 'PROTOCOL_SMART_AUDIO_V2'.
enum
{
  px4_msgs__msg__Vtx__PROTOCOL_SMART_AUDIO_V2 = 20
};

/// Constant 'PROTOCOL_SMART_AUDIO_V2_1'.
enum
{
  px4_msgs__msg__Vtx__PROTOCOL_SMART_AUDIO_V2_1 = 21
};

/// Constant 'PROTOCOL_TRAMP'.
enum
{
  px4_msgs__msg__Vtx__PROTOCOL_TRAMP = 100
};

/// Constant 'DEVICE_UNKNOWN'.
enum
{
  px4_msgs__msg__Vtx__DEVICE_UNKNOWN = 0
};

/// Constant 'DEVICE_PEAK_THOR_T67'.
enum
{
  px4_msgs__msg__Vtx__DEVICE_PEAK_THOR_T67 = 20
};

/// Constant 'DEVICE_RUSH_MAX_SOLO'.
enum
{
  px4_msgs__msg__Vtx__DEVICE_RUSH_MAX_SOLO = 40
};

/// Constant 'MODE_NORMAL'.
enum
{
  px4_msgs__msg__Vtx__MODE_NORMAL = 0
};

/// Constant 'MODE_PIT'.
enum
{
  px4_msgs__msg__Vtx__MODE_PIT = 1
};

/// Struct defined in msg/Vtx in the package px4_msgs.
typedef struct px4_msgs__msg__Vtx
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint8_t protocol;
  uint8_t device;
  uint8_t mode;
  /// Band and Channel are 0-indexed! But the user expects a 1-indexed display!
  /// Band number (0-23), negative values indicate frequency mode
  int8_t band;
  /// Channel number (0-15), negative values indicate frequency mode
  int8_t channel;
  /// Frequency in MHz, zero indicates unknown
  uint16_t frequency;
  /// Band letter as ASCII
  uint8_t band_letter;
  /// Band name in ASCII without null termination
  uint8_t band_name[12];
  /// Also 0-indexed, but the user expects a 1-indexed display!
  /// Current power level (0-15), negative values indicate unknown
  int8_t power_level;
  /// Current power label in ASCII without null termination
  uint8_t power_label[4];
} px4_msgs__msg__Vtx;

// Struct for a sequence of px4_msgs__msg__Vtx.
typedef struct px4_msgs__msg__Vtx__Sequence
{
  px4_msgs__msg__Vtx * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__Vtx__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VTX__STRUCT_H_
