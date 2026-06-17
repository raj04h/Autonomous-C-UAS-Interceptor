// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/EscEepromWrite.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/esc_eeprom_write__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace px4_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EscEepromWrite_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::EscEepromWrite(_init);
}

void EscEepromWrite_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::EscEepromWrite *>(message_memory);
  typed_message->~EscEepromWrite();
}

size_t size_function__EscEepromWrite__data(const void * untyped_member)
{
  (void)untyped_member;
  return 48;
}

const void * get_const_function__EscEepromWrite__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 48> *>(untyped_member);
  return &member[index];
}

void * get_function__EscEepromWrite__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 48> *>(untyped_member);
  return &member[index];
}

void fetch_function__EscEepromWrite__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__EscEepromWrite__data(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__EscEepromWrite__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__EscEepromWrite__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__EscEepromWrite__write_mask(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__EscEepromWrite__write_mask(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__EscEepromWrite__write_mask(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__EscEepromWrite__write_mask(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__EscEepromWrite__write_mask(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__EscEepromWrite__write_mask(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__EscEepromWrite__write_mask(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EscEepromWrite_message_member_array[6] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EscEepromWrite, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "firmware",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EscEepromWrite, firmware),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EscEepromWrite, index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EscEepromWrite, length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    48,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EscEepromWrite, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__EscEepromWrite__data,  // size() function pointer
    get_const_function__EscEepromWrite__data,  // get_const(index) function pointer
    get_function__EscEepromWrite__data,  // get(index) function pointer
    fetch_function__EscEepromWrite__data,  // fetch(index, &value) function pointer
    assign_function__EscEepromWrite__data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "write_mask",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EscEepromWrite, write_mask),  // bytes offset in struct
    nullptr,  // default value
    size_function__EscEepromWrite__write_mask,  // size() function pointer
    get_const_function__EscEepromWrite__write_mask,  // get_const(index) function pointer
    get_function__EscEepromWrite__write_mask,  // get(index) function pointer
    fetch_function__EscEepromWrite__write_mask,  // fetch(index, &value) function pointer
    assign_function__EscEepromWrite__write_mask,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EscEepromWrite_message_members = {
  "px4_msgs::msg",  // message namespace
  "EscEepromWrite",  // message name
  6,  // number of fields
  sizeof(px4_msgs::msg::EscEepromWrite),
  EscEepromWrite_message_member_array,  // message members
  EscEepromWrite_init_function,  // function to initialize message memory (memory has to be allocated)
  EscEepromWrite_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EscEepromWrite_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EscEepromWrite_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::EscEepromWrite>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EscEepromWrite_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, EscEepromWrite)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EscEepromWrite_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
