// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/GainCompression.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GAIN_COMPRESSION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__GAIN_COMPRESSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/gain_compression__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_GainCompression_spectral_damper_out
{
public:
  explicit Init_GainCompression_spectral_damper_out(::px4_msgs::msg::GainCompression & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::GainCompression spectral_damper_out(::px4_msgs::msg::GainCompression::_spectral_damper_out_type arg)
  {
    msg_.spectral_damper_out = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::GainCompression msg_;
};

class Init_GainCompression_spectral_damper_hpf
{
public:
  explicit Init_GainCompression_spectral_damper_hpf(::px4_msgs::msg::GainCompression & msg)
  : msg_(msg)
  {}
  Init_GainCompression_spectral_damper_out spectral_damper_hpf(::px4_msgs::msg::GainCompression::_spectral_damper_hpf_type arg)
  {
    msg_.spectral_damper_hpf = std::move(arg);
    return Init_GainCompression_spectral_damper_out(msg_);
  }

private:
  ::px4_msgs::msg::GainCompression msg_;
};

class Init_GainCompression_compression_gains
{
public:
  explicit Init_GainCompression_compression_gains(::px4_msgs::msg::GainCompression & msg)
  : msg_(msg)
  {}
  Init_GainCompression_spectral_damper_hpf compression_gains(::px4_msgs::msg::GainCompression::_compression_gains_type arg)
  {
    msg_.compression_gains = std::move(arg);
    return Init_GainCompression_spectral_damper_hpf(msg_);
  }

private:
  ::px4_msgs::msg::GainCompression msg_;
};

class Init_GainCompression_timestamp
{
public:
  Init_GainCompression_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GainCompression_compression_gains timestamp(::px4_msgs::msg::GainCompression::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GainCompression_compression_gains(msg_);
  }

private:
  ::px4_msgs::msg::GainCompression msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::GainCompression>()
{
  return px4_msgs::msg::builder::Init_GainCompression_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GAIN_COMPRESSION__BUILDER_HPP_
