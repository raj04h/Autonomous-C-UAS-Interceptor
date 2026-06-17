// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VteOrientation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_ORIENTATION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VTE_ORIENTATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vte_orientation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VteOrientation & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: orientation_valid
  {
    out << "orientation_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_valid, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: cov_yaw
  {
    out << "cov_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_yaw, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: cov_yaw_rate
  {
    out << "cov_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_yaw_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VteOrientation & msg,
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

  // member: orientation_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_valid, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: cov_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_yaw, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }

  // member: cov_yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_yaw_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VteOrientation & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VteOrientation & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VteOrientation & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VteOrientation>()
{
  return "px4_msgs::msg::VteOrientation";
}

template<>
inline const char * name<px4_msgs::msg::VteOrientation>()
{
  return "px4_msgs/msg/VteOrientation";
}

template<>
struct has_fixed_size<px4_msgs::msg::VteOrientation>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VteOrientation>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VteOrientation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VTE_ORIENTATION__TRAITS_HPP_
