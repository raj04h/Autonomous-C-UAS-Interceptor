// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorGnssStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/sensor_gnss_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorGnssStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: quality_available
  {
    out << "quality_available: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_available, out);
    out << ", ";
  }

  // member: quality_corrections
  {
    out << "quality_corrections: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_corrections, out);
    out << ", ";
  }

  // member: quality_receiver
  {
    out << "quality_receiver: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_receiver, out);
    out << ", ";
  }

  // member: quality_gnss_signals
  {
    out << "quality_gnss_signals: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_gnss_signals, out);
    out << ", ";
  }

  // member: quality_post_processing
  {
    out << "quality_post_processing: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_post_processing, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorGnssStatus & msg,
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

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: quality_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality_available: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_available, out);
    out << "\n";
  }

  // member: quality_corrections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality_corrections: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_corrections, out);
    out << "\n";
  }

  // member: quality_receiver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality_receiver: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_receiver, out);
    out << "\n";
  }

  // member: quality_gnss_signals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality_gnss_signals: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_gnss_signals, out);
    out << "\n";
  }

  // member: quality_post_processing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality_post_processing: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_post_processing, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorGnssStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::SensorGnssStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::SensorGnssStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::SensorGnssStatus>()
{
  return "px4_msgs::msg::SensorGnssStatus";
}

template<>
inline const char * name<px4_msgs::msg::SensorGnssStatus>()
{
  return "px4_msgs/msg/SensorGnssStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorGnssStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorGnssStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorGnssStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_STATUS__TRAITS_HPP_
