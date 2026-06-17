// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/FixedWingLateralSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_SETPOINT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/fixed_wing_lateral_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_FixedWingLateralSetpoint_lateral_acceleration
{
public:
  explicit Init_FixedWingLateralSetpoint_lateral_acceleration(::px4_msgs::msg::FixedWingLateralSetpoint & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::FixedWingLateralSetpoint lateral_acceleration(::px4_msgs::msg::FixedWingLateralSetpoint::_lateral_acceleration_type arg)
  {
    msg_.lateral_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralSetpoint msg_;
};

class Init_FixedWingLateralSetpoint_airspeed_direction
{
public:
  explicit Init_FixedWingLateralSetpoint_airspeed_direction(::px4_msgs::msg::FixedWingLateralSetpoint & msg)
  : msg_(msg)
  {}
  Init_FixedWingLateralSetpoint_lateral_acceleration airspeed_direction(::px4_msgs::msg::FixedWingLateralSetpoint::_airspeed_direction_type arg)
  {
    msg_.airspeed_direction = std::move(arg);
    return Init_FixedWingLateralSetpoint_lateral_acceleration(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralSetpoint msg_;
};

class Init_FixedWingLateralSetpoint_course
{
public:
  explicit Init_FixedWingLateralSetpoint_course(::px4_msgs::msg::FixedWingLateralSetpoint & msg)
  : msg_(msg)
  {}
  Init_FixedWingLateralSetpoint_airspeed_direction course(::px4_msgs::msg::FixedWingLateralSetpoint::_course_type arg)
  {
    msg_.course = std::move(arg);
    return Init_FixedWingLateralSetpoint_airspeed_direction(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralSetpoint msg_;
};

class Init_FixedWingLateralSetpoint_timestamp
{
public:
  Init_FixedWingLateralSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FixedWingLateralSetpoint_course timestamp(::px4_msgs::msg::FixedWingLateralSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FixedWingLateralSetpoint_course(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::FixedWingLateralSetpoint>()
{
  return px4_msgs::msg::builder::Init_FixedWingLateralSetpoint_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_SETPOINT__BUILDER_HPP_
