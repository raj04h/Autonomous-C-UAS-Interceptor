// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/OpenDroneIdSelfId.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SELF_ID__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SELF_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/open_drone_id_self_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OpenDroneIdSelfId & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: id_or_mac
  {
    if (msg.id_or_mac.size() == 0) {
      out << "id_or_mac: []";
    } else {
      out << "id_or_mac: [";
      size_t pending_items = msg.id_or_mac.size();
      for (auto item : msg.id_or_mac) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: description_type
  {
    out << "description_type: ";
    rosidl_generator_traits::value_to_yaml(msg.description_type, out);
    out << ", ";
  }

  // member: description
  {
    if (msg.description.size() == 0) {
      out << "description: []";
    } else {
      out << "description: [";
      size_t pending_items = msg.description.size();
      for (auto item : msg.description) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenDroneIdSelfId & msg,
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

  // member: id_or_mac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.id_or_mac.size() == 0) {
      out << "id_or_mac: []\n";
    } else {
      out << "id_or_mac:\n";
      for (auto item : msg.id_or_mac) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: description_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description_type: ";
    rosidl_generator_traits::value_to_yaml(msg.description_type, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.description.size() == 0) {
      out << "description: []\n";
    } else {
      out << "description:\n";
      for (auto item : msg.description) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenDroneIdSelfId & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::OpenDroneIdSelfId & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::OpenDroneIdSelfId & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::OpenDroneIdSelfId>()
{
  return "px4_msgs::msg::OpenDroneIdSelfId";
}

template<>
inline const char * name<px4_msgs::msg::OpenDroneIdSelfId>()
{
  return "px4_msgs/msg/OpenDroneIdSelfId";
}

template<>
struct has_fixed_size<px4_msgs::msg::OpenDroneIdSelfId>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::OpenDroneIdSelfId>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::OpenDroneIdSelfId>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SELF_ID__TRAITS_HPP_
