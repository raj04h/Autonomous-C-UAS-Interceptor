// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/EscEepromWrite.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/esc_eeprom_write__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/esc_eeprom_write__functions.h"
#include "px4_msgs/msg/detail/esc_eeprom_write__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__EscEepromWrite_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__EscEepromWrite__init(message_memory);
}

void px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__EscEepromWrite_fini_function(void * message_memory)
{
  px4_msgs__msg__EscEepromWrite__fini(message_memory);
}

size_t px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__size_function__EscEepromWrite__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 48;
}

const void * px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__get_const_function__EscEepromWrite__data(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__get_function__EscEepromWrite__data(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__fetch_function__EscEepromWrite__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__get_const_function__EscEepromWrite__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__assign_function__EscEepromWrite__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__get_function__EscEepromWrite__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__size_function__EscEepromWrite__write_mask(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__get_const_function__EscEepromWrite__write_mask(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__get_function__EscEepromWrite__write_mask(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__fetch_function__EscEepromWrite__write_mask(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__get_const_function__EscEepromWrite__write_mask(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__assign_function__EscEepromWrite__write_mask(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__get_function__EscEepromWrite__write_mask(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__EscEepromWrite_message_member_array[6] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EscEepromWrite, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "firmware",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EscEepromWrite, firmware),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EscEepromWrite, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EscEepromWrite, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    48,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EscEepromWrite, data),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__size_function__EscEepromWrite__data,  // size() function pointer
    px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__get_const_function__EscEepromWrite__data,  // get_const(index) function pointer
    px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__get_function__EscEepromWrite__data,  // get(index) function pointer
    px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__fetch_function__EscEepromWrite__data,  // fetch(index, &value) function pointer
    px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__assign_function__EscEepromWrite__data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "write_mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EscEepromWrite, write_mask),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__size_function__EscEepromWrite__write_mask,  // size() function pointer
    px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__get_const_function__EscEepromWrite__write_mask,  // get_const(index) function pointer
    px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__get_function__EscEepromWrite__write_mask,  // get(index) function pointer
    px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__fetch_function__EscEepromWrite__write_mask,  // fetch(index, &value) function pointer
    px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__assign_function__EscEepromWrite__write_mask,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__EscEepromWrite_message_members = {
  "px4_msgs__msg",  // message namespace
  "EscEepromWrite",  // message name
  6,  // number of fields
  sizeof(px4_msgs__msg__EscEepromWrite),
  px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__EscEepromWrite_message_member_array,  // message members
  px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__EscEepromWrite_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__EscEepromWrite_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__EscEepromWrite_message_type_support_handle = {
  0,
  &px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__EscEepromWrite_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, EscEepromWrite)() {
  if (!px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__EscEepromWrite_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__EscEepromWrite_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__EscEepromWrite__rosidl_typesupport_introspection_c__EscEepromWrite_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
