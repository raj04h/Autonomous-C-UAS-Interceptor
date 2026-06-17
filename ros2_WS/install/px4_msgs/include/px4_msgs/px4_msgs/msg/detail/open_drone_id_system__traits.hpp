// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/OpenDroneIdSystem.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SYSTEM__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SYSTEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/open_drone_id_system__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OpenDroneIdSystem & msg,
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

  // member: operator_location_type
  {
    out << "operator_location_type: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_location_type, out);
    out << ", ";
  }

  // member: classification_type
  {
    out << "classification_type: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_type, out);
    out << ", ";
  }

  // member: operator_latitude
  {
    out << "operator_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_latitude, out);
    out << ", ";
  }

  // member: operator_longitude
  {
    out << "operator_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_longitude, out);
    out << ", ";
  }

  // member: area_count
  {
    out << "area_count: ";
    rosidl_generator_traits::value_to_yaml(msg.area_count, out);
    out << ", ";
  }

  // member: area_radius
  {
    out << "area_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.area_radius, out);
    out << ", ";
  }

  // member: area_ceiling
  {
    out << "area_ceiling: ";
    rosidl_generator_traits::value_to_yaml(msg.area_ceiling, out);
    out << ", ";
  }

  // member: area_floor
  {
    out << "area_floor: ";
    rosidl_generator_traits::value_to_yaml(msg.area_floor, out);
    out << ", ";
  }

  // member: category_eu
  {
    out << "category_eu: ";
    rosidl_generator_traits::value_to_yaml(msg.category_eu, out);
    out << ", ";
  }

  // member: class_eu
  {
    out << "class_eu: ";
    rosidl_generator_traits::value_to_yaml(msg.class_eu, out);
    out << ", ";
  }

  // member: operator_altitude_geo
  {
    out << "operator_altitude_geo: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_altitude_geo, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenDroneIdSystem & msg,
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

  // member: operator_location_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operator_location_type: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_location_type, out);
    out << "\n";
  }

  // member: classification_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification_type: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_type, out);
    out << "\n";
  }

  // member: operator_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operator_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_latitude, out);
    out << "\n";
  }

  // member: operator_longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operator_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_longitude, out);
    out << "\n";
  }

  // member: area_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_count: ";
    rosidl_generator_traits::value_to_yaml(msg.area_count, out);
    out << "\n";
  }

  // member: area_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.area_radius, out);
    out << "\n";
  }

  // member: area_ceiling
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_ceiling: ";
    rosidl_generator_traits::value_to_yaml(msg.area_ceiling, out);
    out << "\n";
  }

  // member: area_floor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_floor: ";
    rosidl_generator_traits::value_to_yaml(msg.area_floor, out);
    out << "\n";
  }

  // member: category_eu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "category_eu: ";
    rosidl_generator_traits::value_to_yaml(msg.category_eu, out);
    out << "\n";
  }

  // member: class_eu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_eu: ";
    rosidl_generator_traits::value_to_yaml(msg.class_eu, out);
    out << "\n";
  }

  // member: operator_altitude_geo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operator_altitude_geo: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_altitude_geo, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenDroneIdSystem & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::OpenDroneIdSystem & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::OpenDroneIdSystem & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::OpenDroneIdSystem>()
{
  return "px4_msgs::msg::OpenDroneIdSystem";
}

template<>
inline const char * name<px4_msgs::msg::OpenDroneIdSystem>()
{
  return "px4_msgs/msg/OpenDroneIdSystem";
}

template<>
struct has_fixed_size<px4_msgs::msg::OpenDroneIdSystem>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::OpenDroneIdSystem>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::OpenDroneIdSystem>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SYSTEM__TRAITS_HPP_
