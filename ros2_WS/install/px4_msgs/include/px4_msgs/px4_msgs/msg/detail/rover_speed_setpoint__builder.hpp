// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/RoverSpeedSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_SPEED_SETPOINT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ROVER_SPEED_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/rover_speed_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_RoverSpeedSetpoint_speed_body_y
{
public:
  explicit Init_RoverSpeedSetpoint_speed_body_y(::px4_msgs::msg::RoverSpeedSetpoint & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::RoverSpeedSetpoint speed_body_y(::px4_msgs::msg::RoverSpeedSetpoint::_speed_body_y_type arg)
  {
    msg_.speed_body_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::RoverSpeedSetpoint msg_;
};

class Init_RoverSpeedSetpoint_speed_body_x
{
public:
  explicit Init_RoverSpeedSetpoint_speed_body_x(::px4_msgs::msg::RoverSpeedSetpoint & msg)
  : msg_(msg)
  {}
  Init_RoverSpeedSetpoint_speed_body_y speed_body_x(::px4_msgs::msg::RoverSpeedSetpoint::_speed_body_x_type arg)
  {
    msg_.speed_body_x = std::move(arg);
    return Init_RoverSpeedSetpoint_speed_body_y(msg_);
  }

private:
  ::px4_msgs::msg::RoverSpeedSetpoint msg_;
};

class Init_RoverSpeedSetpoint_timestamp
{
public:
  Init_RoverSpeedSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverSpeedSetpoint_speed_body_x timestamp(::px4_msgs::msg::RoverSpeedSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RoverSpeedSetpoint_speed_body_x(msg_);
  }

private:
  ::px4_msgs::msg::RoverSpeedSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::RoverSpeedSetpoint>()
{
  return px4_msgs::msg::builder::Init_RoverSpeedSetpoint_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_SPEED_SETPOINT__BUILDER_HPP_
