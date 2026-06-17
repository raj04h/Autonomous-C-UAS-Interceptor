// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/RoverAttitudeSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_ATTITUDE_SETPOINT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ROVER_ATTITUDE_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/rover_attitude_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_RoverAttitudeSetpoint_yaw_setpoint
{
public:
  explicit Init_RoverAttitudeSetpoint_yaw_setpoint(::px4_msgs::msg::RoverAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::RoverAttitudeSetpoint yaw_setpoint(::px4_msgs::msg::RoverAttitudeSetpoint::_yaw_setpoint_type arg)
  {
    msg_.yaw_setpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::RoverAttitudeSetpoint msg_;
};

class Init_RoverAttitudeSetpoint_timestamp
{
public:
  Init_RoverAttitudeSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverAttitudeSetpoint_yaw_setpoint timestamp(::px4_msgs::msg::RoverAttitudeSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RoverAttitudeSetpoint_yaw_setpoint(msg_);
  }

private:
  ::px4_msgs::msg::RoverAttitudeSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::RoverAttitudeSetpoint>()
{
  return px4_msgs::msg::builder::Init_RoverAttitudeSetpoint_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_ATTITUDE_SETPOINT__BUILDER_HPP_
