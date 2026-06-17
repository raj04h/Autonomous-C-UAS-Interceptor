// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/FixedWingRunwayControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIXED_WING_RUNWAY_CONTROL__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__FIXED_WING_RUNWAY_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/fixed_wing_runway_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_FixedWingRunwayControl_wheel_steering_nudging_rate
{
public:
  explicit Init_FixedWingRunwayControl_wheel_steering_nudging_rate(::px4_msgs::msg::FixedWingRunwayControl & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::FixedWingRunwayControl wheel_steering_nudging_rate(::px4_msgs::msg::FixedWingRunwayControl::_wheel_steering_nudging_rate_type arg)
  {
    msg_.wheel_steering_nudging_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingRunwayControl msg_;
};

class Init_FixedWingRunwayControl_wheel_steering_enabled
{
public:
  explicit Init_FixedWingRunwayControl_wheel_steering_enabled(::px4_msgs::msg::FixedWingRunwayControl & msg)
  : msg_(msg)
  {}
  Init_FixedWingRunwayControl_wheel_steering_nudging_rate wheel_steering_enabled(::px4_msgs::msg::FixedWingRunwayControl::_wheel_steering_enabled_type arg)
  {
    msg_.wheel_steering_enabled = std::move(arg);
    return Init_FixedWingRunwayControl_wheel_steering_nudging_rate(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingRunwayControl msg_;
};

class Init_FixedWingRunwayControl_runway_takeoff_state
{
public:
  explicit Init_FixedWingRunwayControl_runway_takeoff_state(::px4_msgs::msg::FixedWingRunwayControl & msg)
  : msg_(msg)
  {}
  Init_FixedWingRunwayControl_wheel_steering_enabled runway_takeoff_state(::px4_msgs::msg::FixedWingRunwayControl::_runway_takeoff_state_type arg)
  {
    msg_.runway_takeoff_state = std::move(arg);
    return Init_FixedWingRunwayControl_wheel_steering_enabled(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingRunwayControl msg_;
};

class Init_FixedWingRunwayControl_timestamp
{
public:
  Init_FixedWingRunwayControl_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FixedWingRunwayControl_runway_takeoff_state timestamp(::px4_msgs::msg::FixedWingRunwayControl::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FixedWingRunwayControl_runway_takeoff_state(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingRunwayControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::FixedWingRunwayControl>()
{
  return px4_msgs::msg::builder::Init_FixedWingRunwayControl_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FIXED_WING_RUNWAY_CONTROL__BUILDER_HPP_
