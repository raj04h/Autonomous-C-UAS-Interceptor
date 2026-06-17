// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EstimatorFusionControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_FUSION_CONTROL__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_FUSION_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/estimator_fusion_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorFusionControl_rngbcn_active
{
public:
  explicit Init_EstimatorFusionControl_rngbcn_active(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EstimatorFusionControl rngbcn_active(::px4_msgs::msg::EstimatorFusionControl::_rngbcn_active_type arg)
  {
    msg_.rngbcn_active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_aspd_active
{
public:
  explicit Init_EstimatorFusionControl_aspd_active(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_rngbcn_active aspd_active(::px4_msgs::msg::EstimatorFusionControl::_aspd_active_type arg)
  {
    msg_.aspd_active = std::move(arg);
    return Init_EstimatorFusionControl_rngbcn_active(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_mag_active
{
public:
  explicit Init_EstimatorFusionControl_mag_active(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_aspd_active mag_active(::px4_msgs::msg::EstimatorFusionControl::_mag_active_type arg)
  {
    msg_.mag_active = std::move(arg);
    return Init_EstimatorFusionControl_aspd_active(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_rng_active
{
public:
  explicit Init_EstimatorFusionControl_rng_active(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_mag_active rng_active(::px4_msgs::msg::EstimatorFusionControl::_rng_active_type arg)
  {
    msg_.rng_active = std::move(arg);
    return Init_EstimatorFusionControl_mag_active(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_baro_active
{
public:
  explicit Init_EstimatorFusionControl_baro_active(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_rng_active baro_active(::px4_msgs::msg::EstimatorFusionControl::_baro_active_type arg)
  {
    msg_.baro_active = std::move(arg);
    return Init_EstimatorFusionControl_rng_active(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_agp_active
{
public:
  explicit Init_EstimatorFusionControl_agp_active(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_baro_active agp_active(::px4_msgs::msg::EstimatorFusionControl::_agp_active_type arg)
  {
    msg_.agp_active = std::move(arg);
    return Init_EstimatorFusionControl_baro_active(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_ev_active
{
public:
  explicit Init_EstimatorFusionControl_ev_active(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_agp_active ev_active(::px4_msgs::msg::EstimatorFusionControl::_ev_active_type arg)
  {
    msg_.ev_active = std::move(arg);
    return Init_EstimatorFusionControl_agp_active(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_of_active
{
public:
  explicit Init_EstimatorFusionControl_of_active(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_ev_active of_active(::px4_msgs::msg::EstimatorFusionControl::_of_active_type arg)
  {
    msg_.of_active = std::move(arg);
    return Init_EstimatorFusionControl_ev_active(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_gps_active
{
public:
  explicit Init_EstimatorFusionControl_gps_active(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_of_active gps_active(::px4_msgs::msg::EstimatorFusionControl::_gps_active_type arg)
  {
    msg_.gps_active = std::move(arg);
    return Init_EstimatorFusionControl_of_active(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_rngbcn_intended
{
public:
  explicit Init_EstimatorFusionControl_rngbcn_intended(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_gps_active rngbcn_intended(::px4_msgs::msg::EstimatorFusionControl::_rngbcn_intended_type arg)
  {
    msg_.rngbcn_intended = std::move(arg);
    return Init_EstimatorFusionControl_gps_active(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_aspd_intended
{
public:
  explicit Init_EstimatorFusionControl_aspd_intended(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_rngbcn_intended aspd_intended(::px4_msgs::msg::EstimatorFusionControl::_aspd_intended_type arg)
  {
    msg_.aspd_intended = std::move(arg);
    return Init_EstimatorFusionControl_rngbcn_intended(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_mag_intended
{
public:
  explicit Init_EstimatorFusionControl_mag_intended(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_aspd_intended mag_intended(::px4_msgs::msg::EstimatorFusionControl::_mag_intended_type arg)
  {
    msg_.mag_intended = std::move(arg);
    return Init_EstimatorFusionControl_aspd_intended(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_rng_intended
{
public:
  explicit Init_EstimatorFusionControl_rng_intended(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_mag_intended rng_intended(::px4_msgs::msg::EstimatorFusionControl::_rng_intended_type arg)
  {
    msg_.rng_intended = std::move(arg);
    return Init_EstimatorFusionControl_mag_intended(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_baro_intended
{
public:
  explicit Init_EstimatorFusionControl_baro_intended(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_rng_intended baro_intended(::px4_msgs::msg::EstimatorFusionControl::_baro_intended_type arg)
  {
    msg_.baro_intended = std::move(arg);
    return Init_EstimatorFusionControl_rng_intended(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_agp_intended
{
public:
  explicit Init_EstimatorFusionControl_agp_intended(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_baro_intended agp_intended(::px4_msgs::msg::EstimatorFusionControl::_agp_intended_type arg)
  {
    msg_.agp_intended = std::move(arg);
    return Init_EstimatorFusionControl_baro_intended(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_ev_intended
{
public:
  explicit Init_EstimatorFusionControl_ev_intended(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_agp_intended ev_intended(::px4_msgs::msg::EstimatorFusionControl::_ev_intended_type arg)
  {
    msg_.ev_intended = std::move(arg);
    return Init_EstimatorFusionControl_agp_intended(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_of_intended
{
public:
  explicit Init_EstimatorFusionControl_of_intended(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_ev_intended of_intended(::px4_msgs::msg::EstimatorFusionControl::_of_intended_type arg)
  {
    msg_.of_intended = std::move(arg);
    return Init_EstimatorFusionControl_ev_intended(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_gps_intended
{
public:
  explicit Init_EstimatorFusionControl_gps_intended(::px4_msgs::msg::EstimatorFusionControl & msg)
  : msg_(msg)
  {}
  Init_EstimatorFusionControl_of_intended gps_intended(::px4_msgs::msg::EstimatorFusionControl::_gps_intended_type arg)
  {
    msg_.gps_intended = std::move(arg);
    return Init_EstimatorFusionControl_of_intended(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

class Init_EstimatorFusionControl_timestamp
{
public:
  Init_EstimatorFusionControl_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorFusionControl_gps_intended timestamp(::px4_msgs::msg::EstimatorFusionControl::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorFusionControl_gps_intended(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorFusionControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EstimatorFusionControl>()
{
  return px4_msgs::msg::builder::Init_EstimatorFusionControl_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_FUSION_CONTROL__BUILDER_HPP_
