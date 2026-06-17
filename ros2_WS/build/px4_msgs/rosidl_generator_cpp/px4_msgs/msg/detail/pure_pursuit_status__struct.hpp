// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/PurePursuitStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PURE_PURSUIT_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__PURE_PURSUIT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__PurePursuitStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__PurePursuitStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PurePursuitStatus_
{
  using Type = PurePursuitStatus_<ContainerAllocator>;

  explicit PurePursuitStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->lookahead_distance = 0.0f;
      this->target_bearing = 0.0f;
      this->crosstrack_error = 0.0f;
      this->distance_to_waypoint = 0.0f;
      this->bearing_to_waypoint = 0.0f;
    }
  }

  explicit PurePursuitStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->lookahead_distance = 0.0f;
      this->target_bearing = 0.0f;
      this->crosstrack_error = 0.0f;
      this->distance_to_waypoint = 0.0f;
      this->bearing_to_waypoint = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _lookahead_distance_type =
    float;
  _lookahead_distance_type lookahead_distance;
  using _target_bearing_type =
    float;
  _target_bearing_type target_bearing;
  using _crosstrack_error_type =
    float;
  _crosstrack_error_type crosstrack_error;
  using _distance_to_waypoint_type =
    float;
  _distance_to_waypoint_type distance_to_waypoint;
  using _bearing_to_waypoint_type =
    float;
  _bearing_to_waypoint_type bearing_to_waypoint;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__lookahead_distance(
    const float & _arg)
  {
    this->lookahead_distance = _arg;
    return *this;
  }
  Type & set__target_bearing(
    const float & _arg)
  {
    this->target_bearing = _arg;
    return *this;
  }
  Type & set__crosstrack_error(
    const float & _arg)
  {
    this->crosstrack_error = _arg;
    return *this;
  }
  Type & set__distance_to_waypoint(
    const float & _arg)
  {
    this->distance_to_waypoint = _arg;
    return *this;
  }
  Type & set__bearing_to_waypoint(
    const float & _arg)
  {
    this->bearing_to_waypoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::PurePursuitStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::PurePursuitStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::PurePursuitStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::PurePursuitStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PurePursuitStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PurePursuitStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PurePursuitStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PurePursuitStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::PurePursuitStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::PurePursuitStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__PurePursuitStatus
    std::shared_ptr<px4_msgs::msg::PurePursuitStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__PurePursuitStatus
    std::shared_ptr<px4_msgs::msg::PurePursuitStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PurePursuitStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->lookahead_distance != other.lookahead_distance) {
      return false;
    }
    if (this->target_bearing != other.target_bearing) {
      return false;
    }
    if (this->crosstrack_error != other.crosstrack_error) {
      return false;
    }
    if (this->distance_to_waypoint != other.distance_to_waypoint) {
      return false;
    }
    if (this->bearing_to_waypoint != other.bearing_to_waypoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const PurePursuitStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PurePursuitStatus_

// alias to use template instance with default allocator
using PurePursuitStatus =
  px4_msgs::msg::PurePursuitStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PURE_PURSUIT_STATUS__STRUCT_HPP_
