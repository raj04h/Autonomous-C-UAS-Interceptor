// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VteAidSource3d.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/vte_aid_source3d__struct.hpp"
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

void VteAidSource3d_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::VteAidSource3d(_init);
}

void VteAidSource3d_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::VteAidSource3d *>(message_memory);
  typed_message->~VteAidSource3d();
}

size_t size_function__VteAidSource3d__observation(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VteAidSource3d__observation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VteAidSource3d__observation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VteAidSource3d__observation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VteAidSource3d__observation(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VteAidSource3d__observation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VteAidSource3d__observation(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VteAidSource3d__observation_variance(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VteAidSource3d__observation_variance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VteAidSource3d__observation_variance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VteAidSource3d__observation_variance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VteAidSource3d__observation_variance(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VteAidSource3d__observation_variance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VteAidSource3d__observation_variance(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VteAidSource3d__innovation(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VteAidSource3d__innovation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VteAidSource3d__innovation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VteAidSource3d__innovation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VteAidSource3d__innovation(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VteAidSource3d__innovation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VteAidSource3d__innovation(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VteAidSource3d__innovation_variance(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VteAidSource3d__innovation_variance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VteAidSource3d__innovation_variance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VteAidSource3d__innovation_variance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VteAidSource3d__innovation_variance(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VteAidSource3d__innovation_variance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VteAidSource3d__innovation_variance(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VteAidSource3d__test_ratio(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VteAidSource3d__test_ratio(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VteAidSource3d__test_ratio(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VteAidSource3d__test_ratio(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VteAidSource3d__test_ratio(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VteAidSource3d__test_ratio(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VteAidSource3d__test_ratio(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VteAidSource3d__fusion_status(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VteAidSource3d__fusion_status(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VteAidSource3d__fusion_status(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VteAidSource3d__fusion_status(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__VteAidSource3d__fusion_status(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__VteAidSource3d__fusion_status(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__VteAidSource3d__fusion_status(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VteAidSource3d_message_member_array[11] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VteAidSource3d, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp_sample",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VteAidSource3d, timestamp_sample),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_last_predict",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VteAidSource3d, time_last_predict),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "observation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VteAidSource3d, observation),  // bytes offset in struct
    nullptr,  // default value
    size_function__VteAidSource3d__observation,  // size() function pointer
    get_const_function__VteAidSource3d__observation,  // get_const(index) function pointer
    get_function__VteAidSource3d__observation,  // get(index) function pointer
    fetch_function__VteAidSource3d__observation,  // fetch(index, &value) function pointer
    assign_function__VteAidSource3d__observation,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "observation_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VteAidSource3d, observation_variance),  // bytes offset in struct
    nullptr,  // default value
    size_function__VteAidSource3d__observation_variance,  // size() function pointer
    get_const_function__VteAidSource3d__observation_variance,  // get_const(index) function pointer
    get_function__VteAidSource3d__observation_variance,  // get(index) function pointer
    fetch_function__VteAidSource3d__observation_variance,  // fetch(index, &value) function pointer
    assign_function__VteAidSource3d__observation_variance,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "innovation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VteAidSource3d, innovation),  // bytes offset in struct
    nullptr,  // default value
    size_function__VteAidSource3d__innovation,  // size() function pointer
    get_const_function__VteAidSource3d__innovation,  // get_const(index) function pointer
    get_function__VteAidSource3d__innovation,  // get(index) function pointer
    fetch_function__VteAidSource3d__innovation,  // fetch(index, &value) function pointer
    assign_function__VteAidSource3d__innovation,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "innovation_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VteAidSource3d, innovation_variance),  // bytes offset in struct
    nullptr,  // default value
    size_function__VteAidSource3d__innovation_variance,  // size() function pointer
    get_const_function__VteAidSource3d__innovation_variance,  // get_const(index) function pointer
    get_function__VteAidSource3d__innovation_variance,  // get(index) function pointer
    fetch_function__VteAidSource3d__innovation_variance,  // fetch(index, &value) function pointer
    assign_function__VteAidSource3d__innovation_variance,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "test_ratio",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VteAidSource3d, test_ratio),  // bytes offset in struct
    nullptr,  // default value
    size_function__VteAidSource3d__test_ratio,  // size() function pointer
    get_const_function__VteAidSource3d__test_ratio,  // get_const(index) function pointer
    get_function__VteAidSource3d__test_ratio,  // get(index) function pointer
    fetch_function__VteAidSource3d__test_ratio,  // fetch(index, &value) function pointer
    assign_function__VteAidSource3d__test_ratio,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fusion_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VteAidSource3d, fusion_status),  // bytes offset in struct
    nullptr,  // default value
    size_function__VteAidSource3d__fusion_status,  // size() function pointer
    get_const_function__VteAidSource3d__fusion_status,  // get_const(index) function pointer
    get_function__VteAidSource3d__fusion_status,  // get(index) function pointer
    fetch_function__VteAidSource3d__fusion_status,  // fetch(index, &value) function pointer
    assign_function__VteAidSource3d__fusion_status,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_since_meas_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VteAidSource3d, time_since_meas_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "history_steps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VteAidSource3d, history_steps),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VteAidSource3d_message_members = {
  "px4_msgs::msg",  // message namespace
  "VteAidSource3d",  // message name
  11,  // number of fields
  sizeof(px4_msgs::msg::VteAidSource3d),
  VteAidSource3d_message_member_array,  // message members
  VteAidSource3d_init_function,  // function to initialize message memory (memory has to be allocated)
  VteAidSource3d_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VteAidSource3d_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VteAidSource3d_message_members,
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
get_message_type_support_handle<px4_msgs::msg::VteAidSource3d>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::VteAidSource3d_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, VteAidSource3d)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::VteAidSource3d_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
