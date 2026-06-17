// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/OpenDroneIdSystem.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SYSTEM__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SYSTEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/OpenDroneIdSystem in the package px4_msgs.
typedef struct px4_msgs__msg__OpenDroneIdSystem
{
  uint64_t timestamp;
  uint8_t id_or_mac[20];
  uint8_t operator_location_type;
  uint8_t classification_type;
  int32_t operator_latitude;
  int32_t operator_longitude;
  uint16_t area_count;
  uint16_t area_radius;
  float area_ceiling;
  float area_floor;
  uint8_t category_eu;
  uint8_t class_eu;
  float operator_altitude_geo;
} px4_msgs__msg__OpenDroneIdSystem;

// Struct for a sequence of px4_msgs__msg__OpenDroneIdSystem.
typedef struct px4_msgs__msg__OpenDroneIdSystem__Sequence
{
  px4_msgs__msg__OpenDroneIdSystem * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__OpenDroneIdSystem__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SYSTEM__STRUCT_H_
