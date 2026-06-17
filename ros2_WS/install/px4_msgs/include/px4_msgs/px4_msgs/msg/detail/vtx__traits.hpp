// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/Vtx.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTX__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VTX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vtx__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Vtx & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: protocol
  {
    out << "protocol: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol, out);
    out << ", ";
  }

  // member: device
  {
    out << "device: ";
    rosidl_generator_traits::value_to_yaml(msg.device, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: band
  {
    out << "band: ";
    rosidl_generator_traits::value_to_yaml(msg.band, out);
    out << ", ";
  }

  // member: channel
  {
    out << "channel: ";
    rosidl_generator_traits::value_to_yaml(msg.channel, out);
    out << ", ";
  }

  // member: frequency
  {
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << ", ";
  }

  // member: band_letter
  {
    out << "band_letter: ";
    rosidl_generator_traits::value_to_yaml(msg.band_letter, out);
    out << ", ";
  }

  // member: band_name
  {
    if (msg.band_name.size() == 0) {
      out << "band_name: []";
    } else {
      out << "band_name: [";
      size_t pending_items = msg.band_name.size();
      for (auto item : msg.band_name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: power_level
  {
    out << "power_level: ";
    rosidl_generator_traits::value_to_yaml(msg.power_level, out);
    out << ", ";
  }

  // member: power_label
  {
    if (msg.power_label.size() == 0) {
      out << "power_label: []";
    } else {
      out << "power_label: [";
      size_t pending_items = msg.power_label.size();
      for (auto item : msg.power_label) {
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
  const Vtx & msg,
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

  // member: protocol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "protocol: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol, out);
    out << "\n";
  }

  // member: device
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device: ";
    rosidl_generator_traits::value_to_yaml(msg.device, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: band
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "band: ";
    rosidl_generator_traits::value_to_yaml(msg.band, out);
    out << "\n";
  }

  // member: channel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channel: ";
    rosidl_generator_traits::value_to_yaml(msg.channel, out);
    out << "\n";
  }

  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << "\n";
  }

  // member: band_letter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "band_letter: ";
    rosidl_generator_traits::value_to_yaml(msg.band_letter, out);
    out << "\n";
  }

  // member: band_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.band_name.size() == 0) {
      out << "band_name: []\n";
    } else {
      out << "band_name:\n";
      for (auto item : msg.band_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: power_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_level: ";
    rosidl_generator_traits::value_to_yaml(msg.power_level, out);
    out << "\n";
  }

  // member: power_label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.power_label.size() == 0) {
      out << "power_label: []\n";
    } else {
      out << "power_label:\n";
      for (auto item : msg.power_label) {
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

inline std::string to_yaml(const Vtx & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::Vtx & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::Vtx & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::Vtx>()
{
  return "px4_msgs::msg::Vtx";
}

template<>
inline const char * name<px4_msgs::msg::Vtx>()
{
  return "px4_msgs/msg/Vtx";
}

template<>
struct has_fixed_size<px4_msgs::msg::Vtx>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::Vtx>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::Vtx>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VTX__TRAITS_HPP_
