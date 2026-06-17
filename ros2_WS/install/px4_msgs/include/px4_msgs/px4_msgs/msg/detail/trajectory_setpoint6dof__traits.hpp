// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/TrajectorySetpoint6dof.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TRAJECTORY_SETPOINT6DOF__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__TRAJECTORY_SETPOINT6DOF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/trajectory_setpoint6dof__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrajectorySetpoint6dof & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acceleration
  {
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []";
    } else {
      out << "acceleration: [";
      size_t pending_items = msg.acceleration.size();
      for (auto item : msg.acceleration) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: jerk
  {
    if (msg.jerk.size() == 0) {
      out << "jerk: []";
    } else {
      out << "jerk: [";
      size_t pending_items = msg.jerk.size();
      for (auto item : msg.jerk) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: quaternion
  {
    if (msg.quaternion.size() == 0) {
      out << "quaternion: []";
    } else {
      out << "quaternion: [";
      size_t pending_items = msg.quaternion.size();
      for (auto item : msg.quaternion) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angular_velocity
  {
    if (msg.angular_velocity.size() == 0) {
      out << "angular_velocity: []";
    } else {
      out << "angular_velocity: [";
      size_t pending_items = msg.angular_velocity.size();
      for (auto item : msg.angular_velocity) {
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
  const TrajectorySetpoint6dof & msg,
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []\n";
    } else {
      out << "acceleration:\n";
      for (auto item : msg.acceleration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.jerk.size() == 0) {
      out << "jerk: []\n";
    } else {
      out << "jerk:\n";
      for (auto item : msg.jerk) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: quaternion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.quaternion.size() == 0) {
      out << "quaternion: []\n";
    } else {
      out << "quaternion:\n";
      for (auto item : msg.quaternion) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angular_velocity.size() == 0) {
      out << "angular_velocity: []\n";
    } else {
      out << "angular_velocity:\n";
      for (auto item : msg.angular_velocity) {
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

inline std::string to_yaml(const TrajectorySetpoint6dof & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::TrajectorySetpoint6dof & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::TrajectorySetpoint6dof & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::TrajectorySetpoint6dof>()
{
  return "px4_msgs::msg::TrajectorySetpoint6dof";
}

template<>
inline const char * name<px4_msgs::msg::TrajectorySetpoint6dof>()
{
  return "px4_msgs/msg/TrajectorySetpoint6dof";
}

template<>
struct has_fixed_size<px4_msgs::msg::TrajectorySetpoint6dof>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::TrajectorySetpoint6dof>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::TrajectorySetpoint6dof>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__TRAJECTORY_SETPOINT6DOF__TRAITS_HPP_
