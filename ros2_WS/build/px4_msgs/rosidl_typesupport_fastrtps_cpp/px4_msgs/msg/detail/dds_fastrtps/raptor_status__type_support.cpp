// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/RaptorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/raptor_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/raptor_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::RaptorStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: timestamp_sample
  cdr << ros_message.timestamp_sample;
  // Member: subscription_update_angular_velocity
  cdr << (ros_message.subscription_update_angular_velocity ? true : false);
  // Member: subscription_update_local_position
  cdr << (ros_message.subscription_update_local_position ? true : false);
  // Member: subscription_update_attitude
  cdr << (ros_message.subscription_update_attitude ? true : false);
  // Member: subscription_update_trajectory_setpoint
  cdr << (ros_message.subscription_update_trajectory_setpoint ? true : false);
  // Member: subscription_update_vehicle_status
  cdr << (ros_message.subscription_update_vehicle_status ? true : false);
  // Member: exit_reason
  cdr << ros_message.exit_reason;
  // Member: timestamp_last_vehicle_angular_velocity
  cdr << ros_message.timestamp_last_vehicle_angular_velocity;
  // Member: timestamp_last_vehicle_local_position
  cdr << ros_message.timestamp_last_vehicle_local_position;
  // Member: timestamp_last_vehicle_attitude
  cdr << ros_message.timestamp_last_vehicle_attitude;
  // Member: timestamp_last_trajectory_setpoint
  cdr << ros_message.timestamp_last_trajectory_setpoint;
  // Member: vehicle_angular_velocity_stale
  cdr << (ros_message.vehicle_angular_velocity_stale ? true : false);
  // Member: vehicle_local_position_stale
  cdr << (ros_message.vehicle_local_position_stale ? true : false);
  // Member: vehicle_attitude_stale
  cdr << (ros_message.vehicle_attitude_stale ? true : false);
  // Member: trajectory_setpoint_stale
  cdr << (ros_message.trajectory_setpoint_stale ? true : false);
  // Member: active
  cdr << (ros_message.active ? true : false);
  // Member: substep
  cdr << ros_message.substep;
  // Member: control_interval
  cdr << ros_message.control_interval;
  // Member: trajectory_setpoint_dt_mean
  cdr << ros_message.trajectory_setpoint_dt_mean;
  // Member: trajectory_setpoint_dt_max
  cdr << ros_message.trajectory_setpoint_dt_max;
  // Member: trajectory_setpoint_dt_max_since_activation
  cdr << ros_message.trajectory_setpoint_dt_max_since_activation;
  // Member: internal_reference_position
  {
    cdr << ros_message.internal_reference_position;
  }
  // Member: internal_reference_linear_velocity
  {
    cdr << ros_message.internal_reference_linear_velocity;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::RaptorStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: timestamp_sample
  cdr >> ros_message.timestamp_sample;

  // Member: subscription_update_angular_velocity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.subscription_update_angular_velocity = tmp ? true : false;
  }

  // Member: subscription_update_local_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.subscription_update_local_position = tmp ? true : false;
  }

  // Member: subscription_update_attitude
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.subscription_update_attitude = tmp ? true : false;
  }

  // Member: subscription_update_trajectory_setpoint
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.subscription_update_trajectory_setpoint = tmp ? true : false;
  }

  // Member: subscription_update_vehicle_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.subscription_update_vehicle_status = tmp ? true : false;
  }

  // Member: exit_reason
  cdr >> ros_message.exit_reason;

  // Member: timestamp_last_vehicle_angular_velocity
  cdr >> ros_message.timestamp_last_vehicle_angular_velocity;

  // Member: timestamp_last_vehicle_local_position
  cdr >> ros_message.timestamp_last_vehicle_local_position;

  // Member: timestamp_last_vehicle_attitude
  cdr >> ros_message.timestamp_last_vehicle_attitude;

  // Member: timestamp_last_trajectory_setpoint
  cdr >> ros_message.timestamp_last_trajectory_setpoint;

  // Member: vehicle_angular_velocity_stale
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vehicle_angular_velocity_stale = tmp ? true : false;
  }

  // Member: vehicle_local_position_stale
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vehicle_local_position_stale = tmp ? true : false;
  }

  // Member: vehicle_attitude_stale
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vehicle_attitude_stale = tmp ? true : false;
  }

  // Member: trajectory_setpoint_stale
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.trajectory_setpoint_stale = tmp ? true : false;
  }

  // Member: active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.active = tmp ? true : false;
  }

  // Member: substep
  cdr >> ros_message.substep;

  // Member: control_interval
  cdr >> ros_message.control_interval;

  // Member: trajectory_setpoint_dt_mean
  cdr >> ros_message.trajectory_setpoint_dt_mean;

  // Member: trajectory_setpoint_dt_max
  cdr >> ros_message.trajectory_setpoint_dt_max;

  // Member: trajectory_setpoint_dt_max_since_activation
  cdr >> ros_message.trajectory_setpoint_dt_max_since_activation;

  // Member: internal_reference_position
  {
    cdr >> ros_message.internal_reference_position;
  }

  // Member: internal_reference_linear_velocity
  {
    cdr >> ros_message.internal_reference_linear_velocity;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::RaptorStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp_sample
  {
    size_t item_size = sizeof(ros_message.timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: subscription_update_angular_velocity
  {
    size_t item_size = sizeof(ros_message.subscription_update_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: subscription_update_local_position
  {
    size_t item_size = sizeof(ros_message.subscription_update_local_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: subscription_update_attitude
  {
    size_t item_size = sizeof(ros_message.subscription_update_attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: subscription_update_trajectory_setpoint
  {
    size_t item_size = sizeof(ros_message.subscription_update_trajectory_setpoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: subscription_update_vehicle_status
  {
    size_t item_size = sizeof(ros_message.subscription_update_vehicle_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: exit_reason
  {
    size_t item_size = sizeof(ros_message.exit_reason);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp_last_vehicle_angular_velocity
  {
    size_t item_size = sizeof(ros_message.timestamp_last_vehicle_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp_last_vehicle_local_position
  {
    size_t item_size = sizeof(ros_message.timestamp_last_vehicle_local_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp_last_vehicle_attitude
  {
    size_t item_size = sizeof(ros_message.timestamp_last_vehicle_attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp_last_trajectory_setpoint
  {
    size_t item_size = sizeof(ros_message.timestamp_last_trajectory_setpoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_angular_velocity_stale
  {
    size_t item_size = sizeof(ros_message.vehicle_angular_velocity_stale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_local_position_stale
  {
    size_t item_size = sizeof(ros_message.vehicle_local_position_stale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_attitude_stale
  {
    size_t item_size = sizeof(ros_message.vehicle_attitude_stale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trajectory_setpoint_stale
  {
    size_t item_size = sizeof(ros_message.trajectory_setpoint_stale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active
  {
    size_t item_size = sizeof(ros_message.active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: substep
  {
    size_t item_size = sizeof(ros_message.substep);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: control_interval
  {
    size_t item_size = sizeof(ros_message.control_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trajectory_setpoint_dt_mean
  {
    size_t item_size = sizeof(ros_message.trajectory_setpoint_dt_mean);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trajectory_setpoint_dt_max
  {
    size_t item_size = sizeof(ros_message.trajectory_setpoint_dt_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trajectory_setpoint_dt_max_since_activation
  {
    size_t item_size = sizeof(ros_message.trajectory_setpoint_dt_max_since_activation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: internal_reference_position
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.internal_reference_position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: internal_reference_linear_velocity
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.internal_reference_linear_velocity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_RaptorStatus(
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


  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: timestamp_sample
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: subscription_update_angular_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: subscription_update_local_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: subscription_update_attitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: subscription_update_trajectory_setpoint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: subscription_update_vehicle_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: exit_reason
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: timestamp_last_vehicle_angular_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: timestamp_last_vehicle_local_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: timestamp_last_vehicle_attitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: timestamp_last_trajectory_setpoint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vehicle_angular_velocity_stale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vehicle_local_position_stale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vehicle_attitude_stale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trajectory_setpoint_stale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: substep
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: control_interval
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trajectory_setpoint_dt_mean
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trajectory_setpoint_dt_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trajectory_setpoint_dt_max_since_activation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: internal_reference_position
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: internal_reference_linear_velocity
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
    using DataType = px4_msgs::msg::RaptorStatus;
    is_plain =
      (
      offsetof(DataType, internal_reference_linear_velocity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RaptorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::RaptorStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RaptorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::RaptorStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RaptorStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::RaptorStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RaptorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RaptorStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RaptorStatus__callbacks = {
  "px4_msgs::msg",
  "RaptorStatus",
  _RaptorStatus__cdr_serialize,
  _RaptorStatus__cdr_deserialize,
  _RaptorStatus__get_serialized_size,
  _RaptorStatus__max_serialized_size
};

static rosidl_message_type_support_t _RaptorStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RaptorStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::RaptorStatus>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_RaptorStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, RaptorStatus)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_RaptorStatus__handle;
}

#ifdef __cplusplus
}
#endif
