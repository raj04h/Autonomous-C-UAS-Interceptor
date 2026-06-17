// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EscStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESC_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESC_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONNECTED_ESC_MAX'.
/**
  * The number of ESCs supported (Motor1-Motor12)
 */
enum
{
  px4_msgs__msg__EscStatus__CONNECTED_ESC_MAX = 12
};

/// Constant 'ESC_CONNECTION_TYPE_PPM'.
/**
  * Traditional PPM ESC
 */
enum
{
  px4_msgs__msg__EscStatus__ESC_CONNECTION_TYPE_PPM = 0
};

/// Constant 'ESC_CONNECTION_TYPE_SERIAL'.
/**
  * Serial Bus connected ESC
 */
enum
{
  px4_msgs__msg__EscStatus__ESC_CONNECTION_TYPE_SERIAL = 1
};

/// Constant 'ESC_CONNECTION_TYPE_ONESHOT'.
/**
  * One Shot PPM
 */
enum
{
  px4_msgs__msg__EscStatus__ESC_CONNECTION_TYPE_ONESHOT = 2
};

/// Constant 'ESC_CONNECTION_TYPE_I2C'.
/**
  * I2C
 */
enum
{
  px4_msgs__msg__EscStatus__ESC_CONNECTION_TYPE_I2C = 3
};

/// Constant 'ESC_CONNECTION_TYPE_CAN'.
/**
  * CAN-Bus
 */
enum
{
  px4_msgs__msg__EscStatus__ESC_CONNECTION_TYPE_CAN = 4
};

/// Constant 'ESC_CONNECTION_TYPE_DSHOT'.
/**
  * DShot
 */
enum
{
  px4_msgs__msg__EscStatus__ESC_CONNECTION_TYPE_DSHOT = 5
};

// Include directives for member types
// Member 'esc'
#include "px4_msgs/msg/detail/esc_report__struct.h"

/// Struct defined in msg/EscStatus in the package px4_msgs.
typedef struct px4_msgs__msg__EscStatus
{
  /// Time since system start
  uint64_t timestamp;
  /// Incremented by the writing thread everytime new data is stored
  uint16_t counter;
  /// Number of connected ESCs
  uint8_t esc_count;
  /// How ESCs connected to the system
  uint8_t esc_connectiontype;
  /// Bitmask indicating which ESC is online/offline (in motor order)
  uint16_t esc_online_flags;
  /// esc_online_flags bit 0 : Set to 1 if Motor1 is online
  /// esc_online_flags bit 1 : Set to 1 if Motor2 is online
  /// esc_online_flags bit 2 : Set to 1 if Motor3 is online
  /// esc_online_flags bit 3 : Set to 1 if Motor4 is online
  /// esc_online_flags bit 4 : Set to 1 if Motor5 is online
  /// esc_online_flags bit 5 : Set to 1 if Motor6 is online
  /// esc_online_flags bit 6 : Set to 1 if Motor7 is online
  /// esc_online_flags bit 7 : Set to 1 if Motor8 is online
  /// esc_online_flags bit 8 : Set to 1 if Motor9 is online
  /// esc_online_flags bit 9 : Set to 1 if Motor10 is online
  /// esc_online_flags bit 10: Set to 1 if Motor11 is online
  /// esc_online_flags bit 11: Set to 1 if Motor12 is online
  /// [-] Bitmask indicating which ESC is armed (in motor order)
  uint16_t esc_armed_flags;
  px4_msgs__msg__EscReport esc[12];
} px4_msgs__msg__EscStatus;

// Struct for a sequence of px4_msgs__msg__EscStatus.
typedef struct px4_msgs__msg__EscStatus__Sequence
{
  px4_msgs__msg__EscStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EscStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESC_STATUS__STRUCT_H_
