// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/OpenDroneIdBasicId.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_BASIC_ID__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_BASIC_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/open_drone_id_basic_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_OpenDroneIdBasicId_uas_id
{
public:
  explicit Init_OpenDroneIdBasicId_uas_id(::px4_msgs::msg::OpenDroneIdBasicId & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::OpenDroneIdBasicId uas_id(::px4_msgs::msg::OpenDroneIdBasicId::_uas_id_type arg)
  {
    msg_.uas_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdBasicId msg_;
};

class Init_OpenDroneIdBasicId_ua_type
{
public:
  explicit Init_OpenDroneIdBasicId_ua_type(::px4_msgs::msg::OpenDroneIdBasicId & msg)
  : msg_(msg)
  {}
  Init_OpenDroneIdBasicId_uas_id ua_type(::px4_msgs::msg::OpenDroneIdBasicId::_ua_type_type arg)
  {
    msg_.ua_type = std::move(arg);
    return Init_OpenDroneIdBasicId_uas_id(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdBasicId msg_;
};

class Init_OpenDroneIdBasicId_id_type
{
public:
  explicit Init_OpenDroneIdBasicId_id_type(::px4_msgs::msg::OpenDroneIdBasicId & msg)
  : msg_(msg)
  {}
  Init_OpenDroneIdBasicId_ua_type id_type(::px4_msgs::msg::OpenDroneIdBasicId::_id_type_type arg)
  {
    msg_.id_type = std::move(arg);
    return Init_OpenDroneIdBasicId_ua_type(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdBasicId msg_;
};

class Init_OpenDroneIdBasicId_id_or_mac
{
public:
  explicit Init_OpenDroneIdBasicId_id_or_mac(::px4_msgs::msg::OpenDroneIdBasicId & msg)
  : msg_(msg)
  {}
  Init_OpenDroneIdBasicId_id_type id_or_mac(::px4_msgs::msg::OpenDroneIdBasicId::_id_or_mac_type arg)
  {
    msg_.id_or_mac = std::move(arg);
    return Init_OpenDroneIdBasicId_id_type(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdBasicId msg_;
};

class Init_OpenDroneIdBasicId_timestamp
{
public:
  Init_OpenDroneIdBasicId_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenDroneIdBasicId_id_or_mac timestamp(::px4_msgs::msg::OpenDroneIdBasicId::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_OpenDroneIdBasicId_id_or_mac(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdBasicId msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::OpenDroneIdBasicId>()
{
  return px4_msgs::msg::builder::Init_OpenDroneIdBasicId_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_BASIC_ID__BUILDER_HPP_
