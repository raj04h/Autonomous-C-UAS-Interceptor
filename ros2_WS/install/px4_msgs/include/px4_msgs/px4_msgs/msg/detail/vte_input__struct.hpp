// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VteInput.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_INPUT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VTE_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VteInput __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VteInput __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VteInput_
{
  using Type = VteInput_<ContainerAllocator>;

  explicit VteInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->acc_xyz.begin(), this->acc_xyz.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->q_att.begin(), this->q_att.end(), 0.0f);
      this->acc_sample_count = 0ul;
    }
  }

  explicit VteInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : acc_xyz(_alloc),
    q_att(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->acc_xyz.begin(), this->acc_xyz.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->q_att.begin(), this->q_att.end(), 0.0f);
      this->acc_sample_count = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _acc_xyz_type =
    std::array<float, 3>;
  _acc_xyz_type acc_xyz;
  using _q_att_type =
    std::array<float, 4>;
  _q_att_type q_att;
  using _acc_sample_count_type =
    uint32_t;
  _acc_sample_count_type acc_sample_count;

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
  Type & set__acc_xyz(
    const std::array<float, 3> & _arg)
  {
    this->acc_xyz = _arg;
    return *this;
  }
  Type & set__q_att(
    const std::array<float, 4> & _arg)
  {
    this->q_att = _arg;
    return *this;
  }
  Type & set__acc_sample_count(
    const uint32_t & _arg)
  {
    this->acc_sample_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VteInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VteInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VteInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VteInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VteInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VteInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VteInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VteInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VteInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VteInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VteInput
    std::shared_ptr<px4_msgs::msg::VteInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VteInput
    std::shared_ptr<px4_msgs::msg::VteInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VteInput_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->acc_xyz != other.acc_xyz) {
      return false;
    }
    if (this->q_att != other.q_att) {
      return false;
    }
    if (this->acc_sample_count != other.acc_sample_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const VteInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VteInput_

// alias to use template instance with default allocator
using VteInput =
  px4_msgs::msg::VteInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VTE_INPUT__STRUCT_HPP_
