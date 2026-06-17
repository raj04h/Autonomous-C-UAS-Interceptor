// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VteBiasInitStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_BIAS_INIT_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VTE_BIAS_INIT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vte_bias_init_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VteBiasInitStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: raw_bias
  {
    if (msg.raw_bias.size() == 0) {
      out << "raw_bias: []";
    } else {
      out << "raw_bias: [";
      size_t pending_items = msg.raw_bias.size();
      for (auto item : msg.raw_bias) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: filtered_bias
  {
    if (msg.filtered_bias.size() == 0) {
      out << "filtered_bias: []";
    } else {
      out << "filtered_bias: [";
      size_t pending_items = msg.filtered_bias.size();
      for (auto item : msg.filtered_bias) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: delta_norm
  {
    out << "delta_norm: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_norm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VteBiasInitStatus & msg,
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

  // member: raw_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.raw_bias.size() == 0) {
      out << "raw_bias: []\n";
    } else {
      out << "raw_bias:\n";
      for (auto item : msg.raw_bias) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: filtered_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.filtered_bias.size() == 0) {
      out << "filtered_bias: []\n";
    } else {
      out << "filtered_bias:\n";
      for (auto item : msg.filtered_bias) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: delta_norm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_norm: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_norm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VteBiasInitStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VteBiasInitStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VteBiasInitStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VteBiasInitStatus>()
{
  return "px4_msgs::msg::VteBiasInitStatus";
}

template<>
inline const char * name<px4_msgs::msg::VteBiasInitStatus>()
{
  return "px4_msgs/msg/VteBiasInitStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::VteBiasInitStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VteBiasInitStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VteBiasInitStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VTE_BIAS_INIT_STATUS__TRAITS_HPP_
