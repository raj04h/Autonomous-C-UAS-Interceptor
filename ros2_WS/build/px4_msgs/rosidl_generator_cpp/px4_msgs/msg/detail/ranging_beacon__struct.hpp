// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RangingBeacon.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RANGING_BEACON__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__RANGING_BEACON__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RangingBeacon __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RangingBeacon __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RangingBeacon_
{
  using Type = RangingBeacon_<ContainerAllocator>;

  explicit RangingBeacon_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->beacon_id = 0;
      this->range = 0.0f;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->alt_type = 0;
      this->hacc = 0.0f;
      this->vacc = 0.0f;
      this->sequence_nr = 0;
      this->status = 0;
      this->carrier_freq = 0;
      this->range_accuracy = 0.0f;
    }
  }

  explicit RangingBeacon_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->beacon_id = 0;
      this->range = 0.0f;
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0f;
      this->alt_type = 0;
      this->hacc = 0.0f;
      this->vacc = 0.0f;
      this->sequence_nr = 0;
      this->status = 0;
      this->carrier_freq = 0;
      this->range_accuracy = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _beacon_id_type =
    uint8_t;
  _beacon_id_type beacon_id;
  using _range_type =
    float;
  _range_type range;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _alt_type =
    float;
  _alt_type alt;
  using _alt_type_type =
    uint8_t;
  _alt_type_type alt_type;
  using _hacc_type =
    float;
  _hacc_type hacc;
  using _vacc_type =
    float;
  _vacc_type vacc;
  using _sequence_nr_type =
    uint8_t;
  _sequence_nr_type sequence_nr;
  using _status_type =
    uint8_t;
  _status_type status;
  using _carrier_freq_type =
    uint16_t;
  _carrier_freq_type carrier_freq;
  using _range_accuracy_type =
    float;
  _range_accuracy_type range_accuracy;

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
  Type & set__beacon_id(
    const uint8_t & _arg)
  {
    this->beacon_id = _arg;
    return *this;
  }
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
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
  Type & set__alt_type(
    const uint8_t & _arg)
  {
    this->alt_type = _arg;
    return *this;
  }
  Type & set__hacc(
    const float & _arg)
  {
    this->hacc = _arg;
    return *this;
  }
  Type & set__vacc(
    const float & _arg)
  {
    this->vacc = _arg;
    return *this;
  }
  Type & set__sequence_nr(
    const uint8_t & _arg)
  {
    this->sequence_nr = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__carrier_freq(
    const uint16_t & _arg)
  {
    this->carrier_freq = _arg;
    return *this;
  }
  Type & set__range_accuracy(
    const float & _arg)
  {
    this->range_accuracy = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ALT_TYPE_WGS84 =
    0u;
  static constexpr uint8_t ALT_TYPE_MSL =
    1u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::RangingBeacon_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RangingBeacon_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RangingBeacon_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RangingBeacon_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RangingBeacon_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RangingBeacon_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RangingBeacon_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RangingBeacon_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RangingBeacon_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RangingBeacon_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RangingBeacon
    std::shared_ptr<px4_msgs::msg::RangingBeacon_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RangingBeacon
    std::shared_ptr<px4_msgs::msg::RangingBeacon_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RangingBeacon_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->beacon_id != other.beacon_id) {
      return false;
    }
    if (this->range != other.range) {
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
    if (this->alt_type != other.alt_type) {
      return false;
    }
    if (this->hacc != other.hacc) {
      return false;
    }
    if (this->vacc != other.vacc) {
      return false;
    }
    if (this->sequence_nr != other.sequence_nr) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->carrier_freq != other.carrier_freq) {
      return false;
    }
    if (this->range_accuracy != other.range_accuracy) {
      return false;
    }
    return true;
  }
  bool operator!=(const RangingBeacon_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RangingBeacon_

// alias to use template instance with default allocator
using RangingBeacon =
  px4_msgs::msg::RangingBeacon_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RangingBeacon_<ContainerAllocator>::ALT_TYPE_WGS84;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RangingBeacon_<ContainerAllocator>::ALT_TYPE_MSL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RANGING_BEACON__STRUCT_HPP_
