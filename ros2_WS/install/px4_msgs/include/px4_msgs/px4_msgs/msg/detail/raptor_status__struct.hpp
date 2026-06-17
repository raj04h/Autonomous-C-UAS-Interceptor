// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RaptorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RAPTOR_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__RAPTOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RaptorStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RaptorStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RaptorStatus_
{
  using Type = RaptorStatus_<ContainerAllocator>;

  explicit RaptorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->subscription_update_angular_velocity = false;
      this->subscription_update_local_position = false;
      this->subscription_update_attitude = false;
      this->subscription_update_trajectory_setpoint = false;
      this->subscription_update_vehicle_status = false;
      this->exit_reason = 0;
      this->timestamp_last_vehicle_angular_velocity = 0ul;
      this->timestamp_last_vehicle_local_position = 0ul;
      this->timestamp_last_vehicle_attitude = 0ul;
      this->timestamp_last_trajectory_setpoint = 0ul;
      this->vehicle_angular_velocity_stale = false;
      this->vehicle_local_position_stale = false;
      this->vehicle_attitude_stale = false;
      this->trajectory_setpoint_stale = false;
      this->active = false;
      this->substep = 0;
      this->control_interval = 0.0f;
      this->trajectory_setpoint_dt_mean = 0.0f;
      this->trajectory_setpoint_dt_max = 0.0f;
      this->trajectory_setpoint_dt_max_since_activation = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->internal_reference_position.begin(), this->internal_reference_position.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->internal_reference_linear_velocity.begin(), this->internal_reference_linear_velocity.end(), 0.0f);
    }
  }

  explicit RaptorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : internal_reference_position(_alloc),
    internal_reference_linear_velocity(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->subscription_update_angular_velocity = false;
      this->subscription_update_local_position = false;
      this->subscription_update_attitude = false;
      this->subscription_update_trajectory_setpoint = false;
      this->subscription_update_vehicle_status = false;
      this->exit_reason = 0;
      this->timestamp_last_vehicle_angular_velocity = 0ul;
      this->timestamp_last_vehicle_local_position = 0ul;
      this->timestamp_last_vehicle_attitude = 0ul;
      this->timestamp_last_trajectory_setpoint = 0ul;
      this->vehicle_angular_velocity_stale = false;
      this->vehicle_local_position_stale = false;
      this->vehicle_attitude_stale = false;
      this->trajectory_setpoint_stale = false;
      this->active = false;
      this->substep = 0;
      this->control_interval = 0.0f;
      this->trajectory_setpoint_dt_mean = 0.0f;
      this->trajectory_setpoint_dt_max = 0.0f;
      this->trajectory_setpoint_dt_max_since_activation = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->internal_reference_position.begin(), this->internal_reference_position.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->internal_reference_linear_velocity.begin(), this->internal_reference_linear_velocity.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _subscription_update_angular_velocity_type =
    bool;
  _subscription_update_angular_velocity_type subscription_update_angular_velocity;
  using _subscription_update_local_position_type =
    bool;
  _subscription_update_local_position_type subscription_update_local_position;
  using _subscription_update_attitude_type =
    bool;
  _subscription_update_attitude_type subscription_update_attitude;
  using _subscription_update_trajectory_setpoint_type =
    bool;
  _subscription_update_trajectory_setpoint_type subscription_update_trajectory_setpoint;
  using _subscription_update_vehicle_status_type =
    bool;
  _subscription_update_vehicle_status_type subscription_update_vehicle_status;
  using _exit_reason_type =
    uint8_t;
  _exit_reason_type exit_reason;
  using _timestamp_last_vehicle_angular_velocity_type =
    uint32_t;
  _timestamp_last_vehicle_angular_velocity_type timestamp_last_vehicle_angular_velocity;
  using _timestamp_last_vehicle_local_position_type =
    uint32_t;
  _timestamp_last_vehicle_local_position_type timestamp_last_vehicle_local_position;
  using _timestamp_last_vehicle_attitude_type =
    uint32_t;
  _timestamp_last_vehicle_attitude_type timestamp_last_vehicle_attitude;
  using _timestamp_last_trajectory_setpoint_type =
    uint32_t;
  _timestamp_last_trajectory_setpoint_type timestamp_last_trajectory_setpoint;
  using _vehicle_angular_velocity_stale_type =
    bool;
  _vehicle_angular_velocity_stale_type vehicle_angular_velocity_stale;
  using _vehicle_local_position_stale_type =
    bool;
  _vehicle_local_position_stale_type vehicle_local_position_stale;
  using _vehicle_attitude_stale_type =
    bool;
  _vehicle_attitude_stale_type vehicle_attitude_stale;
  using _trajectory_setpoint_stale_type =
    bool;
  _trajectory_setpoint_stale_type trajectory_setpoint_stale;
  using _active_type =
    bool;
  _active_type active;
  using _substep_type =
    uint8_t;
  _substep_type substep;
  using _control_interval_type =
    float;
  _control_interval_type control_interval;
  using _trajectory_setpoint_dt_mean_type =
    float;
  _trajectory_setpoint_dt_mean_type trajectory_setpoint_dt_mean;
  using _trajectory_setpoint_dt_max_type =
    float;
  _trajectory_setpoint_dt_max_type trajectory_setpoint_dt_max;
  using _trajectory_setpoint_dt_max_since_activation_type =
    float;
  _trajectory_setpoint_dt_max_since_activation_type trajectory_setpoint_dt_max_since_activation;
  using _internal_reference_position_type =
    std::array<float, 3>;
  _internal_reference_position_type internal_reference_position;
  using _internal_reference_linear_velocity_type =
    std::array<float, 3>;
  _internal_reference_linear_velocity_type internal_reference_linear_velocity;

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
  Type & set__subscription_update_angular_velocity(
    const bool & _arg)
  {
    this->subscription_update_angular_velocity = _arg;
    return *this;
  }
  Type & set__subscription_update_local_position(
    const bool & _arg)
  {
    this->subscription_update_local_position = _arg;
    return *this;
  }
  Type & set__subscription_update_attitude(
    const bool & _arg)
  {
    this->subscription_update_attitude = _arg;
    return *this;
  }
  Type & set__subscription_update_trajectory_setpoint(
    const bool & _arg)
  {
    this->subscription_update_trajectory_setpoint = _arg;
    return *this;
  }
  Type & set__subscription_update_vehicle_status(
    const bool & _arg)
  {
    this->subscription_update_vehicle_status = _arg;
    return *this;
  }
  Type & set__exit_reason(
    const uint8_t & _arg)
  {
    this->exit_reason = _arg;
    return *this;
  }
  Type & set__timestamp_last_vehicle_angular_velocity(
    const uint32_t & _arg)
  {
    this->timestamp_last_vehicle_angular_velocity = _arg;
    return *this;
  }
  Type & set__timestamp_last_vehicle_local_position(
    const uint32_t & _arg)
  {
    this->timestamp_last_vehicle_local_position = _arg;
    return *this;
  }
  Type & set__timestamp_last_vehicle_attitude(
    const uint32_t & _arg)
  {
    this->timestamp_last_vehicle_attitude = _arg;
    return *this;
  }
  Type & set__timestamp_last_trajectory_setpoint(
    const uint32_t & _arg)
  {
    this->timestamp_last_trajectory_setpoint = _arg;
    return *this;
  }
  Type & set__vehicle_angular_velocity_stale(
    const bool & _arg)
  {
    this->vehicle_angular_velocity_stale = _arg;
    return *this;
  }
  Type & set__vehicle_local_position_stale(
    const bool & _arg)
  {
    this->vehicle_local_position_stale = _arg;
    return *this;
  }
  Type & set__vehicle_attitude_stale(
    const bool & _arg)
  {
    this->vehicle_attitude_stale = _arg;
    return *this;
  }
  Type & set__trajectory_setpoint_stale(
    const bool & _arg)
  {
    this->trajectory_setpoint_stale = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__substep(
    const uint8_t & _arg)
  {
    this->substep = _arg;
    return *this;
  }
  Type & set__control_interval(
    const float & _arg)
  {
    this->control_interval = _arg;
    return *this;
  }
  Type & set__trajectory_setpoint_dt_mean(
    const float & _arg)
  {
    this->trajectory_setpoint_dt_mean = _arg;
    return *this;
  }
  Type & set__trajectory_setpoint_dt_max(
    const float & _arg)
  {
    this->trajectory_setpoint_dt_max = _arg;
    return *this;
  }
  Type & set__trajectory_setpoint_dt_max_since_activation(
    const float & _arg)
  {
    this->trajectory_setpoint_dt_max_since_activation = _arg;
    return *this;
  }
  Type & set__internal_reference_position(
    const std::array<float, 3> & _arg)
  {
    this->internal_reference_position = _arg;
    return *this;
  }
  Type & set__internal_reference_linear_velocity(
    const std::array<float, 3> & _arg)
  {
    this->internal_reference_linear_velocity = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MESSAGE_VERSION =
    0u;
  static constexpr uint8_t EXIT_REASON_NONE =
    0u;
  static constexpr uint8_t EXIT_REASON_NO_ANGULAR_VELOCITY_UPDATE =
    1u;
  static constexpr uint8_t EXIT_REASON_NOT_ALL_OBSERVATIONS_SET =
    2u;
  static constexpr uint8_t EXIT_REASON_ANGULAR_VELOCITY_STALE =
    3u;
  static constexpr uint8_t EXIT_REASON_LOCAL_POSITION_STALE =
    4u;
  static constexpr uint8_t EXIT_REASON_ATTITUDE_STALE =
    5u;
  static constexpr uint8_t EXIT_REASON_EXECUTOR_STATUS_SOURCE_NOT_CONTROL =
    6u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::RaptorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RaptorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RaptorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RaptorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RaptorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RaptorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RaptorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RaptorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RaptorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RaptorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RaptorStatus
    std::shared_ptr<px4_msgs::msg::RaptorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RaptorStatus
    std::shared_ptr<px4_msgs::msg::RaptorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RaptorStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->subscription_update_angular_velocity != other.subscription_update_angular_velocity) {
      return false;
    }
    if (this->subscription_update_local_position != other.subscription_update_local_position) {
      return false;
    }
    if (this->subscription_update_attitude != other.subscription_update_attitude) {
      return false;
    }
    if (this->subscription_update_trajectory_setpoint != other.subscription_update_trajectory_setpoint) {
      return false;
    }
    if (this->subscription_update_vehicle_status != other.subscription_update_vehicle_status) {
      return false;
    }
    if (this->exit_reason != other.exit_reason) {
      return false;
    }
    if (this->timestamp_last_vehicle_angular_velocity != other.timestamp_last_vehicle_angular_velocity) {
      return false;
    }
    if (this->timestamp_last_vehicle_local_position != other.timestamp_last_vehicle_local_position) {
      return false;
    }
    if (this->timestamp_last_vehicle_attitude != other.timestamp_last_vehicle_attitude) {
      return false;
    }
    if (this->timestamp_last_trajectory_setpoint != other.timestamp_last_trajectory_setpoint) {
      return false;
    }
    if (this->vehicle_angular_velocity_stale != other.vehicle_angular_velocity_stale) {
      return false;
    }
    if (this->vehicle_local_position_stale != other.vehicle_local_position_stale) {
      return false;
    }
    if (this->vehicle_attitude_stale != other.vehicle_attitude_stale) {
      return false;
    }
    if (this->trajectory_setpoint_stale != other.trajectory_setpoint_stale) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->substep != other.substep) {
      return false;
    }
    if (this->control_interval != other.control_interval) {
      return false;
    }
    if (this->trajectory_setpoint_dt_mean != other.trajectory_setpoint_dt_mean) {
      return false;
    }
    if (this->trajectory_setpoint_dt_max != other.trajectory_setpoint_dt_max) {
      return false;
    }
    if (this->trajectory_setpoint_dt_max_since_activation != other.trajectory_setpoint_dt_max_since_activation) {
      return false;
    }
    if (this->internal_reference_position != other.internal_reference_position) {
      return false;
    }
    if (this->internal_reference_linear_velocity != other.internal_reference_linear_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const RaptorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RaptorStatus_

// alias to use template instance with default allocator
using RaptorStatus =
  px4_msgs::msg::RaptorStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RaptorStatus_<ContainerAllocator>::MESSAGE_VERSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RaptorStatus_<ContainerAllocator>::EXIT_REASON_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RaptorStatus_<ContainerAllocator>::EXIT_REASON_NO_ANGULAR_VELOCITY_UPDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RaptorStatus_<ContainerAllocator>::EXIT_REASON_NOT_ALL_OBSERVATIONS_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RaptorStatus_<ContainerAllocator>::EXIT_REASON_ANGULAR_VELOCITY_STALE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RaptorStatus_<ContainerAllocator>::EXIT_REASON_LOCAL_POSITION_STALE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RaptorStatus_<ContainerAllocator>::EXIT_REASON_ATTITUDE_STALE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RaptorStatus_<ContainerAllocator>::EXIT_REASON_EXECUTOR_STATUS_SOURCE_NOT_CONTROL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RAPTOR_STATUS__STRUCT_HPP_
