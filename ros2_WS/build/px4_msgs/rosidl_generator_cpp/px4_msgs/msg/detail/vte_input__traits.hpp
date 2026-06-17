// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VteInput.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_INPUT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VTE_INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vte_input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VteInput & msg,
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

  // member: acc_xyz
  {
    if (msg.acc_xyz.size() == 0) {
      out << "acc_xyz: []";
    } else {
      out << "acc_xyz: [";
      size_t pending_items = msg.acc_xyz.size();
      for (auto item : msg.acc_xyz) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: q_att
  {
    if (msg.q_att.size() == 0) {
      out << "q_att: []";
    } else {
      out << "q_att: [";
      size_t pending_items = msg.q_att.size();
      for (auto item : msg.q_att) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acc_sample_count
  {
    out << "acc_sample_count: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_sample_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VteInput & msg,
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

  // member: acc_xyz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc_xyz.size() == 0) {
      out << "acc_xyz: []\n";
    } else {
      out << "acc_xyz:\n";
      for (auto item : msg.acc_xyz) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: q_att
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q_att.size() == 0) {
      out << "q_att: []\n";
    } else {
      out << "q_att:\n";
      for (auto item : msg.q_att) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acc_sample_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_sample_count: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_sample_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VteInput & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VteInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VteInput & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VteInput>()
{
  return "px4_msgs::msg::VteInput";
}

template<>
inline const char * name<px4_msgs::msg::VteInput>()
{
  return "px4_msgs/msg/VteInput";
}

template<>
struct has_fixed_size<px4_msgs::msg::VteInput>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VteInput>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VteInput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VTE_INPUT__TRAITS_HPP_
