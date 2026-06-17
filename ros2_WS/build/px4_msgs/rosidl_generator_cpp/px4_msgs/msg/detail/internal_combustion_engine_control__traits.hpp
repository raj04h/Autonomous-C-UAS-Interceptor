// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/InternalCombustionEngineControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/internal_combustion_engine_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InternalCombustionEngineControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: ignition_on
  {
    out << "ignition_on: ";
    rosidl_generator_traits::value_to_yaml(msg.ignition_on, out);
    out << ", ";
  }

  // member: throttle_control
  {
    out << "throttle_control: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_control, out);
    out << ", ";
  }

  // member: choke_control
  {
    out << "choke_control: ";
    rosidl_generator_traits::value_to_yaml(msg.choke_control, out);
    out << ", ";
  }

  // member: starter_engine_control
  {
    out << "starter_engine_control: ";
    rosidl_generator_traits::value_to_yaml(msg.starter_engine_control, out);
    out << ", ";
  }

  // member: user_request
  {
    out << "user_request: ";
    rosidl_generator_traits::value_to_yaml(msg.user_request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InternalCombustionEngineControl & msg,
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

  // member: ignition_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignition_on: ";
    rosidl_generator_traits::value_to_yaml(msg.ignition_on, out);
    out << "\n";
  }

  // member: throttle_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_control: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_control, out);
    out << "\n";
  }

  // member: choke_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "choke_control: ";
    rosidl_generator_traits::value_to_yaml(msg.choke_control, out);
    out << "\n";
  }

  // member: starter_engine_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "starter_engine_control: ";
    rosidl_generator_traits::value_to_yaml(msg.starter_engine_control, out);
    out << "\n";
  }

  // member: user_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_request: ";
    rosidl_generator_traits::value_to_yaml(msg.user_request, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InternalCombustionEngineControl & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::InternalCombustionEngineControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::InternalCombustionEngineControl & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::InternalCombustionEngineControl>()
{
  return "px4_msgs::msg::InternalCombustionEngineControl";
}

template<>
inline const char * name<px4_msgs::msg::InternalCombustionEngineControl>()
{
  return "px4_msgs/msg/InternalCombustionEngineControl";
}

template<>
struct has_fixed_size<px4_msgs::msg::InternalCombustionEngineControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::InternalCombustionEngineControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::InternalCombustionEngineControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__TRAITS_HPP_
