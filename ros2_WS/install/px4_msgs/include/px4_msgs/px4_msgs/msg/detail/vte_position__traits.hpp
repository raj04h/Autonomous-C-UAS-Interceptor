// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VtePosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_POSITION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VTE_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vte_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VtePosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: rel_pos_valid
  {
    out << "rel_pos_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_valid, out);
    out << ", ";
  }

  // member: rel_vel_valid
  {
    out << "rel_vel_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_vel_valid, out);
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

  // member: vel_uav
  {
    if (msg.vel_uav.size() == 0) {
      out << "vel_uav: []";
    } else {
      out << "vel_uav: [";
      size_t pending_items = msg.vel_uav.size();
      for (auto item : msg.vel_uav) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vel_target
  {
    if (msg.vel_target.size() == 0) {
      out << "vel_target: []";
    } else {
      out << "vel_target: [";
      size_t pending_items = msg.vel_target.size();
      for (auto item : msg.vel_target) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bias
  {
    if (msg.bias.size() == 0) {
      out << "bias: []";
    } else {
      out << "bias: [";
      size_t pending_items = msg.bias.size();
      for (auto item : msg.bias) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acc_target
  {
    if (msg.acc_target.size() == 0) {
      out << "acc_target: []";
    } else {
      out << "acc_target: [";
      size_t pending_items = msg.acc_target.size();
      for (auto item : msg.acc_target) {
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

  // member: cov_vel_uav
  {
    if (msg.cov_vel_uav.size() == 0) {
      out << "cov_vel_uav: []";
    } else {
      out << "cov_vel_uav: [";
      size_t pending_items = msg.cov_vel_uav.size();
      for (auto item : msg.cov_vel_uav) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cov_bias
  {
    if (msg.cov_bias.size() == 0) {
      out << "cov_bias: []";
    } else {
      out << "cov_bias: [";
      size_t pending_items = msg.cov_bias.size();
      for (auto item : msg.cov_bias) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cov_vel_target
  {
    if (msg.cov_vel_target.size() == 0) {
      out << "cov_vel_target: []";
    } else {
      out << "cov_vel_target: [";
      size_t pending_items = msg.cov_vel_target.size();
      for (auto item : msg.cov_vel_target) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cov_acc_target
  {
    if (msg.cov_acc_target.size() == 0) {
      out << "cov_acc_target: []";
    } else {
      out << "cov_acc_target: [";
      size_t pending_items = msg.cov_acc_target.size();
      for (auto item : msg.cov_acc_target) {
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
  const VtePosition & msg,
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

  // member: rel_pos_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_pos_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_valid, out);
    out << "\n";
  }

  // member: rel_vel_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_vel_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_vel_valid, out);
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

  // member: vel_uav
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel_uav.size() == 0) {
      out << "vel_uav: []\n";
    } else {
      out << "vel_uav:\n";
      for (auto item : msg.vel_uav) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel_target.size() == 0) {
      out << "vel_target: []\n";
    } else {
      out << "vel_target:\n";
      for (auto item : msg.vel_target) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bias.size() == 0) {
      out << "bias: []\n";
    } else {
      out << "bias:\n";
      for (auto item : msg.bias) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acc_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc_target.size() == 0) {
      out << "acc_target: []\n";
    } else {
      out << "acc_target:\n";
      for (auto item : msg.acc_target) {
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

  // member: cov_vel_uav
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cov_vel_uav.size() == 0) {
      out << "cov_vel_uav: []\n";
    } else {
      out << "cov_vel_uav:\n";
      for (auto item : msg.cov_vel_uav) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cov_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cov_bias.size() == 0) {
      out << "cov_bias: []\n";
    } else {
      out << "cov_bias:\n";
      for (auto item : msg.cov_bias) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cov_vel_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cov_vel_target.size() == 0) {
      out << "cov_vel_target: []\n";
    } else {
      out << "cov_vel_target:\n";
      for (auto item : msg.cov_vel_target) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cov_acc_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cov_acc_target.size() == 0) {
      out << "cov_acc_target: []\n";
    } else {
      out << "cov_acc_target:\n";
      for (auto item : msg.cov_acc_target) {
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

inline std::string to_yaml(const VtePosition & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VtePosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VtePosition & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VtePosition>()
{
  return "px4_msgs::msg::VtePosition";
}

template<>
inline const char * name<px4_msgs::msg::VtePosition>()
{
  return "px4_msgs/msg/VtePosition";
}

template<>
struct has_fixed_size<px4_msgs::msg::VtePosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VtePosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VtePosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VTE_POSITION__TRAITS_HPP_
