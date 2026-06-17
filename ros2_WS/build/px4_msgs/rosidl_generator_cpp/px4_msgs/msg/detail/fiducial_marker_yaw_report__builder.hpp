// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/FiducialMarkerYawReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_YAW_REPORT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_YAW_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/fiducial_marker_yaw_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_FiducialMarkerYawReport_yaw_var_ned
{
public:
  explicit Init_FiducialMarkerYawReport_yaw_var_ned(::px4_msgs::msg::FiducialMarkerYawReport & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::FiducialMarkerYawReport yaw_var_ned(::px4_msgs::msg::FiducialMarkerYawReport::_yaw_var_ned_type arg)
  {
    msg_.yaw_var_ned = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::FiducialMarkerYawReport msg_;
};

class Init_FiducialMarkerYawReport_yaw_ned
{
public:
  explicit Init_FiducialMarkerYawReport_yaw_ned(::px4_msgs::msg::FiducialMarkerYawReport & msg)
  : msg_(msg)
  {}
  Init_FiducialMarkerYawReport_yaw_var_ned yaw_ned(::px4_msgs::msg::FiducialMarkerYawReport::_yaw_ned_type arg)
  {
    msg_.yaw_ned = std::move(arg);
    return Init_FiducialMarkerYawReport_yaw_var_ned(msg_);
  }

private:
  ::px4_msgs::msg::FiducialMarkerYawReport msg_;
};

class Init_FiducialMarkerYawReport_timestamp_sample
{
public:
  explicit Init_FiducialMarkerYawReport_timestamp_sample(::px4_msgs::msg::FiducialMarkerYawReport & msg)
  : msg_(msg)
  {}
  Init_FiducialMarkerYawReport_yaw_ned timestamp_sample(::px4_msgs::msg::FiducialMarkerYawReport::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_FiducialMarkerYawReport_yaw_ned(msg_);
  }

private:
  ::px4_msgs::msg::FiducialMarkerYawReport msg_;
};

class Init_FiducialMarkerYawReport_timestamp
{
public:
  Init_FiducialMarkerYawReport_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FiducialMarkerYawReport_timestamp_sample timestamp(::px4_msgs::msg::FiducialMarkerYawReport::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FiducialMarkerYawReport_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::FiducialMarkerYawReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::FiducialMarkerYawReport>()
{
  return px4_msgs::msg::builder::Init_FiducialMarkerYawReport_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_YAW_REPORT__BUILDER_HPP_
