// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/FiducialMarkerPosReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_POS_REPORT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_POS_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/fiducial_marker_pos_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FiducialMarkerPosReport & msg,
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

  // member: rel_pos
  {
    if (msg.rel_pos.size() == 0) {
      out << "rel_pos: []";
    } else {
      out << "rel_pos: [";
      size_t pending_items = msg.rel_pos.size();
      for (auto item : msg.rel_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cov_rel_pos
  {
    if (msg.cov_rel_pos.size() == 0) {
      out << "cov_rel_pos: []";
    } else {
      out << "cov_rel_pos: [";
      size_t pending_items = msg.cov_rel_pos.size();
      for (auto item : msg.cov_rel_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: q
  {
    if (msg.q.size() == 0) {
      out << "q: []";
    } else {
      out << "q: [";
      size_t pending_items = msg.q.size();
      for (auto item : msg.q) {
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
  const FiducialMarkerPosReport & msg,
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

  // member: rel_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rel_pos.size() == 0) {
      out << "rel_pos: []\n";
    } else {
      out << "rel_pos:\n";
      for (auto item : msg.rel_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cov_rel_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cov_rel_pos.size() == 0) {
      out << "cov_rel_pos: []\n";
    } else {
      out << "cov_rel_pos:\n";
      for (auto item : msg.cov_rel_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q.size() == 0) {
      out << "q: []\n";
    } else {
      out << "q:\n";
      for (auto item : msg.q) {
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

inline std::string to_yaml(const FiducialMarkerPosReport & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::FiducialMarkerPosReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::FiducialMarkerPosReport & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::FiducialMarkerPosReport>()
{
  return "px4_msgs::msg::FiducialMarkerPosReport";
}

template<>
inline const char * name<px4_msgs::msg::FiducialMarkerPosReport>()
{
  return "px4_msgs/msg/FiducialMarkerPosReport";
}

template<>
struct has_fixed_size<px4_msgs::msg::FiducialMarkerPosReport>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::FiducialMarkerPosReport>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::FiducialMarkerPosReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_POS_REPORT__TRAITS_HPP_
