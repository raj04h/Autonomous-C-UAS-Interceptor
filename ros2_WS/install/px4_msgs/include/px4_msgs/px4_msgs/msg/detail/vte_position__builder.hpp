// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VtePosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_POSITION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VTE_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vte_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VtePosition_cov_acc_target
{
public:
  explicit Init_VtePosition_cov_acc_target(::px4_msgs::msg::VtePosition & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VtePosition cov_acc_target(::px4_msgs::msg::VtePosition::_cov_acc_target_type arg)
  {
    msg_.cov_acc_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VtePosition msg_;
};

class Init_VtePosition_cov_vel_target
{
public:
  explicit Init_VtePosition_cov_vel_target(::px4_msgs::msg::VtePosition & msg)
  : msg_(msg)
  {}
  Init_VtePosition_cov_acc_target cov_vel_target(::px4_msgs::msg::VtePosition::_cov_vel_target_type arg)
  {
    msg_.cov_vel_target = std::move(arg);
    return Init_VtePosition_cov_acc_target(msg_);
  }

private:
  ::px4_msgs::msg::VtePosition msg_;
};

class Init_VtePosition_cov_bias
{
public:
  explicit Init_VtePosition_cov_bias(::px4_msgs::msg::VtePosition & msg)
  : msg_(msg)
  {}
  Init_VtePosition_cov_vel_target cov_bias(::px4_msgs::msg::VtePosition::_cov_bias_type arg)
  {
    msg_.cov_bias = std::move(arg);
    return Init_VtePosition_cov_vel_target(msg_);
  }

private:
  ::px4_msgs::msg::VtePosition msg_;
};

class Init_VtePosition_cov_vel_uav
{
public:
  explicit Init_VtePosition_cov_vel_uav(::px4_msgs::msg::VtePosition & msg)
  : msg_(msg)
  {}
  Init_VtePosition_cov_bias cov_vel_uav(::px4_msgs::msg::VtePosition::_cov_vel_uav_type arg)
  {
    msg_.cov_vel_uav = std::move(arg);
    return Init_VtePosition_cov_bias(msg_);
  }

private:
  ::px4_msgs::msg::VtePosition msg_;
};

class Init_VtePosition_cov_rel_pos
{
public:
  explicit Init_VtePosition_cov_rel_pos(::px4_msgs::msg::VtePosition & msg)
  : msg_(msg)
  {}
  Init_VtePosition_cov_vel_uav cov_rel_pos(::px4_msgs::msg::VtePosition::_cov_rel_pos_type arg)
  {
    msg_.cov_rel_pos = std::move(arg);
    return Init_VtePosition_cov_vel_uav(msg_);
  }

private:
  ::px4_msgs::msg::VtePosition msg_;
};

class Init_VtePosition_acc_target
{
public:
  explicit Init_VtePosition_acc_target(::px4_msgs::msg::VtePosition & msg)
  : msg_(msg)
  {}
  Init_VtePosition_cov_rel_pos acc_target(::px4_msgs::msg::VtePosition::_acc_target_type arg)
  {
    msg_.acc_target = std::move(arg);
    return Init_VtePosition_cov_rel_pos(msg_);
  }

private:
  ::px4_msgs::msg::VtePosition msg_;
};

class Init_VtePosition_bias
{
public:
  explicit Init_VtePosition_bias(::px4_msgs::msg::VtePosition & msg)
  : msg_(msg)
  {}
  Init_VtePosition_acc_target bias(::px4_msgs::msg::VtePosition::_bias_type arg)
  {
    msg_.bias = std::move(arg);
    return Init_VtePosition_acc_target(msg_);
  }

private:
  ::px4_msgs::msg::VtePosition msg_;
};

class Init_VtePosition_vel_target
{
public:
  explicit Init_VtePosition_vel_target(::px4_msgs::msg::VtePosition & msg)
  : msg_(msg)
  {}
  Init_VtePosition_bias vel_target(::px4_msgs::msg::VtePosition::_vel_target_type arg)
  {
    msg_.vel_target = std::move(arg);
    return Init_VtePosition_bias(msg_);
  }

private:
  ::px4_msgs::msg::VtePosition msg_;
};

class Init_VtePosition_vel_uav
{
public:
  explicit Init_VtePosition_vel_uav(::px4_msgs::msg::VtePosition & msg)
  : msg_(msg)
  {}
  Init_VtePosition_vel_target vel_uav(::px4_msgs::msg::VtePosition::_vel_uav_type arg)
  {
    msg_.vel_uav = std::move(arg);
    return Init_VtePosition_vel_target(msg_);
  }

private:
  ::px4_msgs::msg::VtePosition msg_;
};

class Init_VtePosition_rel_pos
{
public:
  explicit Init_VtePosition_rel_pos(::px4_msgs::msg::VtePosition & msg)
  : msg_(msg)
  {}
  Init_VtePosition_vel_uav rel_pos(::px4_msgs::msg::VtePosition::_rel_pos_type arg)
  {
    msg_.rel_pos = std::move(arg);
    return Init_VtePosition_vel_uav(msg_);
  }

private:
  ::px4_msgs::msg::VtePosition msg_;
};

class Init_VtePosition_rel_vel_valid
{
public:
  explicit Init_VtePosition_rel_vel_valid(::px4_msgs::msg::VtePosition & msg)
  : msg_(msg)
  {}
  Init_VtePosition_rel_pos rel_vel_valid(::px4_msgs::msg::VtePosition::_rel_vel_valid_type arg)
  {
    msg_.rel_vel_valid = std::move(arg);
    return Init_VtePosition_rel_pos(msg_);
  }

private:
  ::px4_msgs::msg::VtePosition msg_;
};

class Init_VtePosition_rel_pos_valid
{
public:
  explicit Init_VtePosition_rel_pos_valid(::px4_msgs::msg::VtePosition & msg)
  : msg_(msg)
  {}
  Init_VtePosition_rel_vel_valid rel_pos_valid(::px4_msgs::msg::VtePosition::_rel_pos_valid_type arg)
  {
    msg_.rel_pos_valid = std::move(arg);
    return Init_VtePosition_rel_vel_valid(msg_);
  }

private:
  ::px4_msgs::msg::VtePosition msg_;
};

class Init_VtePosition_timestamp
{
public:
  Init_VtePosition_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VtePosition_rel_pos_valid timestamp(::px4_msgs::msg::VtePosition::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VtePosition_rel_pos_valid(msg_);
  }

private:
  ::px4_msgs::msg::VtePosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VtePosition>()
{
  return px4_msgs::msg::builder::Init_VtePosition_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VTE_POSITION__BUILDER_HPP_
