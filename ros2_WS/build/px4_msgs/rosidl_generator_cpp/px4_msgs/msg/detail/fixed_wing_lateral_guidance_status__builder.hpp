// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/FixedWingLateralGuidanceStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_GUIDANCE_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_GUIDANCE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/fixed_wing_lateral_guidance_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_FixedWingLateralGuidanceStatus_wind_est_valid
{
public:
  explicit Init_FixedWingLateralGuidanceStatus_wind_est_valid(::px4_msgs::msg::FixedWingLateralGuidanceStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::FixedWingLateralGuidanceStatus wind_est_valid(::px4_msgs::msg::FixedWingLateralGuidanceStatus::_wind_est_valid_type arg)
  {
    msg_.wind_est_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralGuidanceStatus msg_;
};

class Init_FixedWingLateralGuidanceStatus_adapted_period
{
public:
  explicit Init_FixedWingLateralGuidanceStatus_adapted_period(::px4_msgs::msg::FixedWingLateralGuidanceStatus & msg)
  : msg_(msg)
  {}
  Init_FixedWingLateralGuidanceStatus_wind_est_valid adapted_period(::px4_msgs::msg::FixedWingLateralGuidanceStatus::_adapted_period_type arg)
  {
    msg_.adapted_period = std::move(arg);
    return Init_FixedWingLateralGuidanceStatus_wind_est_valid(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralGuidanceStatus msg_;
};

class Init_FixedWingLateralGuidanceStatus_switch_distance
{
public:
  explicit Init_FixedWingLateralGuidanceStatus_switch_distance(::px4_msgs::msg::FixedWingLateralGuidanceStatus & msg)
  : msg_(msg)
  {}
  Init_FixedWingLateralGuidanceStatus_adapted_period switch_distance(::px4_msgs::msg::FixedWingLateralGuidanceStatus::_switch_distance_type arg)
  {
    msg_.switch_distance = std::move(arg);
    return Init_FixedWingLateralGuidanceStatus_adapted_period(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralGuidanceStatus msg_;
};

class Init_FixedWingLateralGuidanceStatus_track_error_bound
{
public:
  explicit Init_FixedWingLateralGuidanceStatus_track_error_bound(::px4_msgs::msg::FixedWingLateralGuidanceStatus & msg)
  : msg_(msg)
  {}
  Init_FixedWingLateralGuidanceStatus_switch_distance track_error_bound(::px4_msgs::msg::FixedWingLateralGuidanceStatus::_track_error_bound_type arg)
  {
    msg_.track_error_bound = std::move(arg);
    return Init_FixedWingLateralGuidanceStatus_switch_distance(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralGuidanceStatus msg_;
};

class Init_FixedWingLateralGuidanceStatus_signed_track_error
{
public:
  explicit Init_FixedWingLateralGuidanceStatus_signed_track_error(::px4_msgs::msg::FixedWingLateralGuidanceStatus & msg)
  : msg_(msg)
  {}
  Init_FixedWingLateralGuidanceStatus_track_error_bound signed_track_error(::px4_msgs::msg::FixedWingLateralGuidanceStatus::_signed_track_error_type arg)
  {
    msg_.signed_track_error = std::move(arg);
    return Init_FixedWingLateralGuidanceStatus_track_error_bound(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralGuidanceStatus msg_;
};

class Init_FixedWingLateralGuidanceStatus_bearing_feas_on_track
{
public:
  explicit Init_FixedWingLateralGuidanceStatus_bearing_feas_on_track(::px4_msgs::msg::FixedWingLateralGuidanceStatus & msg)
  : msg_(msg)
  {}
  Init_FixedWingLateralGuidanceStatus_signed_track_error bearing_feas_on_track(::px4_msgs::msg::FixedWingLateralGuidanceStatus::_bearing_feas_on_track_type arg)
  {
    msg_.bearing_feas_on_track = std::move(arg);
    return Init_FixedWingLateralGuidanceStatus_signed_track_error(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralGuidanceStatus msg_;
};

class Init_FixedWingLateralGuidanceStatus_bearing_feas
{
public:
  explicit Init_FixedWingLateralGuidanceStatus_bearing_feas(::px4_msgs::msg::FixedWingLateralGuidanceStatus & msg)
  : msg_(msg)
  {}
  Init_FixedWingLateralGuidanceStatus_bearing_feas_on_track bearing_feas(::px4_msgs::msg::FixedWingLateralGuidanceStatus::_bearing_feas_type arg)
  {
    msg_.bearing_feas = std::move(arg);
    return Init_FixedWingLateralGuidanceStatus_bearing_feas_on_track(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralGuidanceStatus msg_;
};

class Init_FixedWingLateralGuidanceStatus_lateral_acceleration_ff
{
public:
  explicit Init_FixedWingLateralGuidanceStatus_lateral_acceleration_ff(::px4_msgs::msg::FixedWingLateralGuidanceStatus & msg)
  : msg_(msg)
  {}
  Init_FixedWingLateralGuidanceStatus_bearing_feas lateral_acceleration_ff(::px4_msgs::msg::FixedWingLateralGuidanceStatus::_lateral_acceleration_ff_type arg)
  {
    msg_.lateral_acceleration_ff = std::move(arg);
    return Init_FixedWingLateralGuidanceStatus_bearing_feas(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralGuidanceStatus msg_;
};

class Init_FixedWingLateralGuidanceStatus_course_setpoint
{
public:
  explicit Init_FixedWingLateralGuidanceStatus_course_setpoint(::px4_msgs::msg::FixedWingLateralGuidanceStatus & msg)
  : msg_(msg)
  {}
  Init_FixedWingLateralGuidanceStatus_lateral_acceleration_ff course_setpoint(::px4_msgs::msg::FixedWingLateralGuidanceStatus::_course_setpoint_type arg)
  {
    msg_.course_setpoint = std::move(arg);
    return Init_FixedWingLateralGuidanceStatus_lateral_acceleration_ff(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralGuidanceStatus msg_;
};

class Init_FixedWingLateralGuidanceStatus_timestamp
{
public:
  Init_FixedWingLateralGuidanceStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FixedWingLateralGuidanceStatus_course_setpoint timestamp(::px4_msgs::msg::FixedWingLateralGuidanceStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FixedWingLateralGuidanceStatus_course_setpoint(msg_);
  }

private:
  ::px4_msgs::msg::FixedWingLateralGuidanceStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::FixedWingLateralGuidanceStatus>()
{
  return px4_msgs::msg::builder::Init_FixedWingLateralGuidanceStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_GUIDANCE_STATUS__BUILDER_HPP_
