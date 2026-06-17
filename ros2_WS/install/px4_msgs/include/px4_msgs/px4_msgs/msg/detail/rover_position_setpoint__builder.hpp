// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/RoverPositionSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_POSITION_SETPOINT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ROVER_POSITION_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/rover_position_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_RoverPositionSetpoint_yaw
{
public:
  explicit Init_RoverPositionSetpoint_yaw(::px4_msgs::msg::RoverPositionSetpoint & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::RoverPositionSetpoint yaw(::px4_msgs::msg::RoverPositionSetpoint::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::RoverPositionSetpoint msg_;
};

class Init_RoverPositionSetpoint_arrival_speed
{
public:
  explicit Init_RoverPositionSetpoint_arrival_speed(::px4_msgs::msg::RoverPositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_RoverPositionSetpoint_yaw arrival_speed(::px4_msgs::msg::RoverPositionSetpoint::_arrival_speed_type arg)
  {
    msg_.arrival_speed = std::move(arg);
    return Init_RoverPositionSetpoint_yaw(msg_);
  }

private:
  ::px4_msgs::msg::RoverPositionSetpoint msg_;
};

class Init_RoverPositionSetpoint_cruising_speed
{
public:
  explicit Init_RoverPositionSetpoint_cruising_speed(::px4_msgs::msg::RoverPositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_RoverPositionSetpoint_arrival_speed cruising_speed(::px4_msgs::msg::RoverPositionSetpoint::_cruising_speed_type arg)
  {
    msg_.cruising_speed = std::move(arg);
    return Init_RoverPositionSetpoint_arrival_speed(msg_);
  }

private:
  ::px4_msgs::msg::RoverPositionSetpoint msg_;
};

class Init_RoverPositionSetpoint_start_ned
{
public:
  explicit Init_RoverPositionSetpoint_start_ned(::px4_msgs::msg::RoverPositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_RoverPositionSetpoint_cruising_speed start_ned(::px4_msgs::msg::RoverPositionSetpoint::_start_ned_type arg)
  {
    msg_.start_ned = std::move(arg);
    return Init_RoverPositionSetpoint_cruising_speed(msg_);
  }

private:
  ::px4_msgs::msg::RoverPositionSetpoint msg_;
};

class Init_RoverPositionSetpoint_position_ned
{
public:
  explicit Init_RoverPositionSetpoint_position_ned(::px4_msgs::msg::RoverPositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_RoverPositionSetpoint_start_ned position_ned(::px4_msgs::msg::RoverPositionSetpoint::_position_ned_type arg)
  {
    msg_.position_ned = std::move(arg);
    return Init_RoverPositionSetpoint_start_ned(msg_);
  }

private:
  ::px4_msgs::msg::RoverPositionSetpoint msg_;
};

class Init_RoverPositionSetpoint_timestamp
{
public:
  Init_RoverPositionSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverPositionSetpoint_position_ned timestamp(::px4_msgs::msg::RoverPositionSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RoverPositionSetpoint_position_ned(msg_);
  }

private:
  ::px4_msgs::msg::RoverPositionSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::RoverPositionSetpoint>()
{
  return px4_msgs::msg::builder::Init_RoverPositionSetpoint_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_POSITION_SETPOINT__BUILDER_HPP_
