// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/NeuralControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NEURAL_CONTROL__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__NEURAL_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/neural_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NeuralControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: observation
  {
    if (msg.observation.size() == 0) {
      out << "observation: []";
    } else {
      out << "observation: [";
      size_t pending_items = msg.observation.size();
      for (auto item : msg.observation) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: network_output
  {
    if (msg.network_output.size() == 0) {
      out << "network_output: []";
    } else {
      out << "network_output: [";
      size_t pending_items = msg.network_output.size();
      for (auto item : msg.network_output) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: controller_time
  {
    out << "controller_time: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_time, out);
    out << ", ";
  }

  // member: inference_time
  {
    out << "inference_time: ";
    rosidl_generator_traits::value_to_yaml(msg.inference_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NeuralControl & msg,
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

  // member: observation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.observation.size() == 0) {
      out << "observation: []\n";
    } else {
      out << "observation:\n";
      for (auto item : msg.observation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: network_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.network_output.size() == 0) {
      out << "network_output: []\n";
    } else {
      out << "network_output:\n";
      for (auto item : msg.network_output) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: controller_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_time: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_time, out);
    out << "\n";
  }

  // member: inference_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inference_time: ";
    rosidl_generator_traits::value_to_yaml(msg.inference_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NeuralControl & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::NeuralControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::NeuralControl & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::NeuralControl>()
{
  return "px4_msgs::msg::NeuralControl";
}

template<>
inline const char * name<px4_msgs::msg::NeuralControl>()
{
  return "px4_msgs/msg/NeuralControl";
}

template<>
struct has_fixed_size<px4_msgs::msg::NeuralControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::NeuralControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::NeuralControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__NEURAL_CONTROL__TRAITS_HPP_
