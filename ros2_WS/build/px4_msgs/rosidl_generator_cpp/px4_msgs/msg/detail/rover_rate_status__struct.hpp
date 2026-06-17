// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RoverRateStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_RATE_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ROVER_RATE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RoverRateStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RoverRateStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoverRateStatus_
{
  using Type = RoverRateStatus_<ContainerAllocator>;

  explicit RoverRateStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->measured_yaw_rate = 0.0f;
      this->adjusted_yaw_rate_setpoint = 0.0f;
      this->pid_yaw_rate_integral = 0.0f;
    }
  }

  explicit RoverRateStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->measured_yaw_rate = 0.0f;
      this->adjusted_yaw_rate_setpoint = 0.0f;
      this->pid_yaw_rate_integral = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _measured_yaw_rate_type =
    float;
  _measured_yaw_rate_type measured_yaw_rate;
  using _adjusted_yaw_rate_setpoint_type =
    float;
  _adjusted_yaw_rate_setpoint_type adjusted_yaw_rate_setpoint;
  using _pid_yaw_rate_integral_type =
    float;
  _pid_yaw_rate_integral_type pid_yaw_rate_integral;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__measured_yaw_rate(
    const float & _arg)
  {
    this->measured_yaw_rate = _arg;
    return *this;
  }
  Type & set__adjusted_yaw_rate_setpoint(
    const float & _arg)
  {
    this->adjusted_yaw_rate_setpoint = _arg;
    return *this;
  }
  Type & set__pid_yaw_rate_integral(
    const float & _arg)
  {
    this->pid_yaw_rate_integral = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::RoverRateStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RoverRateStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RoverRateStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RoverRateStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RoverRateStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RoverRateStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RoverRateStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RoverRateStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RoverRateStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RoverRateStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RoverRateStatus
    std::shared_ptr<px4_msgs::msg::RoverRateStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RoverRateStatus
    std::shared_ptr<px4_msgs::msg::RoverRateStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoverRateStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->measured_yaw_rate != other.measured_yaw_rate) {
      return false;
    }
    if (this->adjusted_yaw_rate_setpoint != other.adjusted_yaw_rate_setpoint) {
      return false;
    }
    if (this->pid_yaw_rate_integral != other.pid_yaw_rate_integral) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoverRateStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoverRateStatus_

// alias to use template instance with default allocator
using RoverRateStatus =
  px4_msgs::msg::RoverRateStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_RATE_STATUS__STRUCT_HPP_
