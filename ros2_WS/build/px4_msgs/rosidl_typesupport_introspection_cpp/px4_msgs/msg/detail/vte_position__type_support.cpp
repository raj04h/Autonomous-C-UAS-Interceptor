// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VtePosition.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/vte_position__struct.hpp"
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

void VtePosition_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::VtePosition(_init);
}

void VtePosition_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::VtePosition *>(message_memory);
  typed_message->~VtePosition();
}

size_t size_function__VtePosition__rel_pos(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VtePosition__rel_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VtePosition__rel_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VtePosition__rel_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VtePosition__rel_pos(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VtePosition__rel_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VtePosition__rel_pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VtePosition__vel_uav(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VtePosition__vel_uav(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VtePosition__vel_uav(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VtePosition__vel_uav(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VtePosition__vel_uav(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VtePosition__vel_uav(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VtePosition__vel_uav(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VtePosition__vel_target(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VtePosition__vel_target(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VtePosition__vel_target(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VtePosition__vel_target(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VtePosition__vel_target(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VtePosition__vel_target(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VtePosition__vel_target(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VtePosition__bias(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VtePosition__bias(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VtePosition__bias(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VtePosition__bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VtePosition__bias(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VtePosition__bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VtePosition__bias(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VtePosition__acc_target(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VtePosition__acc_target(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VtePosition__acc_target(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VtePosition__acc_target(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VtePosition__acc_target(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VtePosition__acc_target(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VtePosition__acc_target(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VtePosition__cov_rel_pos(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VtePosition__cov_rel_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VtePosition__cov_rel_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VtePosition__cov_rel_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VtePosition__cov_rel_pos(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VtePosition__cov_rel_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VtePosition__cov_rel_pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VtePosition__cov_vel_uav(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VtePosition__cov_vel_uav(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VtePosition__cov_vel_uav(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VtePosition__cov_vel_uav(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VtePosition__cov_vel_uav(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VtePosition__cov_vel_uav(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VtePosition__cov_vel_uav(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VtePosition__cov_bias(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VtePosition__cov_bias(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VtePosition__cov_bias(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VtePosition__cov_bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VtePosition__cov_bias(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VtePosition__cov_bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VtePosition__cov_bias(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VtePosition__cov_vel_target(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VtePosition__cov_vel_target(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VtePosition__cov_vel_target(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VtePosition__cov_vel_target(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VtePosition__cov_vel_target(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VtePosition__cov_vel_target(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VtePosition__cov_vel_target(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VtePosition__cov_acc_target(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VtePosition__cov_acc_target(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VtePosition__cov_acc_target(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VtePosition__cov_acc_target(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VtePosition__cov_acc_target(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VtePosition__cov_acc_target(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VtePosition__cov_acc_target(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VtePosition_message_member_array[13] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VtePosition, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rel_pos_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VtePosition, rel_pos_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rel_vel_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VtePosition, rel_vel_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rel_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VtePosition, rel_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__VtePosition__rel_pos,  // size() function pointer
    get_const_function__VtePosition__rel_pos,  // get_const(index) function pointer
    get_function__VtePosition__rel_pos,  // get(index) function pointer
    fetch_function__VtePosition__rel_pos,  // fetch(index, &value) function pointer
    assign_function__VtePosition__rel_pos,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel_uav",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VtePosition, vel_uav),  // bytes offset in struct
    nullptr,  // default value
    size_function__VtePosition__vel_uav,  // size() function pointer
    get_const_function__VtePosition__vel_uav,  // get_const(index) function pointer
    get_function__VtePosition__vel_uav,  // get(index) function pointer
    fetch_function__VtePosition__vel_uav,  // fetch(index, &value) function pointer
    assign_function__VtePosition__vel_uav,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VtePosition, vel_target),  // bytes offset in struct
    nullptr,  // default value
    size_function__VtePosition__vel_target,  // size() function pointer
    get_const_function__VtePosition__vel_target,  // get_const(index) function pointer
    get_function__VtePosition__vel_target,  // get(index) function pointer
    fetch_function__VtePosition__vel_target,  // fetch(index, &value) function pointer
    assign_function__VtePosition__vel_target,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bias",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VtePosition, bias),  // bytes offset in struct
    nullptr,  // default value
    size_function__VtePosition__bias,  // size() function pointer
    get_const_function__VtePosition__bias,  // get_const(index) function pointer
    get_function__VtePosition__bias,  // get(index) function pointer
    fetch_function__VtePosition__bias,  // fetch(index, &value) function pointer
    assign_function__VtePosition__bias,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "acc_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VtePosition, acc_target),  // bytes offset in struct
    nullptr,  // default value
    size_function__VtePosition__acc_target,  // size() function pointer
    get_const_function__VtePosition__acc_target,  // get_const(index) function pointer
    get_function__VtePosition__acc_target,  // get(index) function pointer
    fetch_function__VtePosition__acc_target,  // fetch(index, &value) function pointer
    assign_function__VtePosition__acc_target,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cov_rel_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VtePosition, cov_rel_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__VtePosition__cov_rel_pos,  // size() function pointer
    get_const_function__VtePosition__cov_rel_pos,  // get_const(index) function pointer
    get_function__VtePosition__cov_rel_pos,  // get(index) function pointer
    fetch_function__VtePosition__cov_rel_pos,  // fetch(index, &value) function pointer
    assign_function__VtePosition__cov_rel_pos,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cov_vel_uav",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VtePosition, cov_vel_uav),  // bytes offset in struct
    nullptr,  // default value
    size_function__VtePosition__cov_vel_uav,  // size() function pointer
    get_const_function__VtePosition__cov_vel_uav,  // get_const(index) function pointer
    get_function__VtePosition__cov_vel_uav,  // get(index) function pointer
    fetch_function__VtePosition__cov_vel_uav,  // fetch(index, &value) function pointer
    assign_function__VtePosition__cov_vel_uav,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cov_bias",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VtePosition, cov_bias),  // bytes offset in struct
    nullptr,  // default value
    size_function__VtePosition__cov_bias,  // size() function pointer
    get_const_function__VtePosition__cov_bias,  // get_const(index) function pointer
    get_function__VtePosition__cov_bias,  // get(index) function pointer
    fetch_function__VtePosition__cov_bias,  // fetch(index, &value) function pointer
    assign_function__VtePosition__cov_bias,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cov_vel_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VtePosition, cov_vel_target),  // bytes offset in struct
    nullptr,  // default value
    size_function__VtePosition__cov_vel_target,  // size() function pointer
    get_const_function__VtePosition__cov_vel_target,  // get_const(index) function pointer
    get_function__VtePosition__cov_vel_target,  // get(index) function pointer
    fetch_function__VtePosition__cov_vel_target,  // fetch(index, &value) function pointer
    assign_function__VtePosition__cov_vel_target,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cov_acc_target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VtePosition, cov_acc_target),  // bytes offset in struct
    nullptr,  // default value
    size_function__VtePosition__cov_acc_target,  // size() function pointer
    get_const_function__VtePosition__cov_acc_target,  // get_const(index) function pointer
    get_function__VtePosition__cov_acc_target,  // get(index) function pointer
    fetch_function__VtePosition__cov_acc_target,  // fetch(index, &value) function pointer
    assign_function__VtePosition__cov_acc_target,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VtePosition_message_members = {
  "px4_msgs::msg",  // message namespace
  "VtePosition",  // message name
  13,  // number of fields
  sizeof(px4_msgs::msg::VtePosition),
  VtePosition_message_member_array,  // message members
  VtePosition_init_function,  // function to initialize message memory (memory has to be allocated)
  VtePosition_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VtePosition_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VtePosition_message_members,
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
get_message_type_support_handle<px4_msgs::msg::VtePosition>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::VtePosition_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, VtePosition)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::VtePosition_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
