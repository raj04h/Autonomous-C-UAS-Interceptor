// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/TrajectorySetpoint6dof.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/trajectory_setpoint6dof__struct.hpp"
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

void TrajectorySetpoint6dof_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::TrajectorySetpoint6dof(_init);
}

void TrajectorySetpoint6dof_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::TrajectorySetpoint6dof *>(message_memory);
  typed_message->~TrajectorySetpoint6dof();
}

size_t size_function__TrajectorySetpoint6dof__position(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__TrajectorySetpoint6dof__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectorySetpoint6dof__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectorySetpoint6dof__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TrajectorySetpoint6dof__position(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TrajectorySetpoint6dof__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TrajectorySetpoint6dof__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__TrajectorySetpoint6dof__velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__TrajectorySetpoint6dof__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectorySetpoint6dof__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectorySetpoint6dof__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TrajectorySetpoint6dof__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TrajectorySetpoint6dof__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TrajectorySetpoint6dof__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__TrajectorySetpoint6dof__acceleration(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__TrajectorySetpoint6dof__acceleration(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectorySetpoint6dof__acceleration(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectorySetpoint6dof__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TrajectorySetpoint6dof__acceleration(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TrajectorySetpoint6dof__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TrajectorySetpoint6dof__acceleration(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__TrajectorySetpoint6dof__jerk(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__TrajectorySetpoint6dof__jerk(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectorySetpoint6dof__jerk(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectorySetpoint6dof__jerk(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TrajectorySetpoint6dof__jerk(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TrajectorySetpoint6dof__jerk(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TrajectorySetpoint6dof__jerk(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__TrajectorySetpoint6dof__quaternion(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__TrajectorySetpoint6dof__quaternion(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectorySetpoint6dof__quaternion(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectorySetpoint6dof__quaternion(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TrajectorySetpoint6dof__quaternion(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TrajectorySetpoint6dof__quaternion(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TrajectorySetpoint6dof__quaternion(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__TrajectorySetpoint6dof__angular_velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__TrajectorySetpoint6dof__angular_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectorySetpoint6dof__angular_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrajectorySetpoint6dof__angular_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__TrajectorySetpoint6dof__angular_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TrajectorySetpoint6dof__angular_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__TrajectorySetpoint6dof__angular_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectorySetpoint6dof_message_member_array[7] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::TrajectorySetpoint6dof, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::TrajectorySetpoint6dof, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectorySetpoint6dof__position,  // size() function pointer
    get_const_function__TrajectorySetpoint6dof__position,  // get_const(index) function pointer
    get_function__TrajectorySetpoint6dof__position,  // get(index) function pointer
    fetch_function__TrajectorySetpoint6dof__position,  // fetch(index, &value) function pointer
    assign_function__TrajectorySetpoint6dof__position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::TrajectorySetpoint6dof, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectorySetpoint6dof__velocity,  // size() function pointer
    get_const_function__TrajectorySetpoint6dof__velocity,  // get_const(index) function pointer
    get_function__TrajectorySetpoint6dof__velocity,  // get(index) function pointer
    fetch_function__TrajectorySetpoint6dof__velocity,  // fetch(index, &value) function pointer
    assign_function__TrajectorySetpoint6dof__velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::TrajectorySetpoint6dof, acceleration),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectorySetpoint6dof__acceleration,  // size() function pointer
    get_const_function__TrajectorySetpoint6dof__acceleration,  // get_const(index) function pointer
    get_function__TrajectorySetpoint6dof__acceleration,  // get(index) function pointer
    fetch_function__TrajectorySetpoint6dof__acceleration,  // fetch(index, &value) function pointer
    assign_function__TrajectorySetpoint6dof__acceleration,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "jerk",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::TrajectorySetpoint6dof, jerk),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectorySetpoint6dof__jerk,  // size() function pointer
    get_const_function__TrajectorySetpoint6dof__jerk,  // get_const(index) function pointer
    get_function__TrajectorySetpoint6dof__jerk,  // get(index) function pointer
    fetch_function__TrajectorySetpoint6dof__jerk,  // fetch(index, &value) function pointer
    assign_function__TrajectorySetpoint6dof__jerk,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "quaternion",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::TrajectorySetpoint6dof, quaternion),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectorySetpoint6dof__quaternion,  // size() function pointer
    get_const_function__TrajectorySetpoint6dof__quaternion,  // get_const(index) function pointer
    get_function__TrajectorySetpoint6dof__quaternion,  // get(index) function pointer
    fetch_function__TrajectorySetpoint6dof__quaternion,  // fetch(index, &value) function pointer
    assign_function__TrajectorySetpoint6dof__quaternion,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::TrajectorySetpoint6dof, angular_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectorySetpoint6dof__angular_velocity,  // size() function pointer
    get_const_function__TrajectorySetpoint6dof__angular_velocity,  // get_const(index) function pointer
    get_function__TrajectorySetpoint6dof__angular_velocity,  // get(index) function pointer
    fetch_function__TrajectorySetpoint6dof__angular_velocity,  // fetch(index, &value) function pointer
    assign_function__TrajectorySetpoint6dof__angular_velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectorySetpoint6dof_message_members = {
  "px4_msgs::msg",  // message namespace
  "TrajectorySetpoint6dof",  // message name
  7,  // number of fields
  sizeof(px4_msgs::msg::TrajectorySetpoint6dof),
  TrajectorySetpoint6dof_message_member_array,  // message members
  TrajectorySetpoint6dof_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectorySetpoint6dof_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectorySetpoint6dof_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectorySetpoint6dof_message_members,
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
get_message_type_support_handle<px4_msgs::msg::TrajectorySetpoint6dof>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::TrajectorySetpoint6dof_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, TrajectorySetpoint6dof)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::TrajectorySetpoint6dof_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
