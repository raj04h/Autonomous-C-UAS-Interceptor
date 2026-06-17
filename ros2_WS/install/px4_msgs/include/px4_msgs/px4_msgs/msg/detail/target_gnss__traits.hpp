// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/TargetGnss.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TARGET_GNSS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__TARGET_GNSS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/target_gnss__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TargetGnss & msg,
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

  // member: latitude_deg
  {
    out << "latitude_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_deg, out);
    out << ", ";
  }

  // member: longitude_deg
  {
    out << "longitude_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_deg, out);
    out << ", ";
  }

  // member: altitude_msl_m
  {
    out << "altitude_msl_m: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_msl_m, out);
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

  // member: abs_pos_updated
  {
    out << "abs_pos_updated: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_pos_updated, out);
    out << ", ";
  }

  // member: vel_n_m_s
  {
    out << "vel_n_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_n_m_s, out);
    out << ", ";
  }

  // member: vel_e_m_s
  {
    out << "vel_e_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_e_m_s, out);
    out << ", ";
  }

  // member: vel_d_m_s
  {
    out << "vel_d_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_d_m_s, out);
    out << ", ";
  }

  // member: s_acc_m_s
  {
    out << "s_acc_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.s_acc_m_s, out);
    out << ", ";
  }

  // member: vel_ned_updated
  {
    out << "vel_ned_updated: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_ned_updated, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetGnss & msg,
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

  // member: latitude_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_deg, out);
    out << "\n";
  }

  // member: longitude_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_deg, out);
    out << "\n";
  }

  // member: altitude_msl_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_msl_m: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_msl_m, out);
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

  // member: abs_pos_updated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs_pos_updated: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_pos_updated, out);
    out << "\n";
  }

  // member: vel_n_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_n_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_n_m_s, out);
    out << "\n";
  }

  // member: vel_e_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_e_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_e_m_s, out);
    out << "\n";
  }

  // member: vel_d_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_d_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_d_m_s, out);
    out << "\n";
  }

  // member: s_acc_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_acc_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.s_acc_m_s, out);
    out << "\n";
  }

  // member: vel_ned_updated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_ned_updated: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_ned_updated, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetGnss & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::TargetGnss & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::TargetGnss & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::TargetGnss>()
{
  return "px4_msgs::msg::TargetGnss";
}

template<>
inline const char * name<px4_msgs::msg::TargetGnss>()
{
  return "px4_msgs/msg/TargetGnss";
}

template<>
struct has_fixed_size<px4_msgs::msg::TargetGnss>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::TargetGnss>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::TargetGnss>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__TARGET_GNSS__TRAITS_HPP_
