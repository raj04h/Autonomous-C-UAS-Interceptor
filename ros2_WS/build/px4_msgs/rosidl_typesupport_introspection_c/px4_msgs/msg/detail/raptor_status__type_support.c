// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/RaptorStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/raptor_status__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/raptor_status__functions.h"
#include "px4_msgs/msg/detail/raptor_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__RaptorStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__RaptorStatus__init(message_memory);
}

void px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__RaptorStatus_fini_function(void * message_memory)
{
  px4_msgs__msg__RaptorStatus__fini(message_memory);
}

size_t px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__size_function__RaptorStatus__internal_reference_position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__get_const_function__RaptorStatus__internal_reference_position(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__get_function__RaptorStatus__internal_reference_position(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__fetch_function__RaptorStatus__internal_reference_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__get_const_function__RaptorStatus__internal_reference_position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__assign_function__RaptorStatus__internal_reference_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__get_function__RaptorStatus__internal_reference_position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__size_function__RaptorStatus__internal_reference_linear_velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__get_const_function__RaptorStatus__internal_reference_linear_velocity(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__get_function__RaptorStatus__internal_reference_linear_velocity(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__fetch_function__RaptorStatus__internal_reference_linear_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__get_const_function__RaptorStatus__internal_reference_linear_velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__assign_function__RaptorStatus__internal_reference_linear_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__get_function__RaptorStatus__internal_reference_linear_velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__RaptorStatus_message_member_array[24] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_sample",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, timestamp_sample),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subscription_update_angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, subscription_update_angular_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subscription_update_local_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, subscription_update_local_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subscription_update_attitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, subscription_update_attitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subscription_update_trajectory_setpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, subscription_update_trajectory_setpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subscription_update_vehicle_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, subscription_update_vehicle_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "exit_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, exit_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_last_vehicle_angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, timestamp_last_vehicle_angular_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_last_vehicle_local_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, timestamp_last_vehicle_local_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_last_vehicle_attitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, timestamp_last_vehicle_attitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_last_trajectory_setpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, timestamp_last_trajectory_setpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_angular_velocity_stale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, vehicle_angular_velocity_stale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_local_position_stale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, vehicle_local_position_stale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_attitude_stale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, vehicle_attitude_stale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_setpoint_stale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, trajectory_setpoint_stale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "substep",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, substep),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_interval",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, control_interval),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_setpoint_dt_mean",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, trajectory_setpoint_dt_mean),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_setpoint_dt_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, trajectory_setpoint_dt_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_setpoint_dt_max_since_activation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, trajectory_setpoint_dt_max_since_activation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "internal_reference_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, internal_reference_position),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__size_function__RaptorStatus__internal_reference_position,  // size() function pointer
    px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__get_const_function__RaptorStatus__internal_reference_position,  // get_const(index) function pointer
    px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__get_function__RaptorStatus__internal_reference_position,  // get(index) function pointer
    px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__fetch_function__RaptorStatus__internal_reference_position,  // fetch(index, &value) function pointer
    px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__assign_function__RaptorStatus__internal_reference_position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "internal_reference_linear_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RaptorStatus, internal_reference_linear_velocity),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__size_function__RaptorStatus__internal_reference_linear_velocity,  // size() function pointer
    px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__get_const_function__RaptorStatus__internal_reference_linear_velocity,  // get_const(index) function pointer
    px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__get_function__RaptorStatus__internal_reference_linear_velocity,  // get(index) function pointer
    px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__fetch_function__RaptorStatus__internal_reference_linear_velocity,  // fetch(index, &value) function pointer
    px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__assign_function__RaptorStatus__internal_reference_linear_velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__RaptorStatus_message_members = {
  "px4_msgs__msg",  // message namespace
  "RaptorStatus",  // message name
  24,  // number of fields
  sizeof(px4_msgs__msg__RaptorStatus),
  px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__RaptorStatus_message_member_array,  // message members
  px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__RaptorStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__RaptorStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__RaptorStatus_message_type_support_handle = {
  0,
  &px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__RaptorStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, RaptorStatus)() {
  if (!px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__RaptorStatus_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__RaptorStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__RaptorStatus__rosidl_typesupport_introspection_c__RaptorStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
