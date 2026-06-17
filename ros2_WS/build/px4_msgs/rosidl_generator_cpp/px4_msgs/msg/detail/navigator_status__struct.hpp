// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/NavigatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NAVIGATOR_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__NAVIGATOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__NavigatorStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__NavigatorStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigatorStatus_
{
  using Type = NavigatorStatus_<ContainerAllocator>;

  explicit NavigatorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->nav_state = 0;
      this->failure = 0;
    }
  }

  explicit NavigatorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->nav_state = 0;
      this->failure = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _nav_state_type =
    uint8_t;
  _nav_state_type nav_state;
  using _failure_type =
    uint8_t;
  _failure_type failure;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__nav_state(
    const uint8_t & _arg)
  {
    this->nav_state = _arg;
    return *this;
  }
  Type & set__failure(
    const uint8_t & _arg)
  {
    this->failure = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FAILURE_NONE =
    0u;
  static constexpr uint8_t FAILURE_HAGL =
    1u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::NavigatorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::NavigatorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::NavigatorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::NavigatorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::NavigatorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::NavigatorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::NavigatorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::NavigatorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::NavigatorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::NavigatorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__NavigatorStatus
    std::shared_ptr<px4_msgs::msg::NavigatorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__NavigatorStatus
    std::shared_ptr<px4_msgs::msg::NavigatorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigatorStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->nav_state != other.nav_state) {
      return false;
    }
    if (this->failure != other.failure) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigatorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigatorStatus_

// alias to use template instance with default allocator
using NavigatorStatus =
  px4_msgs::msg::NavigatorStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigatorStatus_<ContainerAllocator>::FAILURE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NavigatorStatus_<ContainerAllocator>::FAILURE_HAGL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__NAVIGATOR_STATUS__STRUCT_HPP_
