// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/FixedWingLongitudinalSetpoint.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/fixed_wing_longitudinal_setpoint__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/fixed_wing_longitudinal_setpoint__struct.h"
#include "px4_msgs/msg/detail/fixed_wing_longitudinal_setpoint__functions.h"
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


using _FixedWingLongitudinalSetpoint__ros_msg_type = px4_msgs__msg__FixedWingLongitudinalSetpoint;

static bool _FixedWingLongitudinalSetpoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FixedWingLongitudinalSetpoint__ros_msg_type * ros_message = static_cast<const _FixedWingLongitudinalSetpoint__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: altitude
  {
    cdr << ros_message->altitude;
  }

  // Field name: height_rate
  {
    cdr << ros_message->height_rate;
  }

  // Field name: equivalent_airspeed
  {
    cdr << ros_message->equivalent_airspeed;
  }

  // Field name: pitch_direct
  {
    cdr << ros_message->pitch_direct;
  }

  // Field name: throttle_direct
  {
    cdr << ros_message->throttle_direct;
  }

  return true;
}

static bool _FixedWingLongitudinalSetpoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FixedWingLongitudinalSetpoint__ros_msg_type * ros_message = static_cast<_FixedWingLongitudinalSetpoint__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: altitude
  {
    cdr >> ros_message->altitude;
  }

  // Field name: height_rate
  {
    cdr >> ros_message->height_rate;
  }

  // Field name: equivalent_airspeed
  {
    cdr >> ros_message->equivalent_airspeed;
  }

  // Field name: pitch_direct
  {
    cdr >> ros_message->pitch_direct;
  }

  // Field name: throttle_direct
  {
    cdr >> ros_message->throttle_direct;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__FixedWingLongitudinalSetpoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FixedWingLongitudinalSetpoint__ros_msg_type * ros_message = static_cast<const _FixedWingLongitudinalSetpoint__ros_msg_type *>(untyped_ros_message);
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
  // field.name altitude
  {
    size_t item_size = sizeof(ros_message->altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height_rate
  {
    size_t item_size = sizeof(ros_message->height_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name equivalent_airspeed
  {
    size_t item_size = sizeof(ros_message->equivalent_airspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_direct
  {
    size_t item_size = sizeof(ros_message->pitch_direct);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_direct
  {
    size_t item_size = sizeof(ros_message->throttle_direct);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FixedWingLongitudinalSetpoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__FixedWingLongitudinalSetpoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__FixedWingLongitudinalSetpoint(
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
  // member: altitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: equivalent_airspeed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_direct
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: throttle_direct
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_msgs__msg__FixedWingLongitudinalSetpoint;
    is_plain =
      (
      offsetof(DataType, throttle_direct) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FixedWingLongitudinalSetpoint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__FixedWingLongitudinalSetpoint(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FixedWingLongitudinalSetpoint = {
  "px4_msgs::msg",
  "FixedWingLongitudinalSetpoint",
  _FixedWingLongitudinalSetpoint__cdr_serialize,
  _FixedWingLongitudinalSetpoint__cdr_deserialize,
  _FixedWingLongitudinalSetpoint__get_serialized_size,
  _FixedWingLongitudinalSetpoint__max_serialized_size
};

static rosidl_message_type_support_t _FixedWingLongitudinalSetpoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FixedWingLongitudinalSetpoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, FixedWingLongitudinalSetpoint)() {
  return &_FixedWingLongitudinalSetpoint__type_support;
}

#if defined(__cplusplus)
}
#endif
