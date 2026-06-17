// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VteBiasInitStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_BIAS_INIT_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VTE_BIAS_INIT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vte_bias_init_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VteBiasInitStatus_delta_norm
{
public:
  explicit Init_VteBiasInitStatus_delta_norm(::px4_msgs::msg::VteBiasInitStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VteBiasInitStatus delta_norm(::px4_msgs::msg::VteBiasInitStatus::_delta_norm_type arg)
  {
    msg_.delta_norm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VteBiasInitStatus msg_;
};

class Init_VteBiasInitStatus_filtered_bias
{
public:
  explicit Init_VteBiasInitStatus_filtered_bias(::px4_msgs::msg::VteBiasInitStatus & msg)
  : msg_(msg)
  {}
  Init_VteBiasInitStatus_delta_norm filtered_bias(::px4_msgs::msg::VteBiasInitStatus::_filtered_bias_type arg)
  {
    msg_.filtered_bias = std::move(arg);
    return Init_VteBiasInitStatus_delta_norm(msg_);
  }

private:
  ::px4_msgs::msg::VteBiasInitStatus msg_;
};

class Init_VteBiasInitStatus_raw_bias
{
public:
  explicit Init_VteBiasInitStatus_raw_bias(::px4_msgs::msg::VteBiasInitStatus & msg)
  : msg_(msg)
  {}
  Init_VteBiasInitStatus_filtered_bias raw_bias(::px4_msgs::msg::VteBiasInitStatus::_raw_bias_type arg)
  {
    msg_.raw_bias = std::move(arg);
    return Init_VteBiasInitStatus_filtered_bias(msg_);
  }

private:
  ::px4_msgs::msg::VteBiasInitStatus msg_;
};

class Init_VteBiasInitStatus_timestamp
{
public:
  Init_VteBiasInitStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VteBiasInitStatus_raw_bias timestamp(::px4_msgs::msg::VteBiasInitStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VteBiasInitStatus_raw_bias(msg_);
  }

private:
  ::px4_msgs::msg::VteBiasInitStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VteBiasInitStatus>()
{
  return px4_msgs::msg::builder::Init_VteBiasInitStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VTE_BIAS_INIT_STATUS__BUILDER_HPP_
