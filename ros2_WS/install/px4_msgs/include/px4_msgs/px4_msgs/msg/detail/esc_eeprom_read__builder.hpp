// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EscEepromRead.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESC_EEPROM_READ__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESC_EEPROM_READ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/esc_eeprom_read__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EscEepromRead_data
{
public:
  explicit Init_EscEepromRead_data(::px4_msgs::msg::EscEepromRead & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EscEepromRead data(::px4_msgs::msg::EscEepromRead::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EscEepromRead msg_;
};

class Init_EscEepromRead_length
{
public:
  explicit Init_EscEepromRead_length(::px4_msgs::msg::EscEepromRead & msg)
  : msg_(msg)
  {}
  Init_EscEepromRead_data length(::px4_msgs::msg::EscEepromRead::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_EscEepromRead_data(msg_);
  }

private:
  ::px4_msgs::msg::EscEepromRead msg_;
};

class Init_EscEepromRead_index
{
public:
  explicit Init_EscEepromRead_index(::px4_msgs::msg::EscEepromRead & msg)
  : msg_(msg)
  {}
  Init_EscEepromRead_length index(::px4_msgs::msg::EscEepromRead::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_EscEepromRead_length(msg_);
  }

private:
  ::px4_msgs::msg::EscEepromRead msg_;
};

class Init_EscEepromRead_firmware
{
public:
  explicit Init_EscEepromRead_firmware(::px4_msgs::msg::EscEepromRead & msg)
  : msg_(msg)
  {}
  Init_EscEepromRead_index firmware(::px4_msgs::msg::EscEepromRead::_firmware_type arg)
  {
    msg_.firmware = std::move(arg);
    return Init_EscEepromRead_index(msg_);
  }

private:
  ::px4_msgs::msg::EscEepromRead msg_;
};

class Init_EscEepromRead_timestamp
{
public:
  Init_EscEepromRead_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EscEepromRead_firmware timestamp(::px4_msgs::msg::EscEepromRead::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EscEepromRead_firmware(msg_);
  }

private:
  ::px4_msgs::msg::EscEepromRead msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EscEepromRead>()
{
  return px4_msgs::msg::builder::Init_EscEepromRead_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESC_EEPROM_READ__BUILDER_HPP_
