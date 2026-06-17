// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RoverThrottleSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_THROTTLE_SETPOINT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ROVER_THROTTLE_SETPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RoverThrottleSetpoint __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RoverThrottleSetpoint __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoverThrottleSetpoint_
{
  using Type = RoverThrottleSetpoint_<ContainerAllocator>;

  explicit RoverThrottleSetpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->throttle_body_x = 0.0f;
      this->throttle_body_y = 0.0f;
    }
  }

  explicit RoverThrottleSetpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->throttle_body_x = 0.0f;
      this->throttle_body_y = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _throttle_body_x_type =
    float;
  _throttle_body_x_type throttle_body_x;
  using _throttle_body_y_type =
    float;
  _throttle_body_y_type throttle_body_y;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__throttle_body_x(
    const float & _arg)
  {
    this->throttle_body_x = _arg;
    return *this;
  }
  Type & set__throttle_body_y(
    const float & _arg)
  {
    this->throttle_body_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::RoverThrottleSetpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RoverThrottleSetpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RoverThrottleSetpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RoverThrottleSetpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RoverThrottleSetpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RoverThrottleSetpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RoverThrottleSetpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RoverThrottleSetpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RoverThrottleSetpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RoverThrottleSetpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RoverThrottleSetpoint
    std::shared_ptr<px4_msgs::msg::RoverThrottleSetpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RoverThrottleSetpoint
    std::shared_ptr<px4_msgs::msg::RoverThrottleSetpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoverThrottleSetpoint_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->throttle_body_x != other.throttle_body_x) {
      return false;
    }
    if (this->throttle_body_y != other.throttle_body_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoverThrottleSetpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoverThrottleSetpoint_

// alias to use template instance with default allocator
using RoverThrottleSetpoint =
  px4_msgs::msg::RoverThrottleSetpoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_THROTTLE_SETPOINT__STRUCT_HPP_
