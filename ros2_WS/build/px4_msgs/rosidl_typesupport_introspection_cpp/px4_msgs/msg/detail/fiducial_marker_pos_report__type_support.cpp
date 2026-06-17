// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/FiducialMarkerPosReport.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/fiducial_marker_pos_report__struct.hpp"
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

void FiducialMarkerPosReport_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::FiducialMarkerPosReport(_init);
}

void FiducialMarkerPosReport_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::FiducialMarkerPosReport *>(message_memory);
  typed_message->~FiducialMarkerPosReport();
}

size_t size_function__FiducialMarkerPosReport__rel_pos(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__FiducialMarkerPosReport__rel_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__FiducialMarkerPosReport__rel_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__FiducialMarkerPosReport__rel_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__FiducialMarkerPosReport__rel_pos(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__FiducialMarkerPosReport__rel_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__FiducialMarkerPosReport__rel_pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__FiducialMarkerPosReport__cov_rel_pos(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__FiducialMarkerPosReport__cov_rel_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__FiducialMarkerPosReport__cov_rel_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__FiducialMarkerPosReport__cov_rel_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__FiducialMarkerPosReport__cov_rel_pos(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__FiducialMarkerPosReport__cov_rel_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__FiducialMarkerPosReport__cov_rel_pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__FiducialMarkerPosReport__q(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__FiducialMarkerPosReport__q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__FiducialMarkerPosReport__q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__FiducialMarkerPosReport__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__FiducialMarkerPosReport__q(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__FiducialMarkerPosReport__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__FiducialMarkerPosReport__q(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FiducialMarkerPosReport_message_member_array[5] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::FiducialMarkerPosReport, timestamp),  // bytes offset in struct
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
    offsetof(px4_msgs::msg::FiducialMarkerPosReport, timestamp_sample),  // bytes offset in struct
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
    offsetof(px4_msgs::msg::FiducialMarkerPosReport, rel_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__FiducialMarkerPosReport__rel_pos,  // size() function pointer
    get_const_function__FiducialMarkerPosReport__rel_pos,  // get_const(index) function pointer
    get_function__FiducialMarkerPosReport__rel_pos,  // get(index) function pointer
    fetch_function__FiducialMarkerPosReport__rel_pos,  // fetch(index, &value) function pointer
    assign_function__FiducialMarkerPosReport__rel_pos,  // assign(index, value) function pointer
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
    offsetof(px4_msgs::msg::FiducialMarkerPosReport, cov_rel_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__FiducialMarkerPosReport__cov_rel_pos,  // size() function pointer
    get_const_function__FiducialMarkerPosReport__cov_rel_pos,  // get_const(index) function pointer
    get_function__FiducialMarkerPosReport__cov_rel_pos,  // get(index) function pointer
    fetch_function__FiducialMarkerPosReport__cov_rel_pos,  // fetch(index, &value) function pointer
    assign_function__FiducialMarkerPosReport__cov_rel_pos,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::FiducialMarkerPosReport, q),  // bytes offset in struct
    nullptr,  // default value
    size_function__FiducialMarkerPosReport__q,  // size() function pointer
    get_const_function__FiducialMarkerPosReport__q,  // get_const(index) function pointer
    get_function__FiducialMarkerPosReport__q,  // get(index) function pointer
    fetch_function__FiducialMarkerPosReport__q,  // fetch(index, &value) function pointer
    assign_function__FiducialMarkerPosReport__q,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FiducialMarkerPosReport_message_members = {
  "px4_msgs::msg",  // message namespace
  "FiducialMarkerPosReport",  // message name
  5,  // number of fields
  sizeof(px4_msgs::msg::FiducialMarkerPosReport),
  FiducialMarkerPosReport_message_member_array,  // message members
  FiducialMarkerPosReport_init_function,  // function to initialize message memory (memory has to be allocated)
  FiducialMarkerPosReport_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FiducialMarkerPosReport_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FiducialMarkerPosReport_message_members,
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
get_message_type_support_handle<px4_msgs::msg::FiducialMarkerPosReport>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::FiducialMarkerPosReport_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, FiducialMarkerPosReport)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::FiducialMarkerPosReport_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
