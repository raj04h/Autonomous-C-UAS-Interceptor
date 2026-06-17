// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VteAidSource3d.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_AID_SOURCE3D__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VTE_AID_SOURCE3D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vte_aid_source3d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VteAidSource3d & msg,
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

  // member: time_last_predict
  {
    out << "time_last_predict: ";
    rosidl_generator_traits::value_to_yaml(msg.time_last_predict, out);
    out << ", ";
  }

  // member: observation
  {
    if (msg.observation.size() == 0) {
      out << "observation: []";
    } else {
      out << "observation: [";
      size_t pending_items = msg.observation.size();
      for (auto item : msg.observation) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: observation_variance
  {
    if (msg.observation_variance.size() == 0) {
      out << "observation_variance: []";
    } else {
      out << "observation_variance: [";
      size_t pending_items = msg.observation_variance.size();
      for (auto item : msg.observation_variance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: innovation
  {
    if (msg.innovation.size() == 0) {
      out << "innovation: []";
    } else {
      out << "innovation: [";
      size_t pending_items = msg.innovation.size();
      for (auto item : msg.innovation) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: innovation_variance
  {
    if (msg.innovation_variance.size() == 0) {
      out << "innovation_variance: []";
    } else {
      out << "innovation_variance: [";
      size_t pending_items = msg.innovation_variance.size();
      for (auto item : msg.innovation_variance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: test_ratio
  {
    if (msg.test_ratio.size() == 0) {
      out << "test_ratio: []";
    } else {
      out << "test_ratio: [";
      size_t pending_items = msg.test_ratio.size();
      for (auto item : msg.test_ratio) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fusion_status
  {
    if (msg.fusion_status.size() == 0) {
      out << "fusion_status: []";
    } else {
      out << "fusion_status: [";
      size_t pending_items = msg.fusion_status.size();
      for (auto item : msg.fusion_status) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time_since_meas_ms
  {
    out << "time_since_meas_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_meas_ms, out);
    out << ", ";
  }

  // member: history_steps
  {
    out << "history_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.history_steps, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VteAidSource3d & msg,
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

  // member: time_last_predict
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_last_predict: ";
    rosidl_generator_traits::value_to_yaml(msg.time_last_predict, out);
    out << "\n";
  }

  // member: observation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.observation.size() == 0) {
      out << "observation: []\n";
    } else {
      out << "observation:\n";
      for (auto item : msg.observation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: observation_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.observation_variance.size() == 0) {
      out << "observation_variance: []\n";
    } else {
      out << "observation_variance:\n";
      for (auto item : msg.observation_variance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: innovation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.innovation.size() == 0) {
      out << "innovation: []\n";
    } else {
      out << "innovation:\n";
      for (auto item : msg.innovation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: innovation_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.innovation_variance.size() == 0) {
      out << "innovation_variance: []\n";
    } else {
      out << "innovation_variance:\n";
      for (auto item : msg.innovation_variance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.test_ratio.size() == 0) {
      out << "test_ratio: []\n";
    } else {
      out << "test_ratio:\n";
      for (auto item : msg.test_ratio) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fusion_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fusion_status.size() == 0) {
      out << "fusion_status: []\n";
    } else {
      out << "fusion_status:\n";
      for (auto item : msg.fusion_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time_since_meas_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_since_meas_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_meas_ms, out);
    out << "\n";
  }

  // member: history_steps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "history_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.history_steps, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VteAidSource3d & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VteAidSource3d & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VteAidSource3d & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VteAidSource3d>()
{
  return "px4_msgs::msg::VteAidSource3d";
}

template<>
inline const char * name<px4_msgs::msg::VteAidSource3d>()
{
  return "px4_msgs/msg/VteAidSource3d";
}

template<>
struct has_fixed_size<px4_msgs::msg::VteAidSource3d>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VteAidSource3d>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VteAidSource3d>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VTE_AID_SOURCE3D__TRAITS_HPP_
