// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EscEepromWrite.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESC_EEPROM_WRITE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESC_EEPROM_WRITE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/esc_eeprom_write__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EscEepromWrite_write_mask
{
public:
  explicit Init_EscEepromWrite_write_mask(::px4_msgs::msg::EscEepromWrite & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EscEepromWrite write_mask(::px4_msgs::msg::EscEepromWrite::_write_mask_type arg)
  {
    msg_.write_mask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EscEepromWrite msg_;
};

class Init_EscEepromWrite_data
{
public:
  explicit Init_EscEepromWrite_data(::px4_msgs::msg::EscEepromWrite & msg)
  : msg_(msg)
  {}
  Init_EscEepromWrite_write_mask data(::px4_msgs::msg::EscEepromWrite::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_EscEepromWrite_write_mask(msg_);
  }

private:
  ::px4_msgs::msg::EscEepromWrite msg_;
};

class Init_EscEepromWrite_length
{
public:
  explicit Init_EscEepromWrite_length(::px4_msgs::msg::EscEepromWrite & msg)
  : msg_(msg)
  {}
  Init_EscEepromWrite_data length(::px4_msgs::msg::EscEepromWrite::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_EscEepromWrite_data(msg_);
  }

private:
  ::px4_msgs::msg::EscEepromWrite msg_;
};

class Init_EscEepromWrite_index
{
public:
  explicit Init_EscEepromWrite_index(::px4_msgs::msg::EscEepromWrite & msg)
  : msg_(msg)
  {}
  Init_EscEepromWrite_length index(::px4_msgs::msg::EscEepromWrite::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_EscEepromWrite_length(msg_);
  }

private:
  ::px4_msgs::msg::EscEepromWrite msg_;
};

class Init_EscEepromWrite_firmware
{
public:
  explicit Init_EscEepromWrite_firmware(::px4_msgs::msg::EscEepromWrite & msg)
  : msg_(msg)
  {}
  Init_EscEepromWrite_index firmware(::px4_msgs::msg::EscEepromWrite::_firmware_type arg)
  {
    msg_.firmware = std::move(arg);
    return Init_EscEepromWrite_index(msg_);
  }

private:
  ::px4_msgs::msg::EscEepromWrite msg_;
};

class Init_EscEepromWrite_timestamp
{
public:
  Init_EscEepromWrite_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EscEepromWrite_firmware timestamp(::px4_msgs::msg::EscEepromWrite::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EscEepromWrite_firmware(msg_);
  }

private:
  ::px4_msgs::msg::EscEepromWrite msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EscEepromWrite>()
{
  return px4_msgs::msg::builder::Init_EscEepromWrite_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESC_EEPROM_WRITE__BUILDER_HPP_
