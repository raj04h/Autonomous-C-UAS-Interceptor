// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/PurePursuitStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PURE_PURSUIT_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__PURE_PURSUIT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/pure_pursuit_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_PurePursuitStatus_bearing_to_waypoint
{
public:
  explicit Init_PurePursuitStatus_bearing_to_waypoint(::px4_msgs::msg::PurePursuitStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::PurePursuitStatus bearing_to_waypoint(::px4_msgs::msg::PurePursuitStatus::_bearing_to_waypoint_type arg)
  {
    msg_.bearing_to_waypoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::PurePursuitStatus msg_;
};

class Init_PurePursuitStatus_distance_to_waypoint
{
public:
  explicit Init_PurePursuitStatus_distance_to_waypoint(::px4_msgs::msg::PurePursuitStatus & msg)
  : msg_(msg)
  {}
  Init_PurePursuitStatus_bearing_to_waypoint distance_to_waypoint(::px4_msgs::msg::PurePursuitStatus::_distance_to_waypoint_type arg)
  {
    msg_.distance_to_waypoint = std::move(arg);
    return Init_PurePursuitStatus_bearing_to_waypoint(msg_);
  }

private:
  ::px4_msgs::msg::PurePursuitStatus msg_;
};

class Init_PurePursuitStatus_crosstrack_error
{
public:
  explicit Init_PurePursuitStatus_crosstrack_error(::px4_msgs::msg::PurePursuitStatus & msg)
  : msg_(msg)
  {}
  Init_PurePursuitStatus_distance_to_waypoint crosstrack_error(::px4_msgs::msg::PurePursuitStatus::_crosstrack_error_type arg)
  {
    msg_.crosstrack_error = std::move(arg);
    return Init_PurePursuitStatus_distance_to_waypoint(msg_);
  }

private:
  ::px4_msgs::msg::PurePursuitStatus msg_;
};

class Init_PurePursuitStatus_target_bearing
{
public:
  explicit Init_PurePursuitStatus_target_bearing(::px4_msgs::msg::PurePursuitStatus & msg)
  : msg_(msg)
  {}
  Init_PurePursuitStatus_crosstrack_error target_bearing(::px4_msgs::msg::PurePursuitStatus::_target_bearing_type arg)
  {
    msg_.target_bearing = std::move(arg);
    return Init_PurePursuitStatus_crosstrack_error(msg_);
  }

private:
  ::px4_msgs::msg::PurePursuitStatus msg_;
};

class Init_PurePursuitStatus_lookahead_distance
{
public:
  explicit Init_PurePursuitStatus_lookahead_distance(::px4_msgs::msg::PurePursuitStatus & msg)
  : msg_(msg)
  {}
  Init_PurePursuitStatus_target_bearing lookahead_distance(::px4_msgs::msg::PurePursuitStatus::_lookahead_distance_type arg)
  {
    msg_.lookahead_distance = std::move(arg);
    return Init_PurePursuitStatus_target_bearing(msg_);
  }

private:
  ::px4_msgs::msg::PurePursuitStatus msg_;
};

class Init_PurePursuitStatus_timestamp
{
public:
  Init_PurePursuitStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PurePursuitStatus_lookahead_distance timestamp(::px4_msgs::msg::PurePursuitStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PurePursuitStatus_lookahead_distance(msg_);
  }

private:
  ::px4_msgs::msg::PurePursuitStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::PurePursuitStatus>()
{
  return px4_msgs::msg::builder::Init_PurePursuitStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PURE_PURSUIT_STATUS__BUILDER_HPP_
