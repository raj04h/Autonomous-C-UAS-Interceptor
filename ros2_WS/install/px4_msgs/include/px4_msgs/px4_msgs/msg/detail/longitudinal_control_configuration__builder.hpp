// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/LongitudinalControlConfiguration.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LONGITUDINAL_CONTROL_CONFIGURATION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__LONGITUDINAL_CONTROL_CONFIGURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/longitudinal_control_configuration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_LongitudinalControlConfiguration_disable_underspeed_protection
{
public:
  explicit Init_LongitudinalControlConfiguration_disable_underspeed_protection(::px4_msgs::msg::LongitudinalControlConfiguration & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::LongitudinalControlConfiguration disable_underspeed_protection(::px4_msgs::msg::LongitudinalControlConfiguration::_disable_underspeed_protection_type arg)
  {
    msg_.disable_underspeed_protection = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::LongitudinalControlConfiguration msg_;
};

class Init_LongitudinalControlConfiguration_enforce_low_height_condition
{
public:
  explicit Init_LongitudinalControlConfiguration_enforce_low_height_condition(::px4_msgs::msg::LongitudinalControlConfiguration & msg)
  : msg_(msg)
  {}
  Init_LongitudinalControlConfiguration_disable_underspeed_protection enforce_low_height_condition(::px4_msgs::msg::LongitudinalControlConfiguration::_enforce_low_height_condition_type arg)
  {
    msg_.enforce_low_height_condition = std::move(arg);
    return Init_LongitudinalControlConfiguration_disable_underspeed_protection(msg_);
  }

private:
  ::px4_msgs::msg::LongitudinalControlConfiguration msg_;
};

class Init_LongitudinalControlConfiguration_speed_weight
{
public:
  explicit Init_LongitudinalControlConfiguration_speed_weight(::px4_msgs::msg::LongitudinalControlConfiguration & msg)
  : msg_(msg)
  {}
  Init_LongitudinalControlConfiguration_enforce_low_height_condition speed_weight(::px4_msgs::msg::LongitudinalControlConfiguration::_speed_weight_type arg)
  {
    msg_.speed_weight = std::move(arg);
    return Init_LongitudinalControlConfiguration_enforce_low_height_condition(msg_);
  }

private:
  ::px4_msgs::msg::LongitudinalControlConfiguration msg_;
};

class Init_LongitudinalControlConfiguration_sink_rate_target
{
public:
  explicit Init_LongitudinalControlConfiguration_sink_rate_target(::px4_msgs::msg::LongitudinalControlConfiguration & msg)
  : msg_(msg)
  {}
  Init_LongitudinalControlConfiguration_speed_weight sink_rate_target(::px4_msgs::msg::LongitudinalControlConfiguration::_sink_rate_target_type arg)
  {
    msg_.sink_rate_target = std::move(arg);
    return Init_LongitudinalControlConfiguration_speed_weight(msg_);
  }

private:
  ::px4_msgs::msg::LongitudinalControlConfiguration msg_;
};

class Init_LongitudinalControlConfiguration_climb_rate_target
{
public:
  explicit Init_LongitudinalControlConfiguration_climb_rate_target(::px4_msgs::msg::LongitudinalControlConfiguration & msg)
  : msg_(msg)
  {}
  Init_LongitudinalControlConfiguration_sink_rate_target climb_rate_target(::px4_msgs::msg::LongitudinalControlConfiguration::_climb_rate_target_type arg)
  {
    msg_.climb_rate_target = std::move(arg);
    return Init_LongitudinalControlConfiguration_sink_rate_target(msg_);
  }

private:
  ::px4_msgs::msg::LongitudinalControlConfiguration msg_;
};

class Init_LongitudinalControlConfiguration_throttle_max
{
public:
  explicit Init_LongitudinalControlConfiguration_throttle_max(::px4_msgs::msg::LongitudinalControlConfiguration & msg)
  : msg_(msg)
  {}
  Init_LongitudinalControlConfiguration_climb_rate_target throttle_max(::px4_msgs::msg::LongitudinalControlConfiguration::_throttle_max_type arg)
  {
    msg_.throttle_max = std::move(arg);
    return Init_LongitudinalControlConfiguration_climb_rate_target(msg_);
  }

private:
  ::px4_msgs::msg::LongitudinalControlConfiguration msg_;
};

class Init_LongitudinalControlConfiguration_throttle_min
{
public:
  explicit Init_LongitudinalControlConfiguration_throttle_min(::px4_msgs::msg::LongitudinalControlConfiguration & msg)
  : msg_(msg)
  {}
  Init_LongitudinalControlConfiguration_throttle_max throttle_min(::px4_msgs::msg::LongitudinalControlConfiguration::_throttle_min_type arg)
  {
    msg_.throttle_min = std::move(arg);
    return Init_LongitudinalControlConfiguration_throttle_max(msg_);
  }

private:
  ::px4_msgs::msg::LongitudinalControlConfiguration msg_;
};

class Init_LongitudinalControlConfiguration_pitch_max
{
public:
  explicit Init_LongitudinalControlConfiguration_pitch_max(::px4_msgs::msg::LongitudinalControlConfiguration & msg)
  : msg_(msg)
  {}
  Init_LongitudinalControlConfiguration_throttle_min pitch_max(::px4_msgs::msg::LongitudinalControlConfiguration::_pitch_max_type arg)
  {
    msg_.pitch_max = std::move(arg);
    return Init_LongitudinalControlConfiguration_throttle_min(msg_);
  }

private:
  ::px4_msgs::msg::LongitudinalControlConfiguration msg_;
};

class Init_LongitudinalControlConfiguration_pitch_min
{
public:
  explicit Init_LongitudinalControlConfiguration_pitch_min(::px4_msgs::msg::LongitudinalControlConfiguration & msg)
  : msg_(msg)
  {}
  Init_LongitudinalControlConfiguration_pitch_max pitch_min(::px4_msgs::msg::LongitudinalControlConfiguration::_pitch_min_type arg)
  {
    msg_.pitch_min = std::move(arg);
    return Init_LongitudinalControlConfiguration_pitch_max(msg_);
  }

private:
  ::px4_msgs::msg::LongitudinalControlConfiguration msg_;
};

class Init_LongitudinalControlConfiguration_timestamp
{
public:
  Init_LongitudinalControlConfiguration_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LongitudinalControlConfiguration_pitch_min timestamp(::px4_msgs::msg::LongitudinalControlConfiguration::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LongitudinalControlConfiguration_pitch_min(msg_);
  }

private:
  ::px4_msgs::msg::LongitudinalControlConfiguration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::LongitudinalControlConfiguration>()
{
  return px4_msgs::msg::builder::Init_LongitudinalControlConfiguration_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__LONGITUDINAL_CONTROL_CONFIGURATION__BUILDER_HPP_
