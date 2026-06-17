// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EscEepromWrite.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESC_EEPROM_WRITE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ESC_EEPROM_WRITE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__EscEepromWrite __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EscEepromWrite __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EscEepromWrite_
{
  using Type = EscEepromWrite_<ContainerAllocator>;

  explicit EscEepromWrite_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->firmware = 0;
      this->index = 0;
      this->length = 0;
      std::fill<typename std::array<uint8_t, 48>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      std::fill<typename std::array<uint32_t, 2>::iterator, uint32_t>(this->write_mask.begin(), this->write_mask.end(), 0ul);
    }
  }

  explicit EscEepromWrite_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc),
    write_mask(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->firmware = 0;
      this->index = 0;
      this->length = 0;
      std::fill<typename std::array<uint8_t, 48>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      std::fill<typename std::array<uint32_t, 2>::iterator, uint32_t>(this->write_mask.begin(), this->write_mask.end(), 0ul);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _firmware_type =
    uint8_t;
  _firmware_type firmware;
  using _index_type =
    uint8_t;
  _index_type index;
  using _length_type =
    uint16_t;
  _length_type length;
  using _data_type =
    std::array<uint8_t, 48>;
  _data_type data;
  using _write_mask_type =
    std::array<uint32_t, 2>;
  _write_mask_type write_mask;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__firmware(
    const uint8_t & _arg)
  {
    this->firmware = _arg;
    return *this;
  }
  Type & set__index(
    const uint8_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__length(
    const uint16_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 48> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__write_mask(
    const std::array<uint32_t, 2> & _arg)
  {
    this->write_mask = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    8u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::EscEepromWrite_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EscEepromWrite_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EscEepromWrite_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EscEepromWrite_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EscEepromWrite_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EscEepromWrite_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EscEepromWrite_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EscEepromWrite_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EscEepromWrite_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EscEepromWrite_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EscEepromWrite
    std::shared_ptr<px4_msgs::msg::EscEepromWrite_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EscEepromWrite
    std::shared_ptr<px4_msgs::msg::EscEepromWrite_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EscEepromWrite_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->firmware != other.firmware) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->write_mask != other.write_mask) {
      return false;
    }
    return true;
  }
  bool operator!=(const EscEepromWrite_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EscEepromWrite_

// alias to use template instance with default allocator
using EscEepromWrite =
  px4_msgs::msg::EscEepromWrite_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscEepromWrite_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESC_EEPROM_WRITE__STRUCT_HPP_
