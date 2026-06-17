// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/OpenDroneIdSelfId.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SELF_ID__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SELF_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__OpenDroneIdSelfId __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__OpenDroneIdSelfId __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OpenDroneIdSelfId_
{
  using Type = OpenDroneIdSelfId_<ContainerAllocator>;

  explicit OpenDroneIdSelfId_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->id_or_mac.begin(), this->id_or_mac.end(), 0);
      this->description_type = 0;
      std::fill<typename std::array<uint8_t, 23>::iterator, uint8_t>(this->description.begin(), this->description.end(), 0);
    }
  }

  explicit OpenDroneIdSelfId_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id_or_mac(_alloc),
    description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<uint8_t, 20>::iterator, uint8_t>(this->id_or_mac.begin(), this->id_or_mac.end(), 0);
      this->description_type = 0;
      std::fill<typename std::array<uint8_t, 23>::iterator, uint8_t>(this->description.begin(), this->description.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _id_or_mac_type =
    std::array<uint8_t, 20>;
  _id_or_mac_type id_or_mac;
  using _description_type_type =
    uint8_t;
  _description_type_type description_type;
  using _description_type =
    std::array<uint8_t, 23>;
  _description_type description;

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
  Type & set__description_type(
    const uint8_t & _arg)
  {
    this->description_type = _arg;
    return *this;
  }
  Type & set__description(
    const std::array<uint8_t, 23> & _arg)
  {
    this->description = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::OpenDroneIdSelfId_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::OpenDroneIdSelfId_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::OpenDroneIdSelfId_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::OpenDroneIdSelfId_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OpenDroneIdSelfId_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OpenDroneIdSelfId_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OpenDroneIdSelfId_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OpenDroneIdSelfId_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::OpenDroneIdSelfId_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::OpenDroneIdSelfId_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__OpenDroneIdSelfId
    std::shared_ptr<px4_msgs::msg::OpenDroneIdSelfId_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__OpenDroneIdSelfId
    std::shared_ptr<px4_msgs::msg::OpenDroneIdSelfId_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenDroneIdSelfId_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->id_or_mac != other.id_or_mac) {
      return false;
    }
    if (this->description_type != other.description_type) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenDroneIdSelfId_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenDroneIdSelfId_

// alias to use template instance with default allocator
using OpenDroneIdSelfId =
  px4_msgs::msg::OpenDroneIdSelfId_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SELF_ID__STRUCT_HPP_
