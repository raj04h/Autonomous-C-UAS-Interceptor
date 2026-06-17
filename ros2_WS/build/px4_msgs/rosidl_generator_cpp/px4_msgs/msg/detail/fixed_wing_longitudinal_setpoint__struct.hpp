// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/FixedWingLongitudinalSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIXED_WING_LONGITUDINAL_SETPOINT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__FIXED_WING_LONGITUDINAL_SETPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__FixedWingLongitudinalSetpoint __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__FixedWingLongitudinalSetpoint __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FixedWingLongitudinalSetpoint_
{
  using Type = FixedWingLongitudinalSetpoint_<ContainerAllocator>;

  explicit FixedWingLongitudinalSetpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->altitude = 0.0f;
      this->height_rate = 0.0f;
      this->equivalent_airspeed = 0.0f;
      this->pitch_direct = 0.0f;
      this->throttle_direct = 0.0f;
    }
  }

  explicit FixedWingLongitudinalSetpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->altitude = 0.0f;
      this->height_rate = 0.0f;
      this->equivalent_airspeed = 0.0f;
      this->pitch_direct = 0.0f;
      this->throttle_direct = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _altitude_type =
    float;
  _altitude_type altitude;
  using _height_rate_type =
    float;
  _height_rate_type height_rate;
  using _equivalent_airspeed_type =
    float;
  _equivalent_airspeed_type equivalent_airspeed;
  using _pitch_direct_type =
    float;
  _pitch_direct_type pitch_direct;
  using _throttle_direct_type =
    float;
  _throttle_direct_type throttle_direct;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__altitude(
    const float & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__height_rate(
    const float & _arg)
  {
    this->height_rate = _arg;
    return *this;
  }
  Type & set__equivalent_airspeed(
    const float & _arg)
  {
    this->equivalent_airspeed = _arg;
    return *this;
  }
  Type & set__pitch_direct(
    const float & _arg)
  {
    this->pitch_direct = _arg;
    return *this;
  }
  Type & set__throttle_direct(
    const float & _arg)
  {
    this->throttle_direct = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MESSAGE_VERSION =
    0u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::FixedWingLongitudinalSetpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::FixedWingLongitudinalSetpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::FixedWingLongitudinalSetpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::FixedWingLongitudinalSetpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FixedWingLongitudinalSetpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FixedWingLongitudinalSetpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FixedWingLongitudinalSetpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FixedWingLongitudinalSetpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::FixedWingLongitudinalSetpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::FixedWingLongitudinalSetpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__FixedWingLongitudinalSetpoint
    std::shared_ptr<px4_msgs::msg::FixedWingLongitudinalSetpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__FixedWingLongitudinalSetpoint
    std::shared_ptr<px4_msgs::msg::FixedWingLongitudinalSetpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FixedWingLongitudinalSetpoint_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->height_rate != other.height_rate) {
      return false;
    }
    if (this->equivalent_airspeed != other.equivalent_airspeed) {
      return false;
    }
    if (this->pitch_direct != other.pitch_direct) {
      return false;
    }
    if (this->throttle_direct != other.throttle_direct) {
      return false;
    }
    return true;
  }
  bool operator!=(const FixedWingLongitudinalSetpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FixedWingLongitudinalSetpoint_

// alias to use template instance with default allocator
using FixedWingLongitudinalSetpoint =
  px4_msgs::msg::FixedWingLongitudinalSetpoint_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t FixedWingLongitudinalSetpoint_<ContainerAllocator>::MESSAGE_VERSION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FIXED_WING_LONGITUDINAL_SETPOINT__STRUCT_HPP_
