// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/LongitudinalControlConfiguration.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LONGITUDINAL_CONTROL_CONFIGURATION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__LONGITUDINAL_CONTROL_CONFIGURATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__LongitudinalControlConfiguration __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__LongitudinalControlConfiguration __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LongitudinalControlConfiguration_
{
  using Type = LongitudinalControlConfiguration_<ContainerAllocator>;

  explicit LongitudinalControlConfiguration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->pitch_min = 0.0f;
      this->pitch_max = 0.0f;
      this->throttle_min = 0.0f;
      this->throttle_max = 0.0f;
      this->climb_rate_target = 0.0f;
      this->sink_rate_target = 0.0f;
      this->speed_weight = 0.0f;
      this->enforce_low_height_condition = false;
      this->disable_underspeed_protection = false;
    }
  }

  explicit LongitudinalControlConfiguration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->pitch_min = 0.0f;
      this->pitch_max = 0.0f;
      this->throttle_min = 0.0f;
      this->throttle_max = 0.0f;
      this->climb_rate_target = 0.0f;
      this->sink_rate_target = 0.0f;
      this->speed_weight = 0.0f;
      this->enforce_low_height_condition = false;
      this->disable_underspeed_protection = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _pitch_min_type =
    float;
  _pitch_min_type pitch_min;
  using _pitch_max_type =
    float;
  _pitch_max_type pitch_max;
  using _throttle_min_type =
    float;
  _throttle_min_type throttle_min;
  using _throttle_max_type =
    float;
  _throttle_max_type throttle_max;
  using _climb_rate_target_type =
    float;
  _climb_rate_target_type climb_rate_target;
  using _sink_rate_target_type =
    float;
  _sink_rate_target_type sink_rate_target;
  using _speed_weight_type =
    float;
  _speed_weight_type speed_weight;
  using _enforce_low_height_condition_type =
    bool;
  _enforce_low_height_condition_type enforce_low_height_condition;
  using _disable_underspeed_protection_type =
    bool;
  _disable_underspeed_protection_type disable_underspeed_protection;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__pitch_min(
    const float & _arg)
  {
    this->pitch_min = _arg;
    return *this;
  }
  Type & set__pitch_max(
    const float & _arg)
  {
    this->pitch_max = _arg;
    return *this;
  }
  Type & set__throttle_min(
    const float & _arg)
  {
    this->throttle_min = _arg;
    return *this;
  }
  Type & set__throttle_max(
    const float & _arg)
  {
    this->throttle_max = _arg;
    return *this;
  }
  Type & set__climb_rate_target(
    const float & _arg)
  {
    this->climb_rate_target = _arg;
    return *this;
  }
  Type & set__sink_rate_target(
    const float & _arg)
  {
    this->sink_rate_target = _arg;
    return *this;
  }
  Type & set__speed_weight(
    const float & _arg)
  {
    this->speed_weight = _arg;
    return *this;
  }
  Type & set__enforce_low_height_condition(
    const bool & _arg)
  {
    this->enforce_low_height_condition = _arg;
    return *this;
  }
  Type & set__disable_underspeed_protection(
    const bool & _arg)
  {
    this->disable_underspeed_protection = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MESSAGE_VERSION =
    0u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::LongitudinalControlConfiguration_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::LongitudinalControlConfiguration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::LongitudinalControlConfiguration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::LongitudinalControlConfiguration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LongitudinalControlConfiguration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LongitudinalControlConfiguration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LongitudinalControlConfiguration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LongitudinalControlConfiguration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::LongitudinalControlConfiguration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::LongitudinalControlConfiguration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__LongitudinalControlConfiguration
    std::shared_ptr<px4_msgs::msg::LongitudinalControlConfiguration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__LongitudinalControlConfiguration
    std::shared_ptr<px4_msgs::msg::LongitudinalControlConfiguration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LongitudinalControlConfiguration_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->pitch_min != other.pitch_min) {
      return false;
    }
    if (this->pitch_max != other.pitch_max) {
      return false;
    }
    if (this->throttle_min != other.throttle_min) {
      return false;
    }
    if (this->throttle_max != other.throttle_max) {
      return false;
    }
    if (this->climb_rate_target != other.climb_rate_target) {
      return false;
    }
    if (this->sink_rate_target != other.sink_rate_target) {
      return false;
    }
    if (this->speed_weight != other.speed_weight) {
      return false;
    }
    if (this->enforce_low_height_condition != other.enforce_low_height_condition) {
      return false;
    }
    if (this->disable_underspeed_protection != other.disable_underspeed_protection) {
      return false;
    }
    return true;
  }
  bool operator!=(const LongitudinalControlConfiguration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LongitudinalControlConfiguration_

// alias to use template instance with default allocator
using LongitudinalControlConfiguration =
  px4_msgs::msg::LongitudinalControlConfiguration_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t LongitudinalControlConfiguration_<ContainerAllocator>::MESSAGE_VERSION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__LONGITUDINAL_CONTROL_CONFIGURATION__STRUCT_HPP_
