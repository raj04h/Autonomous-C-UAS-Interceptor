// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/VtePosition.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vte_position__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/vte_position__struct.h"
#include "px4_msgs/msg/detail/vte_position__functions.h"
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


using _VtePosition__ros_msg_type = px4_msgs__msg__VtePosition;

static bool _VtePosition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VtePosition__ros_msg_type * ros_message = static_cast<const _VtePosition__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: rel_pos_valid
  {
    cdr << (ros_message->rel_pos_valid ? true : false);
  }

  // Field name: rel_vel_valid
  {
    cdr << (ros_message->rel_vel_valid ? true : false);
  }

  // Field name: rel_pos
  {
    size_t size = 3;
    auto array_ptr = ros_message->rel_pos;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vel_uav
  {
    size_t size = 3;
    auto array_ptr = ros_message->vel_uav;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vel_target
  {
    size_t size = 3;
    auto array_ptr = ros_message->vel_target;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: bias
  {
    size_t size = 3;
    auto array_ptr = ros_message->bias;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: acc_target
  {
    size_t size = 3;
    auto array_ptr = ros_message->acc_target;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cov_rel_pos
  {
    size_t size = 3;
    auto array_ptr = ros_message->cov_rel_pos;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cov_vel_uav
  {
    size_t size = 3;
    auto array_ptr = ros_message->cov_vel_uav;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cov_bias
  {
    size_t size = 3;
    auto array_ptr = ros_message->cov_bias;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cov_vel_target
  {
    size_t size = 3;
    auto array_ptr = ros_message->cov_vel_target;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cov_acc_target
  {
    size_t size = 3;
    auto array_ptr = ros_message->cov_acc_target;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _VtePosition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VtePosition__ros_msg_type * ros_message = static_cast<_VtePosition__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: rel_pos_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rel_pos_valid = tmp ? true : false;
  }

  // Field name: rel_vel_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rel_vel_valid = tmp ? true : false;
  }

  // Field name: rel_pos
  {
    size_t size = 3;
    auto array_ptr = ros_message->rel_pos;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vel_uav
  {
    size_t size = 3;
    auto array_ptr = ros_message->vel_uav;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vel_target
  {
    size_t size = 3;
    auto array_ptr = ros_message->vel_target;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: bias
  {
    size_t size = 3;
    auto array_ptr = ros_message->bias;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: acc_target
  {
    size_t size = 3;
    auto array_ptr = ros_message->acc_target;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cov_rel_pos
  {
    size_t size = 3;
    auto array_ptr = ros_message->cov_rel_pos;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cov_vel_uav
  {
    size_t size = 3;
    auto array_ptr = ros_message->cov_vel_uav;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cov_bias
  {
    size_t size = 3;
    auto array_ptr = ros_message->cov_bias;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cov_vel_target
  {
    size_t size = 3;
    auto array_ptr = ros_message->cov_vel_target;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cov_acc_target
  {
    size_t size = 3;
    auto array_ptr = ros_message->cov_acc_target;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__VtePosition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VtePosition__ros_msg_type * ros_message = static_cast<const _VtePosition__ros_msg_type *>(untyped_ros_message);
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
  // field.name rel_pos_valid
  {
    size_t item_size = sizeof(ros_message->rel_pos_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rel_vel_valid
  {
    size_t item_size = sizeof(ros_message->rel_vel_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rel_pos
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->rel_pos;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_uav
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->vel_uav;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_target
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->vel_target;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bias
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->bias;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_target
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->acc_target;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_rel_pos
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->cov_rel_pos;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_vel_uav
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->cov_vel_uav;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_bias
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->cov_bias;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_vel_target
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->cov_vel_target;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_acc_target
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->cov_acc_target;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VtePosition__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__VtePosition(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__VtePosition(
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
  // member: rel_pos_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rel_vel_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rel_pos
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_uav
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_target
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bias
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acc_target
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_rel_pos
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_vel_uav
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_bias
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_vel_target
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_acc_target
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
    using DataType = px4_msgs__msg__VtePosition;
    is_plain =
      (
      offsetof(DataType, cov_acc_target) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VtePosition__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__VtePosition(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VtePosition = {
  "px4_msgs::msg",
  "VtePosition",
  _VtePosition__cdr_serialize,
  _VtePosition__cdr_deserialize,
  _VtePosition__get_serialized_size,
  _VtePosition__max_serialized_size
};

static rosidl_message_type_support_t _VtePosition__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VtePosition,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, VtePosition)() {
  return &_VtePosition__type_support;
}

#if defined(__cplusplus)
}
#endif
