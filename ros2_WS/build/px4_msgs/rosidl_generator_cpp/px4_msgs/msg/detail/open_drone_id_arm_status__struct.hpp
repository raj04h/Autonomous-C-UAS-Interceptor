// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/OpenDroneIdArmStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_ARM_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_ARM_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__OpenDroneIdArmStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__OpenDroneIdArmStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OpenDroneIdArmStatus_
{
  using Type = OpenDroneIdArmStatus_<ContainerAllocator>;

  explicit OpenDroneIdArmStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->status = 0;
      std::fill<typename std::array<uint8_t, 50>::iterator, uint8_t>(this->error.begin(), this->error.end(), 0);
    }
  }

  explicit OpenDroneIdArmStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->status = 0;
      std::fill<typename std::array<uint8_t, 50>::iterator, uint8_t>(this->error.begin(), this->error.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _status_type =
    uint8_t;
  _status_type status;
  using _error_type =
    std::array<uint8_t, 50>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__error(
    const std::array<uint8_t, 50> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::OpenDroneIdArmStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::OpenDroneIdArmStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::OpenDroneIdArmStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::OpenDroneIdArmStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OpenDroneIdArmStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OpenDroneIdArmStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OpenDroneIdArmStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OpenDroneIdArmStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::OpenDroneIdArmStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::OpenDroneIdArmStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__OpenDroneIdArmStatus
    std::shared_ptr<px4_msgs::msg::OpenDroneIdArmStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__OpenDroneIdArmStatus
    std::shared_ptr<px4_msgs::msg::OpenDroneIdArmStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenDroneIdArmStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenDroneIdArmStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenDroneIdArmStatus_

// alias to use template instance with default allocator
using OpenDroneIdArmStatus =
  px4_msgs::msg::OpenDroneIdArmStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_ARM_STATUS__STRUCT_HPP_
