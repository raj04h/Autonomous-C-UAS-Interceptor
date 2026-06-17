// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VteAidSource1d.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_AID_SOURCE1D__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VTE_AID_SOURCE1D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VteAidSource1d __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VteAidSource1d __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VteAidSource1d_
{
  using Type = VteAidSource1d_<ContainerAllocator>;

  explicit VteAidSource1d_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->time_last_predict = 0ull;
      this->observation = 0.0f;
      this->observation_variance = 0.0f;
      this->innovation = 0.0f;
      this->innovation_variance = 0.0f;
      this->test_ratio = 0.0f;
      this->fusion_status = 0;
      this->time_since_meas_ms = 0.0f;
      this->history_steps = 0;
    }
  }

  explicit VteAidSource1d_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->time_last_predict = 0ull;
      this->observation = 0.0f;
      this->observation_variance = 0.0f;
      this->innovation = 0.0f;
      this->innovation_variance = 0.0f;
      this->test_ratio = 0.0f;
      this->fusion_status = 0;
      this->time_since_meas_ms = 0.0f;
      this->history_steps = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _time_last_predict_type =
    uint64_t;
  _time_last_predict_type time_last_predict;
  using _observation_type =
    float;
  _observation_type observation;
  using _observation_variance_type =
    float;
  _observation_variance_type observation_variance;
  using _innovation_type =
    float;
  _innovation_type innovation;
  using _innovation_variance_type =
    float;
  _innovation_variance_type innovation_variance;
  using _test_ratio_type =
    float;
  _test_ratio_type test_ratio;
  using _fusion_status_type =
    uint8_t;
  _fusion_status_type fusion_status;
  using _time_since_meas_ms_type =
    float;
  _time_since_meas_ms_type time_since_meas_ms;
  using _history_steps_type =
    uint8_t;
  _history_steps_type history_steps;

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
  Type & set__time_last_predict(
    const uint64_t & _arg)
  {
    this->time_last_predict = _arg;
    return *this;
  }
  Type & set__observation(
    const float & _arg)
  {
    this->observation = _arg;
    return *this;
  }
  Type & set__observation_variance(
    const float & _arg)
  {
    this->observation_variance = _arg;
    return *this;
  }
  Type & set__innovation(
    const float & _arg)
  {
    this->innovation = _arg;
    return *this;
  }
  Type & set__innovation_variance(
    const float & _arg)
  {
    this->innovation_variance = _arg;
    return *this;
  }
  Type & set__test_ratio(
    const float & _arg)
  {
    this->test_ratio = _arg;
    return *this;
  }
  Type & set__fusion_status(
    const uint8_t & _arg)
  {
    this->fusion_status = _arg;
    return *this;
  }
  Type & set__time_since_meas_ms(
    const float & _arg)
  {
    this->time_since_meas_ms = _arg;
    return *this;
  }
  Type & set__history_steps(
    const uint8_t & _arg)
  {
    this->history_steps = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS_IDLE =
    0u;
  static constexpr uint8_t STATUS_FUSED_CURRENT =
    1u;
  static constexpr uint8_t STATUS_FUSED_OOSM =
    2u;
  static constexpr uint8_t STATUS_REJECT_NIS =
    3u;
  static constexpr uint8_t STATUS_REJECT_COV =
    4u;
  static constexpr uint8_t STATUS_REJECT_TOO_OLD =
    5u;
  static constexpr uint8_t STATUS_REJECT_TOO_NEW =
    6u;
  static constexpr uint8_t STATUS_REJECT_STALE =
    7u;
  static constexpr uint8_t STATUS_REJECT_EMPTY =
    8u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::VteAidSource1d_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VteAidSource1d_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VteAidSource1d_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VteAidSource1d_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VteAidSource1d_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VteAidSource1d_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VteAidSource1d_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VteAidSource1d_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VteAidSource1d_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VteAidSource1d_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VteAidSource1d
    std::shared_ptr<px4_msgs::msg::VteAidSource1d_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VteAidSource1d
    std::shared_ptr<px4_msgs::msg::VteAidSource1d_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VteAidSource1d_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->time_last_predict != other.time_last_predict) {
      return false;
    }
    if (this->observation != other.observation) {
      return false;
    }
    if (this->observation_variance != other.observation_variance) {
      return false;
    }
    if (this->innovation != other.innovation) {
      return false;
    }
    if (this->innovation_variance != other.innovation_variance) {
      return false;
    }
    if (this->test_ratio != other.test_ratio) {
      return false;
    }
    if (this->fusion_status != other.fusion_status) {
      return false;
    }
    if (this->time_since_meas_ms != other.time_since_meas_ms) {
      return false;
    }
    if (this->history_steps != other.history_steps) {
      return false;
    }
    return true;
  }
  bool operator!=(const VteAidSource1d_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VteAidSource1d_

// alias to use template instance with default allocator
using VteAidSource1d =
  px4_msgs::msg::VteAidSource1d_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VteAidSource1d_<ContainerAllocator>::STATUS_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VteAidSource1d_<ContainerAllocator>::STATUS_FUSED_CURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VteAidSource1d_<ContainerAllocator>::STATUS_FUSED_OOSM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VteAidSource1d_<ContainerAllocator>::STATUS_REJECT_NIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VteAidSource1d_<ContainerAllocator>::STATUS_REJECT_COV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VteAidSource1d_<ContainerAllocator>::STATUS_REJECT_TOO_OLD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VteAidSource1d_<ContainerAllocator>::STATUS_REJECT_TOO_NEW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VteAidSource1d_<ContainerAllocator>::STATUS_REJECT_STALE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VteAidSource1d_<ContainerAllocator>::STATUS_REJECT_EMPTY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VTE_AID_SOURCE1D__STRUCT_HPP_
