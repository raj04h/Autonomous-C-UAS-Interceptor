// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/SensorGnssStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/sensor_gnss_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/sensor_gnss_status__struct.h"
#include "px4_msgs/msg/detail/sensor_gnss_status__functions.h"
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


using _SensorGnssStatus__ros_msg_type = px4_msgs__msg__SensorGnssStatus;

static bool _SensorGnssStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SensorGnssStatus__ros_msg_type * ros_message = static_cast<const _SensorGnssStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: device_id
  {
    cdr << ros_message->device_id;
  }

  // Field name: quality_available
  {
    cdr << (ros_message->quality_available ? true : false);
  }

  // Field name: quality_corrections
  {
    cdr << ros_message->quality_corrections;
  }

  // Field name: quality_receiver
  {
    cdr << ros_message->quality_receiver;
  }

  // Field name: quality_gnss_signals
  {
    cdr << ros_message->quality_gnss_signals;
  }

  // Field name: quality_post_processing
  {
    cdr << ros_message->quality_post_processing;
  }

  return true;
}

static bool _SensorGnssStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SensorGnssStatus__ros_msg_type * ros_message = static_cast<_SensorGnssStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: device_id
  {
    cdr >> ros_message->device_id;
  }

  // Field name: quality_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->quality_available = tmp ? true : false;
  }

  // Field name: quality_corrections
  {
    cdr >> ros_message->quality_corrections;
  }

  // Field name: quality_receiver
  {
    cdr >> ros_message->quality_receiver;
  }

  // Field name: quality_gnss_signals
  {
    cdr >> ros_message->quality_gnss_signals;
  }

  // Field name: quality_post_processing
  {
    cdr >> ros_message->quality_post_processing;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__SensorGnssStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorGnssStatus__ros_msg_type * ros_message = static_cast<const _SensorGnssStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name device_id
  {
    size_t item_size = sizeof(ros_message->device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quality_available
  {
    size_t item_size = sizeof(ros_message->quality_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quality_corrections
  {
    size_t item_size = sizeof(ros_message->quality_corrections);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quality_receiver
  {
    size_t item_size = sizeof(ros_message->quality_receiver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quality_gnss_signals
  {
    size_t item_size = sizeof(ros_message->quality_gnss_signals);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quality_post_processing
  {
    size_t item_size = sizeof(ros_message->quality_post_processing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SensorGnssStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__SensorGnssStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__SensorGnssStatus(
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
  // member: device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: quality_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: quality_corrections
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: quality_receiver
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: quality_gnss_signals
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: quality_post_processing
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
    using DataType = px4_msgs__msg__SensorGnssStatus;
    is_plain =
      (
      offsetof(DataType, quality_post_processing) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SensorGnssStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__SensorGnssStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorGnssStatus = {
  "px4_msgs::msg",
  "SensorGnssStatus",
  _SensorGnssStatus__cdr_serialize,
  _SensorGnssStatus__cdr_deserialize,
  _SensorGnssStatus__get_serialized_size,
  _SensorGnssStatus__max_serialized_size
};

static rosidl_message_type_support_t _SensorGnssStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorGnssStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, SensorGnssStatus)() {
  return &_SensorGnssStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
