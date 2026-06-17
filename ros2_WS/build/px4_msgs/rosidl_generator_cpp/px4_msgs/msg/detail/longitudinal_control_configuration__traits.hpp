// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/LongitudinalControlConfiguration.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LONGITUDINAL_CONTROL_CONFIGURATION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__LONGITUDINAL_CONTROL_CONFIGURATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/longitudinal_control_configuration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LongitudinalControlConfiguration & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: pitch_min
  {
    out << "pitch_min: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_min, out);
    out << ", ";
  }

  // member: pitch_max
  {
    out << "pitch_max: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_max, out);
    out << ", ";
  }

  // member: throttle_min
  {
    out << "throttle_min: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_min, out);
    out << ", ";
  }

  // member: throttle_max
  {
    out << "throttle_max: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_max, out);
    out << ", ";
  }

  // member: climb_rate_target
  {
    out << "climb_rate_target: ";
    rosidl_generator_traits::value_to_yaml(msg.climb_rate_target, out);
    out << ", ";
  }

  // member: sink_rate_target
  {
    out << "sink_rate_target: ";
    rosidl_generator_traits::value_to_yaml(msg.sink_rate_target, out);
    out << ", ";
  }

  // member: speed_weight
  {
    out << "speed_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_weight, out);
    out << ", ";
  }

  // member: enforce_low_height_condition
  {
    out << "enforce_low_height_condition: ";
    rosidl_generator_traits::value_to_yaml(msg.enforce_low_height_condition, out);
    out << ", ";
  }

  // member: disable_underspeed_protection
  {
    out << "disable_underspeed_protection: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_underspeed_protection, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LongitudinalControlConfiguration & msg,
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

  // member: pitch_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_min: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_min, out);
    out << "\n";
  }

  // member: pitch_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_max: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_max, out);
    out << "\n";
  }

  // member: throttle_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_min: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_min, out);
    out << "\n";
  }

  // member: throttle_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_max: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_max, out);
    out << "\n";
  }

  // member: climb_rate_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "climb_rate_target: ";
    rosidl_generator_traits::value_to_yaml(msg.climb_rate_target, out);
    out << "\n";
  }

  // member: sink_rate_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sink_rate_target: ";
    rosidl_generator_traits::value_to_yaml(msg.sink_rate_target, out);
    out << "\n";
  }

  // member: speed_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_weight, out);
    out << "\n";
  }

  // member: enforce_low_height_condition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enforce_low_height_condition: ";
    rosidl_generator_traits::value_to_yaml(msg.enforce_low_height_condition, out);
    out << "\n";
  }

  // member: disable_underspeed_protection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_underspeed_protection: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_underspeed_protection, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LongitudinalControlConfiguration & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::LongitudinalControlConfiguration & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::LongitudinalControlConfiguration & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::LongitudinalControlConfiguration>()
{
  return "px4_msgs::msg::LongitudinalControlConfiguration";
}

template<>
inline const char * name<px4_msgs::msg::LongitudinalControlConfiguration>()
{
  return "px4_msgs/msg/LongitudinalControlConfiguration";
}

template<>
struct has_fixed_size<px4_msgs::msg::LongitudinalControlConfiguration>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::LongitudinalControlConfiguration>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::LongitudinalControlConfiguration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__LONGITUDINAL_CONTROL_CONFIGURATION__TRAITS_HPP_
