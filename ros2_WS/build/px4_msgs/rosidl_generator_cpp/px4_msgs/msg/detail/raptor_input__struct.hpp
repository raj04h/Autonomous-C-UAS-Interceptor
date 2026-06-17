// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RaptorInput.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RAPTOR_INPUT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__RAPTOR_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RaptorInput __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RaptorInput __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RaptorInput_
{
  using Type = RaptorInput_<ContainerAllocator>;

  explicit RaptorInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->active = false;
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->orientation.begin(), this->orientation.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->linear_velocity.begin(), this->linear_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->angular_velocity.begin(), this->angular_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->previous_action.begin(), this->previous_action.end(), 0.0f);
    }
  }

  explicit RaptorInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc),
    orientation(_alloc),
    linear_velocity(_alloc),
    angular_velocity(_alloc),
    previous_action(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->active = false;
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->orientation.begin(), this->orientation.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->linear_velocity.begin(), this->linear_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->angular_velocity.begin(), this->angular_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->previous_action.begin(), this->previous_action.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _active_type =
    bool;
  _active_type active;
  using _position_type =
    std::array<float, 3>;
  _position_type position;
  using _orientation_type =
    std::array<float, 4>;
  _orientation_type orientation;
  using _linear_velocity_type =
    std::array<float, 3>;
  _linear_velocity_type linear_velocity;
  using _angular_velocity_type =
    std::array<float, 3>;
  _angular_velocity_type angular_velocity;
  using _previous_action_type =
    std::array<float, 4>;
  _previous_action_type previous_action;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_sample(
    const uint64_t & _arg)
  {
    this->timestamp_sample = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__position(
    const std::array<float, 3> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const std::array<float, 4> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const std::array<float, 3> & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const std::array<float, 3> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__previous_action(
    const std::array<float, 4> & _arg)
  {
    this->previous_action = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MESSAGE_VERSION =
    0u;
  static constexpr uint8_t ACTION_DIM =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::RaptorInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RaptorInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RaptorInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RaptorInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RaptorInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RaptorInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RaptorInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RaptorInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RaptorInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RaptorInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RaptorInput
    std::shared_ptr<px4_msgs::msg::RaptorInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RaptorInput
    std::shared_ptr<px4_msgs::msg::RaptorInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RaptorInput_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->previous_action != other.previous_action) {
      return false;
    }
    return true;
  }
  bool operator!=(const RaptorInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RaptorInput_

// alias to use template instance with default allocator
using RaptorInput =
  px4_msgs::msg::RaptorInput_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RaptorInput_<ContainerAllocator>::MESSAGE_VERSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RaptorInput_<ContainerAllocator>::ACTION_DIM;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RAPTOR_INPUT__STRUCT_HPP_
