// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EscEepromWrite.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESC_EEPROM_WRITE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESC_EEPROM_WRITE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ORB_QUEUE_LENGTH'.
/**
  * To support 8 queued up requests
 */
enum
{
  px4_msgs__msg__EscEepromWrite__ORB_QUEUE_LENGTH = 8
};

/// Struct defined in msg/EscEepromWrite in the package px4_msgs.
typedef struct px4_msgs__msg__EscEepromWrite
{
  /// Time since system start
  uint64_t timestamp;
  /// ESC firmware type (see ESC_FIRMWARE enum in MAVLink)
  uint8_t firmware;
  /// Index of the ESC (0 = ESC1, 1 = ESC2, etc, 255 = All)
  uint8_t index;
  /// Length of valid data
  uint16_t length;
  /// Raw ESC EEPROM data
  uint8_t data[48];
  /// Bitmask indicating which bytes in the data array should be written (max 48 values)
  uint32_t write_mask[2];
} px4_msgs__msg__EscEepromWrite;

// Struct for a sequence of px4_msgs__msg__EscEepromWrite.
typedef struct px4_msgs__msg__EscEepromWrite__Sequence
{
  px4_msgs__msg__EscEepromWrite * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EscEepromWrite__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESC_EEPROM_WRITE__STRUCT_H_
