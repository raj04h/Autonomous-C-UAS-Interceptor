// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/Rpm.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RPM__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__RPM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/rpm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_Rpm_rpm_raw
{
public:
  explicit Init_Rpm_rpm_raw(::px4_msgs::msg::Rpm & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::Rpm rpm_raw(::px4_msgs::msg::Rpm::_rpm_raw_type arg)
  {
    msg_.rpm_raw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::Rpm msg_;
};

class Init_Rpm_rpm_estimate
{
public:
  explicit Init_Rpm_rpm_estimate(::px4_msgs::msg::Rpm & msg)
  : msg_(msg)
  {}
  Init_Rpm_rpm_raw rpm_estimate(::px4_msgs::msg::Rpm::_rpm_estimate_type arg)
  {
    msg_.rpm_estimate = std::move(arg);
    return Init_Rpm_rpm_raw(msg_);
  }

private:
  ::px4_msgs::msg::Rpm msg_;
};

class Init_Rpm_timestamp
{
public:
  Init_Rpm_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rpm_rpm_estimate timestamp(::px4_msgs::msg::Rpm::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Rpm_rpm_estimate(msg_);
  }

private:
  ::px4_msgs::msg::Rpm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::Rpm>()
{
  return px4_msgs::msg::builder::Init_Rpm_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RPM__BUILDER_HPP_
