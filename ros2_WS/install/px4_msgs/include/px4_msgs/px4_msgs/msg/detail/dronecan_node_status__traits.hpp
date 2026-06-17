// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/DronecanNodeStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DRONECAN_NODE_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__DRONECAN_NODE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/dronecan_node_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DronecanNodeStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: node_id
  {
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: uptime_sec
  {
    out << "uptime_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime_sec, out);
    out << ", ";
  }

  // member: health
  {
    out << "health: ";
    rosidl_generator_traits::value_to_yaml(msg.health, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: sub_mode
  {
    out << "sub_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_mode, out);
    out << ", ";
  }

  // member: vendor_specific_status_code
  {
    out << "vendor_specific_status_code: ";
    rosidl_generator_traits::value_to_yaml(msg.vendor_specific_status_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DronecanNodeStatus & msg,
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

  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << "\n";
  }

  // member: uptime_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uptime_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime_sec, out);
    out << "\n";
  }

  // member: health
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health: ";
    rosidl_generator_traits::value_to_yaml(msg.health, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: sub_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_mode, out);
    out << "\n";
  }

  // member: vendor_specific_status_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vendor_specific_status_code: ";
    rosidl_generator_traits::value_to_yaml(msg.vendor_specific_status_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DronecanNodeStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::DronecanNodeStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::DronecanNodeStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::DronecanNodeStatus>()
{
  return "px4_msgs::msg::DronecanNodeStatus";
}

template<>
inline const char * name<px4_msgs::msg::DronecanNodeStatus>()
{
  return "px4_msgs/msg/DronecanNodeStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::DronecanNodeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::DronecanNodeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::DronecanNodeStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__DRONECAN_NODE_STATUS__TRAITS_HPP_
