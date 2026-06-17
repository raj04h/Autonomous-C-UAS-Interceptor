// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/TargetGnss.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TARGET_GNSS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__TARGET_GNSS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__TargetGnss __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__TargetGnss __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetGnss_
{
  using Type = TargetGnss_<ContainerAllocator>;

  explicit TargetGnss_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->latitude_deg = 0.0;
      this->longitude_deg = 0.0;
      this->altitude_msl_m = 0.0f;
      this->eph = 0.0f;
      this->epv = 0.0f;
      this->abs_pos_updated = false;
      this->vel_n_m_s = 0.0f;
      this->vel_e_m_s = 0.0f;
      this->vel_d_m_s = 0.0f;
      this->s_acc_m_s = 0.0f;
      this->vel_ned_updated = false;
    }
  }

  explicit TargetGnss_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->latitude_deg = 0.0;
      this->longitude_deg = 0.0;
      this->altitude_msl_m = 0.0f;
      this->eph = 0.0f;
      this->epv = 0.0f;
      this->abs_pos_updated = false;
      this->vel_n_m_s = 0.0f;
      this->vel_e_m_s = 0.0f;
      this->vel_d_m_s = 0.0f;
      this->s_acc_m_s = 0.0f;
      this->vel_ned_updated = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _latitude_deg_type =
    double;
  _latitude_deg_type latitude_deg;
  using _longitude_deg_type =
    double;
  _longitude_deg_type longitude_deg;
  using _altitude_msl_m_type =
    float;
  _altitude_msl_m_type altitude_msl_m;
  using _eph_type =
    float;
  _eph_type eph;
  using _epv_type =
    float;
  _epv_type epv;
  using _abs_pos_updated_type =
    bool;
  _abs_pos_updated_type abs_pos_updated;
  using _vel_n_m_s_type =
    float;
  _vel_n_m_s_type vel_n_m_s;
  using _vel_e_m_s_type =
    float;
  _vel_e_m_s_type vel_e_m_s;
  using _vel_d_m_s_type =
    float;
  _vel_d_m_s_type vel_d_m_s;
  using _s_acc_m_s_type =
    float;
  _s_acc_m_s_type s_acc_m_s;
  using _vel_ned_updated_type =
    bool;
  _vel_ned_updated_type vel_ned_updated;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_sample(
    const uint64_t & _arg)
  {
    this->timestamp_sample = _arg;
    return *this;
  }
  Type & set__latitude_deg(
    const double & _arg)
  {
    this->latitude_deg = _arg;
    return *this;
  }
  Type & set__longitude_deg(
    const double & _arg)
  {
    this->longitude_deg = _arg;
    return *this;
  }
  Type & set__altitude_msl_m(
    const float & _arg)
  {
    this->altitude_msl_m = _arg;
    return *this;
  }
  Type & set__eph(
    const float & _arg)
  {
    this->eph = _arg;
    return *this;
  }
  Type & set__epv(
    const float & _arg)
  {
    this->epv = _arg;
    return *this;
  }
  Type & set__abs_pos_updated(
    const bool & _arg)
  {
    this->abs_pos_updated = _arg;
    return *this;
  }
  Type & set__vel_n_m_s(
    const float & _arg)
  {
    this->vel_n_m_s = _arg;
    return *this;
  }
  Type & set__vel_e_m_s(
    const float & _arg)
  {
    this->vel_e_m_s = _arg;
    return *this;
  }
  Type & set__vel_d_m_s(
    const float & _arg)
  {
    this->vel_d_m_s = _arg;
    return *this;
  }
  Type & set__s_acc_m_s(
    const float & _arg)
  {
    this->s_acc_m_s = _arg;
    return *this;
  }
  Type & set__vel_ned_updated(
    const bool & _arg)
  {
    this->vel_ned_updated = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::TargetGnss_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::TargetGnss_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::TargetGnss_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::TargetGnss_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TargetGnss_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TargetGnss_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TargetGnss_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TargetGnss_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::TargetGnss_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::TargetGnss_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__TargetGnss
    std::shared_ptr<px4_msgs::msg::TargetGnss_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__TargetGnss
    std::shared_ptr<px4_msgs::msg::TargetGnss_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetGnss_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->latitude_deg != other.latitude_deg) {
      return false;
    }
    if (this->longitude_deg != other.longitude_deg) {
      return false;
    }
    if (this->altitude_msl_m != other.altitude_msl_m) {
      return false;
    }
    if (this->eph != other.eph) {
      return false;
    }
    if (this->epv != other.epv) {
      return false;
    }
    if (this->abs_pos_updated != other.abs_pos_updated) {
      return false;
    }
    if (this->vel_n_m_s != other.vel_n_m_s) {
      return false;
    }
    if (this->vel_e_m_s != other.vel_e_m_s) {
      return false;
    }
    if (this->vel_d_m_s != other.vel_d_m_s) {
      return false;
    }
    if (this->s_acc_m_s != other.s_acc_m_s) {
      return false;
    }
    if (this->vel_ned_updated != other.vel_ned_updated) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetGnss_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetGnss_

// alias to use template instance with default allocator
using TargetGnss =
  px4_msgs::msg::TargetGnss_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TARGET_GNSS__STRUCT_HPP_
