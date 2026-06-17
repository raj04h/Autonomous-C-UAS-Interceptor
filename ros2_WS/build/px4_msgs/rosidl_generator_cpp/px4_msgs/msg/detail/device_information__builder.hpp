// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/DeviceInformation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DEVICE_INFORMATION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__DEVICE_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/device_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_DeviceInformation_serial_number
{
public:
  explicit Init_DeviceInformation_serial_number(::px4_msgs::msg::DeviceInformation & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::DeviceInformation serial_number(::px4_msgs::msg::DeviceInformation::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::DeviceInformation msg_;
};

class Init_DeviceInformation_hardware_version
{
public:
  explicit Init_DeviceInformation_hardware_version(::px4_msgs::msg::DeviceInformation & msg)
  : msg_(msg)
  {}
  Init_DeviceInformation_serial_number hardware_version(::px4_msgs::msg::DeviceInformation::_hardware_version_type arg)
  {
    msg_.hardware_version = std::move(arg);
    return Init_DeviceInformation_serial_number(msg_);
  }

private:
  ::px4_msgs::msg::DeviceInformation msg_;
};

class Init_DeviceInformation_firmware_version
{
public:
  explicit Init_DeviceInformation_firmware_version(::px4_msgs::msg::DeviceInformation & msg)
  : msg_(msg)
  {}
  Init_DeviceInformation_hardware_version firmware_version(::px4_msgs::msg::DeviceInformation::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_DeviceInformation_hardware_version(msg_);
  }

private:
  ::px4_msgs::msg::DeviceInformation msg_;
};

class Init_DeviceInformation_device_id
{
public:
  explicit Init_DeviceInformation_device_id(::px4_msgs::msg::DeviceInformation & msg)
  : msg_(msg)
  {}
  Init_DeviceInformation_firmware_version device_id(::px4_msgs::msg::DeviceInformation::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_DeviceInformation_firmware_version(msg_);
  }

private:
  ::px4_msgs::msg::DeviceInformation msg_;
};

class Init_DeviceInformation_name
{
public:
  explicit Init_DeviceInformation_name(::px4_msgs::msg::DeviceInformation & msg)
  : msg_(msg)
  {}
  Init_DeviceInformation_device_id name(::px4_msgs::msg::DeviceInformation::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_DeviceInformation_device_id(msg_);
  }

private:
  ::px4_msgs::msg::DeviceInformation msg_;
};

class Init_DeviceInformation_device_type
{
public:
  explicit Init_DeviceInformation_device_type(::px4_msgs::msg::DeviceInformation & msg)
  : msg_(msg)
  {}
  Init_DeviceInformation_name device_type(::px4_msgs::msg::DeviceInformation::_device_type_type arg)
  {
    msg_.device_type = std::move(arg);
    return Init_DeviceInformation_name(msg_);
  }

private:
  ::px4_msgs::msg::DeviceInformation msg_;
};

class Init_DeviceInformation_timestamp
{
public:
  Init_DeviceInformation_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeviceInformation_device_type timestamp(::px4_msgs::msg::DeviceInformation::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DeviceInformation_device_type(msg_);
  }

private:
  ::px4_msgs::msg::DeviceInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::DeviceInformation>()
{
  return px4_msgs::msg::builder::Init_DeviceInformation_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__DEVICE_INFORMATION__BUILDER_HPP_
