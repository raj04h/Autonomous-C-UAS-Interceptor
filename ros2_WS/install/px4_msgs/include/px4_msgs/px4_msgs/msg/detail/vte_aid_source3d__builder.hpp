// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VteAidSource3d.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_AID_SOURCE3D__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VTE_AID_SOURCE3D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vte_aid_source3d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VteAidSource3d_history_steps
{
public:
  explicit Init_VteAidSource3d_history_steps(::px4_msgs::msg::VteAidSource3d & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VteAidSource3d history_steps(::px4_msgs::msg::VteAidSource3d::_history_steps_type arg)
  {
    msg_.history_steps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VteAidSource3d msg_;
};

class Init_VteAidSource3d_time_since_meas_ms
{
public:
  explicit Init_VteAidSource3d_time_since_meas_ms(::px4_msgs::msg::VteAidSource3d & msg)
  : msg_(msg)
  {}
  Init_VteAidSource3d_history_steps time_since_meas_ms(::px4_msgs::msg::VteAidSource3d::_time_since_meas_ms_type arg)
  {
    msg_.time_since_meas_ms = std::move(arg);
    return Init_VteAidSource3d_history_steps(msg_);
  }

private:
  ::px4_msgs::msg::VteAidSource3d msg_;
};

class Init_VteAidSource3d_fusion_status
{
public:
  explicit Init_VteAidSource3d_fusion_status(::px4_msgs::msg::VteAidSource3d & msg)
  : msg_(msg)
  {}
  Init_VteAidSource3d_time_since_meas_ms fusion_status(::px4_msgs::msg::VteAidSource3d::_fusion_status_type arg)
  {
    msg_.fusion_status = std::move(arg);
    return Init_VteAidSource3d_time_since_meas_ms(msg_);
  }

private:
  ::px4_msgs::msg::VteAidSource3d msg_;
};

class Init_VteAidSource3d_test_ratio
{
public:
  explicit Init_VteAidSource3d_test_ratio(::px4_msgs::msg::VteAidSource3d & msg)
  : msg_(msg)
  {}
  Init_VteAidSource3d_fusion_status test_ratio(::px4_msgs::msg::VteAidSource3d::_test_ratio_type arg)
  {
    msg_.test_ratio = std::move(arg);
    return Init_VteAidSource3d_fusion_status(msg_);
  }

private:
  ::px4_msgs::msg::VteAidSource3d msg_;
};

class Init_VteAidSource3d_innovation_variance
{
public:
  explicit Init_VteAidSource3d_innovation_variance(::px4_msgs::msg::VteAidSource3d & msg)
  : msg_(msg)
  {}
  Init_VteAidSource3d_test_ratio innovation_variance(::px4_msgs::msg::VteAidSource3d::_innovation_variance_type arg)
  {
    msg_.innovation_variance = std::move(arg);
    return Init_VteAidSource3d_test_ratio(msg_);
  }

private:
  ::px4_msgs::msg::VteAidSource3d msg_;
};

class Init_VteAidSource3d_innovation
{
public:
  explicit Init_VteAidSource3d_innovation(::px4_msgs::msg::VteAidSource3d & msg)
  : msg_(msg)
  {}
  Init_VteAidSource3d_innovation_variance innovation(::px4_msgs::msg::VteAidSource3d::_innovation_type arg)
  {
    msg_.innovation = std::move(arg);
    return Init_VteAidSource3d_innovation_variance(msg_);
  }

private:
  ::px4_msgs::msg::VteAidSource3d msg_;
};

class Init_VteAidSource3d_observation_variance
{
public:
  explicit Init_VteAidSource3d_observation_variance(::px4_msgs::msg::VteAidSource3d & msg)
  : msg_(msg)
  {}
  Init_VteAidSource3d_innovation observation_variance(::px4_msgs::msg::VteAidSource3d::_observation_variance_type arg)
  {
    msg_.observation_variance = std::move(arg);
    return Init_VteAidSource3d_innovation(msg_);
  }

private:
  ::px4_msgs::msg::VteAidSource3d msg_;
};

class Init_VteAidSource3d_observation
{
public:
  explicit Init_VteAidSource3d_observation(::px4_msgs::msg::VteAidSource3d & msg)
  : msg_(msg)
  {}
  Init_VteAidSource3d_observation_variance observation(::px4_msgs::msg::VteAidSource3d::_observation_type arg)
  {
    msg_.observation = std::move(arg);
    return Init_VteAidSource3d_observation_variance(msg_);
  }

private:
  ::px4_msgs::msg::VteAidSource3d msg_;
};

class Init_VteAidSource3d_time_last_predict
{
public:
  explicit Init_VteAidSource3d_time_last_predict(::px4_msgs::msg::VteAidSource3d & msg)
  : msg_(msg)
  {}
  Init_VteAidSource3d_observation time_last_predict(::px4_msgs::msg::VteAidSource3d::_time_last_predict_type arg)
  {
    msg_.time_last_predict = std::move(arg);
    return Init_VteAidSource3d_observation(msg_);
  }

private:
  ::px4_msgs::msg::VteAidSource3d msg_;
};

class Init_VteAidSource3d_timestamp_sample
{
public:
  explicit Init_VteAidSource3d_timestamp_sample(::px4_msgs::msg::VteAidSource3d & msg)
  : msg_(msg)
  {}
  Init_VteAidSource3d_time_last_predict timestamp_sample(::px4_msgs::msg::VteAidSource3d::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VteAidSource3d_time_last_predict(msg_);
  }

private:
  ::px4_msgs::msg::VteAidSource3d msg_;
};

class Init_VteAidSource3d_timestamp
{
public:
  Init_VteAidSource3d_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VteAidSource3d_timestamp_sample timestamp(::px4_msgs::msg::VteAidSource3d::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VteAidSource3d_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VteAidSource3d msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VteAidSource3d>()
{
  return px4_msgs::msg::builder::Init_VteAidSource3d_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VTE_AID_SOURCE3D__BUILDER_HPP_
