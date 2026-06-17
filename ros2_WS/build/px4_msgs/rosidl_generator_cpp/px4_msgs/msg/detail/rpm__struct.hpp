// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/Rpm.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RPM__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__RPM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__Rpm __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__Rpm __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Rpm_
{
  using Type = Rpm_<ContainerAllocator>;

  explicit Rpm_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->rpm_estimate = 0.0f;
      this->rpm_raw = 0.0f;
    }
  }

  explicit Rpm_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->rpm_estimate = 0.0f;
      this->rpm_raw = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _rpm_estimate_type =
    float;
  _rpm_estimate_type rpm_estimate;
  using _rpm_raw_type =
    float;
  _rpm_raw_type rpm_raw;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__rpm_estimate(
    const float & _arg)
  {
    this->rpm_estimate = _arg;
    return *this;
  }
  Type & set__rpm_raw(
    const float & _arg)
  {
    this->rpm_raw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::Rpm_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::Rpm_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::Rpm_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::Rpm_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Rpm_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Rpm_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Rpm_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Rpm_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::Rpm_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::Rpm_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__Rpm
    std::shared_ptr<px4_msgs::msg::Rpm_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__Rpm
    std::shared_ptr<px4_msgs::msg::Rpm_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rpm_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->rpm_estimate != other.rpm_estimate) {
      return false;
    }
    if (this->rpm_raw != other.rpm_raw) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rpm_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rpm_

// alias to use template instance with default allocator
using Rpm =
  px4_msgs::msg::Rpm_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RPM__STRUCT_HPP_
