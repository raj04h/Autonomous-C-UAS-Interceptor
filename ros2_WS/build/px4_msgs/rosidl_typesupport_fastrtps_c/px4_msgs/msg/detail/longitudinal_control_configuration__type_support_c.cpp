// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/LongitudinalControlConfiguration.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/longitudinal_control_configuration__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/longitudinal_control_configuration__struct.h"
#include "px4_msgs/msg/detail/longitudinal_control_configuration__functions.h"
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


using _LongitudinalControlConfiguration__ros_msg_type = px4_msgs__msg__LongitudinalControlConfiguration;

static bool _LongitudinalControlConfiguration__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LongitudinalControlConfiguration__ros_msg_type * ros_message = static_cast<const _LongitudinalControlConfiguration__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: pitch_min
  {
    cdr << ros_message->pitch_min;
  }

  // Field name: pitch_max
  {
    cdr << ros_message->pitch_max;
  }

  // Field name: throttle_min
  {
    cdr << ros_message->throttle_min;
  }

  // Field name: throttle_max
  {
    cdr << ros_message->throttle_max;
  }

  // Field name: climb_rate_target
  {
    cdr << ros_message->climb_rate_target;
  }

  // Field name: sink_rate_target
  {
    cdr << ros_message->sink_rate_target;
  }

  // Field name: speed_weight
  {
    cdr << ros_message->speed_weight;
  }

  // Field name: enforce_low_height_condition
  {
    cdr << (ros_message->enforce_low_height_condition ? true : false);
  }

  // Field name: disable_underspeed_protection
  {
    cdr << (ros_message->disable_underspeed_protection ? true : false);
  }

  return true;
}

static bool _LongitudinalControlConfiguration__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LongitudinalControlConfiguration__ros_msg_type * ros_message = static_cast<_LongitudinalControlConfiguration__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: pitch_min
  {
    cdr >> ros_message->pitch_min;
  }

  // Field name: pitch_max
  {
    cdr >> ros_message->pitch_max;
  }

  // Field name: throttle_min
  {
    cdr >> ros_message->throttle_min;
  }

  // Field name: throttle_max
  {
    cdr >> ros_message->throttle_max;
  }

  // Field name: climb_rate_target
  {
    cdr >> ros_message->climb_rate_target;
  }

  // Field name: sink_rate_target
  {
    cdr >> ros_message->sink_rate_target;
  }

  // Field name: speed_weight
  {
    cdr >> ros_message->speed_weight;
  }

  // Field name: enforce_low_height_condition
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enforce_low_height_condition = tmp ? true : false;
  }

  // Field name: disable_underspeed_protection
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->disable_underspeed_protection = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__LongitudinalControlConfiguration(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LongitudinalControlConfiguration__ros_msg_type * ros_message = static_cast<const _LongitudinalControlConfiguration__ros_msg_type *>(untyped_ros_message);
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
  // field.name pitch_min
  {
    size_t item_size = sizeof(ros_message->pitch_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_max
  {
    size_t item_size = sizeof(ros_message->pitch_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_min
  {
    size_t item_size = sizeof(ros_message->throttle_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_max
  {
    size_t item_size = sizeof(ros_message->throttle_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name climb_rate_target
  {
    size_t item_size = sizeof(ros_message->climb_rate_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sink_rate_target
  {
    size_t item_size = sizeof(ros_message->sink_rate_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_weight
  {
    size_t item_size = sizeof(ros_message->speed_weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enforce_low_height_condition
  {
    size_t item_size = sizeof(ros_message->enforce_low_height_condition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disable_underspeed_protection
  {
    size_t item_size = sizeof(ros_message->disable_underspeed_protection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LongitudinalControlConfiguration__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__LongitudinalControlConfiguration(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__LongitudinalControlConfiguration(
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
  // member: pitch_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: throttle_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: throttle_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: climb_rate_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sink_rate_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_weight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: enforce_low_height_condition
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: disable_underspeed_protection
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
    using DataType = px4_msgs__msg__LongitudinalControlConfiguration;
    is_plain =
      (
      offsetof(DataType, disable_underspeed_protection) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LongitudinalControlConfiguration__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__LongitudinalControlConfiguration(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LongitudinalControlConfiguration = {
  "px4_msgs::msg",
  "LongitudinalControlConfiguration",
  _LongitudinalControlConfiguration__cdr_serialize,
  _LongitudinalControlConfiguration__cdr_deserialize,
  _LongitudinalControlConfiguration__get_serialized_size,
  _LongitudinalControlConfiguration__max_serialized_size
};

static rosidl_message_type_support_t _LongitudinalControlConfiguration__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LongitudinalControlConfiguration,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, LongitudinalControlConfiguration)() {
  return &_LongitudinalControlConfiguration__type_support;
}

#if defined(__cplusplus)
}
#endif
