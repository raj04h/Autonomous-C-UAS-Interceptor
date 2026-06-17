// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/VtePosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/vte_position__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/vte_position__functions.h"
#include "px4_msgs/msg/detail/vte_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__VtePosition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__VtePosition__init(message_memory);
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__VtePosition_fini_function(void * message_memory)
{
  px4_msgs__msg__VtePosition__fini(message_memory);
}

size_t px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__rel_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__rel_pos(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__rel_pos(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__rel_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__rel_pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__rel_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__rel_pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__vel_uav(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__vel_uav(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__vel_uav(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__vel_uav(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__vel_uav(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__vel_uav(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__vel_uav(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__vel_target(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__vel_target(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__vel_target(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__vel_target(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__vel_target(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__vel_target(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__vel_target(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__bias(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__bias(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__bias(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__bias(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__bias(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__acc_target(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__acc_target(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__acc_target(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__acc_target(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__acc_target(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__acc_target(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__acc_target(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__cov_rel_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__cov_rel_pos(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__cov_rel_pos(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__cov_rel_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__cov_rel_pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__cov_rel_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__cov_rel_pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__cov_vel_uav(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__cov_vel_uav(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__cov_vel_uav(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__cov_vel_uav(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__cov_vel_uav(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__cov_vel_uav(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__cov_vel_uav(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__cov_bias(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__cov_bias(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__cov_bias(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__cov_bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__cov_bias(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__cov_bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__cov_bias(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__cov_vel_target(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__cov_vel_target(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__cov_vel_target(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__cov_vel_target(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__cov_vel_target(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__cov_vel_target(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__cov_vel_target(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__cov_acc_target(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__cov_acc_target(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__cov_acc_target(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__cov_acc_target(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__cov_acc_target(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__cov_acc_target(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__cov_acc_target(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__VtePosition_message_member_array[13] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VtePosition, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rel_pos_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VtePosition, rel_pos_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rel_vel_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VtePosition, rel_vel_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rel_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VtePosition, rel_pos),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__rel_pos,  // size() function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__rel_pos,  // get_const(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__rel_pos,  // get(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__rel_pos,  // fetch(index, &value) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__rel_pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_uav",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VtePosition, vel_uav),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__vel_uav,  // size() function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__vel_uav,  // get_const(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__vel_uav,  // get(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__vel_uav,  // fetch(index, &value) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__vel_uav,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VtePosition, vel_target),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__vel_target,  // size() function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__vel_target,  // get_const(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__vel_target,  // get(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__vel_target,  // fetch(index, &value) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__vel_target,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VtePosition, bias),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__bias,  // size() function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__bias,  // get_const(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__bias,  // get(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__bias,  // fetch(index, &value) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__bias,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VtePosition, acc_target),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__acc_target,  // size() function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__acc_target,  // get_const(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__acc_target,  // get(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__acc_target,  // fetch(index, &value) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__acc_target,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cov_rel_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VtePosition, cov_rel_pos),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__cov_rel_pos,  // size() function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__cov_rel_pos,  // get_const(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__cov_rel_pos,  // get(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__cov_rel_pos,  // fetch(index, &value) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__cov_rel_pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cov_vel_uav",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VtePosition, cov_vel_uav),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__cov_vel_uav,  // size() function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__cov_vel_uav,  // get_const(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__cov_vel_uav,  // get(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__cov_vel_uav,  // fetch(index, &value) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__cov_vel_uav,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cov_bias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VtePosition, cov_bias),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__cov_bias,  // size() function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__cov_bias,  // get_const(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__cov_bias,  // get(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__cov_bias,  // fetch(index, &value) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__cov_bias,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cov_vel_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VtePosition, cov_vel_target),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__cov_vel_target,  // size() function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__cov_vel_target,  // get_const(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__cov_vel_target,  // get(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__cov_vel_target,  // fetch(index, &value) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__cov_vel_target,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cov_acc_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VtePosition, cov_acc_target),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__size_function__VtePosition__cov_acc_target,  // size() function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_const_function__VtePosition__cov_acc_target,  // get_const(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__get_function__VtePosition__cov_acc_target,  // get(index) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__fetch_function__VtePosition__cov_acc_target,  // fetch(index, &value) function pointer
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__assign_function__VtePosition__cov_acc_target,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__VtePosition_message_members = {
  "px4_msgs__msg",  // message namespace
  "VtePosition",  // message name
  13,  // number of fields
  sizeof(px4_msgs__msg__VtePosition),
  px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__VtePosition_message_member_array,  // message members
  px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__VtePosition_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__VtePosition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__VtePosition_message_type_support_handle = {
  0,
  &px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__VtePosition_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, VtePosition)() {
  if (!px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__VtePosition_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__VtePosition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__VtePosition__rosidl_typesupport_introspection_c__VtePosition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
