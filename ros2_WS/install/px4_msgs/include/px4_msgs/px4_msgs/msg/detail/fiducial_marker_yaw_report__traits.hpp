// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/FiducialMarkerYawReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_YAW_REPORT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_YAW_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/fiducial_marker_yaw_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FiducialMarkerYawReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_sample
  {
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << ", ";
  }

  // member: yaw_ned
  {
    out << "yaw_ned: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_ned, out);
    out << ", ";
  }

  // member: yaw_var_ned
  {
    out << "yaw_var_ned: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_var_ned, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FiducialMarkerYawReport & msg,
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

  // member: timestamp_sample
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << "\n";
  }

  // member: yaw_ned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_ned: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_ned, out);
    out << "\n";
  }

  // member: yaw_var_ned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_var_ned: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_var_ned, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FiducialMarkerYawReport & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::FiducialMarkerYawReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::FiducialMarkerYawReport & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::FiducialMarkerYawReport>()
{
  return "px4_msgs::msg::FiducialMarkerYawReport";
}

template<>
inline const char * name<px4_msgs::msg::FiducialMarkerYawReport>()
{
  return "px4_msgs/msg/FiducialMarkerYawReport";
}

template<>
struct has_fixed_size<px4_msgs::msg::FiducialMarkerYawReport>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::FiducialMarkerYawReport>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::FiducialMarkerYawReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_YAW_REPORT__TRAITS_HPP_
