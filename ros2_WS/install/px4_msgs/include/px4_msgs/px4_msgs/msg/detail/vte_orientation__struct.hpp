// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VteOrientation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_ORIENTATION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VTE_ORIENTATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VteOrientation __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VteOrientation __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VteOrientation_
{
  using Type = VteOrientation_<ContainerAllocator>;

  explicit VteOrientation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->orientation_valid = false;
      this->yaw = 0.0f;
      this->cov_yaw = 0.0f;
      this->yaw_rate = 0.0f;
      this->cov_yaw_rate = 0.0f;
    }
  }

  explicit VteOrientation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->orientation_valid = false;
      this->yaw = 0.0f;
      this->cov_yaw = 0.0f;
      this->yaw_rate = 0.0f;
      this->cov_yaw_rate = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _orientation_valid_type =
    bool;
  _orientation_valid_type orientation_valid;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _cov_yaw_type =
    float;
  _cov_yaw_type cov_yaw;
  using _yaw_rate_type =
    float;
  _yaw_rate_type yaw_rate;
  using _cov_yaw_rate_type =
    float;
  _cov_yaw_rate_type cov_yaw_rate;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__orientation_valid(
    const bool & _arg)
  {
    this->orientation_valid = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__cov_yaw(
    const float & _arg)
  {
    this->cov_yaw = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const float & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__cov_yaw_rate(
    const float & _arg)
  {
    this->cov_yaw_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VteOrientation_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VteOrientation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VteOrientation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VteOrientation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VteOrientation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VteOrientation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VteOrientation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VteOrientation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VteOrientation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VteOrientation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VteOrientation
    std::shared_ptr<px4_msgs::msg::VteOrientation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VteOrientation
    std::shared_ptr<px4_msgs::msg::VteOrientation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VteOrientation_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->orientation_valid != other.orientation_valid) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->cov_yaw != other.cov_yaw) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->cov_yaw_rate != other.cov_yaw_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const VteOrientation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VteOrientation_

// alias to use template instance with default allocator
using VteOrientation =
  px4_msgs::msg::VteOrientation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VTE_ORIENTATION__STRUCT_HPP_
