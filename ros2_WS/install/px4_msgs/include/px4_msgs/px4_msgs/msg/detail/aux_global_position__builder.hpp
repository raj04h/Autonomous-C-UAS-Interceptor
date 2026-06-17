// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/AuxGlobalPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AUX_GLOBAL_POSITION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__AUX_GLOBAL_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/aux_global_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_AuxGlobalPosition_lat_lon_reset_counter
{
public:
  explicit Init_AuxGlobalPosition_lat_lon_reset_counter(::px4_msgs::msg::AuxGlobalPosition & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::AuxGlobalPosition lat_lon_reset_counter(::px4_msgs::msg::AuxGlobalPosition::_lat_lon_reset_counter_type arg)
  {
    msg_.lat_lon_reset_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::AuxGlobalPosition msg_;
};

class Init_AuxGlobalPosition_epv
{
public:
  explicit Init_AuxGlobalPosition_epv(::px4_msgs::msg::AuxGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_AuxGlobalPosition_lat_lon_reset_counter epv(::px4_msgs::msg::AuxGlobalPosition::_epv_type arg)
  {
    msg_.epv = std::move(arg);
    return Init_AuxGlobalPosition_lat_lon_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::AuxGlobalPosition msg_;
};

class Init_AuxGlobalPosition_eph
{
public:
  explicit Init_AuxGlobalPosition_eph(::px4_msgs::msg::AuxGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_AuxGlobalPosition_epv eph(::px4_msgs::msg::AuxGlobalPosition::_eph_type arg)
  {
    msg_.eph = std::move(arg);
    return Init_AuxGlobalPosition_epv(msg_);
  }

private:
  ::px4_msgs::msg::AuxGlobalPosition msg_;
};

class Init_AuxGlobalPosition_alt
{
public:
  explicit Init_AuxGlobalPosition_alt(::px4_msgs::msg::AuxGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_AuxGlobalPosition_eph alt(::px4_msgs::msg::AuxGlobalPosition::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_AuxGlobalPosition_eph(msg_);
  }

private:
  ::px4_msgs::msg::AuxGlobalPosition msg_;
};

class Init_AuxGlobalPosition_lon
{
public:
  explicit Init_AuxGlobalPosition_lon(::px4_msgs::msg::AuxGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_AuxGlobalPosition_alt lon(::px4_msgs::msg::AuxGlobalPosition::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_AuxGlobalPosition_alt(msg_);
  }

private:
  ::px4_msgs::msg::AuxGlobalPosition msg_;
};

class Init_AuxGlobalPosition_lat
{
public:
  explicit Init_AuxGlobalPosition_lat(::px4_msgs::msg::AuxGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_AuxGlobalPosition_lon lat(::px4_msgs::msg::AuxGlobalPosition::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_AuxGlobalPosition_lon(msg_);
  }

private:
  ::px4_msgs::msg::AuxGlobalPosition msg_;
};

class Init_AuxGlobalPosition_source
{
public:
  explicit Init_AuxGlobalPosition_source(::px4_msgs::msg::AuxGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_AuxGlobalPosition_lat source(::px4_msgs::msg::AuxGlobalPosition::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_AuxGlobalPosition_lat(msg_);
  }

private:
  ::px4_msgs::msg::AuxGlobalPosition msg_;
};

class Init_AuxGlobalPosition_id
{
public:
  explicit Init_AuxGlobalPosition_id(::px4_msgs::msg::AuxGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_AuxGlobalPosition_source id(::px4_msgs::msg::AuxGlobalPosition::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_AuxGlobalPosition_source(msg_);
  }

private:
  ::px4_msgs::msg::AuxGlobalPosition msg_;
};

class Init_AuxGlobalPosition_timestamp_sample
{
public:
  explicit Init_AuxGlobalPosition_timestamp_sample(::px4_msgs::msg::AuxGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_AuxGlobalPosition_id timestamp_sample(::px4_msgs::msg::AuxGlobalPosition::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_AuxGlobalPosition_id(msg_);
  }

private:
  ::px4_msgs::msg::AuxGlobalPosition msg_;
};

class Init_AuxGlobalPosition_timestamp
{
public:
  Init_AuxGlobalPosition_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuxGlobalPosition_timestamp_sample timestamp(::px4_msgs::msg::AuxGlobalPosition::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_AuxGlobalPosition_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::AuxGlobalPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::AuxGlobalPosition>()
{
  return px4_msgs::msg::builder::Init_AuxGlobalPosition_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__AUX_GLOBAL_POSITION__BUILDER_HPP_
