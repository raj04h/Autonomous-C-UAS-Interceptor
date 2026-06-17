// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/FixedWingLateralGuidanceStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/fixed_wing_lateral_guidance_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/fixed_wing_lateral_guidance_status__struct.h"
#include "px4_msgs/msg/detail/fixed_wing_lateral_guidance_status__functions.h"
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


using _FixedWingLateralGuidanceStatus__ros_msg_type = px4_msgs__msg__FixedWingLateralGuidanceStatus;

static bool _FixedWingLateralGuidanceStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FixedWingLateralGuidanceStatus__ros_msg_type * ros_message = static_cast<const _FixedWingLateralGuidanceStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: course_setpoint
  {
    cdr << ros_message->course_setpoint;
  }

  // Field name: lateral_acceleration_ff
  {
    cdr << ros_message->lateral_acceleration_ff;
  }

  // Field name: bearing_feas
  {
    cdr << ros_message->bearing_feas;
  }

  // Field name: bearing_feas_on_track
  {
    cdr << ros_message->bearing_feas_on_track;
  }

  // Field name: signed_track_error
  {
    cdr << ros_message->signed_track_error;
  }

  // Field name: track_error_bound
  {
    cdr << ros_message->track_error_bound;
  }

  // Field name: switch_distance
  {
    cdr << ros_message->switch_distance;
  }

  // Field name: adapted_period
  {
    cdr << ros_message->adapted_period;
  }

  // Field name: wind_est_valid
  {
    cdr << ros_message->wind_est_valid;
  }

  return true;
}

static bool _FixedWingLateralGuidanceStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FixedWingLateralGuidanceStatus__ros_msg_type * ros_message = static_cast<_FixedWingLateralGuidanceStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: course_setpoint
  {
    cdr >> ros_message->course_setpoint;
  }

  // Field name: lateral_acceleration_ff
  {
    cdr >> ros_message->lateral_acceleration_ff;
  }

  // Field name: bearing_feas
  {
    cdr >> ros_message->bearing_feas;
  }

  // Field name: bearing_feas_on_track
  {
    cdr >> ros_message->bearing_feas_on_track;
  }

  // Field name: signed_track_error
  {
    cdr >> ros_message->signed_track_error;
  }

  // Field name: track_error_bound
  {
    cdr >> ros_message->track_error_bound;
  }

  // Field name: switch_distance
  {
    cdr >> ros_message->switch_distance;
  }

  // Field name: adapted_period
  {
    cdr >> ros_message->adapted_period;
  }

  // Field name: wind_est_valid
  {
    cdr >> ros_message->wind_est_valid;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__FixedWingLateralGuidanceStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FixedWingLateralGuidanceStatus__ros_msg_type * ros_message = static_cast<const _FixedWingLateralGuidanceStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name course_setpoint
  {
    size_t item_size = sizeof(ros_message->course_setpoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_acceleration_ff
  {
    size_t item_size = sizeof(ros_message->lateral_acceleration_ff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bearing_feas
  {
    size_t item_size = sizeof(ros_message->bearing_feas);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bearing_feas_on_track
  {
    size_t item_size = sizeof(ros_message->bearing_feas_on_track);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signed_track_error
  {
    size_t item_size = sizeof(ros_message->signed_track_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name track_error_bound
  {
    size_t item_size = sizeof(ros_message->track_error_bound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name switch_distance
  {
    size_t item_size = sizeof(ros_message->switch_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name adapted_period
  {
    size_t item_size = sizeof(ros_message->adapted_period);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wind_est_valid
  {
    size_t item_size = sizeof(ros_message->wind_est_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FixedWingLateralGuidanceStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__FixedWingLateralGuidanceStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__FixedWingLateralGuidanceStatus(
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
  // member: course_setpoint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lateral_acceleration_ff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bearing_feas
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bearing_feas_on_track
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: signed_track_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: track_error_bound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: switch_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: adapted_period
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wind_est_valid
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
    using DataType = px4_msgs__msg__FixedWingLateralGuidanceStatus;
    is_plain =
      (
      offsetof(DataType, wind_est_valid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FixedWingLateralGuidanceStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__FixedWingLateralGuidanceStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FixedWingLateralGuidanceStatus = {
  "px4_msgs::msg",
  "FixedWingLateralGuidanceStatus",
  _FixedWingLateralGuidanceStatus__cdr_serialize,
  _FixedWingLateralGuidanceStatus__cdr_deserialize,
  _FixedWingLateralGuidanceStatus__get_serialized_size,
  _FixedWingLateralGuidanceStatus__max_serialized_size
};

static rosidl_message_type_support_t _FixedWingLateralGuidanceStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FixedWingLateralGuidanceStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, FixedWingLateralGuidanceStatus)() {
  return &_FixedWingLateralGuidanceStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
