// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/InternalCombustionEngineControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__InternalCombustionEngineControl __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__InternalCombustionEngineControl __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InternalCombustionEngineControl_
{
  using Type = InternalCombustionEngineControl_<ContainerAllocator>;

  explicit InternalCombustionEngineControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->ignition_on = false;
      this->throttle_control = 0.0f;
      this->choke_control = 0.0f;
      this->starter_engine_control = 0.0f;
      this->user_request = 0;
    }
  }

  explicit InternalCombustionEngineControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->ignition_on = false;
      this->throttle_control = 0.0f;
      this->choke_control = 0.0f;
      this->starter_engine_control = 0.0f;
      this->user_request = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _ignition_on_type =
    bool;
  _ignition_on_type ignition_on;
  using _throttle_control_type =
    float;
  _throttle_control_type throttle_control;
  using _choke_control_type =
    float;
  _choke_control_type choke_control;
  using _starter_engine_control_type =
    float;
  _starter_engine_control_type starter_engine_control;
  using _user_request_type =
    uint8_t;
  _user_request_type user_request;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__ignition_on(
    const bool & _arg)
  {
    this->ignition_on = _arg;
    return *this;
  }
  Type & set__throttle_control(
    const float & _arg)
  {
    this->throttle_control = _arg;
    return *this;
  }
  Type & set__choke_control(
    const float & _arg)
  {
    this->choke_control = _arg;
    return *this;
  }
  Type & set__starter_engine_control(
    const float & _arg)
  {
    this->starter_engine_control = _arg;
    return *this;
  }
  Type & set__user_request(
    const uint8_t & _arg)
  {
    this->user_request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::InternalCombustionEngineControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::InternalCombustionEngineControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::InternalCombustionEngineControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::InternalCombustionEngineControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::InternalCombustionEngineControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::InternalCombustionEngineControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::InternalCombustionEngineControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::InternalCombustionEngineControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::InternalCombustionEngineControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::InternalCombustionEngineControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__InternalCombustionEngineControl
    std::shared_ptr<px4_msgs::msg::InternalCombustionEngineControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__InternalCombustionEngineControl
    std::shared_ptr<px4_msgs::msg::InternalCombustionEngineControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InternalCombustionEngineControl_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->ignition_on != other.ignition_on) {
      return false;
    }
    if (this->throttle_control != other.throttle_control) {
      return false;
    }
    if (this->choke_control != other.choke_control) {
      return false;
    }
    if (this->starter_engine_control != other.starter_engine_control) {
      return false;
    }
    if (this->user_request != other.user_request) {
      return false;
    }
    return true;
  }
  bool operator!=(const InternalCombustionEngineControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InternalCombustionEngineControl_

// alias to use template instance with default allocator
using InternalCombustionEngineControl =
  px4_msgs::msg::InternalCombustionEngineControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_CONTROL__STRUCT_HPP_
