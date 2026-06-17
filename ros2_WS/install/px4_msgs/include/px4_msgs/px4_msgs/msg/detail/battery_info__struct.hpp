// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/BatteryInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__BATTERY_INFO__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__BATTERY_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__BatteryInfo __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__BatteryInfo __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryInfo_
{
  using Type = BatteryInfo_<ContainerAllocator>;

  explicit BatteryInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->id = 0;
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->serial_number.begin(), this->serial_number.end(), 0);
    }
  }

  explicit BatteryInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : serial_number(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->id = 0;
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->serial_number.begin(), this->serial_number.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _id_type =
    uint8_t;
  _id_type id;
  using _serial_number_type =
    std::array<uint8_t, 32>;
  _serial_number_type serial_number;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__serial_number(
    const std::array<uint8_t, 32> & _arg)
  {
    this->serial_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::BatteryInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::BatteryInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::BatteryInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::BatteryInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::BatteryInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::BatteryInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::BatteryInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::BatteryInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::BatteryInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::BatteryInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__BatteryInfo
    std::shared_ptr<px4_msgs::msg::BatteryInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__BatteryInfo
    std::shared_ptr<px4_msgs::msg::BatteryInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryInfo_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->serial_number != other.serial_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryInfo_

// alias to use template instance with default allocator
using BatteryInfo =
  px4_msgs::msg::BatteryInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__BATTERY_INFO__STRUCT_HPP_
