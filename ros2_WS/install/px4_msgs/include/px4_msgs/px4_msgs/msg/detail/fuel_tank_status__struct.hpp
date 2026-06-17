// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/FuelTankStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FUEL_TANK_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__FUEL_TANK_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__FuelTankStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__FuelTankStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FuelTankStatus_
{
  using Type = FuelTankStatus_<ContainerAllocator>;

  explicit FuelTankStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->maximum_fuel_capacity = 0.0f;
      this->consumed_fuel = 0.0f;
      this->fuel_consumption_rate = 0.0f;
      this->percent_remaining = 0;
      this->remaining_fuel = 0.0f;
      this->fuel_tank_id = 0;
      this->fuel_type = 0ul;
      this->temperature = 0.0f;
    }
  }

  explicit FuelTankStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->maximum_fuel_capacity = 0.0f;
      this->consumed_fuel = 0.0f;
      this->fuel_consumption_rate = 0.0f;
      this->percent_remaining = 0;
      this->remaining_fuel = 0.0f;
      this->fuel_tank_id = 0;
      this->fuel_type = 0ul;
      this->temperature = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _maximum_fuel_capacity_type =
    float;
  _maximum_fuel_capacity_type maximum_fuel_capacity;
  using _consumed_fuel_type =
    float;
  _consumed_fuel_type consumed_fuel;
  using _fuel_consumption_rate_type =
    float;
  _fuel_consumption_rate_type fuel_consumption_rate;
  using _percent_remaining_type =
    uint8_t;
  _percent_remaining_type percent_remaining;
  using _remaining_fuel_type =
    float;
  _remaining_fuel_type remaining_fuel;
  using _fuel_tank_id_type =
    uint8_t;
  _fuel_tank_id_type fuel_tank_id;
  using _fuel_type_type =
    uint32_t;
  _fuel_type_type fuel_type;
  using _temperature_type =
    float;
  _temperature_type temperature;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__maximum_fuel_capacity(
    const float & _arg)
  {
    this->maximum_fuel_capacity = _arg;
    return *this;
  }
  Type & set__consumed_fuel(
    const float & _arg)
  {
    this->consumed_fuel = _arg;
    return *this;
  }
  Type & set__fuel_consumption_rate(
    const float & _arg)
  {
    this->fuel_consumption_rate = _arg;
    return *this;
  }
  Type & set__percent_remaining(
    const uint8_t & _arg)
  {
    this->percent_remaining = _arg;
    return *this;
  }
  Type & set__remaining_fuel(
    const float & _arg)
  {
    this->remaining_fuel = _arg;
    return *this;
  }
  Type & set__fuel_tank_id(
    const uint8_t & _arg)
  {
    this->fuel_tank_id = _arg;
    return *this;
  }
  Type & set__fuel_type(
    const uint32_t & _arg)
  {
    this->fuel_type = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MAV_FUEL_TYPE_UNKNOWN =
    0u;
  static constexpr uint8_t MAV_FUEL_TYPE_LIQUID =
    1u;
  static constexpr uint8_t MAV_FUEL_TYPE_GAS =
    2u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::FuelTankStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::FuelTankStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::FuelTankStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::FuelTankStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FuelTankStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FuelTankStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FuelTankStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FuelTankStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::FuelTankStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::FuelTankStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__FuelTankStatus
    std::shared_ptr<px4_msgs::msg::FuelTankStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__FuelTankStatus
    std::shared_ptr<px4_msgs::msg::FuelTankStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FuelTankStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->maximum_fuel_capacity != other.maximum_fuel_capacity) {
      return false;
    }
    if (this->consumed_fuel != other.consumed_fuel) {
      return false;
    }
    if (this->fuel_consumption_rate != other.fuel_consumption_rate) {
      return false;
    }
    if (this->percent_remaining != other.percent_remaining) {
      return false;
    }
    if (this->remaining_fuel != other.remaining_fuel) {
      return false;
    }
    if (this->fuel_tank_id != other.fuel_tank_id) {
      return false;
    }
    if (this->fuel_type != other.fuel_type) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const FuelTankStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FuelTankStatus_

// alias to use template instance with default allocator
using FuelTankStatus =
  px4_msgs::msg::FuelTankStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FuelTankStatus_<ContainerAllocator>::MAV_FUEL_TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FuelTankStatus_<ContainerAllocator>::MAV_FUEL_TYPE_LIQUID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FuelTankStatus_<ContainerAllocator>::MAV_FUEL_TYPE_GAS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FUEL_TANK_STATUS__STRUCT_HPP_
