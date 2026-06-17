// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/AuxGlobalPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AUX_GLOBAL_POSITION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__AUX_GLOBAL_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/aux_global_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AuxGlobalPosition & msg,
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

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: alt
  {
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
    out << ", ";
  }

  // member: eph
  {
    out << "eph: ";
    rosidl_generator_traits::value_to_yaml(msg.eph, out);
    out << ", ";
  }

  // member: epv
  {
    out << "epv: ";
    rosidl_generator_traits::value_to_yaml(msg.epv, out);
    out << ", ";
  }

  // member: lat_lon_reset_counter
  {
    out << "lat_lon_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_lon_reset_counter, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AuxGlobalPosition & msg,
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
    out << "\n";
  }

  // member: eph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eph: ";
    rosidl_generator_traits::value_to_yaml(msg.eph, out);
    out << "\n";
  }

  // member: epv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epv: ";
    rosidl_generator_traits::value_to_yaml(msg.epv, out);
    out << "\n";
  }

  // member: lat_lon_reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_lon_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_lon_reset_counter, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AuxGlobalPosition & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::AuxGlobalPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::AuxGlobalPosition & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::AuxGlobalPosition>()
{
  return "px4_msgs::msg::AuxGlobalPosition";
}

template<>
inline const char * name<px4_msgs::msg::AuxGlobalPosition>()
{
  return "px4_msgs/msg/AuxGlobalPosition";
}

template<>
struct has_fixed_size<px4_msgs::msg::AuxGlobalPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::AuxGlobalPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::AuxGlobalPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__AUX_GLOBAL_POSITION__TRAITS_HPP_
