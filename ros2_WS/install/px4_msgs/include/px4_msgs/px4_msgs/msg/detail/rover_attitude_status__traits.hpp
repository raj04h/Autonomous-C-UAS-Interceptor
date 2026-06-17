// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RoverAttitudeStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_ATTITUDE_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ROVER_ATTITUDE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/rover_attitude_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoverAttitudeStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: measured_yaw
  {
    out << "measured_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.measured_yaw, out);
    out << ", ";
  }

  // member: adjusted_yaw_setpoint
  {
    out << "adjusted_yaw_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.adjusted_yaw_setpoint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoverAttitudeStatus & msg,
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

  // member: measured_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measured_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.measured_yaw, out);
    out << "\n";
  }

  // member: adjusted_yaw_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adjusted_yaw_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.adjusted_yaw_setpoint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoverAttitudeStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::RoverAttitudeStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::RoverAttitudeStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::RoverAttitudeStatus>()
{
  return "px4_msgs::msg::RoverAttitudeStatus";
}

template<>
inline const char * name<px4_msgs::msg::RoverAttitudeStatus>()
{
  return "px4_msgs/msg/RoverAttitudeStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::RoverAttitudeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RoverAttitudeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RoverAttitudeStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_ATTITUDE_STATUS__TRAITS_HPP_
