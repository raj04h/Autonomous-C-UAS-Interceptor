// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/LateralControlConfiguration.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LATERAL_CONTROL_CONFIGURATION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__LATERAL_CONTROL_CONFIGURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/lateral_control_configuration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_LateralControlConfiguration_lateral_accel_max
{
public:
  explicit Init_LateralControlConfiguration_lateral_accel_max(::px4_msgs::msg::LateralControlConfiguration & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::LateralControlConfiguration lateral_accel_max(::px4_msgs::msg::LateralControlConfiguration::_lateral_accel_max_type arg)
  {
    msg_.lateral_accel_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::LateralControlConfiguration msg_;
};

class Init_LateralControlConfiguration_timestamp
{
public:
  Init_LateralControlConfiguration_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LateralControlConfiguration_lateral_accel_max timestamp(::px4_msgs::msg::LateralControlConfiguration::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LateralControlConfiguration_lateral_accel_max(msg_);
  }

private:
  ::px4_msgs::msg::LateralControlConfiguration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::LateralControlConfiguration>()
{
  return px4_msgs::msg::builder::Init_LateralControlConfiguration_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__LATERAL_CONTROL_CONFIGURATION__BUILDER_HPP_
