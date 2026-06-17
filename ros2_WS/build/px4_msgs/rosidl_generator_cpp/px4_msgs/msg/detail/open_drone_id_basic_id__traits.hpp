// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/OpenDroneIdBasicId.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_BASIC_ID__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_BASIC_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/open_drone_id_basic_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OpenDroneIdBasicId & msg,
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

  // member: id_type
  {
    out << "id_type: ";
    rosidl_generator_traits::value_to_yaml(msg.id_type, out);
    out << ", ";
  }

  // member: ua_type
  {
    out << "ua_type: ";
    rosidl_generator_traits::value_to_yaml(msg.ua_type, out);
    out << ", ";
  }

  // member: uas_id
  {
    if (msg.uas_id.size() == 0) {
      out << "uas_id: []";
    } else {
      out << "uas_id: [";
      size_t pending_items = msg.uas_id.size();
      for (auto item : msg.uas_id) {
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
  const OpenDroneIdBasicId & msg,
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

  // member: id_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id_type: ";
    rosidl_generator_traits::value_to_yaml(msg.id_type, out);
    out << "\n";
  }

  // member: ua_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ua_type: ";
    rosidl_generator_traits::value_to_yaml(msg.ua_type, out);
    out << "\n";
  }

  // member: uas_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uas_id.size() == 0) {
      out << "uas_id: []\n";
    } else {
      out << "uas_id:\n";
      for (auto item : msg.uas_id) {
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

inline std::string to_yaml(const OpenDroneIdBasicId & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::OpenDroneIdBasicId & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::OpenDroneIdBasicId & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::OpenDroneIdBasicId>()
{
  return "px4_msgs::msg::OpenDroneIdBasicId";
}

template<>
inline const char * name<px4_msgs::msg::OpenDroneIdBasicId>()
{
  return "px4_msgs/msg/OpenDroneIdBasicId";
}

template<>
struct has_fixed_size<px4_msgs::msg::OpenDroneIdBasicId>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::OpenDroneIdBasicId>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::OpenDroneIdBasicId>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_BASIC_ID__TRAITS_HPP_
