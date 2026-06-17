// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/RaptorInput.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RAPTOR_INPUT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__RAPTOR_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/raptor_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_RaptorInput_previous_action
{
public:
  explicit Init_RaptorInput_previous_action(::px4_msgs::msg::RaptorInput & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::RaptorInput previous_action(::px4_msgs::msg::RaptorInput::_previous_action_type arg)
  {
    msg_.previous_action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::RaptorInput msg_;
};

class Init_RaptorInput_angular_velocity
{
public:
  explicit Init_RaptorInput_angular_velocity(::px4_msgs::msg::RaptorInput & msg)
  : msg_(msg)
  {}
  Init_RaptorInput_previous_action angular_velocity(::px4_msgs::msg::RaptorInput::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_RaptorInput_previous_action(msg_);
  }

private:
  ::px4_msgs::msg::RaptorInput msg_;
};

class Init_RaptorInput_linear_velocity
{
public:
  explicit Init_RaptorInput_linear_velocity(::px4_msgs::msg::RaptorInput & msg)
  : msg_(msg)
  {}
  Init_RaptorInput_angular_velocity linear_velocity(::px4_msgs::msg::RaptorInput::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_RaptorInput_angular_velocity(msg_);
  }

private:
  ::px4_msgs::msg::RaptorInput msg_;
};

class Init_RaptorInput_orientation
{
public:
  explicit Init_RaptorInput_orientation(::px4_msgs::msg::RaptorInput & msg)
  : msg_(msg)
  {}
  Init_RaptorInput_linear_velocity orientation(::px4_msgs::msg::RaptorInput::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_RaptorInput_linear_velocity(msg_);
  }

private:
  ::px4_msgs::msg::RaptorInput msg_;
};

class Init_RaptorInput_position
{
public:
  explicit Init_RaptorInput_position(::px4_msgs::msg::RaptorInput & msg)
  : msg_(msg)
  {}
  Init_RaptorInput_orientation position(::px4_msgs::msg::RaptorInput::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RaptorInput_orientation(msg_);
  }

private:
  ::px4_msgs::msg::RaptorInput msg_;
};

class Init_RaptorInput_active
{
public:
  explicit Init_RaptorInput_active(::px4_msgs::msg::RaptorInput & msg)
  : msg_(msg)
  {}
  Init_RaptorInput_position active(::px4_msgs::msg::RaptorInput::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_RaptorInput_position(msg_);
  }

private:
  ::px4_msgs::msg::RaptorInput msg_;
};

class Init_RaptorInput_timestamp_sample
{
public:
  explicit Init_RaptorInput_timestamp_sample(::px4_msgs::msg::RaptorInput & msg)
  : msg_(msg)
  {}
  Init_RaptorInput_active timestamp_sample(::px4_msgs::msg::RaptorInput::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_RaptorInput_active(msg_);
  }

private:
  ::px4_msgs::msg::RaptorInput msg_;
};

class Init_RaptorInput_timestamp
{
public:
  Init_RaptorInput_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RaptorInput_timestamp_sample timestamp(::px4_msgs::msg::RaptorInput::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RaptorInput_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::RaptorInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::RaptorInput>()
{
  return px4_msgs::msg::builder::Init_RaptorInput_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RAPTOR_INPUT__BUILDER_HPP_
