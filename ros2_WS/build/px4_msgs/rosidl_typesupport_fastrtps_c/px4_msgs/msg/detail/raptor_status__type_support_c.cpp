// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/RaptorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/raptor_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/raptor_status__struct.h"
#include "px4_msgs/msg/detail/raptor_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RaptorStatus__ros_msg_type = px4_msgs__msg__RaptorStatus;

static bool _RaptorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RaptorStatus__ros_msg_type * ros_message = static_cast<const _RaptorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: subscription_update_angular_velocity
  {
    cdr << (ros_message->subscription_update_angular_velocity ? true : false);
  }

  // Field name: subscription_update_local_position
  {
    cdr << (ros_message->subscription_update_local_position ? true : false);
  }

  // Field name: subscription_update_attitude
  {
    cdr << (ros_message->subscription_update_attitude ? true : false);
  }

  // Field name: subscription_update_trajectory_setpoint
  {
    cdr << (ros_message->subscription_update_trajectory_setpoint ? true : false);
  }

  // Field name: subscription_update_vehicle_status
  {
    cdr << (ros_message->subscription_update_vehicle_status ? true : false);
  }

  // Field name: exit_reason
  {
    cdr << ros_message->exit_reason;
  }

  // Field name: timestamp_last_vehicle_angular_velocity
  {
    cdr << ros_message->timestamp_last_vehicle_angular_velocity;
  }

  // Field name: timestamp_last_vehicle_local_position
  {
    cdr << ros_message->timestamp_last_vehicle_local_position;
  }

  // Field name: timestamp_last_vehicle_attitude
  {
    cdr << ros_message->timestamp_last_vehicle_attitude;
  }

  // Field name: timestamp_last_trajectory_setpoint
  {
    cdr << ros_message->timestamp_last_trajectory_setpoint;
  }

  // Field name: vehicle_angular_velocity_stale
  {
    cdr << (ros_message->vehicle_angular_velocity_stale ? true : false);
  }

  // Field name: vehicle_local_position_stale
  {
    cdr << (ros_message->vehicle_local_position_stale ? true : false);
  }

  // Field name: vehicle_attitude_stale
  {
    cdr << (ros_message->vehicle_attitude_stale ? true : false);
  }

  // Field name: trajectory_setpoint_stale
  {
    cdr << (ros_message->trajectory_setpoint_stale ? true : false);
  }

  // Field name: active
  {
    cdr << (ros_message->active ? true : false);
  }

  // Field name: substep
  {
    cdr << ros_message->substep;
  }

  // Field name: control_interval
  {
    cdr << ros_message->control_interval;
  }

  // Field name: trajectory_setpoint_dt_mean
  {
    cdr << ros_message->trajectory_setpoint_dt_mean;
  }

  // Field name: trajectory_setpoint_dt_max
  {
    cdr << ros_message->trajectory_setpoint_dt_max;
  }

  // Field name: trajectory_setpoint_dt_max_since_activation
  {
    cdr << ros_message->trajectory_setpoint_dt_max_since_activation;
  }

  // Field name: internal_reference_position
  {
    size_t size = 3;
    auto array_ptr = ros_message->internal_reference_position;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: internal_reference_linear_velocity
  {
    size_t size = 3;
    auto array_ptr = ros_message->internal_reference_linear_velocity;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RaptorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RaptorStatus__ros_msg_type * ros_message = static_cast<_RaptorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: subscription_update_angular_velocity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->subscription_update_angular_velocity = tmp ? true : false;
  }

  // Field name: subscription_update_local_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->subscription_update_local_position = tmp ? true : false;
  }

  // Field name: subscription_update_attitude
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->subscription_update_attitude = tmp ? true : false;
  }

  // Field name: subscription_update_trajectory_setpoint
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->subscription_update_trajectory_setpoint = tmp ? true : false;
  }

  // Field name: subscription_update_vehicle_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->subscription_update_vehicle_status = tmp ? true : false;
  }

  // Field name: exit_reason
  {
    cdr >> ros_message->exit_reason;
  }

  // Field name: timestamp_last_vehicle_angular_velocity
  {
    cdr >> ros_message->timestamp_last_vehicle_angular_velocity;
  }

  // Field name: timestamp_last_vehicle_local_position
  {
    cdr >> ros_message->timestamp_last_vehicle_local_position;
  }

  // Field name: timestamp_last_vehicle_attitude
  {
    cdr >> ros_message->timestamp_last_vehicle_attitude;
  }

  // Field name: timestamp_last_trajectory_setpoint
  {
    cdr >> ros_message->timestamp_last_trajectory_setpoint;
  }

  // Field name: vehicle_angular_velocity_stale
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vehicle_angular_velocity_stale = tmp ? true : false;
  }

  // Field name: vehicle_local_position_stale
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vehicle_local_position_stale = tmp ? true : false;
  }

  // Field name: vehicle_attitude_stale
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vehicle_attitude_stale = tmp ? true : false;
  }

  // Field name: trajectory_setpoint_stale
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->trajectory_setpoint_stale = tmp ? true : false;
  }

  // Field name: active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->active = tmp ? true : false;
  }

  // Field name: substep
  {
    cdr >> ros_message->substep;
  }

  // Field name: control_interval
  {
    cdr >> ros_message->control_interval;
  }

  // Field name: trajectory_setpoint_dt_mean
  {
    cdr >> ros_message->trajectory_setpoint_dt_mean;
  }

  // Field name: trajectory_setpoint_dt_max
  {
    cdr >> ros_message->trajectory_setpoint_dt_max;
  }

  // Field name: trajectory_setpoint_dt_max_since_activation
  {
    cdr >> ros_message->trajectory_setpoint_dt_max_since_activation;
  }

  // Field name: internal_reference_position
  {
    size_t size = 3;
    auto array_ptr = ros_message->internal_reference_position;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: internal_reference_linear_velocity
  {
    size_t size = 3;
    auto array_ptr = ros_message->internal_reference_linear_velocity;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__RaptorStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RaptorStatus__ros_msg_type * ros_message = static_cast<const _RaptorStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp_sample
  {
    size_t item_size = sizeof(ros_message->timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name subscription_update_angular_velocity
  {
    size_t item_size = sizeof(ros_message->subscription_update_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name subscription_update_local_position
  {
    size_t item_size = sizeof(ros_message->subscription_update_local_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name subscription_update_attitude
  {
    size_t item_size = sizeof(ros_message->subscription_update_attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name subscription_update_trajectory_setpoint
  {
    size_t item_size = sizeof(ros_message->subscription_update_trajectory_setpoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name subscription_update_vehicle_status
  {
    size_t item_size = sizeof(ros_message->subscription_update_vehicle_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name exit_reason
  {
    size_t item_size = sizeof(ros_message->exit_reason);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp_last_vehicle_angular_velocity
  {
    size_t item_size = sizeof(ros_message->timestamp_last_vehicle_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp_last_vehicle_local_position
  {
    size_t item_size = sizeof(ros_message->timestamp_last_vehicle_local_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp_last_vehicle_attitude
  {
    size_t item_size = sizeof(ros_message->timestamp_last_vehicle_attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp_last_trajectory_setpoint
  {
    size_t item_size = sizeof(ros_message->timestamp_last_trajectory_setpoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_angular_velocity_stale
  {
    size_t item_size = sizeof(ros_message->vehicle_angular_velocity_stale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_local_position_stale
  {
    size_t item_size = sizeof(ros_message->vehicle_local_position_stale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_attitude_stale
  {
    size_t item_size = sizeof(ros_message->vehicle_attitude_stale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trajectory_setpoint_stale
  {
    size_t item_size = sizeof(ros_message->trajectory_setpoint_stale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active
  {
    size_t item_size = sizeof(ros_message->active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name substep
  {
    size_t item_size = sizeof(ros_message->substep);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_interval
  {
    size_t item_size = sizeof(ros_message->control_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trajectory_setpoint_dt_mean
  {
    size_t item_size = sizeof(ros_message->trajectory_setpoint_dt_mean);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trajectory_setpoint_dt_max
  {
    size_t item_size = sizeof(ros_message->trajectory_setpoint_dt_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trajectory_setpoint_dt_max_since_activation
  {
    size_t item_size = sizeof(ros_message->trajectory_setpoint_dt_max_since_activation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name internal_reference_position
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->internal_reference_position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name internal_reference_linear_velocity
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->internal_reference_linear_velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RaptorStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__RaptorStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__RaptorStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timestamp_sample
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: subscription_update_angular_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: subscription_update_local_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: subscription_update_attitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: subscription_update_trajectory_setpoint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: subscription_update_vehicle_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: exit_reason
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: timestamp_last_vehicle_angular_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: timestamp_last_vehicle_local_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: timestamp_last_vehicle_attitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: timestamp_last_trajectory_setpoint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vehicle_angular_velocity_stale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vehicle_local_position_stale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vehicle_attitude_stale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trajectory_setpoint_stale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: substep
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: control_interval
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trajectory_setpoint_dt_mean
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trajectory_setpoint_dt_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: trajectory_setpoint_dt_max_since_activation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: internal_reference_position
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: internal_reference_linear_velocity
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_msgs__msg__RaptorStatus;
    is_plain =
      (
      offsetof(DataType, internal_reference_linear_velocity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RaptorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__RaptorStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RaptorStatus = {
  "px4_msgs::msg",
  "RaptorStatus",
  _RaptorStatus__cdr_serialize,
  _RaptorStatus__cdr_deserialize,
  _RaptorStatus__get_serialized_size,
  _RaptorStatus__max_serialized_size
};

static rosidl_message_type_support_t _RaptorStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RaptorStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, RaptorStatus)() {
  return &_RaptorStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
