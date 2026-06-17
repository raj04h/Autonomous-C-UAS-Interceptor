// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/RoverThrottleSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_THROTTLE_SETPOINT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ROVER_THROTTLE_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/rover_throttle_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_RoverThrottleSetpoint_throttle_body_y
{
public:
  explicit Init_RoverThrottleSetpoint_throttle_body_y(::px4_msgs::msg::RoverThrottleSetpoint & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::RoverThrottleSetpoint throttle_body_y(::px4_msgs::msg::RoverThrottleSetpoint::_throttle_body_y_type arg)
  {
    msg_.throttle_body_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::RoverThrottleSetpoint msg_;
};

class Init_RoverThrottleSetpoint_throttle_body_x
{
public:
  explicit Init_RoverThrottleSetpoint_throttle_body_x(::px4_msgs::msg::RoverThrottleSetpoint & msg)
  : msg_(msg)
  {}
  Init_RoverThrottleSetpoint_throttle_body_y throttle_body_x(::px4_msgs::msg::RoverThrottleSetpoint::_throttle_body_x_type arg)
  {
    msg_.throttle_body_x = std::move(arg);
    return Init_RoverThrottleSetpoint_throttle_body_y(msg_);
  }

private:
  ::px4_msgs::msg::RoverThrottleSetpoint msg_;
};

class Init_RoverThrottleSetpoint_timestamp
{
public:
  Init_RoverThrottleSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverThrottleSetpoint_throttle_body_x timestamp(::px4_msgs::msg::RoverThrottleSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RoverThrottleSetpoint_throttle_body_x(msg_);
  }

private:
  ::px4_msgs::msg::RoverThrottleSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::RoverThrottleSetpoint>()
{
  return px4_msgs::msg::builder::Init_RoverThrottleSetpoint_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_THROTTLE_SETPOINT__BUILDER_HPP_
