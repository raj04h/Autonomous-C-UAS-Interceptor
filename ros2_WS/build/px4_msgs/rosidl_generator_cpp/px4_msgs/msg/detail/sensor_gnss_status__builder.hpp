// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorGnssStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensor_gnss_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorGnssStatus_quality_post_processing
{
public:
  explicit Init_SensorGnssStatus_quality_post_processing(::px4_msgs::msg::SensorGnssStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorGnssStatus quality_post_processing(::px4_msgs::msg::SensorGnssStatus::_quality_post_processing_type arg)
  {
    msg_.quality_post_processing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssStatus msg_;
};

class Init_SensorGnssStatus_quality_gnss_signals
{
public:
  explicit Init_SensorGnssStatus_quality_gnss_signals(::px4_msgs::msg::SensorGnssStatus & msg)
  : msg_(msg)
  {}
  Init_SensorGnssStatus_quality_post_processing quality_gnss_signals(::px4_msgs::msg::SensorGnssStatus::_quality_gnss_signals_type arg)
  {
    msg_.quality_gnss_signals = std::move(arg);
    return Init_SensorGnssStatus_quality_post_processing(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssStatus msg_;
};

class Init_SensorGnssStatus_quality_receiver
{
public:
  explicit Init_SensorGnssStatus_quality_receiver(::px4_msgs::msg::SensorGnssStatus & msg)
  : msg_(msg)
  {}
  Init_SensorGnssStatus_quality_gnss_signals quality_receiver(::px4_msgs::msg::SensorGnssStatus::_quality_receiver_type arg)
  {
    msg_.quality_receiver = std::move(arg);
    return Init_SensorGnssStatus_quality_gnss_signals(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssStatus msg_;
};

class Init_SensorGnssStatus_quality_corrections
{
public:
  explicit Init_SensorGnssStatus_quality_corrections(::px4_msgs::msg::SensorGnssStatus & msg)
  : msg_(msg)
  {}
  Init_SensorGnssStatus_quality_receiver quality_corrections(::px4_msgs::msg::SensorGnssStatus::_quality_corrections_type arg)
  {
    msg_.quality_corrections = std::move(arg);
    return Init_SensorGnssStatus_quality_receiver(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssStatus msg_;
};

class Init_SensorGnssStatus_quality_available
{
public:
  explicit Init_SensorGnssStatus_quality_available(::px4_msgs::msg::SensorGnssStatus & msg)
  : msg_(msg)
  {}
  Init_SensorGnssStatus_quality_corrections quality_available(::px4_msgs::msg::SensorGnssStatus::_quality_available_type arg)
  {
    msg_.quality_available = std::move(arg);
    return Init_SensorGnssStatus_quality_corrections(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssStatus msg_;
};

class Init_SensorGnssStatus_device_id
{
public:
  explicit Init_SensorGnssStatus_device_id(::px4_msgs::msg::SensorGnssStatus & msg)
  : msg_(msg)
  {}
  Init_SensorGnssStatus_quality_available device_id(::px4_msgs::msg::SensorGnssStatus::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_SensorGnssStatus_quality_available(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssStatus msg_;
};

class Init_SensorGnssStatus_timestamp
{
public:
  Init_SensorGnssStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorGnssStatus_device_id timestamp(::px4_msgs::msg::SensorGnssStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorGnssStatus_device_id(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorGnssStatus>()
{
  return px4_msgs::msg::builder::Init_SensorGnssStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_STATUS__BUILDER_HPP_
