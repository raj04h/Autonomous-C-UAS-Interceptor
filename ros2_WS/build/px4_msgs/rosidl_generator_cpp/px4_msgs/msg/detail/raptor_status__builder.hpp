// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/RaptorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RAPTOR_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__RAPTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/raptor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_RaptorStatus_internal_reference_linear_velocity
{
public:
  explicit Init_RaptorStatus_internal_reference_linear_velocity(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::RaptorStatus internal_reference_linear_velocity(::px4_msgs::msg::RaptorStatus::_internal_reference_linear_velocity_type arg)
  {
    msg_.internal_reference_linear_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_internal_reference_position
{
public:
  explicit Init_RaptorStatus_internal_reference_position(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_internal_reference_linear_velocity internal_reference_position(::px4_msgs::msg::RaptorStatus::_internal_reference_position_type arg)
  {
    msg_.internal_reference_position = std::move(arg);
    return Init_RaptorStatus_internal_reference_linear_velocity(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_trajectory_setpoint_dt_max_since_activation
{
public:
  explicit Init_RaptorStatus_trajectory_setpoint_dt_max_since_activation(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_internal_reference_position trajectory_setpoint_dt_max_since_activation(::px4_msgs::msg::RaptorStatus::_trajectory_setpoint_dt_max_since_activation_type arg)
  {
    msg_.trajectory_setpoint_dt_max_since_activation = std::move(arg);
    return Init_RaptorStatus_internal_reference_position(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_trajectory_setpoint_dt_max
{
public:
  explicit Init_RaptorStatus_trajectory_setpoint_dt_max(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_trajectory_setpoint_dt_max_since_activation trajectory_setpoint_dt_max(::px4_msgs::msg::RaptorStatus::_trajectory_setpoint_dt_max_type arg)
  {
    msg_.trajectory_setpoint_dt_max = std::move(arg);
    return Init_RaptorStatus_trajectory_setpoint_dt_max_since_activation(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_trajectory_setpoint_dt_mean
{
public:
  explicit Init_RaptorStatus_trajectory_setpoint_dt_mean(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_trajectory_setpoint_dt_max trajectory_setpoint_dt_mean(::px4_msgs::msg::RaptorStatus::_trajectory_setpoint_dt_mean_type arg)
  {
    msg_.trajectory_setpoint_dt_mean = std::move(arg);
    return Init_RaptorStatus_trajectory_setpoint_dt_max(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_control_interval
{
public:
  explicit Init_RaptorStatus_control_interval(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_trajectory_setpoint_dt_mean control_interval(::px4_msgs::msg::RaptorStatus::_control_interval_type arg)
  {
    msg_.control_interval = std::move(arg);
    return Init_RaptorStatus_trajectory_setpoint_dt_mean(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_substep
{
public:
  explicit Init_RaptorStatus_substep(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_control_interval substep(::px4_msgs::msg::RaptorStatus::_substep_type arg)
  {
    msg_.substep = std::move(arg);
    return Init_RaptorStatus_control_interval(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_active
{
public:
  explicit Init_RaptorStatus_active(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_substep active(::px4_msgs::msg::RaptorStatus::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_RaptorStatus_substep(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_trajectory_setpoint_stale
{
public:
  explicit Init_RaptorStatus_trajectory_setpoint_stale(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_active trajectory_setpoint_stale(::px4_msgs::msg::RaptorStatus::_trajectory_setpoint_stale_type arg)
  {
    msg_.trajectory_setpoint_stale = std::move(arg);
    return Init_RaptorStatus_active(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_vehicle_attitude_stale
{
public:
  explicit Init_RaptorStatus_vehicle_attitude_stale(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_trajectory_setpoint_stale vehicle_attitude_stale(::px4_msgs::msg::RaptorStatus::_vehicle_attitude_stale_type arg)
  {
    msg_.vehicle_attitude_stale = std::move(arg);
    return Init_RaptorStatus_trajectory_setpoint_stale(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_vehicle_local_position_stale
{
public:
  explicit Init_RaptorStatus_vehicle_local_position_stale(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_vehicle_attitude_stale vehicle_local_position_stale(::px4_msgs::msg::RaptorStatus::_vehicle_local_position_stale_type arg)
  {
    msg_.vehicle_local_position_stale = std::move(arg);
    return Init_RaptorStatus_vehicle_attitude_stale(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_vehicle_angular_velocity_stale
{
public:
  explicit Init_RaptorStatus_vehicle_angular_velocity_stale(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_vehicle_local_position_stale vehicle_angular_velocity_stale(::px4_msgs::msg::RaptorStatus::_vehicle_angular_velocity_stale_type arg)
  {
    msg_.vehicle_angular_velocity_stale = std::move(arg);
    return Init_RaptorStatus_vehicle_local_position_stale(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_timestamp_last_trajectory_setpoint
{
public:
  explicit Init_RaptorStatus_timestamp_last_trajectory_setpoint(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_vehicle_angular_velocity_stale timestamp_last_trajectory_setpoint(::px4_msgs::msg::RaptorStatus::_timestamp_last_trajectory_setpoint_type arg)
  {
    msg_.timestamp_last_trajectory_setpoint = std::move(arg);
    return Init_RaptorStatus_vehicle_angular_velocity_stale(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_timestamp_last_vehicle_attitude
{
public:
  explicit Init_RaptorStatus_timestamp_last_vehicle_attitude(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_timestamp_last_trajectory_setpoint timestamp_last_vehicle_attitude(::px4_msgs::msg::RaptorStatus::_timestamp_last_vehicle_attitude_type arg)
  {
    msg_.timestamp_last_vehicle_attitude = std::move(arg);
    return Init_RaptorStatus_timestamp_last_trajectory_setpoint(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_timestamp_last_vehicle_local_position
{
public:
  explicit Init_RaptorStatus_timestamp_last_vehicle_local_position(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_timestamp_last_vehicle_attitude timestamp_last_vehicle_local_position(::px4_msgs::msg::RaptorStatus::_timestamp_last_vehicle_local_position_type arg)
  {
    msg_.timestamp_last_vehicle_local_position = std::move(arg);
    return Init_RaptorStatus_timestamp_last_vehicle_attitude(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_timestamp_last_vehicle_angular_velocity
{
public:
  explicit Init_RaptorStatus_timestamp_last_vehicle_angular_velocity(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_timestamp_last_vehicle_local_position timestamp_last_vehicle_angular_velocity(::px4_msgs::msg::RaptorStatus::_timestamp_last_vehicle_angular_velocity_type arg)
  {
    msg_.timestamp_last_vehicle_angular_velocity = std::move(arg);
    return Init_RaptorStatus_timestamp_last_vehicle_local_position(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_exit_reason
{
public:
  explicit Init_RaptorStatus_exit_reason(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_timestamp_last_vehicle_angular_velocity exit_reason(::px4_msgs::msg::RaptorStatus::_exit_reason_type arg)
  {
    msg_.exit_reason = std::move(arg);
    return Init_RaptorStatus_timestamp_last_vehicle_angular_velocity(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_subscription_update_vehicle_status
{
public:
  explicit Init_RaptorStatus_subscription_update_vehicle_status(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_exit_reason subscription_update_vehicle_status(::px4_msgs::msg::RaptorStatus::_subscription_update_vehicle_status_type arg)
  {
    msg_.subscription_update_vehicle_status = std::move(arg);
    return Init_RaptorStatus_exit_reason(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_subscription_update_trajectory_setpoint
{
public:
  explicit Init_RaptorStatus_subscription_update_trajectory_setpoint(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_subscription_update_vehicle_status subscription_update_trajectory_setpoint(::px4_msgs::msg::RaptorStatus::_subscription_update_trajectory_setpoint_type arg)
  {
    msg_.subscription_update_trajectory_setpoint = std::move(arg);
    return Init_RaptorStatus_subscription_update_vehicle_status(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_subscription_update_attitude
{
public:
  explicit Init_RaptorStatus_subscription_update_attitude(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_subscription_update_trajectory_setpoint subscription_update_attitude(::px4_msgs::msg::RaptorStatus::_subscription_update_attitude_type arg)
  {
    msg_.subscription_update_attitude = std::move(arg);
    return Init_RaptorStatus_subscription_update_trajectory_setpoint(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_subscription_update_local_position
{
public:
  explicit Init_RaptorStatus_subscription_update_local_position(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_subscription_update_attitude subscription_update_local_position(::px4_msgs::msg::RaptorStatus::_subscription_update_local_position_type arg)
  {
    msg_.subscription_update_local_position = std::move(arg);
    return Init_RaptorStatus_subscription_update_attitude(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_subscription_update_angular_velocity
{
public:
  explicit Init_RaptorStatus_subscription_update_angular_velocity(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_subscription_update_local_position subscription_update_angular_velocity(::px4_msgs::msg::RaptorStatus::_subscription_update_angular_velocity_type arg)
  {
    msg_.subscription_update_angular_velocity = std::move(arg);
    return Init_RaptorStatus_subscription_update_local_position(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_timestamp_sample
{
public:
  explicit Init_RaptorStatus_timestamp_sample(::px4_msgs::msg::RaptorStatus & msg)
  : msg_(msg)
  {}
  Init_RaptorStatus_subscription_update_angular_velocity timestamp_sample(::px4_msgs::msg::RaptorStatus::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_RaptorStatus_subscription_update_angular_velocity(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

class Init_RaptorStatus_timestamp
{
public:
  Init_RaptorStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RaptorStatus_timestamp_sample timestamp(::px4_msgs::msg::RaptorStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RaptorStatus_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::RaptorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::RaptorStatus>()
{
  return px4_msgs::msg::builder::Init_RaptorStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RAPTOR_STATUS__BUILDER_HPP_
