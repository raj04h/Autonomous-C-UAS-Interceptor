// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/DeviceInformation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DEVICE_INFORMATION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__DEVICE_INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__DeviceInformation __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__DeviceInformation __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeviceInformation_
{
  using Type = DeviceInformation_<ContainerAllocator>;

  explicit DeviceInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_type = 0;
      std::fill<typename std::array<uint8_t, 80>::iterator, uint8_t>(this->name.begin(), this->name.end(), 0);
      this->device_id = 0ul;
      std::fill<typename std::array<uint8_t, 24>::iterator, uint8_t>(this->firmware_version.begin(), this->firmware_version.end(), 0);
      std::fill<typename std::array<uint8_t, 24>::iterator, uint8_t>(this->hardware_version.begin(), this->hardware_version.end(), 0);
      std::fill<typename std::array<uint8_t, 33>::iterator, uint8_t>(this->serial_number.begin(), this->serial_number.end(), 0);
    }
  }

  explicit DeviceInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    firmware_version(_alloc),
    hardware_version(_alloc),
    serial_number(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_type = 0;
      std::fill<typename std::array<uint8_t, 80>::iterator, uint8_t>(this->name.begin(), this->name.end(), 0);
      this->device_id = 0ul;
      std::fill<typename std::array<uint8_t, 24>::iterator, uint8_t>(this->firmware_version.begin(), this->firmware_version.end(), 0);
      std::fill<typename std::array<uint8_t, 24>::iterator, uint8_t>(this->hardware_version.begin(), this->hardware_version.end(), 0);
      std::fill<typename std::array<uint8_t, 33>::iterator, uint8_t>(this->serial_number.begin(), this->serial_number.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _device_type_type =
    uint8_t;
  _device_type_type device_type;
  using _name_type =
    std::array<uint8_t, 80>;
  _name_type name;
  using _device_id_type =
    uint32_t;
  _device_id_type device_id;
  using _firmware_version_type =
    std::array<uint8_t, 24>;
  _firmware_version_type firmware_version;
  using _hardware_version_type =
    std::array<uint8_t, 24>;
  _hardware_version_type hardware_version;
  using _serial_number_type =
    std::array<uint8_t, 33>;
  _serial_number_type serial_number;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__device_type(
    const uint8_t & _arg)
  {
    this->device_type = _arg;
    return *this;
  }
  Type & set__name(
    const std::array<uint8_t, 80> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__device_id(
    const uint32_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__firmware_version(
    const std::array<uint8_t, 24> & _arg)
  {
    this->firmware_version = _arg;
    return *this;
  }
  Type & set__hardware_version(
    const std::array<uint8_t, 24> & _arg)
  {
    this->hardware_version = _arg;
    return *this;
  }
  Type & set__serial_number(
    const std::array<uint8_t, 33> & _arg)
  {
    this->serial_number = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DEVICE_TYPE_GENERIC =
    0u;
  static constexpr uint8_t DEVICE_TYPE_AIRSPEED =
    1u;
  static constexpr uint8_t DEVICE_TYPE_ESC =
    2u;
  static constexpr uint8_t DEVICE_TYPE_SERVO =
    3u;
  static constexpr uint8_t DEVICE_TYPE_GPS =
    4u;
  static constexpr uint8_t DEVICE_TYPE_MAGNETOMETER =
    5u;
  static constexpr uint8_t DEVICE_TYPE_PARACHUTE =
    6u;
  static constexpr uint8_t DEVICE_TYPE_RANGEFINDER =
    7u;
  static constexpr uint8_t DEVICE_TYPE_WINCH =
    8u;
  static constexpr uint8_t DEVICE_TYPE_BAROMETER =
    9u;
  static constexpr uint8_t DEVICE_TYPE_OPTICAL_FLOW =
    10u;
  static constexpr uint8_t DEVICE_TYPE_ACCELEROMETER =
    11u;
  static constexpr uint8_t DEVICE_TYPE_GYROSCOPE =
    12u;
  static constexpr uint8_t DEVICE_TYPE_DIFFERENTIAL_PRESSURE =
    13u;
  static constexpr uint8_t DEVICE_TYPE_BATTERY =
    14u;
  static constexpr uint8_t DEVICE_TYPE_HYGROMETER =
    15u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::DeviceInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::DeviceInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::DeviceInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::DeviceInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DeviceInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DeviceInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DeviceInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DeviceInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::DeviceInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::DeviceInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__DeviceInformation
    std::shared_ptr<px4_msgs::msg::DeviceInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__DeviceInformation
    std::shared_ptr<px4_msgs::msg::DeviceInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeviceInformation_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->device_type != other.device_type) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->firmware_version != other.firmware_version) {
      return false;
    }
    if (this->hardware_version != other.hardware_version) {
      return false;
    }
    if (this->serial_number != other.serial_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeviceInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeviceInformation_

// alias to use template instance with default allocator
using DeviceInformation =
  px4_msgs::msg::DeviceInformation_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_GENERIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_AIRSPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_ESC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_SERVO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_GPS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_MAGNETOMETER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_PARACHUTE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_RANGEFINDER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_WINCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_BAROMETER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_OPTICAL_FLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_ACCELEROMETER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_GYROSCOPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_DIFFERENTIAL_PRESSURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_BATTERY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeviceInformation_<ContainerAllocator>::DEVICE_TYPE_HYGROMETER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__DEVICE_INFORMATION__STRUCT_HPP_
