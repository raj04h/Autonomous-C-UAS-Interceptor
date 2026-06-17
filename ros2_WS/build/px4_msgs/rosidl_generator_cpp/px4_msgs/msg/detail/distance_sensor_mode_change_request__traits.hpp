// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/DistanceSensorModeChangeRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR_MODE_CHANGE_REQUEST__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR_MODE_CHANGE_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/distance_sensor_mode_change_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DistanceSensorModeChangeRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: request_on_off
  {
    out << "request_on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.request_on_off, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DistanceSensorModeChangeRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: request_on_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_on_off: ";
    rosidl_generator_traits::value_to_yaml(msg.request_on_off, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DistanceSensorModeChangeRequest & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::DistanceSensorModeChangeRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::DistanceSensorModeChangeRequest & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::DistanceSensorModeChangeRequest>()
{
  return "px4_msgs::msg::DistanceSensorModeChangeRequest";
}

template<>
inline const char * name<px4_msgs::msg::DistanceSensorModeChangeRequest>()
{
  return "px4_msgs/msg/DistanceSensorModeChangeRequest";
}

template<>
struct has_fixed_size<px4_msgs::msg::DistanceSensorModeChangeRequest>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::DistanceSensorModeChangeRequest>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::DistanceSensorModeChangeRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR_MODE_CHANGE_REQUEST__TRAITS_HPP_
