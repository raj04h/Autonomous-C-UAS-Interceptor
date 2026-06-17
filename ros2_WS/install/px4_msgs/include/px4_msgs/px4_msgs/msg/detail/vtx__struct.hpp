// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/Vtx.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTX__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VTX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__Vtx __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__Vtx __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Vtx_
{
  using Type = Vtx_<ContainerAllocator>;

  explicit Vtx_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->protocol = 0;
      this->device = 0;
      this->mode = 0;
      this->band = 0;
      this->channel = 0;
      this->frequency = 0;
      this->band_letter = 0;
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->band_name.begin(), this->band_name.end(), 0);
      this->power_level = 0;
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->power_label.begin(), this->power_label.end(), 0);
    }
  }

  explicit Vtx_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : band_name(_alloc),
    power_label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->protocol = 0;
      this->device = 0;
      this->mode = 0;
      this->band = 0;
      this->channel = 0;
      this->frequency = 0;
      this->band_letter = 0;
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->band_name.begin(), this->band_name.end(), 0);
      this->power_level = 0;
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->power_label.begin(), this->power_label.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _protocol_type =
    uint8_t;
  _protocol_type protocol;
  using _device_type =
    uint8_t;
  _device_type device;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _band_type =
    int8_t;
  _band_type band;
  using _channel_type =
    int8_t;
  _channel_type channel;
  using _frequency_type =
    uint16_t;
  _frequency_type frequency;
  using _band_letter_type =
    uint8_t;
  _band_letter_type band_letter;
  using _band_name_type =
    std::array<uint8_t, 12>;
  _band_name_type band_name;
  using _power_level_type =
    int8_t;
  _power_level_type power_level;
  using _power_label_type =
    std::array<uint8_t, 4>;
  _power_label_type power_label;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__protocol(
    const uint8_t & _arg)
  {
    this->protocol = _arg;
    return *this;
  }
  Type & set__device(
    const uint8_t & _arg)
  {
    this->device = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__band(
    const int8_t & _arg)
  {
    this->band = _arg;
    return *this;
  }
  Type & set__channel(
    const int8_t & _arg)
  {
    this->channel = _arg;
    return *this;
  }
  Type & set__frequency(
    const uint16_t & _arg)
  {
    this->frequency = _arg;
    return *this;
  }
  Type & set__band_letter(
    const uint8_t & _arg)
  {
    this->band_letter = _arg;
    return *this;
  }
  Type & set__band_name(
    const std::array<uint8_t, 12> & _arg)
  {
    this->band_name = _arg;
    return *this;
  }
  Type & set__power_level(
    const int8_t & _arg)
  {
    this->power_level = _arg;
    return *this;
  }
  Type & set__power_label(
    const std::array<uint8_t, 4> & _arg)
  {
    this->power_label = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BAND_NAME_LENGTH =
    12u;
  static constexpr uint8_t POWER_LABEL_LENGTH =
    4u;
  static constexpr uint8_t PROTOCOL_NONE =
    0u;
  static constexpr uint8_t PROTOCOL_SMART_AUDIO_V1 =
    10u;
  static constexpr uint8_t PROTOCOL_SMART_AUDIO_V2 =
    20u;
  static constexpr uint8_t PROTOCOL_SMART_AUDIO_V2_1 =
    21u;
  static constexpr uint8_t PROTOCOL_TRAMP =
    100u;
  static constexpr uint8_t DEVICE_UNKNOWN =
    0u;
  static constexpr uint8_t DEVICE_PEAK_THOR_T67 =
    20u;
  static constexpr uint8_t DEVICE_RUSH_MAX_SOLO =
    40u;
  static constexpr uint8_t MODE_NORMAL =
    0u;
  static constexpr uint8_t MODE_PIT =
    1u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::Vtx_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::Vtx_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::Vtx_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::Vtx_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Vtx_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Vtx_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Vtx_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Vtx_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::Vtx_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::Vtx_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__Vtx
    std::shared_ptr<px4_msgs::msg::Vtx_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__Vtx
    std::shared_ptr<px4_msgs::msg::Vtx_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Vtx_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->protocol != other.protocol) {
      return false;
    }
    if (this->device != other.device) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->band != other.band) {
      return false;
    }
    if (this->channel != other.channel) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->band_letter != other.band_letter) {
      return false;
    }
    if (this->band_name != other.band_name) {
      return false;
    }
    if (this->power_level != other.power_level) {
      return false;
    }
    if (this->power_label != other.power_label) {
      return false;
    }
    return true;
  }
  bool operator!=(const Vtx_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Vtx_

// alias to use template instance with default allocator
using Vtx =
  px4_msgs::msg::Vtx_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vtx_<ContainerAllocator>::BAND_NAME_LENGTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vtx_<ContainerAllocator>::POWER_LABEL_LENGTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vtx_<ContainerAllocator>::PROTOCOL_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vtx_<ContainerAllocator>::PROTOCOL_SMART_AUDIO_V1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vtx_<ContainerAllocator>::PROTOCOL_SMART_AUDIO_V2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vtx_<ContainerAllocator>::PROTOCOL_SMART_AUDIO_V2_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vtx_<ContainerAllocator>::PROTOCOL_TRAMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vtx_<ContainerAllocator>::DEVICE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vtx_<ContainerAllocator>::DEVICE_PEAK_THOR_T67;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vtx_<ContainerAllocator>::DEVICE_RUSH_MAX_SOLO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vtx_<ContainerAllocator>::MODE_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vtx_<ContainerAllocator>::MODE_PIT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VTX__STRUCT_HPP_
