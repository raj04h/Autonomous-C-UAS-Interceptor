// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/RoverRateSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_RATE_SETPOINT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ROVER_RATE_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/rover_rate_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_RoverRateSetpoint_yaw_rate_setpoint
{
public:
  explicit Init_RoverRateSetpoint_yaw_rate_setpoint(::px4_msgs::msg::RoverRateSetpoint & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::RoverRateSetpoint yaw_rate_setpoint(::px4_msgs::msg::RoverRateSetpoint::_yaw_rate_setpoint_type arg)
  {
    msg_.yaw_rate_setpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::RoverRateSetpoint msg_;
};

class Init_RoverRateSetpoint_timestamp
{
public:
  Init_RoverRateSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverRateSetpoint_yaw_rate_setpoint timestamp(::px4_msgs::msg::RoverRateSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RoverRateSetpoint_yaw_rate_setpoint(msg_);
  }

private:
  ::px4_msgs::msg::RoverRateSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::RoverRateSetpoint>()
{
  return px4_msgs::msg::builder::Init_RoverRateSetpoint_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_RATE_SETPOINT__BUILDER_HPP_
