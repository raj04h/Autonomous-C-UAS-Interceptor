// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/TargetGnss.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TARGET_GNSS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__TARGET_GNSS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/target_gnss__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_TargetGnss_vel_ned_updated
{
public:
  explicit Init_TargetGnss_vel_ned_updated(::px4_msgs::msg::TargetGnss & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::TargetGnss vel_ned_updated(::px4_msgs::msg::TargetGnss::_vel_ned_updated_type arg)
  {
    msg_.vel_ned_updated = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::TargetGnss msg_;
};

class Init_TargetGnss_s_acc_m_s
{
public:
  explicit Init_TargetGnss_s_acc_m_s(::px4_msgs::msg::TargetGnss & msg)
  : msg_(msg)
  {}
  Init_TargetGnss_vel_ned_updated s_acc_m_s(::px4_msgs::msg::TargetGnss::_s_acc_m_s_type arg)
  {
    msg_.s_acc_m_s = std::move(arg);
    return Init_TargetGnss_vel_ned_updated(msg_);
  }

private:
  ::px4_msgs::msg::TargetGnss msg_;
};

class Init_TargetGnss_vel_d_m_s
{
public:
  explicit Init_TargetGnss_vel_d_m_s(::px4_msgs::msg::TargetGnss & msg)
  : msg_(msg)
  {}
  Init_TargetGnss_s_acc_m_s vel_d_m_s(::px4_msgs::msg::TargetGnss::_vel_d_m_s_type arg)
  {
    msg_.vel_d_m_s = std::move(arg);
    return Init_TargetGnss_s_acc_m_s(msg_);
  }

private:
  ::px4_msgs::msg::TargetGnss msg_;
};

class Init_TargetGnss_vel_e_m_s
{
public:
  explicit Init_TargetGnss_vel_e_m_s(::px4_msgs::msg::TargetGnss & msg)
  : msg_(msg)
  {}
  Init_TargetGnss_vel_d_m_s vel_e_m_s(::px4_msgs::msg::TargetGnss::_vel_e_m_s_type arg)
  {
    msg_.vel_e_m_s = std::move(arg);
    return Init_TargetGnss_vel_d_m_s(msg_);
  }

private:
  ::px4_msgs::msg::TargetGnss msg_;
};

class Init_TargetGnss_vel_n_m_s
{
public:
  explicit Init_TargetGnss_vel_n_m_s(::px4_msgs::msg::TargetGnss & msg)
  : msg_(msg)
  {}
  Init_TargetGnss_vel_e_m_s vel_n_m_s(::px4_msgs::msg::TargetGnss::_vel_n_m_s_type arg)
  {
    msg_.vel_n_m_s = std::move(arg);
    return Init_TargetGnss_vel_e_m_s(msg_);
  }

private:
  ::px4_msgs::msg::TargetGnss msg_;
};

class Init_TargetGnss_abs_pos_updated
{
public:
  explicit Init_TargetGnss_abs_pos_updated(::px4_msgs::msg::TargetGnss & msg)
  : msg_(msg)
  {}
  Init_TargetGnss_vel_n_m_s abs_pos_updated(::px4_msgs::msg::TargetGnss::_abs_pos_updated_type arg)
  {
    msg_.abs_pos_updated = std::move(arg);
    return Init_TargetGnss_vel_n_m_s(msg_);
  }

private:
  ::px4_msgs::msg::TargetGnss msg_;
};

class Init_TargetGnss_epv
{
public:
  explicit Init_TargetGnss_epv(::px4_msgs::msg::TargetGnss & msg)
  : msg_(msg)
  {}
  Init_TargetGnss_abs_pos_updated epv(::px4_msgs::msg::TargetGnss::_epv_type arg)
  {
    msg_.epv = std::move(arg);
    return Init_TargetGnss_abs_pos_updated(msg_);
  }

private:
  ::px4_msgs::msg::TargetGnss msg_;
};

class Init_TargetGnss_eph
{
public:
  explicit Init_TargetGnss_eph(::px4_msgs::msg::TargetGnss & msg)
  : msg_(msg)
  {}
  Init_TargetGnss_epv eph(::px4_msgs::msg::TargetGnss::_eph_type arg)
  {
    msg_.eph = std::move(arg);
    return Init_TargetGnss_epv(msg_);
  }

private:
  ::px4_msgs::msg::TargetGnss msg_;
};

class Init_TargetGnss_altitude_msl_m
{
public:
  explicit Init_TargetGnss_altitude_msl_m(::px4_msgs::msg::TargetGnss & msg)
  : msg_(msg)
  {}
  Init_TargetGnss_eph altitude_msl_m(::px4_msgs::msg::TargetGnss::_altitude_msl_m_type arg)
  {
    msg_.altitude_msl_m = std::move(arg);
    return Init_TargetGnss_eph(msg_);
  }

private:
  ::px4_msgs::msg::TargetGnss msg_;
};

class Init_TargetGnss_longitude_deg
{
public:
  explicit Init_TargetGnss_longitude_deg(::px4_msgs::msg::TargetGnss & msg)
  : msg_(msg)
  {}
  Init_TargetGnss_altitude_msl_m longitude_deg(::px4_msgs::msg::TargetGnss::_longitude_deg_type arg)
  {
    msg_.longitude_deg = std::move(arg);
    return Init_TargetGnss_altitude_msl_m(msg_);
  }

private:
  ::px4_msgs::msg::TargetGnss msg_;
};

class Init_TargetGnss_latitude_deg
{
public:
  explicit Init_TargetGnss_latitude_deg(::px4_msgs::msg::TargetGnss & msg)
  : msg_(msg)
  {}
  Init_TargetGnss_longitude_deg latitude_deg(::px4_msgs::msg::TargetGnss::_latitude_deg_type arg)
  {
    msg_.latitude_deg = std::move(arg);
    return Init_TargetGnss_longitude_deg(msg_);
  }

private:
  ::px4_msgs::msg::TargetGnss msg_;
};

class Init_TargetGnss_timestamp_sample
{
public:
  explicit Init_TargetGnss_timestamp_sample(::px4_msgs::msg::TargetGnss & msg)
  : msg_(msg)
  {}
  Init_TargetGnss_latitude_deg timestamp_sample(::px4_msgs::msg::TargetGnss::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_TargetGnss_latitude_deg(msg_);
  }

private:
  ::px4_msgs::msg::TargetGnss msg_;
};

class Init_TargetGnss_timestamp
{
public:
  Init_TargetGnss_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetGnss_timestamp_sample timestamp(::px4_msgs::msg::TargetGnss::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TargetGnss_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::TargetGnss msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::TargetGnss>()
{
  return px4_msgs::msg::builder::Init_TargetGnss_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TARGET_GNSS__BUILDER_HPP_
