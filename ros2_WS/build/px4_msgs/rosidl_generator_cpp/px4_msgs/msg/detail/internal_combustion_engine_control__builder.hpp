// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/InternalCombustionEngineControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/internal_combustion_engine_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_InternalCombustionEngineControl_user_request
{
public:
  explicit Init_InternalCombustionEngineControl_user_request(::px4_msgs::msg::InternalCombustionEngineControl & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::InternalCombustionEngineControl user_request(::px4_msgs::msg::InternalCombustionEngineControl::_user_request_type arg)
  {
    msg_.user_request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineControl msg_;
};

class Init_InternalCombustionEngineControl_starter_engine_control
{
public:
  explicit Init_InternalCombustionEngineControl_starter_engine_control(::px4_msgs::msg::InternalCombustionEngineControl & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineControl_user_request starter_engine_control(::px4_msgs::msg::InternalCombustionEngineControl::_starter_engine_control_type arg)
  {
    msg_.starter_engine_control = std::move(arg);
    return Init_InternalCombustionEngineControl_user_request(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineControl msg_;
};

class Init_InternalCombustionEngineControl_choke_control
{
public:
  explicit Init_InternalCombustionEngineControl_choke_control(::px4_msgs::msg::InternalCombustionEngineControl & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineControl_starter_engine_control choke_control(::px4_msgs::msg::InternalCombustionEngineControl::_choke_control_type arg)
  {
    msg_.choke_control = std::move(arg);
    return Init_InternalCombustionEngineControl_starter_engine_control(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineControl msg_;
};

class Init_InternalCombustionEngineControl_throttle_control
{
public:
  explicit Init_InternalCombustionEngineControl_throttle_control(::px4_msgs::msg::InternalCombustionEngineControl & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineControl_choke_control throttle_control(::px4_msgs::msg::InternalCombustionEngineControl::_throttle_control_type arg)
  {
    msg_.throttle_control = std::move(arg);
    return Init_InternalCombustionEngineControl_choke_control(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineControl msg_;
};

class Init_InternalCombustionEngineControl_ignition_on
{
public:
  explicit Init_InternalCombustionEngineControl_ignition_on(::px4_msgs::msg::InternalCombustionEngineControl & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineControl_throttle_control ignition_on(::px4_msgs::msg::InternalCombustionEngineControl::_ignition_on_type arg)
  {
    msg_.ignition_on = std::move(arg);
    return Init_InternalCombustionEngineControl_throttle_control(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineControl msg_;
};

class Init_InternalCombustionEngineControl_timestamp
{
public:
  Init_InternalCombustionEngineControl_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InternalCombustionEngineControl_ignition_on timestamp(::px4_msgs::msg::InternalCombustionEngineControl::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_InternalCombustionEngineControl_ignition_on(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::InternalCombustionEngineControl>()
{
  return px4_msgs::msg::builder::Init_InternalCombustionEngineControl_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__BUILDER_HPP_
