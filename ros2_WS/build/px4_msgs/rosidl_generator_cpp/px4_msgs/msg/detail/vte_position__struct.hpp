// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VtePosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_POSITION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VTE_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VtePosition __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VtePosition __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VtePosition_
{
  using Type = VtePosition_<ContainerAllocator>;

  explicit VtePosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->rel_pos_valid = false;
      this->rel_vel_valid = false;
      std::fill<typename std::array<float, 3>::iterator, float>(this->rel_pos.begin(), this->rel_pos.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->vel_uav.begin(), this->vel_uav.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->vel_target.begin(), this->vel_target.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->bias.begin(), this->bias.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->acc_target.begin(), this->acc_target.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->cov_rel_pos.begin(), this->cov_rel_pos.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->cov_vel_uav.begin(), this->cov_vel_uav.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->cov_bias.begin(), this->cov_bias.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->cov_vel_target.begin(), this->cov_vel_target.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->cov_acc_target.begin(), this->cov_acc_target.end(), 0.0f);
    }
  }

  explicit VtePosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rel_pos(_alloc),
    vel_uav(_alloc),
    vel_target(_alloc),
    bias(_alloc),
    acc_target(_alloc),
    cov_rel_pos(_alloc),
    cov_vel_uav(_alloc),
    cov_bias(_alloc),
    cov_vel_target(_alloc),
    cov_acc_target(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->rel_pos_valid = false;
      this->rel_vel_valid = false;
      std::fill<typename std::array<float, 3>::iterator, float>(this->rel_pos.begin(), this->rel_pos.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->vel_uav.begin(), this->vel_uav.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->vel_target.begin(), this->vel_target.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->bias.begin(), this->bias.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->acc_target.begin(), this->acc_target.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->cov_rel_pos.begin(), this->cov_rel_pos.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->cov_vel_uav.begin(), this->cov_vel_uav.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->cov_bias.begin(), this->cov_bias.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->cov_vel_target.begin(), this->cov_vel_target.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->cov_acc_target.begin(), this->cov_acc_target.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _rel_pos_valid_type =
    bool;
  _rel_pos_valid_type rel_pos_valid;
  using _rel_vel_valid_type =
    bool;
  _rel_vel_valid_type rel_vel_valid;
  using _rel_pos_type =
    std::array<float, 3>;
  _rel_pos_type rel_pos;
  using _vel_uav_type =
    std::array<float, 3>;
  _vel_uav_type vel_uav;
  using _vel_target_type =
    std::array<float, 3>;
  _vel_target_type vel_target;
  using _bias_type =
    std::array<float, 3>;
  _bias_type bias;
  using _acc_target_type =
    std::array<float, 3>;
  _acc_target_type acc_target;
  using _cov_rel_pos_type =
    std::array<float, 3>;
  _cov_rel_pos_type cov_rel_pos;
  using _cov_vel_uav_type =
    std::array<float, 3>;
  _cov_vel_uav_type cov_vel_uav;
  using _cov_bias_type =
    std::array<float, 3>;
  _cov_bias_type cov_bias;
  using _cov_vel_target_type =
    std::array<float, 3>;
  _cov_vel_target_type cov_vel_target;
  using _cov_acc_target_type =
    std::array<float, 3>;
  _cov_acc_target_type cov_acc_target;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__rel_pos_valid(
    const bool & _arg)
  {
    this->rel_pos_valid = _arg;
    return *this;
  }
  Type & set__rel_vel_valid(
    const bool & _arg)
  {
    this->rel_vel_valid = _arg;
    return *this;
  }
  Type & set__rel_pos(
    const std::array<float, 3> & _arg)
  {
    this->rel_pos = _arg;
    return *this;
  }
  Type & set__vel_uav(
    const std::array<float, 3> & _arg)
  {
    this->vel_uav = _arg;
    return *this;
  }
  Type & set__vel_target(
    const std::array<float, 3> & _arg)
  {
    this->vel_target = _arg;
    return *this;
  }
  Type & set__bias(
    const std::array<float, 3> & _arg)
  {
    this->bias = _arg;
    return *this;
  }
  Type & set__acc_target(
    const std::array<float, 3> & _arg)
  {
    this->acc_target = _arg;
    return *this;
  }
  Type & set__cov_rel_pos(
    const std::array<float, 3> & _arg)
  {
    this->cov_rel_pos = _arg;
    return *this;
  }
  Type & set__cov_vel_uav(
    const std::array<float, 3> & _arg)
  {
    this->cov_vel_uav = _arg;
    return *this;
  }
  Type & set__cov_bias(
    const std::array<float, 3> & _arg)
  {
    this->cov_bias = _arg;
    return *this;
  }
  Type & set__cov_vel_target(
    const std::array<float, 3> & _arg)
  {
    this->cov_vel_target = _arg;
    return *this;
  }
  Type & set__cov_acc_target(
    const std::array<float, 3> & _arg)
  {
    this->cov_acc_target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VtePosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VtePosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VtePosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VtePosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VtePosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VtePosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VtePosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VtePosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VtePosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VtePosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VtePosition
    std::shared_ptr<px4_msgs::msg::VtePosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VtePosition
    std::shared_ptr<px4_msgs::msg::VtePosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VtePosition_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->rel_pos_valid != other.rel_pos_valid) {
      return false;
    }
    if (this->rel_vel_valid != other.rel_vel_valid) {
      return false;
    }
    if (this->rel_pos != other.rel_pos) {
      return false;
    }
    if (this->vel_uav != other.vel_uav) {
      return false;
    }
    if (this->vel_target != other.vel_target) {
      return false;
    }
    if (this->bias != other.bias) {
      return false;
    }
    if (this->acc_target != other.acc_target) {
      return false;
    }
    if (this->cov_rel_pos != other.cov_rel_pos) {
      return false;
    }
    if (this->cov_vel_uav != other.cov_vel_uav) {
      return false;
    }
    if (this->cov_bias != other.cov_bias) {
      return false;
    }
    if (this->cov_vel_target != other.cov_vel_target) {
      return false;
    }
    if (this->cov_acc_target != other.cov_acc_target) {
      return false;
    }
    return true;
  }
  bool operator!=(const VtePosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VtePosition_

// alias to use template instance with default allocator
using VtePosition =
  px4_msgs::msg::VtePosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VTE_POSITION__STRUCT_HPP_
