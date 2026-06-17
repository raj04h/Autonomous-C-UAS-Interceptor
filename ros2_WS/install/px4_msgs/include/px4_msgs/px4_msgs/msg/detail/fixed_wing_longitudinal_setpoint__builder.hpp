// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/FixedWingLongitudinalSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIXED_WING_LONGITUDINAL_SETPOINT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__FIXED_WING_LONGITUDINAL_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/fixed_wing_longitudinal_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_FixedWingLongitudinalSetpoint_throttle_direct
{
public:
  explicit Init_FixedWingLongitudinalSetpoint_throttle_direct(::px4_msgs::msg::FixedWingLongitudinalSetpoint & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::FixedWingLongitudinalSetpoint throttle_direct(::px4_msgs::msg::FixedWingLongitudinalSetpoint::_throttle_direct_type arg)
  {
    msg_.throttle_direct = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLongitudinalSetpoint msg_;
};

class Init_FixedWingLongitudinalSetpoint_pitch_direct
{
public:
  explicit Init_FixedWingLongitudinalSetpoint_pitch_direct(::px4_msgs::msg::FixedWingLongitudinalSetpoint & msg)
  : msg_(msg)
  {}
  Init_FixedWingLongitudinalSetpoint_throttle_direct pitch_direct(::px4_msgs::msg::FixedWingLongitudinalSetpoint::_pitch_direct_type arg)
  {
    msg_.pitch_direct = std::move(arg);
    return Init_FixedWingLongitudinalSetpoint_throttle_direct(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLongitudinalSetpoint msg_;
};

class Init_FixedWingLongitudinalSetpoint_equivalent_airspeed
{
public:
  explicit Init_FixedWingLongitudinalSetpoint_equivalent_airspeed(::px4_msgs::msg::FixedWingLongitudinalSetpoint & msg)
  : msg_(msg)
  {}
  Init_FixedWingLongitudinalSetpoint_pitch_direct equivalent_airspeed(::px4_msgs::msg::FixedWingLongitudinalSetpoint::_equivalent_airspeed_type arg)
  {
    msg_.equivalent_airspeed = std::move(arg);
    return Init_FixedWingLongitudinalSetpoint_pitch_direct(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLongitudinalSetpoint msg_;
};

class Init_FixedWingLongitudinalSetpoint_height_rate
{
public:
  explicit Init_FixedWingLongitudinalSetpoint_height_rate(::px4_msgs::msg::FixedWingLongitudinalSetpoint & msg)
  : msg_(msg)
  {}
  Init_FixedWingLongitudinalSetpoint_equivalent_airspeed height_rate(::px4_msgs::msg::FixedWingLongitudinalSetpoint::_height_rate_type arg)
  {
    msg_.height_rate = std::move(arg);
    return Init_FixedWingLongitudinalSetpoint_equivalent_airspeed(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLongitudinalSetpoint msg_;
};

class Init_FixedWingLongitudinalSetpoint_altitude
{
public:
  explicit Init_FixedWingLongitudinalSetpoint_altitude(::px4_msgs::msg::FixedWingLongitudinalSetpoint & msg)
  : msg_(msg)
  {}
  Init_FixedWingLongitudinalSetpoint_height_rate altitude(::px4_msgs::msg::FixedWingLongitudinalSetpoint::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_FixedWingLongitudinalSetpoint_height_rate(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLongitudinalSetpoint msg_;
};

class Init_FixedWingLongitudinalSetpoint_timestamp
{
public:
  Init_FixedWingLongitudinalSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FixedWingLongitudinalSetpoint_altitude timestamp(::px4_msgs::msg::FixedWingLongitudinalSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FixedWingLongitudinalSetpoint_altitude(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLongitudinalSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::FixedWingLongitudinalSetpoint>()
{
  return px4_msgs::msg::builder::Init_FixedWingLongitudinalSetpoint_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FIXED_WING_LONGITUDINAL_SETPOINT__BUILDER_HPP_
