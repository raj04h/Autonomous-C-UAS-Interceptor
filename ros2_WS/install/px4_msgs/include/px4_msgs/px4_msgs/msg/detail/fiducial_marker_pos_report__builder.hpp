// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/FiducialMarkerPosReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_POS_REPORT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_POS_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/fiducial_marker_pos_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_FiducialMarkerPosReport_q
{
public:
  explicit Init_FiducialMarkerPosReport_q(::px4_msgs::msg::FiducialMarkerPosReport & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::FiducialMarkerPosReport q(::px4_msgs::msg::FiducialMarkerPosReport::_q_type arg)
  {
    msg_.q = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::FiducialMarkerPosReport msg_;
};

class Init_FiducialMarkerPosReport_cov_rel_pos
{
public:
  explicit Init_FiducialMarkerPosReport_cov_rel_pos(::px4_msgs::msg::FiducialMarkerPosReport & msg)
  : msg_(msg)
  {}
  Init_FiducialMarkerPosReport_q cov_rel_pos(::px4_msgs::msg::FiducialMarkerPosReport::_cov_rel_pos_type arg)
  {
    msg_.cov_rel_pos = std::move(arg);
    return Init_FiducialMarkerPosReport_q(msg_);
  }

private:
  ::px4_msgs::msg::FiducialMarkerPosReport msg_;
};

class Init_FiducialMarkerPosReport_rel_pos
{
public:
  explicit Init_FiducialMarkerPosReport_rel_pos(::px4_msgs::msg::FiducialMarkerPosReport & msg)
  : msg_(msg)
  {}
  Init_FiducialMarkerPosReport_cov_rel_pos rel_pos(::px4_msgs::msg::FiducialMarkerPosReport::_rel_pos_type arg)
  {
    msg_.rel_pos = std::move(arg);
    return Init_FiducialMarkerPosReport_cov_rel_pos(msg_);
  }

private:
  ::px4_msgs::msg::FiducialMarkerPosReport msg_;
};

class Init_FiducialMarkerPosReport_timestamp_sample
{
public:
  explicit Init_FiducialMarkerPosReport_timestamp_sample(::px4_msgs::msg::FiducialMarkerPosReport & msg)
  : msg_(msg)
  {}
  Init_FiducialMarkerPosReport_rel_pos timestamp_sample(::px4_msgs::msg::FiducialMarkerPosReport::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_FiducialMarkerPosReport_rel_pos(msg_);
  }

private:
  ::px4_msgs::msg::FiducialMarkerPosReport msg_;
};

class Init_FiducialMarkerPosReport_timestamp
{
public:
  Init_FiducialMarkerPosReport_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FiducialMarkerPosReport_timestamp_sample timestamp(::px4_msgs::msg::FiducialMarkerPosReport::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FiducialMarkerPosReport_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::FiducialMarkerPosReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::FiducialMarkerPosReport>()
{
  return px4_msgs::msg::builder::Init_FiducialMarkerPosReport_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_POS_REPORT__BUILDER_HPP_
