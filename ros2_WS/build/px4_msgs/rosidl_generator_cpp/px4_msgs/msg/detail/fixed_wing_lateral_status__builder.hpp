// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/FixedWingLateralStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/fixed_wing_lateral_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_FixedWingLateralStatus_can_run_factor
{
public:
  explicit Init_FixedWingLateralStatus_can_run_factor(::px4_msgs::msg::FixedWingLateralStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::FixedWingLateralStatus can_run_factor(::px4_msgs::msg::FixedWingLateralStatus::_can_run_factor_type arg)
  {
    msg_.can_run_factor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralStatus msg_;
};

class Init_FixedWingLateralStatus_lateral_acceleration_setpoint
{
public:
  explicit Init_FixedWingLateralStatus_lateral_acceleration_setpoint(::px4_msgs::msg::FixedWingLateralStatus & msg)
  : msg_(msg)
  {}
  Init_FixedWingLateralStatus_can_run_factor lateral_acceleration_setpoint(::px4_msgs::msg::FixedWingLateralStatus::_lateral_acceleration_setpoint_type arg)
  {
    msg_.lateral_acceleration_setpoint = std::move(arg);
    return Init_FixedWingLateralStatus_can_run_factor(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralStatus msg_;
};

class Init_FixedWingLateralStatus_timestamp
{
public:
  Init_FixedWingLateralStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FixedWingLateralStatus_lateral_acceleration_setpoint timestamp(::px4_msgs::msg::FixedWingLateralStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FixedWingLateralStatus_lateral_acceleration_setpoint(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::FixedWingLateralStatus>()
{
  return px4_msgs::msg::builder::Init_FixedWingLateralStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_STATUS__BUILDER_HPP_
