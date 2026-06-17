// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/PrecLandStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PREC_LAND_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__PREC_LAND_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__PrecLandStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__PrecLandStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PrecLandStatus_
{
  using Type = PrecLandStatus_<ContainerAllocator>;

  explicit PrecLandStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->state = 0;
    }
  }

  explicit PrecLandStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->state = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PREC_LAND_STATE_STOPPED =
    0u;
  static constexpr uint8_t PREC_LAND_STATE_START =
    1u;
  static constexpr uint8_t PREC_LAND_STATE_HORIZONTAL =
    2u;
  static constexpr uint8_t PREC_LAND_STATE_DESCEND =
    3u;
  static constexpr uint8_t PREC_LAND_STATE_FINAL =
    4u;
  static constexpr uint8_t PREC_LAND_STATE_SEARCH =
    5u;
  static constexpr uint8_t PREC_LAND_STATE_FALLBACK =
    6u;
  static constexpr uint8_t PREC_LAND_STATE_DONE =
    7u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::PrecLandStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::PrecLandStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::PrecLandStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::PrecLandStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PrecLandStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PrecLandStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PrecLandStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PrecLandStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::PrecLandStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::PrecLandStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__PrecLandStatus
    std::shared_ptr<px4_msgs::msg::PrecLandStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__PrecLandStatus
    std::shared_ptr<px4_msgs::msg::PrecLandStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrecLandStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrecLandStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrecLandStatus_

// alias to use template instance with default allocator
using PrecLandStatus =
  px4_msgs::msg::PrecLandStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PrecLandStatus_<ContainerAllocator>::PREC_LAND_STATE_STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PrecLandStatus_<ContainerAllocator>::PREC_LAND_STATE_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PrecLandStatus_<ContainerAllocator>::PREC_LAND_STATE_HORIZONTAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PrecLandStatus_<ContainerAllocator>::PREC_LAND_STATE_DESCEND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PrecLandStatus_<ContainerAllocator>::PREC_LAND_STATE_FINAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PrecLandStatus_<ContainerAllocator>::PREC_LAND_STATE_SEARCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PrecLandStatus_<ContainerAllocator>::PREC_LAND_STATE_FALLBACK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PrecLandStatus_<ContainerAllocator>::PREC_LAND_STATE_DONE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PREC_LAND_STATUS__STRUCT_HPP_
