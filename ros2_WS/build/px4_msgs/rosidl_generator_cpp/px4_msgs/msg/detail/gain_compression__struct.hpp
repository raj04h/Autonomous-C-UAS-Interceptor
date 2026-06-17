// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/GainCompression.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GAIN_COMPRESSION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__GAIN_COMPRESSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__GainCompression __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__GainCompression __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GainCompression_
{
  using Type = GainCompression_<ContainerAllocator>;

  explicit GainCompression_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->compression_gains.begin(), this->compression_gains.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->spectral_damper_hpf.begin(), this->spectral_damper_hpf.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->spectral_damper_out.begin(), this->spectral_damper_out.end(), 0.0f);
    }
  }

  explicit GainCompression_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : compression_gains(_alloc),
    spectral_damper_hpf(_alloc),
    spectral_damper_out(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->compression_gains.begin(), this->compression_gains.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->spectral_damper_hpf.begin(), this->spectral_damper_hpf.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->spectral_damper_out.begin(), this->spectral_damper_out.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _compression_gains_type =
    std::array<float, 3>;
  _compression_gains_type compression_gains;
  using _spectral_damper_hpf_type =
    std::array<float, 3>;
  _spectral_damper_hpf_type spectral_damper_hpf;
  using _spectral_damper_out_type =
    std::array<float, 3>;
  _spectral_damper_out_type spectral_damper_out;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__compression_gains(
    const std::array<float, 3> & _arg)
  {
    this->compression_gains = _arg;
    return *this;
  }
  Type & set__spectral_damper_hpf(
    const std::array<float, 3> & _arg)
  {
    this->spectral_damper_hpf = _arg;
    return *this;
  }
  Type & set__spectral_damper_out(
    const std::array<float, 3> & _arg)
  {
    this->spectral_damper_out = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::GainCompression_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::GainCompression_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::GainCompression_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::GainCompression_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GainCompression_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GainCompression_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GainCompression_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GainCompression_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::GainCompression_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::GainCompression_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__GainCompression
    std::shared_ptr<px4_msgs::msg::GainCompression_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__GainCompression
    std::shared_ptr<px4_msgs::msg::GainCompression_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GainCompression_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->compression_gains != other.compression_gains) {
      return false;
    }
    if (this->spectral_damper_hpf != other.spectral_damper_hpf) {
      return false;
    }
    if (this->spectral_damper_out != other.spectral_damper_out) {
      return false;
    }
    return true;
  }
  bool operator!=(const GainCompression_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GainCompression_

// alias to use template instance with default allocator
using GainCompression =
  px4_msgs::msg::GainCompression_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GAIN_COMPRESSION__STRUCT_HPP_
