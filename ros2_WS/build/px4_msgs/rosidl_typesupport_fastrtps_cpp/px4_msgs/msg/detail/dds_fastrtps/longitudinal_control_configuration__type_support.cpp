// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/LongitudinalControlConfiguration.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/longitudinal_control_configuration__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/longitudinal_control_configuration__struct.hpp"

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
  const px4_msgs::msg::LongitudinalControlConfiguration & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: pitch_min
  cdr << ros_message.pitch_min;
  // Member: pitch_max
  cdr << ros_message.pitch_max;
  // Member: throttle_min
  cdr << ros_message.throttle_min;
  // Member: throttle_max
  cdr << ros_message.throttle_max;
  // Member: climb_rate_target
  cdr << ros_message.climb_rate_target;
  // Member: sink_rate_target
  cdr << ros_message.sink_rate_target;
  // Member: speed_weight
  cdr << ros_message.speed_weight;
  // Member: enforce_low_height_condition
  cdr << (ros_message.enforce_low_height_condition ? true : false);
  // Member: disable_underspeed_protection
  cdr << (ros_message.disable_underspeed_protection ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::LongitudinalControlConfiguration & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: pitch_min
  cdr >> ros_message.pitch_min;

  // Member: pitch_max
  cdr >> ros_message.pitch_max;

  // Member: throttle_min
  cdr >> ros_message.throttle_min;

  // Member: throttle_max
  cdr >> ros_message.throttle_max;

  // Member: climb_rate_target
  cdr >> ros_message.climb_rate_target;

  // Member: sink_rate_target
  cdr >> ros_message.sink_rate_target;

  // Member: speed_weight
  cdr >> ros_message.speed_weight;

  // Member: enforce_low_height_condition
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enforce_low_height_condition = tmp ? true : false;
  }

  // Member: disable_underspeed_protection
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.disable_underspeed_protection = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::LongitudinalControlConfiguration & ros_message,
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
  // Member: pitch_min
  {
    size_t item_size = sizeof(ros_message.pitch_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_max
  {
    size_t item_size = sizeof(ros_message.pitch_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_min
  {
    size_t item_size = sizeof(ros_message.throttle_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_max
  {
    size_t item_size = sizeof(ros_message.throttle_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: climb_rate_target
  {
    size_t item_size = sizeof(ros_message.climb_rate_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sink_rate_target
  {
    size_t item_size = sizeof(ros_message.sink_rate_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_weight
  {
    size_t item_size = sizeof(ros_message.speed_weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enforce_low_height_condition
  {
    size_t item_size = sizeof(ros_message.enforce_low_height_condition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: disable_underspeed_protection
  {
    size_t item_size = sizeof(ros_message.disable_underspeed_protection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_LongitudinalControlConfiguration(
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

  // Member: pitch_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: throttle_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: throttle_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: climb_rate_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sink_rate_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_weight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: enforce_low_height_condition
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: disable_underspeed_protection
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
    using DataType = px4_msgs::msg::LongitudinalControlConfiguration;
    is_plain =
      (
      offsetof(DataType, disable_underspeed_protection) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LongitudinalControlConfiguration__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::LongitudinalControlConfiguration *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LongitudinalControlConfiguration__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::LongitudinalControlConfiguration *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LongitudinalControlConfiguration__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::LongitudinalControlConfiguration *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LongitudinalControlConfiguration__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LongitudinalControlConfiguration(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LongitudinalControlConfiguration__callbacks = {
  "px4_msgs::msg",
  "LongitudinalControlConfiguration",
  _LongitudinalControlConfiguration__cdr_serialize,
  _LongitudinalControlConfiguration__cdr_deserialize,
  _LongitudinalControlConfiguration__get_serialized_size,
  _LongitudinalControlConfiguration__max_serialized_size
};

static rosidl_message_type_support_t _LongitudinalControlConfiguration__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LongitudinalControlConfiguration__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::LongitudinalControlConfiguration>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_LongitudinalControlConfiguration__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, LongitudinalControlConfiguration)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_LongitudinalControlConfiguration__handle;
}

#ifdef __cplusplus
}
#endif
