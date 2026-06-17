// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/AuxGlobalPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AUX_GLOBAL_POSITION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__AUX_GLOBAL_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__AuxGlobalPosition __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__AuxGlobalPosition __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AuxGlobalPosition_
{
  using Type = AuxGlobalPosition_<ContainerAllocator>;

  explicit AuxGlobalPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->id = 0;
      this->source = 0;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->eph = 0.0f;
      this->epv = 0.0f;
      this->lat_lon_reset_counter = 0;
    }
  }

  explicit AuxGlobalPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->id = 0;
      this->source = 0;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->eph = 0.0f;
      this->epv = 0.0f;
      this->lat_lon_reset_counter = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _id_type =
    uint8_t;
  _id_type id;
  using _source_type =
    uint8_t;
  _source_type source;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _alt_type =
    float;
  _alt_type alt;
  using _eph_type =
    float;
  _eph_type eph;
  using _epv_type =
    float;
  _epv_type epv;
  using _lat_lon_reset_counter_type =
    uint8_t;
  _lat_lon_reset_counter_type lat_lon_reset_counter;

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
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__source(
    const uint8_t & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__alt(
    const float & _arg)
  {
    this->alt = _arg;
    return *this;
  }
  Type & set__eph(
    const float & _arg)
  {
    this->eph = _arg;
    return *this;
  }
  Type & set__epv(
    const float & _arg)
  {
    this->epv = _arg;
    return *this;
  }
  Type & set__lat_lon_reset_counter(
    const uint8_t & _arg)
  {
    this->lat_lon_reset_counter = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MESSAGE_VERSION =
    1u;
  static constexpr uint8_t SOURCE_UNKNOWN =
    0u;
  static constexpr uint8_t SOURCE_GNSS =
    1u;
  static constexpr uint8_t SOURCE_VISION =
    2u;
  static constexpr uint8_t SOURCE_PSEUDOLITES =
    3u;
  static constexpr uint8_t SOURCE_TERRAIN =
    4u;
  static constexpr uint8_t SOURCE_MAGNETIC =
    5u;
  static constexpr uint8_t SOURCE_ESTIMATOR =
    6u;
  static constexpr uint8_t SOURCE_LEO =
    7u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::AuxGlobalPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::AuxGlobalPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::AuxGlobalPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::AuxGlobalPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::AuxGlobalPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::AuxGlobalPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::AuxGlobalPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::AuxGlobalPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::AuxGlobalPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::AuxGlobalPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__AuxGlobalPosition
    std::shared_ptr<px4_msgs::msg::AuxGlobalPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__AuxGlobalPosition
    std::shared_ptr<px4_msgs::msg::AuxGlobalPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AuxGlobalPosition_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->alt != other.alt) {
      return false;
    }
    if (this->eph != other.eph) {
      return false;
    }
    if (this->epv != other.epv) {
      return false;
    }
    if (this->lat_lon_reset_counter != other.lat_lon_reset_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const AuxGlobalPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AuxGlobalPosition_

// alias to use template instance with default allocator
using AuxGlobalPosition =
  px4_msgs::msg::AuxGlobalPosition_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t AuxGlobalPosition_<ContainerAllocator>::MESSAGE_VERSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AuxGlobalPosition_<ContainerAllocator>::SOURCE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AuxGlobalPosition_<ContainerAllocator>::SOURCE_GNSS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AuxGlobalPosition_<ContainerAllocator>::SOURCE_VISION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AuxGlobalPosition_<ContainerAllocator>::SOURCE_PSEUDOLITES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AuxGlobalPosition_<ContainerAllocator>::SOURCE_TERRAIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AuxGlobalPosition_<ContainerAllocator>::SOURCE_MAGNETIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AuxGlobalPosition_<ContainerAllocator>::SOURCE_ESTIMATOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AuxGlobalPosition_<ContainerAllocator>::SOURCE_LEO;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__AUX_GLOBAL_POSITION__STRUCT_HPP_
