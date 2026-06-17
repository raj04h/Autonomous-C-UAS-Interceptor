// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/NeuralControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NEURAL_CONTROL__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__NEURAL_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/neural_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_NeuralControl_inference_time
{
public:
  explicit Init_NeuralControl_inference_time(::px4_msgs::msg::NeuralControl & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::NeuralControl inference_time(::px4_msgs::msg::NeuralControl::_inference_time_type arg)
  {
    msg_.inference_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::NeuralControl msg_;
};

class Init_NeuralControl_controller_time
{
public:
  explicit Init_NeuralControl_controller_time(::px4_msgs::msg::NeuralControl & msg)
  : msg_(msg)
  {}
  Init_NeuralControl_inference_time controller_time(::px4_msgs::msg::NeuralControl::_controller_time_type arg)
  {
    msg_.controller_time = std::move(arg);
    return Init_NeuralControl_inference_time(msg_);
  }

private:
  ::px4_msgs::msg::NeuralControl msg_;
};

class Init_NeuralControl_network_output
{
public:
  explicit Init_NeuralControl_network_output(::px4_msgs::msg::NeuralControl & msg)
  : msg_(msg)
  {}
  Init_NeuralControl_controller_time network_output(::px4_msgs::msg::NeuralControl::_network_output_type arg)
  {
    msg_.network_output = std::move(arg);
    return Init_NeuralControl_controller_time(msg_);
  }

private:
  ::px4_msgs::msg::NeuralControl msg_;
};

class Init_NeuralControl_observation
{
public:
  explicit Init_NeuralControl_observation(::px4_msgs::msg::NeuralControl & msg)
  : msg_(msg)
  {}
  Init_NeuralControl_network_output observation(::px4_msgs::msg::NeuralControl::_observation_type arg)
  {
    msg_.observation = std::move(arg);
    return Init_NeuralControl_network_output(msg_);
  }

private:
  ::px4_msgs::msg::NeuralControl msg_;
};

class Init_NeuralControl_timestamp
{
public:
  Init_NeuralControl_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NeuralControl_observation timestamp(::px4_msgs::msg::NeuralControl::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_NeuralControl_observation(msg_);
  }

private:
  ::px4_msgs::msg::NeuralControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::NeuralControl>()
{
  return px4_msgs::msg::builder::Init_NeuralControl_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__NEURAL_CONTROL__BUILDER_HPP_
