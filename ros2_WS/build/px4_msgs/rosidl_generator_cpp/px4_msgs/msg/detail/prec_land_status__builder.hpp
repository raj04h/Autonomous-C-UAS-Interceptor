// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/PrecLandStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PREC_LAND_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__PREC_LAND_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/prec_land_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_PrecLandStatus_state
{
public:
  explicit Init_PrecLandStatus_state(::px4_msgs::msg::PrecLandStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::PrecLandStatus state(::px4_msgs::msg::PrecLandStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::PrecLandStatus msg_;
};

class Init_PrecLandStatus_timestamp
{
public:
  Init_PrecLandStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrecLandStatus_state timestamp(::px4_msgs::msg::PrecLandStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PrecLandStatus_state(msg_);
  }

private:
  ::px4_msgs::msg::PrecLandStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::PrecLandStatus>()
{
  return px4_msgs::msg::builder::Init_PrecLandStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PREC_LAND_STATUS__BUILDER_HPP_
