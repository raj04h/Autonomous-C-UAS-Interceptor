// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/NavigatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NAVIGATOR_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__NAVIGATOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/navigator_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_NavigatorStatus_failure
{
public:
  explicit Init_NavigatorStatus_failure(::px4_msgs::msg::NavigatorStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::NavigatorStatus failure(::px4_msgs::msg::NavigatorStatus::_failure_type arg)
  {
    msg_.failure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorStatus msg_;
};

class Init_NavigatorStatus_nav_state
{
public:
  explicit Init_NavigatorStatus_nav_state(::px4_msgs::msg::NavigatorStatus & msg)
  : msg_(msg)
  {}
  Init_NavigatorStatus_failure nav_state(::px4_msgs::msg::NavigatorStatus::_nav_state_type arg)
  {
    msg_.nav_state = std::move(arg);
    return Init_NavigatorStatus_failure(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorStatus msg_;
};

class Init_NavigatorStatus_timestamp
{
public:
  Init_NavigatorStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigatorStatus_nav_state timestamp(::px4_msgs::msg::NavigatorStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_NavigatorStatus_nav_state(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::NavigatorStatus>()
{
  return px4_msgs::msg::builder::Init_NavigatorStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__NAVIGATOR_STATUS__BUILDER_HPP_
