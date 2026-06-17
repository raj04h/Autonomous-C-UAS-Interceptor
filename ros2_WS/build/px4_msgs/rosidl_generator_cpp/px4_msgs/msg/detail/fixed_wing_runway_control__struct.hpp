// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/FixedWingRunwayControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIXED_WING_RUNWAY_CONTROL__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__FIXED_WING_RUNWAY_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__FixedWingRunwayControl __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__FixedWingRunwayControl __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FixedWingRunwayControl_
{
  using Type = FixedWingRunwayControl_<ContainerAllocator>;

  explicit FixedWingRunwayControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->runway_takeoff_state = 0;
      this->wheel_steering_enabled = false;
      this->wheel_steering_nudging_rate = 0.0f;
    }
  }

  explicit FixedWingRunwayControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->runway_takeoff_state = 0;
      this->wheel_steering_enabled = false;
      this->wheel_steering_nudging_rate = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _runway_takeoff_state_type =
    uint8_t;
  _runway_takeoff_state_type runway_takeoff_state;
  using _wheel_steering_enabled_type =
    bool;
  _wheel_steering_enabled_type wheel_steering_enabled;
  using _wheel_steering_nudging_rate_type =
    float;
  _wheel_steering_nudging_rate_type wheel_steering_nudging_rate;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__runway_takeoff_state(
    const uint8_t & _arg)
  {
    this->runway_takeoff_state = _arg;
    return *this;
  }
  Type & set__wheel_steering_enabled(
    const bool & _arg)
  {
    this->wheel_steering_enabled = _arg;
    return *this;
  }
  Type & set__wheel_steering_nudging_rate(
    const float & _arg)
  {
    this->wheel_steering_nudging_rate = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATE_THROTTLE_RAMP =
    0u;
  static constexpr uint8_t STATE_CLAMPED_TO_RUNWAY =
    1u;
  static constexpr uint8_t STATE_CLIMBOUT =
    2u;
  static constexpr uint8_t STATE_FLYING =
    3u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::FixedWingRunwayControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::FixedWingRunwayControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::FixedWingRunwayControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::FixedWingRunwayControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FixedWingRunwayControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FixedWingRunwayControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FixedWingRunwayControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FixedWingRunwayControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::FixedWingRunwayControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::FixedWingRunwayControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__FixedWingRunwayControl
    std::shared_ptr<px4_msgs::msg::FixedWingRunwayControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__FixedWingRunwayControl
    std::shared_ptr<px4_msgs::msg::FixedWingRunwayControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FixedWingRunwayControl_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->runway_takeoff_state != other.runway_takeoff_state) {
      return false;
    }
    if (this->wheel_steering_enabled != other.wheel_steering_enabled) {
      return false;
    }
    if (this->wheel_steering_nudging_rate != other.wheel_steering_nudging_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const FixedWingRunwayControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FixedWingRunwayControl_

// alias to use template instance with default allocator
using FixedWingRunwayControl =
  px4_msgs::msg::FixedWingRunwayControl_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedWingRunwayControl_<ContainerAllocator>::STATE_THROTTLE_RAMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedWingRunwayControl_<ContainerAllocator>::STATE_CLAMPED_TO_RUNWAY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedWingRunwayControl_<ContainerAllocator>::STATE_CLIMBOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedWingRunwayControl_<ContainerAllocator>::STATE_FLYING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FIXED_WING_RUNWAY_CONTROL__STRUCT_HPP_
