// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/LateralControlConfiguration.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LATERAL_CONTROL_CONFIGURATION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__LATERAL_CONTROL_CONFIGURATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__LateralControlConfiguration __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__LateralControlConfiguration __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LateralControlConfiguration_
{
  using Type = LateralControlConfiguration_<ContainerAllocator>;

  explicit LateralControlConfiguration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->lateral_accel_max = 0.0f;
    }
  }

  explicit LateralControlConfiguration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->lateral_accel_max = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _lateral_accel_max_type =
    float;
  _lateral_accel_max_type lateral_accel_max;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__lateral_accel_max(
    const float & _arg)
  {
    this->lateral_accel_max = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MESSAGE_VERSION =
    0u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::LateralControlConfiguration_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::LateralControlConfiguration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::LateralControlConfiguration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::LateralControlConfiguration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LateralControlConfiguration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LateralControlConfiguration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LateralControlConfiguration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LateralControlConfiguration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::LateralControlConfiguration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::LateralControlConfiguration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__LateralControlConfiguration
    std::shared_ptr<px4_msgs::msg::LateralControlConfiguration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__LateralControlConfiguration
    std::shared_ptr<px4_msgs::msg::LateralControlConfiguration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LateralControlConfiguration_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->lateral_accel_max != other.lateral_accel_max) {
      return false;
    }
    return true;
  }
  bool operator!=(const LateralControlConfiguration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LateralControlConfiguration_

// alias to use template instance with default allocator
using LateralControlConfiguration =
  px4_msgs::msg::LateralControlConfiguration_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LateralControlConfiguration_<ContainerAllocator>::MESSAGE_VERSION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__LATERAL_CONTROL_CONFIGURATION__STRUCT_HPP_
