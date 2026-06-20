// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Detection_y2
{
public:
  explicit Init_Detection_y2(::interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Detection y2(::interfaces::msg::Detection::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Detection msg_;
};

class Init_Detection_x2
{
public:
  explicit Init_Detection_x2(::interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_y2 x2(::interfaces::msg::Detection::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_Detection_y2(msg_);
  }

private:
  ::interfaces::msg::Detection msg_;
};

class Init_Detection_y1
{
public:
  explicit Init_Detection_y1(::interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_x2 y1(::interfaces::msg::Detection::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_Detection_x2(msg_);
  }

private:
  ::interfaces::msg::Detection msg_;
};

class Init_Detection_x1
{
public:
  explicit Init_Detection_x1(::interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_y1 x1(::interfaces::msg::Detection::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_Detection_y1(msg_);
  }

private:
  ::interfaces::msg::Detection msg_;
};

class Init_Detection_confidence
{
public:
  explicit Init_Detection_confidence(::interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_x1 confidence(::interfaces::msg::Detection::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Detection_x1(msg_);
  }

private:
  ::interfaces::msg::Detection msg_;
};

class Init_Detection_class_name
{
public:
  Init_Detection_class_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_confidence class_name(::interfaces::msg::Detection::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_Detection_confidence(msg_);
  }

private:
  ::interfaces::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Detection>()
{
  return interfaces::msg::builder::Init_Detection_class_name();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_
