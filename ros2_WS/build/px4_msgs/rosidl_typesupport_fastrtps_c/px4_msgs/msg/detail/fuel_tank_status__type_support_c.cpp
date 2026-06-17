// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/FuelTankStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/fuel_tank_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/fuel_tank_status__struct.h"
#include "px4_msgs/msg/detail/fuel_tank_status__functions.h"
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


using _FuelTankStatus__ros_msg_type = px4_msgs__msg__FuelTankStatus;

static bool _FuelTankStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FuelTankStatus__ros_msg_type * ros_message = static_cast<const _FuelTankStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: maximum_fuel_capacity
  {
    cdr << ros_message->maximum_fuel_capacity;
  }

  // Field name: consumed_fuel
  {
    cdr << ros_message->consumed_fuel;
  }

  // Field name: fuel_consumption_rate
  {
    cdr << ros_message->fuel_consumption_rate;
  }

  // Field name: percent_remaining
  {
    cdr << ros_message->percent_remaining;
  }

  // Field name: remaining_fuel
  {
    cdr << ros_message->remaining_fuel;
  }

  // Field name: fuel_tank_id
  {
    cdr << ros_message->fuel_tank_id;
  }

  // Field name: fuel_type
  {
    cdr << ros_message->fuel_type;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  return true;
}

static bool _FuelTankStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FuelTankStatus__ros_msg_type * ros_message = static_cast<_FuelTankStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: maximum_fuel_capacity
  {
    cdr >> ros_message->maximum_fuel_capacity;
  }

  // Field name: consumed_fuel
  {
    cdr >> ros_message->consumed_fuel;
  }

  // Field name: fuel_consumption_rate
  {
    cdr >> ros_message->fuel_consumption_rate;
  }

  // Field name: percent_remaining
  {
    cdr >> ros_message->percent_remaining;
  }

  // Field name: remaining_fuel
  {
    cdr >> ros_message->remaining_fuel;
  }

  // Field name: fuel_tank_id
  {
    cdr >> ros_message->fuel_tank_id;
  }

  // Field name: fuel_type
  {
    cdr >> ros_message->fuel_type;
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__FuelTankStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FuelTankStatus__ros_msg_type * ros_message = static_cast<const _FuelTankStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name maximum_fuel_capacity
  {
    size_t item_size = sizeof(ros_message->maximum_fuel_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name consumed_fuel
  {
    size_t item_size = sizeof(ros_message->consumed_fuel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_consumption_rate
  {
    size_t item_size = sizeof(ros_message->fuel_consumption_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name percent_remaining
  {
    size_t item_size = sizeof(ros_message->percent_remaining);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remaining_fuel
  {
    size_t item_size = sizeof(ros_message->remaining_fuel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_tank_id
  {
    size_t item_size = sizeof(ros_message->fuel_tank_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_type
  {
    size_t item_size = sizeof(ros_message->fuel_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FuelTankStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__FuelTankStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__FuelTankStatus(
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
  // member: maximum_fuel_capacity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: consumed_fuel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fuel_consumption_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: percent_remaining
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: remaining_fuel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fuel_tank_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fuel_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temperature
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
    using DataType = px4_msgs__msg__FuelTankStatus;
    is_plain =
      (
      offsetof(DataType, temperature) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FuelTankStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__FuelTankStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FuelTankStatus = {
  "px4_msgs::msg",
  "FuelTankStatus",
  _FuelTankStatus__cdr_serialize,
  _FuelTankStatus__cdr_deserialize,
  _FuelTankStatus__get_serialized_size,
  _FuelTankStatus__max_serialized_size
};

static rosidl_message_type_support_t _FuelTankStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FuelTankStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, FuelTankStatus)() {
  return &_FuelTankStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
