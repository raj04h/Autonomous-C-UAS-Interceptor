// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/FixedWingLateralGuidanceStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/fixed_wing_lateral_guidance_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/fixed_wing_lateral_guidance_status__struct.hpp"

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
  const px4_msgs::msg::FixedWingLateralGuidanceStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: course_setpoint
  cdr << ros_message.course_setpoint;
  // Member: lateral_acceleration_ff
  cdr << ros_message.lateral_acceleration_ff;
  // Member: bearing_feas
  cdr << ros_message.bearing_feas;
  // Member: bearing_feas_on_track
  cdr << ros_message.bearing_feas_on_track;
  // Member: signed_track_error
  cdr << ros_message.signed_track_error;
  // Member: track_error_bound
  cdr << ros_message.track_error_bound;
  // Member: switch_distance
  cdr << ros_message.switch_distance;
  // Member: adapted_period
  cdr << ros_message.adapted_period;
  // Member: wind_est_valid
  cdr << ros_message.wind_est_valid;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::FixedWingLateralGuidanceStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: course_setpoint
  cdr >> ros_message.course_setpoint;

  // Member: lateral_acceleration_ff
  cdr >> ros_message.lateral_acceleration_ff;

  // Member: bearing_feas
  cdr >> ros_message.bearing_feas;

  // Member: bearing_feas_on_track
  cdr >> ros_message.bearing_feas_on_track;

  // Member: signed_track_error
  cdr >> ros_message.signed_track_error;

  // Member: track_error_bound
  cdr >> ros_message.track_error_bound;

  // Member: switch_distance
  cdr >> ros_message.switch_distance;

  // Member: adapted_period
  cdr >> ros_message.adapted_period;

  // Member: wind_est_valid
  cdr >> ros_message.wind_est_valid;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::FixedWingLateralGuidanceStatus & ros_message,
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
  // Member: course_setpoint
  {
    size_t item_size = sizeof(ros_message.course_setpoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lateral_acceleration_ff
  {
    size_t item_size = sizeof(ros_message.lateral_acceleration_ff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bearing_feas
  {
    size_t item_size = sizeof(ros_message.bearing_feas);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bearing_feas_on_track
  {
    size_t item_size = sizeof(ros_message.bearing_feas_on_track);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: signed_track_error
  {
    size_t item_size = sizeof(ros_message.signed_track_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: track_error_bound
  {
    size_t item_size = sizeof(ros_message.track_error_bound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: switch_distance
  {
    size_t item_size = sizeof(ros_message.switch_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: adapted_period
  {
    size_t item_size = sizeof(ros_message.adapted_period);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wind_est_valid
  {
    size_t item_size = sizeof(ros_message.wind_est_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_FixedWingLateralGuidanceStatus(
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

  // Member: course_setpoint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lateral_acceleration_ff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bearing_feas
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bearing_feas_on_track
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: signed_track_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: track_error_bound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: switch_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: adapted_period
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wind_est_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_msgs::msg::FixedWingLateralGuidanceStatus;
    is_plain =
      (
      offsetof(DataType, wind_est_valid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _FixedWingLateralGuidanceStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::FixedWingLateralGuidanceStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FixedWingLateralGuidanceStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::FixedWingLateralGuidanceStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FixedWingLateralGuidanceStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::FixedWingLateralGuidanceStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FixedWingLateralGuidanceStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FixedWingLateralGuidanceStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FixedWingLateralGuidanceStatus__callbacks = {
  "px4_msgs::msg",
  "FixedWingLateralGuidanceStatus",
  _FixedWingLateralGuidanceStatus__cdr_serialize,
  _FixedWingLateralGuidanceStatus__cdr_deserialize,
  _FixedWingLateralGuidanceStatus__get_serialized_size,
  _FixedWingLateralGuidanceStatus__max_serialized_size
};

static rosidl_message_type_support_t _FixedWingLateralGuidanceStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FixedWingLateralGuidanceStatus__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::FixedWingLateralGuidanceStatus>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_FixedWingLateralGuidanceStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, FixedWingLateralGuidanceStatus)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_FixedWingLateralGuidanceStatus__handle;
}

#ifdef __cplusplus
}
#endif
