// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/DeviceInformation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DEVICE_INFORMATION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__DEVICE_INFORMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/device_information__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeviceInformation & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: device_type
  {
    out << "device_type: ";
    rosidl_generator_traits::value_to_yaml(msg.device_type, out);
    out << ", ";
  }

  // member: name
  {
    if (msg.name.size() == 0) {
      out << "name: []";
    } else {
      out << "name: [";
      size_t pending_items = msg.name.size();
      for (auto item : msg.name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: firmware_version
  {
    if (msg.firmware_version.size() == 0) {
      out << "firmware_version: []";
    } else {
      out << "firmware_version: [";
      size_t pending_items = msg.firmware_version.size();
      for (auto item : msg.firmware_version) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hardware_version
  {
    if (msg.hardware_version.size() == 0) {
      out << "hardware_version: []";
    } else {
      out << "hardware_version: [";
      size_t pending_items = msg.hardware_version.size();
      for (auto item : msg.hardware_version) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: serial_number
  {
    if (msg.serial_number.size() == 0) {
      out << "serial_number: []";
    } else {
      out << "serial_number: [";
      size_t pending_items = msg.serial_number.size();
      for (auto item : msg.serial_number) {
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
  const DeviceInformation & msg,
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

  // member: device_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_type: ";
    rosidl_generator_traits::value_to_yaml(msg.device_type, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.name.size() == 0) {
      out << "name: []\n";
    } else {
      out << "name:\n";
      for (auto item : msg.name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.firmware_version.size() == 0) {
      out << "firmware_version: []\n";
    } else {
      out << "firmware_version:\n";
      for (auto item : msg.firmware_version) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hardware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hardware_version.size() == 0) {
      out << "hardware_version: []\n";
    } else {
      out << "hardware_version:\n";
      for (auto item : msg.hardware_version) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.serial_number.size() == 0) {
      out << "serial_number: []\n";
    } else {
      out << "serial_number:\n";
      for (auto item : msg.serial_number) {
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

inline std::string to_yaml(const DeviceInformation & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::DeviceInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::DeviceInformation & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::DeviceInformation>()
{
  return "px4_msgs::msg::DeviceInformation";
}

template<>
inline const char * name<px4_msgs::msg::DeviceInformation>()
{
  return "px4_msgs/msg/DeviceInformation";
}

template<>
struct has_fixed_size<px4_msgs::msg::DeviceInformation>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::DeviceInformation>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::DeviceInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__DEVICE_INFORMATION__TRAITS_HPP_
