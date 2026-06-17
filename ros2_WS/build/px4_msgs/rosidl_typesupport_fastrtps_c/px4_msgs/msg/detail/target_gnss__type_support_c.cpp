// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/TargetGnss.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/target_gnss__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/target_gnss__struct.h"
#include "px4_msgs/msg/detail/target_gnss__functions.h"
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


using _TargetGnss__ros_msg_type = px4_msgs__msg__TargetGnss;

static bool _TargetGnss__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TargetGnss__ros_msg_type * ros_message = static_cast<const _TargetGnss__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: latitude_deg
  {
    cdr << ros_message->latitude_deg;
  }

  // Field name: longitude_deg
  {
    cdr << ros_message->longitude_deg;
  }

  // Field name: altitude_msl_m
  {
    cdr << ros_message->altitude_msl_m;
  }

  // Field name: eph
  {
    cdr << ros_message->eph;
  }

  // Field name: epv
  {
    cdr << ros_message->epv;
  }

  // Field name: abs_pos_updated
  {
    cdr << (ros_message->abs_pos_updated ? true : false);
  }

  // Field name: vel_n_m_s
  {
    cdr << ros_message->vel_n_m_s;
  }

  // Field name: vel_e_m_s
  {
    cdr << ros_message->vel_e_m_s;
  }

  // Field name: vel_d_m_s
  {
    cdr << ros_message->vel_d_m_s;
  }

  // Field name: s_acc_m_s
  {
    cdr << ros_message->s_acc_m_s;
  }

  // Field name: vel_ned_updated
  {
    cdr << (ros_message->vel_ned_updated ? true : false);
  }

  return true;
}

static bool _TargetGnss__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TargetGnss__ros_msg_type * ros_message = static_cast<_TargetGnss__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: latitude_deg
  {
    cdr >> ros_message->latitude_deg;
  }

  // Field name: longitude_deg
  {
    cdr >> ros_message->longitude_deg;
  }

  // Field name: altitude_msl_m
  {
    cdr >> ros_message->altitude_msl_m;
  }

  // Field name: eph
  {
    cdr >> ros_message->eph;
  }

  // Field name: epv
  {
    cdr >> ros_message->epv;
  }

  // Field name: abs_pos_updated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->abs_pos_updated = tmp ? true : false;
  }

  // Field name: vel_n_m_s
  {
    cdr >> ros_message->vel_n_m_s;
  }

  // Field name: vel_e_m_s
  {
    cdr >> ros_message->vel_e_m_s;
  }

  // Field name: vel_d_m_s
  {
    cdr >> ros_message->vel_d_m_s;
  }

  // Field name: s_acc_m_s
  {
    cdr >> ros_message->s_acc_m_s;
  }

  // Field name: vel_ned_updated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vel_ned_updated = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__TargetGnss(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TargetGnss__ros_msg_type * ros_message = static_cast<const _TargetGnss__ros_msg_type *>(untyped_ros_message);
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
  // field.name latitude_deg
  {
    size_t item_size = sizeof(ros_message->latitude_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude_deg
  {
    size_t item_size = sizeof(ros_message->longitude_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name altitude_msl_m
  {
    size_t item_size = sizeof(ros_message->altitude_msl_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eph
  {
    size_t item_size = sizeof(ros_message->eph);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epv
  {
    size_t item_size = sizeof(ros_message->epv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name abs_pos_updated
  {
    size_t item_size = sizeof(ros_message->abs_pos_updated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_n_m_s
  {
    size_t item_size = sizeof(ros_message->vel_n_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_e_m_s
  {
    size_t item_size = sizeof(ros_message->vel_e_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_d_m_s
  {
    size_t item_size = sizeof(ros_message->vel_d_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name s_acc_m_s
  {
    size_t item_size = sizeof(ros_message->s_acc_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_ned_updated
  {
    size_t item_size = sizeof(ros_message->vel_ned_updated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TargetGnss__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__TargetGnss(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__TargetGnss(
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
  // member: latitude_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitude_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: altitude_msl_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: eph
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: epv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: abs_pos_updated
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vel_n_m_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_e_m_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_d_m_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: s_acc_m_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_ned_updated
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
    using DataType = px4_msgs__msg__TargetGnss;
    is_plain =
      (
      offsetof(DataType, vel_ned_updated) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TargetGnss__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__TargetGnss(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TargetGnss = {
  "px4_msgs::msg",
  "TargetGnss",
  _TargetGnss__cdr_serialize,
  _TargetGnss__cdr_deserialize,
  _TargetGnss__get_serialized_size,
  _TargetGnss__max_serialized_size
};

static rosidl_message_type_support_t _TargetGnss__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TargetGnss,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, TargetGnss)() {
  return &_TargetGnss__type_support;
}

#if defined(__cplusplus)
}
#endif
