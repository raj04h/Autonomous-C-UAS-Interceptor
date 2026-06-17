// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/OpenDroneIdSystem.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SYSTEM__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SYSTEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/open_drone_id_system__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_OpenDroneIdSystem_operator_altitude_geo
{
public:
  explicit Init_OpenDroneIdSystem_operator_altitude_geo(::px4_msgs::msg::OpenDroneIdSystem & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::OpenDroneIdSystem operator_altitude_geo(::px4_msgs::msg::OpenDroneIdSystem::_operator_altitude_geo_type arg)
  {
    msg_.operator_altitude_geo = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdSystem msg_;
};

class Init_OpenDroneIdSystem_class_eu
{
public:
  explicit Init_OpenDroneIdSystem_class_eu(::px4_msgs::msg::OpenDroneIdSystem & msg)
  : msg_(msg)
  {}
  Init_OpenDroneIdSystem_operator_altitude_geo class_eu(::px4_msgs::msg::OpenDroneIdSystem::_class_eu_type arg)
  {
    msg_.class_eu = std::move(arg);
    return Init_OpenDroneIdSystem_operator_altitude_geo(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdSystem msg_;
};

class Init_OpenDroneIdSystem_category_eu
{
public:
  explicit Init_OpenDroneIdSystem_category_eu(::px4_msgs::msg::OpenDroneIdSystem & msg)
  : msg_(msg)
  {}
  Init_OpenDroneIdSystem_class_eu category_eu(::px4_msgs::msg::OpenDroneIdSystem::_category_eu_type arg)
  {
    msg_.category_eu = std::move(arg);
    return Init_OpenDroneIdSystem_class_eu(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdSystem msg_;
};

class Init_OpenDroneIdSystem_area_floor
{
public:
  explicit Init_OpenDroneIdSystem_area_floor(::px4_msgs::msg::OpenDroneIdSystem & msg)
  : msg_(msg)
  {}
  Init_OpenDroneIdSystem_category_eu area_floor(::px4_msgs::msg::OpenDroneIdSystem::_area_floor_type arg)
  {
    msg_.area_floor = std::move(arg);
    return Init_OpenDroneIdSystem_category_eu(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdSystem msg_;
};

class Init_OpenDroneIdSystem_area_ceiling
{
public:
  explicit Init_OpenDroneIdSystem_area_ceiling(::px4_msgs::msg::OpenDroneIdSystem & msg)
  : msg_(msg)
  {}
  Init_OpenDroneIdSystem_area_floor area_ceiling(::px4_msgs::msg::OpenDroneIdSystem::_area_ceiling_type arg)
  {
    msg_.area_ceiling = std::move(arg);
    return Init_OpenDroneIdSystem_area_floor(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdSystem msg_;
};

class Init_OpenDroneIdSystem_area_radius
{
public:
  explicit Init_OpenDroneIdSystem_area_radius(::px4_msgs::msg::OpenDroneIdSystem & msg)
  : msg_(msg)
  {}
  Init_OpenDroneIdSystem_area_ceiling area_radius(::px4_msgs::msg::OpenDroneIdSystem::_area_radius_type arg)
  {
    msg_.area_radius = std::move(arg);
    return Init_OpenDroneIdSystem_area_ceiling(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdSystem msg_;
};

class Init_OpenDroneIdSystem_area_count
{
public:
  explicit Init_OpenDroneIdSystem_area_count(::px4_msgs::msg::OpenDroneIdSystem & msg)
  : msg_(msg)
  {}
  Init_OpenDroneIdSystem_area_radius area_count(::px4_msgs::msg::OpenDroneIdSystem::_area_count_type arg)
  {
    msg_.area_count = std::move(arg);
    return Init_OpenDroneIdSystem_area_radius(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdSystem msg_;
};

class Init_OpenDroneIdSystem_operator_longitude
{
public:
  explicit Init_OpenDroneIdSystem_operator_longitude(::px4_msgs::msg::OpenDroneIdSystem & msg)
  : msg_(msg)
  {}
  Init_OpenDroneIdSystem_area_count operator_longitude(::px4_msgs::msg::OpenDroneIdSystem::_operator_longitude_type arg)
  {
    msg_.operator_longitude = std::move(arg);
    return Init_OpenDroneIdSystem_area_count(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdSystem msg_;
};

class Init_OpenDroneIdSystem_operator_latitude
{
public:
  explicit Init_OpenDroneIdSystem_operator_latitude(::px4_msgs::msg::OpenDroneIdSystem & msg)
  : msg_(msg)
  {}
  Init_OpenDroneIdSystem_operator_longitude operator_latitude(::px4_msgs::msg::OpenDroneIdSystem::_operator_latitude_type arg)
  {
    msg_.operator_latitude = std::move(arg);
    return Init_OpenDroneIdSystem_operator_longitude(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdSystem msg_;
};

class Init_OpenDroneIdSystem_classification_type
{
public:
  explicit Init_OpenDroneIdSystem_classification_type(::px4_msgs::msg::OpenDroneIdSystem & msg)
  : msg_(msg)
  {}
  Init_OpenDroneIdSystem_operator_latitude classification_type(::px4_msgs::msg::OpenDroneIdSystem::_classification_type_type arg)
  {
    msg_.classification_type = std::move(arg);
    return Init_OpenDroneIdSystem_operator_latitude(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdSystem msg_;
};

class Init_OpenDroneIdSystem_operator_location_type
{
public:
  explicit Init_OpenDroneIdSystem_operator_location_type(::px4_msgs::msg::OpenDroneIdSystem & msg)
  : msg_(msg)
  {}
  Init_OpenDroneIdSystem_classification_type operator_location_type(::px4_msgs::msg::OpenDroneIdSystem::_operator_location_type_type arg)
  {
    msg_.operator_location_type = std::move(arg);
    return Init_OpenDroneIdSystem_classification_type(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdSystem msg_;
};

class Init_OpenDroneIdSystem_id_or_mac
{
public:
  explicit Init_OpenDroneIdSystem_id_or_mac(::px4_msgs::msg::OpenDroneIdSystem & msg)
  : msg_(msg)
  {}
  Init_OpenDroneIdSystem_operator_location_type id_or_mac(::px4_msgs::msg::OpenDroneIdSystem::_id_or_mac_type arg)
  {
    msg_.id_or_mac = std::move(arg);
    return Init_OpenDroneIdSystem_operator_location_type(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdSystem msg_;
};

class Init_OpenDroneIdSystem_timestamp
{
public:
  Init_OpenDroneIdSystem_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenDroneIdSystem_id_or_mac timestamp(::px4_msgs::msg::OpenDroneIdSystem::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_OpenDroneIdSystem_id_or_mac(msg_);
  }

private:
  ::px4_msgs::msg::OpenDroneIdSystem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::OpenDroneIdSystem>()
{
  return px4_msgs::msg::builder::Init_OpenDroneIdSystem_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SYSTEM__BUILDER_HPP_
