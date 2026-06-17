// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/OpenDroneIdBasicId.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_BASIC_ID__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_BASIC_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/OpenDroneIdBasicId in the package px4_msgs.
typedef struct px4_msgs__msg__OpenDroneIdBasicId
{
  uint64_t timestamp;
  /// Only used for drone ID data received from other UAs, no null termination, null filled if shorter
  uint8_t id_or_mac[20];
  /// MAV_ODID_ID_TYPE: indicates the format for the uas_id field
  uint8_t id_type;
  /// MAV_ODID_UA_TYPE: indicates the type of UA (Unmanned Aircraft)
  uint8_t ua_type;
  /// UAS (Unmanned Aircraft System) ID following the format specified by id_type, no null termination, null filled if shorter
  uint8_t uas_id[20];
} px4_msgs__msg__OpenDroneIdBasicId;

// Struct for a sequence of px4_msgs__msg__OpenDroneIdBasicId.
typedef struct px4_msgs__msg__OpenDroneIdBasicId__Sequence
{
  px4_msgs__msg__OpenDroneIdBasicId * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__OpenDroneIdBasicId__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_BASIC_ID__STRUCT_H_
