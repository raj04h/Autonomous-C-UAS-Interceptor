// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/FiducialMarkerYawReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_YAW_REPORT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_YAW_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__FiducialMarkerYawReport __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__FiducialMarkerYawReport __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FiducialMarkerYawReport_
{
  using Type = FiducialMarkerYawReport_<ContainerAllocator>;

  explicit FiducialMarkerYawReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->yaw_ned = 0.0f;
      this->yaw_var_ned = 0.0f;
    }
  }

  explicit FiducialMarkerYawReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->yaw_ned = 0.0f;
      this->yaw_var_ned = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _yaw_ned_type =
    float;
  _yaw_ned_type yaw_ned;
  using _yaw_var_ned_type =
    float;
  _yaw_var_ned_type yaw_var_ned;

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
  Type & set__yaw_ned(
    const float & _arg)
  {
    this->yaw_ned = _arg;
    return *this;
  }
  Type & set__yaw_var_ned(
    const float & _arg)
  {
    this->yaw_var_ned = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::FiducialMarkerYawReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::FiducialMarkerYawReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::FiducialMarkerYawReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::FiducialMarkerYawReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FiducialMarkerYawReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FiducialMarkerYawReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FiducialMarkerYawReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FiducialMarkerYawReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::FiducialMarkerYawReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::FiducialMarkerYawReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__FiducialMarkerYawReport
    std::shared_ptr<px4_msgs::msg::FiducialMarkerYawReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__FiducialMarkerYawReport
    std::shared_ptr<px4_msgs::msg::FiducialMarkerYawReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FiducialMarkerYawReport_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->yaw_ned != other.yaw_ned) {
      return false;
    }
    if (this->yaw_var_ned != other.yaw_var_ned) {
      return false;
    }
    return true;
  }
  bool operator!=(const FiducialMarkerYawReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FiducialMarkerYawReport_

// alias to use template instance with default allocator
using FiducialMarkerYawReport =
  px4_msgs::msg::FiducialMarkerYawReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FIDUCIAL_MARKER_YAW_REPORT__STRUCT_HPP_
