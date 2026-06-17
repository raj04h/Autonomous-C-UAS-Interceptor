// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/FixedWingLateralGuidanceStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_GUIDANCE_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_GUIDANCE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__FixedWingLateralGuidanceStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__FixedWingLateralGuidanceStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FixedWingLateralGuidanceStatus_
{
  using Type = FixedWingLateralGuidanceStatus_<ContainerAllocator>;

  explicit FixedWingLateralGuidanceStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->course_setpoint = 0.0f;
      this->lateral_acceleration_ff = 0.0f;
      this->bearing_feas = 0.0f;
      this->bearing_feas_on_track = 0.0f;
      this->signed_track_error = 0.0f;
      this->track_error_bound = 0.0f;
      this->switch_distance = 0.0f;
      this->adapted_period = 0.0f;
      this->wind_est_valid = 0;
    }
  }

  explicit FixedWingLateralGuidanceStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->course_setpoint = 0.0f;
      this->lateral_acceleration_ff = 0.0f;
      this->bearing_feas = 0.0f;
      this->bearing_feas_on_track = 0.0f;
      this->signed_track_error = 0.0f;
      this->track_error_bound = 0.0f;
      this->switch_distance = 0.0f;
      this->adapted_period = 0.0f;
      this->wind_est_valid = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _course_setpoint_type =
    float;
  _course_setpoint_type course_setpoint;
  using _lateral_acceleration_ff_type =
    float;
  _lateral_acceleration_ff_type lateral_acceleration_ff;
  using _bearing_feas_type =
    float;
  _bearing_feas_type bearing_feas;
  using _bearing_feas_on_track_type =
    float;
  _bearing_feas_on_track_type bearing_feas_on_track;
  using _signed_track_error_type =
    float;
  _signed_track_error_type signed_track_error;
  using _track_error_bound_type =
    float;
  _track_error_bound_type track_error_bound;
  using _switch_distance_type =
    float;
  _switch_distance_type switch_distance;
  using _adapted_period_type =
    float;
  _adapted_period_type adapted_period;
  using _wind_est_valid_type =
    uint8_t;
  _wind_est_valid_type wind_est_valid;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__course_setpoint(
    const float & _arg)
  {
    this->course_setpoint = _arg;
    return *this;
  }
  Type & set__lateral_acceleration_ff(
    const float & _arg)
  {
    this->lateral_acceleration_ff = _arg;
    return *this;
  }
  Type & set__bearing_feas(
    const float & _arg)
  {
    this->bearing_feas = _arg;
    return *this;
  }
  Type & set__bearing_feas_on_track(
    const float & _arg)
  {
    this->bearing_feas_on_track = _arg;
    return *this;
  }
  Type & set__signed_track_error(
    const float & _arg)
  {
    this->signed_track_error = _arg;
    return *this;
  }
  Type & set__track_error_bound(
    const float & _arg)
  {
    this->track_error_bound = _arg;
    return *this;
  }
  Type & set__switch_distance(
    const float & _arg)
  {
    this->switch_distance = _arg;
    return *this;
  }
  Type & set__adapted_period(
    const float & _arg)
  {
    this->adapted_period = _arg;
    return *this;
  }
  Type & set__wind_est_valid(
    const uint8_t & _arg)
  {
    this->wind_est_valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::FixedWingLateralGuidanceStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::FixedWingLateralGuidanceStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::FixedWingLateralGuidanceStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::FixedWingLateralGuidanceStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FixedWingLateralGuidanceStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FixedWingLateralGuidanceStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FixedWingLateralGuidanceStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FixedWingLateralGuidanceStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::FixedWingLateralGuidanceStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::FixedWingLateralGuidanceStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__FixedWingLateralGuidanceStatus
    std::shared_ptr<px4_msgs::msg::FixedWingLateralGuidanceStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__FixedWingLateralGuidanceStatus
    std::shared_ptr<px4_msgs::msg::FixedWingLateralGuidanceStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FixedWingLateralGuidanceStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->course_setpoint != other.course_setpoint) {
      return false;
    }
    if (this->lateral_acceleration_ff != other.lateral_acceleration_ff) {
      return false;
    }
    if (this->bearing_feas != other.bearing_feas) {
      return false;
    }
    if (this->bearing_feas_on_track != other.bearing_feas_on_track) {
      return false;
    }
    if (this->signed_track_error != other.signed_track_error) {
      return false;
    }
    if (this->track_error_bound != other.track_error_bound) {
      return false;
    }
    if (this->switch_distance != other.switch_distance) {
      return false;
    }
    if (this->adapted_period != other.adapted_period) {
      return false;
    }
    if (this->wind_est_valid != other.wind_est_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const FixedWingLateralGuidanceStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FixedWingLateralGuidanceStatus_

// alias to use template instance with default allocator
using FixedWingLateralGuidanceStatus =
  px4_msgs::msg::FixedWingLateralGuidanceStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_GUIDANCE_STATUS__STRUCT_HPP_
