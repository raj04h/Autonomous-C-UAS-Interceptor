// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RangingBeacon.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RANGING_BEACON__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__RANGING_BEACON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/ranging_beacon__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RangingBeacon & msg,
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

  // member: beacon_id
  {
    out << "beacon_id: ";
    rosidl_generator_traits::value_to_yaml(msg.beacon_id, out);
    out << ", ";
  }

  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
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

  // member: alt_type
  {
    out << "alt_type: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_type, out);
    out << ", ";
  }

  // member: hacc
  {
    out << "hacc: ";
    rosidl_generator_traits::value_to_yaml(msg.hacc, out);
    out << ", ";
  }

  // member: vacc
  {
    out << "vacc: ";
    rosidl_generator_traits::value_to_yaml(msg.vacc, out);
    out << ", ";
  }

  // member: sequence_nr
  {
    out << "sequence_nr: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_nr, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: carrier_freq
  {
    out << "carrier_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_freq, out);
    out << ", ";
  }

  // member: range_accuracy
  {
    out << "range_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.range_accuracy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RangingBeacon & msg,
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

  // member: beacon_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beacon_id: ";
    rosidl_generator_traits::value_to_yaml(msg.beacon_id, out);
    out << "\n";
  }

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
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

  // member: alt_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt_type: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_type, out);
    out << "\n";
  }

  // member: hacc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hacc: ";
    rosidl_generator_traits::value_to_yaml(msg.hacc, out);
    out << "\n";
  }

  // member: vacc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vacc: ";
    rosidl_generator_traits::value_to_yaml(msg.vacc, out);
    out << "\n";
  }

  // member: sequence_nr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence_nr: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_nr, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: carrier_freq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carrier_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_freq, out);
    out << "\n";
  }

  // member: range_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.range_accuracy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RangingBeacon & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::RangingBeacon & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::RangingBeacon & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::RangingBeacon>()
{
  return "px4_msgs::msg::RangingBeacon";
}

template<>
inline const char * name<px4_msgs::msg::RangingBeacon>()
{
  return "px4_msgs/msg/RangingBeacon";
}

template<>
struct has_fixed_size<px4_msgs::msg::RangingBeacon>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RangingBeacon>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RangingBeacon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__RANGING_BEACON__TRAITS_HPP_
