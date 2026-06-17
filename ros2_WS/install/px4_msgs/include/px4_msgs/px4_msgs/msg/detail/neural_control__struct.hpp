// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/NeuralControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NEURAL_CONTROL__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__NEURAL_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__NeuralControl __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__NeuralControl __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NeuralControl_
{
  using Type = NeuralControl_<ContainerAllocator>;

  explicit NeuralControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 15>::iterator, float>(this->observation.begin(), this->observation.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->network_output.begin(), this->network_output.end(), 0.0f);
      this->controller_time = 0l;
      this->inference_time = 0l;
    }
  }

  explicit NeuralControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : observation(_alloc),
    network_output(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 15>::iterator, float>(this->observation.begin(), this->observation.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->network_output.begin(), this->network_output.end(), 0.0f);
      this->controller_time = 0l;
      this->inference_time = 0l;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _observation_type =
    std::array<float, 15>;
  _observation_type observation;
  using _network_output_type =
    std::array<float, 4>;
  _network_output_type network_output;
  using _controller_time_type =
    int32_t;
  _controller_time_type controller_time;
  using _inference_time_type =
    int32_t;
  _inference_time_type inference_time;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__observation(
    const std::array<float, 15> & _arg)
  {
    this->observation = _arg;
    return *this;
  }
  Type & set__network_output(
    const std::array<float, 4> & _arg)
  {
    this->network_output = _arg;
    return *this;
  }
  Type & set__controller_time(
    const int32_t & _arg)
  {
    this->controller_time = _arg;
    return *this;
  }
  Type & set__inference_time(
    const int32_t & _arg)
  {
    this->inference_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::NeuralControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::NeuralControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::NeuralControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::NeuralControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::NeuralControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::NeuralControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::NeuralControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::NeuralControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::NeuralControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::NeuralControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__NeuralControl
    std::shared_ptr<px4_msgs::msg::NeuralControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__NeuralControl
    std::shared_ptr<px4_msgs::msg::NeuralControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NeuralControl_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->observation != other.observation) {
      return false;
    }
    if (this->network_output != other.network_output) {
      return false;
    }
    if (this->controller_time != other.controller_time) {
      return false;
    }
    if (this->inference_time != other.inference_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const NeuralControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NeuralControl_

// alias to use template instance with default allocator
using NeuralControl =
  px4_msgs::msg::NeuralControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__NEURAL_CONTROL__STRUCT_HPP_
