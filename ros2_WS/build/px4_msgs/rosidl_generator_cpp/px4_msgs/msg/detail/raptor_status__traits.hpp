// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RaptorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RAPTOR_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__RAPTOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/raptor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RaptorStatus & msg,
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

  // member: subscription_update_angular_velocity
  {
    out << "subscription_update_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.subscription_update_angular_velocity, out);
    out << ", ";
  }

  // member: subscription_update_local_position
  {
    out << "subscription_update_local_position: ";
    rosidl_generator_traits::value_to_yaml(msg.subscription_update_local_position, out);
    out << ", ";
  }

  // member: subscription_update_attitude
  {
    out << "subscription_update_attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.subscription_update_attitude, out);
    out << ", ";
  }

  // member: subscription_update_trajectory_setpoint
  {
    out << "subscription_update_trajectory_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.subscription_update_trajectory_setpoint, out);
    out << ", ";
  }

  // member: subscription_update_vehicle_status
  {
    out << "subscription_update_vehicle_status: ";
    rosidl_generator_traits::value_to_yaml(msg.subscription_update_vehicle_status, out);
    out << ", ";
  }

  // member: exit_reason
  {
    out << "exit_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_reason, out);
    out << ", ";
  }

  // member: timestamp_last_vehicle_angular_velocity
  {
    out << "timestamp_last_vehicle_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_last_vehicle_angular_velocity, out);
    out << ", ";
  }

  // member: timestamp_last_vehicle_local_position
  {
    out << "timestamp_last_vehicle_local_position: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_last_vehicle_local_position, out);
    out << ", ";
  }

  // member: timestamp_last_vehicle_attitude
  {
    out << "timestamp_last_vehicle_attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_last_vehicle_attitude, out);
    out << ", ";
  }

  // member: timestamp_last_trajectory_setpoint
  {
    out << "timestamp_last_trajectory_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_last_trajectory_setpoint, out);
    out << ", ";
  }

  // member: vehicle_angular_velocity_stale
  {
    out << "vehicle_angular_velocity_stale: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_angular_velocity_stale, out);
    out << ", ";
  }

  // member: vehicle_local_position_stale
  {
    out << "vehicle_local_position_stale: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_local_position_stale, out);
    out << ", ";
  }

  // member: vehicle_attitude_stale
  {
    out << "vehicle_attitude_stale: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_attitude_stale, out);
    out << ", ";
  }

  // member: trajectory_setpoint_stale
  {
    out << "trajectory_setpoint_stale: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_setpoint_stale, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << ", ";
  }

  // member: substep
  {
    out << "substep: ";
    rosidl_generator_traits::value_to_yaml(msg.substep, out);
    out << ", ";
  }

  // member: control_interval
  {
    out << "control_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.control_interval, out);
    out << ", ";
  }

  // member: trajectory_setpoint_dt_mean
  {
    out << "trajectory_setpoint_dt_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_setpoint_dt_mean, out);
    out << ", ";
  }

  // member: trajectory_setpoint_dt_max
  {
    out << "trajectory_setpoint_dt_max: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_setpoint_dt_max, out);
    out << ", ";
  }

  // member: trajectory_setpoint_dt_max_since_activation
  {
    out << "trajectory_setpoint_dt_max_since_activation: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_setpoint_dt_max_since_activation, out);
    out << ", ";
  }

  // member: internal_reference_position
  {
    if (msg.internal_reference_position.size() == 0) {
      out << "internal_reference_position: []";
    } else {
      out << "internal_reference_position: [";
      size_t pending_items = msg.internal_reference_position.size();
      for (auto item : msg.internal_reference_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: internal_reference_linear_velocity
  {
    if (msg.internal_reference_linear_velocity.size() == 0) {
      out << "internal_reference_linear_velocity: []";
    } else {
      out << "internal_reference_linear_velocity: [";
      size_t pending_items = msg.internal_reference_linear_velocity.size();
      for (auto item : msg.internal_reference_linear_velocity) {
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
  const RaptorStatus & msg,
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

  // member: subscription_update_angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "subscription_update_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.subscription_update_angular_velocity, out);
    out << "\n";
  }

  // member: subscription_update_local_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "subscription_update_local_position: ";
    rosidl_generator_traits::value_to_yaml(msg.subscription_update_local_position, out);
    out << "\n";
  }

  // member: subscription_update_attitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "subscription_update_attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.subscription_update_attitude, out);
    out << "\n";
  }

  // member: subscription_update_trajectory_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "subscription_update_trajectory_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.subscription_update_trajectory_setpoint, out);
    out << "\n";
  }

  // member: subscription_update_vehicle_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "subscription_update_vehicle_status: ";
    rosidl_generator_traits::value_to_yaml(msg.subscription_update_vehicle_status, out);
    out << "\n";
  }

  // member: exit_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exit_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_reason, out);
    out << "\n";
  }

  // member: timestamp_last_vehicle_angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_last_vehicle_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_last_vehicle_angular_velocity, out);
    out << "\n";
  }

  // member: timestamp_last_vehicle_local_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_last_vehicle_local_position: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_last_vehicle_local_position, out);
    out << "\n";
  }

  // member: timestamp_last_vehicle_attitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_last_vehicle_attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_last_vehicle_attitude, out);
    out << "\n";
  }

  // member: timestamp_last_trajectory_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_last_trajectory_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_last_trajectory_setpoint, out);
    out << "\n";
  }

  // member: vehicle_angular_velocity_stale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_angular_velocity_stale: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_angular_velocity_stale, out);
    out << "\n";
  }

  // member: vehicle_local_position_stale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_local_position_stale: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_local_position_stale, out);
    out << "\n";
  }

  // member: vehicle_attitude_stale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_attitude_stale: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_attitude_stale, out);
    out << "\n";
  }

  // member: trajectory_setpoint_stale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_setpoint_stale: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_setpoint_stale, out);
    out << "\n";
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }

  // member: substep
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "substep: ";
    rosidl_generator_traits::value_to_yaml(msg.substep, out);
    out << "\n";
  }

  // member: control_interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.control_interval, out);
    out << "\n";
  }

  // member: trajectory_setpoint_dt_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_setpoint_dt_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_setpoint_dt_mean, out);
    out << "\n";
  }

  // member: trajectory_setpoint_dt_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_setpoint_dt_max: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_setpoint_dt_max, out);
    out << "\n";
  }

  // member: trajectory_setpoint_dt_max_since_activation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_setpoint_dt_max_since_activation: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_setpoint_dt_max_since_activation, out);
    out << "\n";
  }

  // member: internal_reference_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.internal_reference_position.size() == 0) {
      out << "internal_reference_position: []\n";
    } else {
      out << "internal_reference_position:\n";
      for (auto item : msg.internal_reference_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: internal_reference_linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.internal_reference_linear_velocity.size() == 0) {
      out << "internal_reference_linear_velocity: []\n";
    } else {
      out << "internal_reference_linear_velocity:\n";
      for (auto item : msg.internal_reference_linear_velocity) {
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

inline std::string to_yaml(const RaptorStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::RaptorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::RaptorStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::RaptorStatus>()
{
  return "px4_msgs::msg::RaptorStatus";
}

template<>
inline const char * name<px4_msgs::msg::RaptorStatus>()
{
  return "px4_msgs/msg/RaptorStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::RaptorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RaptorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RaptorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__RAPTOR_STATUS__TRAITS_HPP_
