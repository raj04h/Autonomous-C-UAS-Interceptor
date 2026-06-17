// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VteInput.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_INPUT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VTE_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vte_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VteInput_acc_sample_count
{
public:
  explicit Init_VteInput_acc_sample_count(::px4_msgs::msg::VteInput & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VteInput acc_sample_count(::px4_msgs::msg::VteInput::_acc_sample_count_type arg)
  {
    msg_.acc_sample_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VteInput msg_;
};

class Init_VteInput_q_att
{
public:
  explicit Init_VteInput_q_att(::px4_msgs::msg::VteInput & msg)
  : msg_(msg)
  {}
  Init_VteInput_acc_sample_count q_att(::px4_msgs::msg::VteInput::_q_att_type arg)
  {
    msg_.q_att = std::move(arg);
    return Init_VteInput_acc_sample_count(msg_);
  }

private:
  ::px4_msgs::msg::VteInput msg_;
};

class Init_VteInput_acc_xyz
{
public:
  explicit Init_VteInput_acc_xyz(::px4_msgs::msg::VteInput & msg)
  : msg_(msg)
  {}
  Init_VteInput_q_att acc_xyz(::px4_msgs::msg::VteInput::_acc_xyz_type arg)
  {
    msg_.acc_xyz = std::move(arg);
    return Init_VteInput_q_att(msg_);
  }

private:
  ::px4_msgs::msg::VteInput msg_;
};

class Init_VteInput_timestamp_sample
{
public:
  explicit Init_VteInput_timestamp_sample(::px4_msgs::msg::VteInput & msg)
  : msg_(msg)
  {}
  Init_VteInput_acc_xyz timestamp_sample(::px4_msgs::msg::VteInput::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VteInput_acc_xyz(msg_);
  }

private:
  ::px4_msgs::msg::VteInput msg_;
};

class Init_VteInput_timestamp
{
public:
  Init_VteInput_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VteInput_timestamp_sample timestamp(::px4_msgs::msg::VteInput::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VteInput_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VteInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VteInput>()
{
  return px4_msgs::msg::builder::Init_VteInput_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VTE_INPUT__BUILDER_HPP_
