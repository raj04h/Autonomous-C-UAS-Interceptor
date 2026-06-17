// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/OpenDroneIdSystem.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/open_drone_id_system__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/open_drone_id_system__struct.hpp"

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
  const px4_msgs::msg::OpenDroneIdSystem & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: id_or_mac
  {
    cdr << ros_message.id_or_mac;
  }
  // Member: operator_location_type
  cdr << ros_message.operator_location_type;
  // Member: classification_type
  cdr << ros_message.classification_type;
  // Member: operator_latitude
  cdr << ros_message.operator_latitude;
  // Member: operator_longitude
  cdr << ros_message.operator_longitude;
  // Member: area_count
  cdr << ros_message.area_count;
  // Member: area_radius
  cdr << ros_message.area_radius;
  // Member: area_ceiling
  cdr << ros_message.area_ceiling;
  // Member: area_floor
  cdr << ros_message.area_floor;
  // Member: category_eu
  cdr << ros_message.category_eu;
  // Member: class_eu
  cdr << ros_message.class_eu;
  // Member: operator_altitude_geo
  cdr << ros_message.operator_altitude_geo;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::OpenDroneIdSystem & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: id_or_mac
  {
    cdr >> ros_message.id_or_mac;
  }

  // Member: operator_location_type
  cdr >> ros_message.operator_location_type;

  // Member: classification_type
  cdr >> ros_message.classification_type;

  // Member: operator_latitude
  cdr >> ros_message.operator_latitude;

  // Member: operator_longitude
  cdr >> ros_message.operator_longitude;

  // Member: area_count
  cdr >> ros_message.area_count;

  // Member: area_radius
  cdr >> ros_message.area_radius;

  // Member: area_ceiling
  cdr >> ros_message.area_ceiling;

  // Member: area_floor
  cdr >> ros_message.area_floor;

  // Member: category_eu
  cdr >> ros_message.category_eu;

  // Member: class_eu
  cdr >> ros_message.class_eu;

  // Member: operator_altitude_geo
  cdr >> ros_message.operator_altitude_geo;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::OpenDroneIdSystem & ros_message,
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
  // Member: id_or_mac
  {
    size_t array_size = 20;
    size_t item_size = sizeof(ros_message.id_or_mac[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: operator_location_type
  {
    size_t item_size = sizeof(ros_message.operator_location_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: classification_type
  {
    size_t item_size = sizeof(ros_message.classification_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: operator_latitude
  {
    size_t item_size = sizeof(ros_message.operator_latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: operator_longitude
  {
    size_t item_size = sizeof(ros_message.operator_longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: area_count
  {
    size_t item_size = sizeof(ros_message.area_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: area_radius
  {
    size_t item_size = sizeof(ros_message.area_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: area_ceiling
  {
    size_t item_size = sizeof(ros_message.area_ceiling);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: area_floor
  {
    size_t item_size = sizeof(ros_message.area_floor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: category_eu
  {
    size_t item_size = sizeof(ros_message.category_eu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: class_eu
  {
    size_t item_size = sizeof(ros_message.class_eu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: operator_altitude_geo
  {
    size_t item_size = sizeof(ros_message.operator_altitude_geo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_OpenDroneIdSystem(
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

  // Member: id_or_mac
  {
    size_t array_size = 20;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: operator_location_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: classification_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: operator_latitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: operator_longitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: area_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: area_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: area_ceiling
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: area_floor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: category_eu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: class_eu
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: operator_altitude_geo
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
    using DataType = px4_msgs::msg::OpenDroneIdSystem;
    is_plain =
      (
      offsetof(DataType, operator_altitude_geo) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _OpenDroneIdSystem__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::OpenDroneIdSystem *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OpenDroneIdSystem__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::OpenDroneIdSystem *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OpenDroneIdSystem__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::OpenDroneIdSystem *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OpenDroneIdSystem__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_OpenDroneIdSystem(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _OpenDroneIdSystem__callbacks = {
  "px4_msgs::msg",
  "OpenDroneIdSystem",
  _OpenDroneIdSystem__cdr_serialize,
  _OpenDroneIdSystem__cdr_deserialize,
  _OpenDroneIdSystem__get_serialized_size,
  _OpenDroneIdSystem__max_serialized_size
};

static rosidl_message_type_support_t _OpenDroneIdSystem__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OpenDroneIdSystem__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::OpenDroneIdSystem>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_OpenDroneIdSystem__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, OpenDroneIdSystem)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_OpenDroneIdSystem__handle;
}

#ifdef __cplusplus
}
#endif
