// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/BatteryInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__BATTERY_INFO__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__BATTERY_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/battery_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryInfo_serial_number
{
public:
  explicit Init_BatteryInfo_serial_number(::px4_msgs::msg::BatteryInfo & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::BatteryInfo serial_number(::px4_msgs::msg::BatteryInfo::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::BatteryInfo msg_;
};

class Init_BatteryInfo_id
{
public:
  explicit Init_BatteryInfo_id(::px4_msgs::msg::BatteryInfo & msg)
  : msg_(msg)
  {}
  Init_BatteryInfo_serial_number id(::px4_msgs::msg::BatteryInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BatteryInfo_serial_number(msg_);
  }

private:
  ::px4_msgs::msg::BatteryInfo msg_;
};

class Init_BatteryInfo_timestamp
{
public:
  Init_BatteryInfo_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryInfo_id timestamp(::px4_msgs::msg::BatteryInfo::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_BatteryInfo_id(msg_);
  }

private:
  ::px4_msgs::msg::BatteryInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::BatteryInfo>()
{
  return px4_msgs::msg::builder::Init_BatteryInfo_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__BATTERY_INFO__BUILDER_HPP_
