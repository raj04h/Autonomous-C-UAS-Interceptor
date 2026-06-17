// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/OpenDroneIdOperatorId.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_OPERATOR_ID__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_OPERATOR_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/OpenDroneIdOperatorId in the package px4_msgs.
typedef struct px4_msgs__msg__OpenDroneIdOperatorId
{
  uint64_t timestamp;
  uint8_t id_or_mac[20];
  uint8_t operator_id_type;
  uint8_t operator_id[20];
} px4_msgs__msg__OpenDroneIdOperatorId;

// Struct for a sequence of px4_msgs__msg__OpenDroneIdOperatorId.
typedef struct px4_msgs__msg__OpenDroneIdOperatorId__Sequence
{
  px4_msgs__msg__OpenDroneIdOperatorId * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__OpenDroneIdOperatorId__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_OPERATOR_ID__STRUCT_H_
