// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RoverPositionSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_POSITION_SETPOINT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ROVER_POSITION_SETPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RoverPositionSetpoint __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RoverPositionSetpoint __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoverPositionSetpoint_
{
  using Type = RoverPositionSetpoint_<ContainerAllocator>;

  explicit RoverPositionSetpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 2>::iterator, float>(this->position_ned.begin(), this->position_ned.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->start_ned.begin(), this->start_ned.end(), 0.0f);
      this->cruising_speed = 0.0f;
      this->arrival_speed = 0.0f;
      this->yaw = 0.0f;
    }
  }

  explicit RoverPositionSetpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_ned(_alloc),
    start_ned(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 2>::iterator, float>(this->position_ned.begin(), this->position_ned.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->start_ned.begin(), this->start_ned.end(), 0.0f);
      this->cruising_speed = 0.0f;
      this->arrival_speed = 0.0f;
      this->yaw = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _position_ned_type =
    std::array<float, 2>;
  _position_ned_type position_ned;
  using _start_ned_type =
    std::array<float, 2>;
  _start_ned_type start_ned;
  using _cruising_speed_type =
    float;
  _cruising_speed_type cruising_speed;
  using _arrival_speed_type =
    float;
  _arrival_speed_type arrival_speed;
  using _yaw_type =
    float;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__position_ned(
    const std::array<float, 2> & _arg)
  {
    this->position_ned = _arg;
    return *this;
  }
  Type & set__start_ned(
    const std::array<float, 2> & _arg)
  {
    this->start_ned = _arg;
    return *this;
  }
  Type & set__cruising_speed(
    const float & _arg)
  {
    this->cruising_speed = _arg;
    return *this;
  }
  Type & set__arrival_speed(
    const float & _arg)
  {
    this->arrival_speed = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::RoverPositionSetpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RoverPositionSetpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RoverPositionSetpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RoverPositionSetpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RoverPositionSetpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RoverPositionSetpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RoverPositionSetpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RoverPositionSetpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RoverPositionSetpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RoverPositionSetpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RoverPositionSetpoint
    std::shared_ptr<px4_msgs::msg::RoverPositionSetpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RoverPositionSetpoint
    std::shared_ptr<px4_msgs::msg::RoverPositionSetpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoverPositionSetpoint_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->position_ned != other.position_ned) {
      return false;
    }
    if (this->start_ned != other.start_ned) {
      return false;
    }
    if (this->cruising_speed != other.cruising_speed) {
      return false;
    }
    if (this->arrival_speed != other.arrival_speed) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoverPositionSetpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoverPositionSetpoint_

// alias to use template instance with default allocator
using RoverPositionSetpoint =
  px4_msgs::msg::RoverPositionSetpoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_POSITION_SETPOINT__STRUCT_HPP_
