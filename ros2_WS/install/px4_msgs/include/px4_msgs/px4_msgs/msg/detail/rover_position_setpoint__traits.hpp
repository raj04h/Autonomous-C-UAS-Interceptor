// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RoverPositionSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_POSITION_SETPOINT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ROVER_POSITION_SETPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/rover_position_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoverPositionSetpoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: position_ned
  {
    if (msg.position_ned.size() == 0) {
      out << "position_ned: []";
    } else {
      out << "position_ned: [";
      size_t pending_items = msg.position_ned.size();
      for (auto item : msg.position_ned) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: start_ned
  {
    if (msg.start_ned.size() == 0) {
      out << "start_ned: []";
    } else {
      out << "start_ned: [";
      size_t pending_items = msg.start_ned.size();
      for (auto item : msg.start_ned) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cruising_speed
  {
    out << "cruising_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cruising_speed, out);
    out << ", ";
  }

  // member: arrival_speed
  {
    out << "arrival_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.arrival_speed, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoverPositionSetpoint & msg,
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

  // member: position_ned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_ned.size() == 0) {
      out << "position_ned: []\n";
    } else {
      out << "position_ned:\n";
      for (auto item : msg.position_ned) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: start_ned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.start_ned.size() == 0) {
      out << "start_ned: []\n";
    } else {
      out << "start_ned:\n";
      for (auto item : msg.start_ned) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cruising_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cruising_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cruising_speed, out);
    out << "\n";
  }

  // member: arrival_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arrival_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.arrival_speed, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoverPositionSetpoint & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::RoverPositionSetpoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::RoverPositionSetpoint & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::RoverPositionSetpoint>()
{
  return "px4_msgs::msg::RoverPositionSetpoint";
}

template<>
inline const char * name<px4_msgs::msg::RoverPositionSetpoint>()
{
  return "px4_msgs/msg/RoverPositionSetpoint";
}

template<>
struct has_fixed_size<px4_msgs::msg::RoverPositionSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RoverPositionSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RoverPositionSetpoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_POSITION_SETPOINT__TRAITS_HPP_
