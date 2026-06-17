// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/FiducialMarkerPosReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_POS_REPORT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_POS_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__FiducialMarkerPosReport __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__FiducialMarkerPosReport __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FiducialMarkerPosReport_
{
  using Type = FiducialMarkerPosReport_<ContainerAllocator>;

  explicit FiducialMarkerPosReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->rel_pos.begin(), this->rel_pos.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->cov_rel_pos.begin(), this->cov_rel_pos.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
    }
  }

  explicit FiducialMarkerPosReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rel_pos(_alloc),
    cov_rel_pos(_alloc),
    q(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->rel_pos.begin(), this->rel_pos.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->cov_rel_pos.begin(), this->cov_rel_pos.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _rel_pos_type =
    std::array<float, 3>;
  _rel_pos_type rel_pos;
  using _cov_rel_pos_type =
    std::array<float, 3>;
  _cov_rel_pos_type cov_rel_pos;
  using _q_type =
    std::array<float, 4>;
  _q_type q;

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
  Type & set__rel_pos(
    const std::array<float, 3> & _arg)
  {
    this->rel_pos = _arg;
    return *this;
  }
  Type & set__cov_rel_pos(
    const std::array<float, 3> & _arg)
  {
    this->cov_rel_pos = _arg;
    return *this;
  }
  Type & set__q(
    const std::array<float, 4> & _arg)
  {
    this->q = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::FiducialMarkerPosReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::FiducialMarkerPosReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::FiducialMarkerPosReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::FiducialMarkerPosReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FiducialMarkerPosReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FiducialMarkerPosReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FiducialMarkerPosReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FiducialMarkerPosReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::FiducialMarkerPosReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::FiducialMarkerPosReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__FiducialMarkerPosReport
    std::shared_ptr<px4_msgs::msg::FiducialMarkerPosReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__FiducialMarkerPosReport
    std::shared_ptr<px4_msgs::msg::FiducialMarkerPosReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FiducialMarkerPosReport_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->rel_pos != other.rel_pos) {
      return false;
    }
    if (this->cov_rel_pos != other.cov_rel_pos) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    return true;
  }
  bool operator!=(const FiducialMarkerPosReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FiducialMarkerPosReport_

// alias to use template instance with default allocator
using FiducialMarkerPosReport =
  px4_msgs::msg::FiducialMarkerPosReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_POS_REPORT__STRUCT_HPP_
