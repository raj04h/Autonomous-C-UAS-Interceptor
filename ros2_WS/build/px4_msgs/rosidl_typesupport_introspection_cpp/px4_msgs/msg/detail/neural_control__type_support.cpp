// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/NeuralControl.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/neural_control__struct.hpp"
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

void NeuralControl_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::NeuralControl(_init);
}

void NeuralControl_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::NeuralControl *>(message_memory);
  typed_message->~NeuralControl();
}

size_t size_function__NeuralControl__observation(const void * untyped_member)
{
  (void)untyped_member;
  return 15;
}

const void * get_const_function__NeuralControl__observation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 15> *>(untyped_member);
  return &member[index];
}

void * get_function__NeuralControl__observation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 15> *>(untyped_member);
  return &member[index];
}

void fetch_function__NeuralControl__observation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__NeuralControl__observation(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__NeuralControl__observation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__NeuralControl__observation(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__NeuralControl__network_output(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__NeuralControl__network_output(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__NeuralControl__network_output(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__NeuralControl__network_output(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__NeuralControl__network_output(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__NeuralControl__network_output(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__NeuralControl__network_output(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NeuralControl_message_member_array[5] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::NeuralControl, timestamp),  // bytes offset in struct
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
    15,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::NeuralControl, observation),  // bytes offset in struct
    nullptr,  // default value
    size_function__NeuralControl__observation,  // size() function pointer
    get_const_function__NeuralControl__observation,  // get_const(index) function pointer
    get_function__NeuralControl__observation,  // get(index) function pointer
    fetch_function__NeuralControl__observation,  // fetch(index, &value) function pointer
    assign_function__NeuralControl__observation,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "network_output",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::NeuralControl, network_output),  // bytes offset in struct
    nullptr,  // default value
    size_function__NeuralControl__network_output,  // size() function pointer
    get_const_function__NeuralControl__network_output,  // get_const(index) function pointer
    get_function__NeuralControl__network_output,  // get(index) function pointer
    fetch_function__NeuralControl__network_output,  // fetch(index, &value) function pointer
    assign_function__NeuralControl__network_output,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "controller_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::NeuralControl, controller_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "inference_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::NeuralControl, inference_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NeuralControl_message_members = {
  "px4_msgs::msg",  // message namespace
  "NeuralControl",  // message name
  5,  // number of fields
  sizeof(px4_msgs::msg::NeuralControl),
  NeuralControl_message_member_array,  // message members
  NeuralControl_init_function,  // function to initialize message memory (memory has to be allocated)
  NeuralControl_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NeuralControl_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NeuralControl_message_members,
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
get_message_type_support_handle<px4_msgs::msg::NeuralControl>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::NeuralControl_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, NeuralControl)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::NeuralControl_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
