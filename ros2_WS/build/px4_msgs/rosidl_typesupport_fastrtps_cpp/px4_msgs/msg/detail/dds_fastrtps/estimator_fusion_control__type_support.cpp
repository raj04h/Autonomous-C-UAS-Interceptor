// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/EstimatorFusionControl.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_fusion_control__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/estimator_fusion_control__struct.hpp"

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
  const px4_msgs::msg::EstimatorFusionControl & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: gps_intended
  {
    cdr << ros_message.gps_intended;
  }
  // Member: of_intended
  cdr << (ros_message.of_intended ? true : false);
  // Member: ev_intended
  cdr << (ros_message.ev_intended ? true : false);
  // Member: agp_intended
  {
    cdr << ros_message.agp_intended;
  }
  // Member: baro_intended
  cdr << (ros_message.baro_intended ? true : false);
  // Member: rng_intended
  cdr << (ros_message.rng_intended ? true : false);
  // Member: mag_intended
  cdr << (ros_message.mag_intended ? true : false);
  // Member: aspd_intended
  cdr << (ros_message.aspd_intended ? true : false);
  // Member: rngbcn_intended
  cdr << (ros_message.rngbcn_intended ? true : false);
  // Member: gps_active
  {
    cdr << ros_message.gps_active;
  }
  // Member: of_active
  cdr << (ros_message.of_active ? true : false);
  // Member: ev_active
  cdr << (ros_message.ev_active ? true : false);
  // Member: agp_active
  {
    cdr << ros_message.agp_active;
  }
  // Member: baro_active
  cdr << (ros_message.baro_active ? true : false);
  // Member: rng_active
  cdr << (ros_message.rng_active ? true : false);
  // Member: mag_active
  cdr << (ros_message.mag_active ? true : false);
  // Member: aspd_active
  cdr << (ros_message.aspd_active ? true : false);
  // Member: rngbcn_active
  cdr << (ros_message.rngbcn_active ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::EstimatorFusionControl & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: gps_intended
  {
    cdr >> ros_message.gps_intended;
  }

  // Member: of_intended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.of_intended = tmp ? true : false;
  }

  // Member: ev_intended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ev_intended = tmp ? true : false;
  }

  // Member: agp_intended
  {
    cdr >> ros_message.agp_intended;
  }

  // Member: baro_intended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.baro_intended = tmp ? true : false;
  }

  // Member: rng_intended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rng_intended = tmp ? true : false;
  }

  // Member: mag_intended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mag_intended = tmp ? true : false;
  }

  // Member: aspd_intended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.aspd_intended = tmp ? true : false;
  }

  // Member: rngbcn_intended
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rngbcn_intended = tmp ? true : false;
  }

  // Member: gps_active
  {
    cdr >> ros_message.gps_active;
  }

  // Member: of_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.of_active = tmp ? true : false;
  }

  // Member: ev_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ev_active = tmp ? true : false;
  }

  // Member: agp_active
  {
    cdr >> ros_message.agp_active;
  }

  // Member: baro_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.baro_active = tmp ? true : false;
  }

  // Member: rng_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rng_active = tmp ? true : false;
  }

  // Member: mag_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mag_active = tmp ? true : false;
  }

  // Member: aspd_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.aspd_active = tmp ? true : false;
  }

  // Member: rngbcn_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rngbcn_active = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::EstimatorFusionControl & ros_message,
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
  // Member: gps_intended
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.gps_intended[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: of_intended
  {
    size_t item_size = sizeof(ros_message.of_intended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ev_intended
  {
    size_t item_size = sizeof(ros_message.ev_intended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: agp_intended
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.agp_intended[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: baro_intended
  {
    size_t item_size = sizeof(ros_message.baro_intended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rng_intended
  {
    size_t item_size = sizeof(ros_message.rng_intended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_intended
  {
    size_t item_size = sizeof(ros_message.mag_intended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aspd_intended
  {
    size_t item_size = sizeof(ros_message.aspd_intended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rngbcn_intended
  {
    size_t item_size = sizeof(ros_message.rngbcn_intended);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_active
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.gps_active[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: of_active
  {
    size_t item_size = sizeof(ros_message.of_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ev_active
  {
    size_t item_size = sizeof(ros_message.ev_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: agp_active
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.agp_active[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: baro_active
  {
    size_t item_size = sizeof(ros_message.baro_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rng_active
  {
    size_t item_size = sizeof(ros_message.rng_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_active
  {
    size_t item_size = sizeof(ros_message.mag_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aspd_active
  {
    size_t item_size = sizeof(ros_message.aspd_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rngbcn_active
  {
    size_t item_size = sizeof(ros_message.rngbcn_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_EstimatorFusionControl(
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

  // Member: gps_intended
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: of_intended
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ev_intended
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: agp_intended
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: baro_intended
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rng_intended
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mag_intended
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aspd_intended
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rngbcn_intended
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps_active
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: of_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ev_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: agp_active
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: baro_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rng_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mag_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aspd_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rngbcn_active
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
    using DataType = px4_msgs::msg::EstimatorFusionControl;
    is_plain =
      (
      offsetof(DataType, rngbcn_active) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EstimatorFusionControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::EstimatorFusionControl *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EstimatorFusionControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::EstimatorFusionControl *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EstimatorFusionControl__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::EstimatorFusionControl *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EstimatorFusionControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EstimatorFusionControl(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EstimatorFusionControl__callbacks = {
  "px4_msgs::msg",
  "EstimatorFusionControl",
  _EstimatorFusionControl__cdr_serialize,
  _EstimatorFusionControl__cdr_deserialize,
  _EstimatorFusionControl__get_serialized_size,
  _EstimatorFusionControl__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorFusionControl__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EstimatorFusionControl__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::EstimatorFusionControl>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_EstimatorFusionControl__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, EstimatorFusionControl)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_EstimatorFusionControl__handle;
}

#ifdef __cplusplus
}
#endif
