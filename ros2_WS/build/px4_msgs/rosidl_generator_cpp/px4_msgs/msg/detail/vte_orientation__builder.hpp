// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VteOrientation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_ORIENTATION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VTE_ORIENTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vte_orientation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VteOrientation_cov_yaw_rate
{
public:
  explicit Init_VteOrientation_cov_yaw_rate(::px4_msgs::msg::VteOrientation & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VteOrientation cov_yaw_rate(::px4_msgs::msg::VteOrientation::_cov_yaw_rate_type arg)
  {
    msg_.cov_yaw_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VteOrientation msg_;
};

class Init_VteOrientation_yaw_rate
{
public:
  explicit Init_VteOrientation_yaw_rate(::px4_msgs::msg::VteOrientation & msg)
  : msg_(msg)
  {}
  Init_VteOrientation_cov_yaw_rate yaw_rate(::px4_msgs::msg::VteOrientation::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_VteOrientation_cov_yaw_rate(msg_);
  }

private:
  ::px4_msgs::msg::VteOrientation msg_;
};

class Init_VteOrientation_cov_yaw
{
public:
  explicit Init_VteOrientation_cov_yaw(::px4_msgs::msg::VteOrientation & msg)
  : msg_(msg)
  {}
  Init_VteOrientation_yaw_rate cov_yaw(::px4_msgs::msg::VteOrientation::_cov_yaw_type arg)
  {
    msg_.cov_yaw = std::move(arg);
    return Init_VteOrientation_yaw_rate(msg_);
  }

private:
  ::px4_msgs::msg::VteOrientation msg_;
};

class Init_VteOrientation_yaw
{
public:
  explicit Init_VteOrientation_yaw(::px4_msgs::msg::VteOrientation & msg)
  : msg_(msg)
  {}
  Init_VteOrientation_cov_yaw yaw(::px4_msgs::msg::VteOrientation::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_VteOrientation_cov_yaw(msg_);
  }

private:
  ::px4_msgs::msg::VteOrientation msg_;
};

class Init_VteOrientation_orientation_valid
{
public:
  explicit Init_VteOrientation_orientation_valid(::px4_msgs::msg::VteOrientation & msg)
  : msg_(msg)
  {}
  Init_VteOrientation_yaw orientation_valid(::px4_msgs::msg::VteOrientation::_orientation_valid_type arg)
  {
    msg_.orientation_valid = std::move(arg);
    return Init_VteOrientation_yaw(msg_);
  }

private:
  ::px4_msgs::msg::VteOrientation msg_;
};

class Init_VteOrientation_timestamp
{
public:
  Init_VteOrientation_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VteOrientation_orientation_valid timestamp(::px4_msgs::msg::VteOrientation::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VteOrientation_orientation_valid(msg_);
  }

private:
  ::px4_msgs::msg::VteOrientation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VteOrientation>()
{
  return px4_msgs::msg::builder::Init_VteOrientation_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VTE_ORIENTATION__BUILDER_HPP_
