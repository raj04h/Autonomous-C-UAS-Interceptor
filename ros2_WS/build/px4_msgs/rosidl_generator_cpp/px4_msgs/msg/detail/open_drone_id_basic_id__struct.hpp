// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/OpenDroneIdBasicId.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_BASIC_ID__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_BASIC_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__OpenDroneIdBasicId __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__OpenDroneIdBasicId __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OpenDroneIdBasicId_
{
  using Type = OpenDroneIdBasicId_<ContainerAllocator>;

  explicit OpenDroneIdBasicId_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->id_or_mac.begin(), this->id_or_mac.end(), 0);
      this->id_type = 0;
      this->ua_type = 0;
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->uas_id.begin(), this->uas_id.end(), 0);
    }
  }

  explicit OpenDroneIdBasicId_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id_or_mac(_alloc),
    uas_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->id_or_mac.begin(), this->id_or_mac.end(), 0);
      this->id_type = 0;
      this->ua_type = 0;
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->uas_id.begin(), this->uas_id.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _id_or_mac_type =
    std::array<uint8_t, 20>;
  _id_or_mac_type id_or_mac;
  using _id_type_type =
    uint8_t;
  _id_type_type id_type;
  using _ua_type_type =
    uint8_t;
  _ua_type_type ua_type;
  using _uas_id_type =
    std::array<uint8_t, 20>;
  _uas_id_type uas_id;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__id_or_mac(
    const std::array<uint8_t, 20> & _arg)
  {
    this->id_or_mac = _arg;
    return *this;
  }
  Type & set__id_type(
    const uint8_t & _arg)
  {
    this->id_type = _arg;
    return *this;
  }
  Type & set__ua_type(
    const uint8_t & _arg)
  {
    this->ua_type = _arg;
    return *this;
  }
  Type & set__uas_id(
    const std::array<uint8_t, 20> & _arg)
  {
    this->uas_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::OpenDroneIdBasicId_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::OpenDroneIdBasicId_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::OpenDroneIdBasicId_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::OpenDroneIdBasicId_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OpenDroneIdBasicId_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OpenDroneIdBasicId_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OpenDroneIdBasicId_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OpenDroneIdBasicId_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::OpenDroneIdBasicId_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::OpenDroneIdBasicId_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__OpenDroneIdBasicId
    std::shared_ptr<px4_msgs::msg::OpenDroneIdBasicId_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__OpenDroneIdBasicId
    std::shared_ptr<px4_msgs::msg::OpenDroneIdBasicId_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenDroneIdBasicId_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->id_or_mac != other.id_or_mac) {
      return false;
    }
    if (this->id_type != other.id_type) {
      return false;
    }
    if (this->ua_type != other.ua_type) {
      return false;
    }
    if (this->uas_id != other.uas_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenDroneIdBasicId_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenDroneIdBasicId_

// alias to use template instance with default allocator
using OpenDroneIdBasicId =
  px4_msgs::msg::OpenDroneIdBasicId_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_BASIC_ID__STRUCT_HPP_
