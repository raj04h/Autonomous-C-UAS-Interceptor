// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/AirspeedValidated.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AIRSPEED_VALIDATED__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__AIRSPEED_VALIDATED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/airspeed_validated__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_AirspeedValidated_pitch_filtered
{
public:
  explicit Init_AirspeedValidated_pitch_filtered(::px4_msgs::msg::AirspeedValidated & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::AirspeedValidated pitch_filtered(::px4_msgs::msg::AirspeedValidated::_pitch_filtered_type arg)
  {
    msg_.pitch_filtered = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedValidated msg_;
};

class Init_AirspeedValidated_throttle_filtered
{
public:
  explicit Init_AirspeedValidated_throttle_filtered(::px4_msgs::msg::AirspeedValidated & msg)
  : msg_(msg)
  {}
  Init_AirspeedValidated_pitch_filtered throttle_filtered(::px4_msgs::msg::AirspeedValidated::_throttle_filtered_type arg)
  {
    msg_.throttle_filtered = std::move(arg);
    return Init_AirspeedValidated_pitch_filtered(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedValidated msg_;
};

class Init_AirspeedValidated_airspeed_derivative_filtered
{
public:
  explicit Init_AirspeedValidated_airspeed_derivative_filtered(::px4_msgs::msg::AirspeedValidated & msg)
  : msg_(msg)
  {}
  Init_AirspeedValidated_throttle_filtered airspeed_derivative_filtered(::px4_msgs::msg::AirspeedValidated::_airspeed_derivative_filtered_type arg)
  {
    msg_.airspeed_derivative_filtered = std::move(arg);
    return Init_AirspeedValidated_throttle_filtered(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedValidated msg_;
};

class Init_AirspeedValidated_calibraded_airspeed_synth_m_s
{
public:
  explicit Init_AirspeedValidated_calibraded_airspeed_synth_m_s(::px4_msgs::msg::AirspeedValidated & msg)
  : msg_(msg)
  {}
  Init_AirspeedValidated_airspeed_derivative_filtered calibraded_airspeed_synth_m_s(::px4_msgs::msg::AirspeedValidated::_calibraded_airspeed_synth_m_s_type arg)
  {
    msg_.calibraded_airspeed_synth_m_s = std::move(arg);
    return Init_AirspeedValidated_airspeed_derivative_filtered(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedValidated msg_;
};

class Init_AirspeedValidated_calibrated_ground_minus_wind_m_s
{
public:
  explicit Init_AirspeedValidated_calibrated_ground_minus_wind_m_s(::px4_msgs::msg::AirspeedValidated & msg)
  : msg_(msg)
  {}
  Init_AirspeedValidated_calibraded_airspeed_synth_m_s calibrated_ground_minus_wind_m_s(::px4_msgs::msg::AirspeedValidated::_calibrated_ground_minus_wind_m_s_type arg)
  {
    msg_.calibrated_ground_minus_wind_m_s = std::move(arg);
    return Init_AirspeedValidated_calibraded_airspeed_synth_m_s(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedValidated msg_;
};

class Init_AirspeedValidated_airspeed_source
{
public:
  explicit Init_AirspeedValidated_airspeed_source(::px4_msgs::msg::AirspeedValidated & msg)
  : msg_(msg)
  {}
  Init_AirspeedValidated_calibrated_ground_minus_wind_m_s airspeed_source(::px4_msgs::msg::AirspeedValidated::_airspeed_source_type arg)
  {
    msg_.airspeed_source = std::move(arg);
    return Init_AirspeedValidated_calibrated_ground_minus_wind_m_s(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedValidated msg_;
};

class Init_AirspeedValidated_true_airspeed_m_s
{
public:
  explicit Init_AirspeedValidated_true_airspeed_m_s(::px4_msgs::msg::AirspeedValidated & msg)
  : msg_(msg)
  {}
  Init_AirspeedValidated_airspeed_source true_airspeed_m_s(::px4_msgs::msg::AirspeedValidated::_true_airspeed_m_s_type arg)
  {
    msg_.true_airspeed_m_s = std::move(arg);
    return Init_AirspeedValidated_airspeed_source(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedValidated msg_;
};

class Init_AirspeedValidated_calibrated_airspeed_m_s
{
public:
  explicit Init_AirspeedValidated_calibrated_airspeed_m_s(::px4_msgs::msg::AirspeedValidated & msg)
  : msg_(msg)
  {}
  Init_AirspeedValidated_true_airspeed_m_s calibrated_airspeed_m_s(::px4_msgs::msg::AirspeedValidated::_calibrated_airspeed_m_s_type arg)
  {
    msg_.calibrated_airspeed_m_s = std::move(arg);
    return Init_AirspeedValidated_true_airspeed_m_s(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedValidated msg_;
};

class Init_AirspeedValidated_indicated_airspeed_m_s
{
public:
  explicit Init_AirspeedValidated_indicated_airspeed_m_s(::px4_msgs::msg::AirspeedValidated & msg)
  : msg_(msg)
  {}
  Init_AirspeedValidated_calibrated_airspeed_m_s indicated_airspeed_m_s(::px4_msgs::msg::AirspeedValidated::_indicated_airspeed_m_s_type arg)
  {
    msg_.indicated_airspeed_m_s = std::move(arg);
    return Init_AirspeedValidated_calibrated_airspeed_m_s(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedValidated msg_;
};

class Init_AirspeedValidated_timestamp
{
public:
  Init_AirspeedValidated_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AirspeedValidated_indicated_airspeed_m_s timestamp(::px4_msgs::msg::AirspeedValidated::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_AirspeedValidated_indicated_airspeed_m_s(msg_);
  }

private:
  ::px4_msgs::msg::AirspeedValidated msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::AirspeedValidated>()
{
  return px4_msgs::msg::builder::Init_AirspeedValidated_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__AIRSPEED_VALIDATED__BUILDER_HPP_
