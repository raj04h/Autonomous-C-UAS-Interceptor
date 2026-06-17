// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EstimatorEventFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_EVENT_FLAGS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_EVENT_FLAGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/estimator_event_flags__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorEventFlags_reset_hgt_to_ev
{
public:
  explicit Init_EstimatorEventFlags_reset_hgt_to_ev(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EstimatorEventFlags reset_hgt_to_ev(::px4_msgs::msg::EstimatorEventFlags::_reset_hgt_to_ev_type arg)
  {
    msg_.reset_hgt_to_ev = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_reset_hgt_to_rng
{
public:
  explicit Init_EstimatorEventFlags_reset_hgt_to_rng(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_reset_hgt_to_ev reset_hgt_to_rng(::px4_msgs::msg::EstimatorEventFlags::_reset_hgt_to_rng_type arg)
  {
    msg_.reset_hgt_to_rng = std::move(arg);
    return Init_EstimatorEventFlags_reset_hgt_to_ev(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_reset_hgt_to_gps
{
public:
  explicit Init_EstimatorEventFlags_reset_hgt_to_gps(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_reset_hgt_to_rng reset_hgt_to_gps(::px4_msgs::msg::EstimatorEventFlags::_reset_hgt_to_gps_type arg)
  {
    msg_.reset_hgt_to_gps = std::move(arg);
    return Init_EstimatorEventFlags_reset_hgt_to_rng(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_reset_hgt_to_baro
{
public:
  explicit Init_EstimatorEventFlags_reset_hgt_to_baro(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_reset_hgt_to_gps reset_hgt_to_baro(::px4_msgs::msg::EstimatorEventFlags::_reset_hgt_to_baro_type arg)
  {
    msg_.reset_hgt_to_baro = std::move(arg);
    return Init_EstimatorEventFlags_reset_hgt_to_gps(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_yaw_aligned_to_imu_gps
{
public:
  explicit Init_EstimatorEventFlags_yaw_aligned_to_imu_gps(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_reset_hgt_to_baro yaw_aligned_to_imu_gps(::px4_msgs::msg::EstimatorEventFlags::_yaw_aligned_to_imu_gps_type arg)
  {
    msg_.yaw_aligned_to_imu_gps = std::move(arg);
    return Init_EstimatorEventFlags_reset_hgt_to_baro(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_starting_vision_yaw_fusion
{
public:
  explicit Init_EstimatorEventFlags_starting_vision_yaw_fusion(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_yaw_aligned_to_imu_gps starting_vision_yaw_fusion(::px4_msgs::msg::EstimatorEventFlags::_starting_vision_yaw_fusion_type arg)
  {
    msg_.starting_vision_yaw_fusion = std::move(arg);
    return Init_EstimatorEventFlags_yaw_aligned_to_imu_gps(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_starting_vision_vel_fusion
{
public:
  explicit Init_EstimatorEventFlags_starting_vision_vel_fusion(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_starting_vision_yaw_fusion starting_vision_vel_fusion(::px4_msgs::msg::EstimatorEventFlags::_starting_vision_vel_fusion_type arg)
  {
    msg_.starting_vision_vel_fusion = std::move(arg);
    return Init_EstimatorEventFlags_starting_vision_yaw_fusion(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_starting_vision_pos_fusion
{
public:
  explicit Init_EstimatorEventFlags_starting_vision_pos_fusion(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_starting_vision_vel_fusion starting_vision_pos_fusion(::px4_msgs::msg::EstimatorEventFlags::_starting_vision_pos_fusion_type arg)
  {
    msg_.starting_vision_pos_fusion = std::move(arg);
    return Init_EstimatorEventFlags_starting_vision_vel_fusion(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_starting_gps_fusion
{
public:
  explicit Init_EstimatorEventFlags_starting_gps_fusion(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_starting_vision_pos_fusion starting_gps_fusion(::px4_msgs::msg::EstimatorEventFlags::_starting_gps_fusion_type arg)
  {
    msg_.starting_gps_fusion = std::move(arg);
    return Init_EstimatorEventFlags_starting_vision_pos_fusion(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_reset_pos_to_vision
{
public:
  explicit Init_EstimatorEventFlags_reset_pos_to_vision(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_starting_gps_fusion reset_pos_to_vision(::px4_msgs::msg::EstimatorEventFlags::_reset_pos_to_vision_type arg)
  {
    msg_.reset_pos_to_vision = std::move(arg);
    return Init_EstimatorEventFlags_starting_gps_fusion(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_reset_pos_to_gps
{
public:
  explicit Init_EstimatorEventFlags_reset_pos_to_gps(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_reset_pos_to_vision reset_pos_to_gps(::px4_msgs::msg::EstimatorEventFlags::_reset_pos_to_gps_type arg)
  {
    msg_.reset_pos_to_gps = std::move(arg);
    return Init_EstimatorEventFlags_reset_pos_to_vision(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_reset_pos_to_last_known
{
public:
  explicit Init_EstimatorEventFlags_reset_pos_to_last_known(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_reset_pos_to_gps reset_pos_to_last_known(::px4_msgs::msg::EstimatorEventFlags::_reset_pos_to_last_known_type arg)
  {
    msg_.reset_pos_to_last_known = std::move(arg);
    return Init_EstimatorEventFlags_reset_pos_to_gps(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_reset_vel_to_zero
{
public:
  explicit Init_EstimatorEventFlags_reset_vel_to_zero(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_reset_pos_to_last_known reset_vel_to_zero(::px4_msgs::msg::EstimatorEventFlags::_reset_vel_to_zero_type arg)
  {
    msg_.reset_vel_to_zero = std::move(arg);
    return Init_EstimatorEventFlags_reset_pos_to_last_known(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_reset_vel_to_vision
{
public:
  explicit Init_EstimatorEventFlags_reset_vel_to_vision(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_reset_vel_to_zero reset_vel_to_vision(::px4_msgs::msg::EstimatorEventFlags::_reset_vel_to_vision_type arg)
  {
    msg_.reset_vel_to_vision = std::move(arg);
    return Init_EstimatorEventFlags_reset_vel_to_zero(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_reset_vel_to_flow
{
public:
  explicit Init_EstimatorEventFlags_reset_vel_to_flow(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_reset_vel_to_vision reset_vel_to_flow(::px4_msgs::msg::EstimatorEventFlags::_reset_vel_to_flow_type arg)
  {
    msg_.reset_vel_to_flow = std::move(arg);
    return Init_EstimatorEventFlags_reset_vel_to_vision(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_reset_vel_to_gps
{
public:
  explicit Init_EstimatorEventFlags_reset_vel_to_gps(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_reset_vel_to_flow reset_vel_to_gps(::px4_msgs::msg::EstimatorEventFlags::_reset_vel_to_gps_type arg)
  {
    msg_.reset_vel_to_gps = std::move(arg);
    return Init_EstimatorEventFlags_reset_vel_to_flow(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_gps_checks_passed
{
public:
  explicit Init_EstimatorEventFlags_gps_checks_passed(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_reset_vel_to_gps gps_checks_passed(::px4_msgs::msg::EstimatorEventFlags::_gps_checks_passed_type arg)
  {
    msg_.gps_checks_passed = std::move(arg);
    return Init_EstimatorEventFlags_reset_vel_to_gps(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_information_event_changes
{
public:
  explicit Init_EstimatorEventFlags_information_event_changes(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_gps_checks_passed information_event_changes(::px4_msgs::msg::EstimatorEventFlags::_information_event_changes_type arg)
  {
    msg_.information_event_changes = std::move(arg);
    return Init_EstimatorEventFlags_gps_checks_passed(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_timestamp_sample
{
public:
  explicit Init_EstimatorEventFlags_timestamp_sample(::px4_msgs::msg::EstimatorEventFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorEventFlags_information_event_changes timestamp_sample(::px4_msgs::msg::EstimatorEventFlags::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_EstimatorEventFlags_information_event_changes(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

class Init_EstimatorEventFlags_timestamp
{
public:
  Init_EstimatorEventFlags_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorEventFlags_timestamp_sample timestamp(::px4_msgs::msg::EstimatorEventFlags::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorEventFlags_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorEventFlags msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EstimatorEventFlags>()
{
  return px4_msgs::msg::builder::Init_EstimatorEventFlags_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_EVENT_FLAGS__BUILDER_HPP_
