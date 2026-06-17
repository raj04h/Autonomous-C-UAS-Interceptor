// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/RangingBeacon.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RANGING_BEACON__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__RANGING_BEACON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/ranging_beacon__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_RangingBeacon_range_accuracy
{
public:
  explicit Init_RangingBeacon_range_accuracy(::px4_msgs::msg::RangingBeacon & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::RangingBeacon range_accuracy(::px4_msgs::msg::RangingBeacon::_range_accuracy_type arg)
  {
    msg_.range_accuracy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::RangingBeacon msg_;
};

class Init_RangingBeacon_carrier_freq
{
public:
  explicit Init_RangingBeacon_carrier_freq(::px4_msgs::msg::RangingBeacon & msg)
  : msg_(msg)
  {}
  Init_RangingBeacon_range_accuracy carrier_freq(::px4_msgs::msg::RangingBeacon::_carrier_freq_type arg)
  {
    msg_.carrier_freq = std::move(arg);
    return Init_RangingBeacon_range_accuracy(msg_);
  }

private:
  ::px4_msgs::msg::RangingBeacon msg_;
};

class Init_RangingBeacon_status
{
public:
  explicit Init_RangingBeacon_status(::px4_msgs::msg::RangingBeacon & msg)
  : msg_(msg)
  {}
  Init_RangingBeacon_carrier_freq status(::px4_msgs::msg::RangingBeacon::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RangingBeacon_carrier_freq(msg_);
  }

private:
  ::px4_msgs::msg::RangingBeacon msg_;
};

class Init_RangingBeacon_sequence_nr
{
public:
  explicit Init_RangingBeacon_sequence_nr(::px4_msgs::msg::RangingBeacon & msg)
  : msg_(msg)
  {}
  Init_RangingBeacon_status sequence_nr(::px4_msgs::msg::RangingBeacon::_sequence_nr_type arg)
  {
    msg_.sequence_nr = std::move(arg);
    return Init_RangingBeacon_status(msg_);
  }

private:
  ::px4_msgs::msg::RangingBeacon msg_;
};

class Init_RangingBeacon_vacc
{
public:
  explicit Init_RangingBeacon_vacc(::px4_msgs::msg::RangingBeacon & msg)
  : msg_(msg)
  {}
  Init_RangingBeacon_sequence_nr vacc(::px4_msgs::msg::RangingBeacon::_vacc_type arg)
  {
    msg_.vacc = std::move(arg);
    return Init_RangingBeacon_sequence_nr(msg_);
  }

private:
  ::px4_msgs::msg::RangingBeacon msg_;
};

class Init_RangingBeacon_hacc
{
public:
  explicit Init_RangingBeacon_hacc(::px4_msgs::msg::RangingBeacon & msg)
  : msg_(msg)
  {}
  Init_RangingBeacon_vacc hacc(::px4_msgs::msg::RangingBeacon::_hacc_type arg)
  {
    msg_.hacc = std::move(arg);
    return Init_RangingBeacon_vacc(msg_);
  }

private:
  ::px4_msgs::msg::RangingBeacon msg_;
};

class Init_RangingBeacon_alt_type
{
public:
  explicit Init_RangingBeacon_alt_type(::px4_msgs::msg::RangingBeacon & msg)
  : msg_(msg)
  {}
  Init_RangingBeacon_hacc alt_type(::px4_msgs::msg::RangingBeacon::_alt_type_type arg)
  {
    msg_.alt_type = std::move(arg);
    return Init_RangingBeacon_hacc(msg_);
  }

private:
  ::px4_msgs::msg::RangingBeacon msg_;
};

class Init_RangingBeacon_alt
{
public:
  explicit Init_RangingBeacon_alt(::px4_msgs::msg::RangingBeacon & msg)
  : msg_(msg)
  {}
  Init_RangingBeacon_alt_type alt(::px4_msgs::msg::RangingBeacon::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_RangingBeacon_alt_type(msg_);
  }

private:
  ::px4_msgs::msg::RangingBeacon msg_;
};

class Init_RangingBeacon_lon
{
public:
  explicit Init_RangingBeacon_lon(::px4_msgs::msg::RangingBeacon & msg)
  : msg_(msg)
  {}
  Init_RangingBeacon_alt lon(::px4_msgs::msg::RangingBeacon::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_RangingBeacon_alt(msg_);
  }

private:
  ::px4_msgs::msg::RangingBeacon msg_;
};

class Init_RangingBeacon_lat
{
public:
  explicit Init_RangingBeacon_lat(::px4_msgs::msg::RangingBeacon & msg)
  : msg_(msg)
  {}
  Init_RangingBeacon_lon lat(::px4_msgs::msg::RangingBeacon::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_RangingBeacon_lon(msg_);
  }

private:
  ::px4_msgs::msg::RangingBeacon msg_;
};

class Init_RangingBeacon_range
{
public:
  explicit Init_RangingBeacon_range(::px4_msgs::msg::RangingBeacon & msg)
  : msg_(msg)
  {}
  Init_RangingBeacon_lat range(::px4_msgs::msg::RangingBeacon::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_RangingBeacon_lat(msg_);
  }

private:
  ::px4_msgs::msg::RangingBeacon msg_;
};

class Init_RangingBeacon_beacon_id
{
public:
  explicit Init_RangingBeacon_beacon_id(::px4_msgs::msg::RangingBeacon & msg)
  : msg_(msg)
  {}
  Init_RangingBeacon_range beacon_id(::px4_msgs::msg::RangingBeacon::_beacon_id_type arg)
  {
    msg_.beacon_id = std::move(arg);
    return Init_RangingBeacon_range(msg_);
  }

private:
  ::px4_msgs::msg::RangingBeacon msg_;
};

class Init_RangingBeacon_timestamp_sample
{
public:
  explicit Init_RangingBeacon_timestamp_sample(::px4_msgs::msg::RangingBeacon & msg)
  : msg_(msg)
  {}
  Init_RangingBeacon_beacon_id timestamp_sample(::px4_msgs::msg::RangingBeacon::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_RangingBeacon_beacon_id(msg_);
  }

private:
  ::px4_msgs::msg::RangingBeacon msg_;
};

class Init_RangingBeacon_timestamp
{
public:
  Init_RangingBeacon_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RangingBeacon_timestamp_sample timestamp(::px4_msgs::msg::RangingBeacon::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RangingBeacon_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::RangingBeacon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::RangingBeacon>()
{
  return px4_msgs::msg::builder::Init_RangingBeacon_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RANGING_BEACON__BUILDER_HPP_
