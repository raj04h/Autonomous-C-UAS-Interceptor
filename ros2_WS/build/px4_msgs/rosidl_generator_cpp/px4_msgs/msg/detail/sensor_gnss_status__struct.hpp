// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SensorGnssStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SensorGnssStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SensorGnssStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorGnssStatus_
{
  using Type = SensorGnssStatus_<ContainerAllocator>;

  explicit SensorGnssStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_id = 0ul;
      this->quality_available = false;
      this->quality_corrections = 0;
      this->quality_receiver = 0;
      this->quality_gnss_signals = 0;
      this->quality_post_processing = 0;
    }
  }

  explicit SensorGnssStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_id = 0ul;
      this->quality_available = false;
      this->quality_corrections = 0;
      this->quality_receiver = 0;
      this->quality_gnss_signals = 0;
      this->quality_post_processing = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _device_id_type =
    uint32_t;
  _device_id_type device_id;
  using _quality_available_type =
    bool;
  _quality_available_type quality_available;
  using _quality_corrections_type =
    uint8_t;
  _quality_corrections_type quality_corrections;
  using _quality_receiver_type =
    uint8_t;
  _quality_receiver_type quality_receiver;
  using _quality_gnss_signals_type =
    uint8_t;
  _quality_gnss_signals_type quality_gnss_signals;
  using _quality_post_processing_type =
    uint8_t;
  _quality_post_processing_type quality_post_processing;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__device_id(
    const uint32_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__quality_available(
    const bool & _arg)
  {
    this->quality_available = _arg;
    return *this;
  }
  Type & set__quality_corrections(
    const uint8_t & _arg)
  {
    this->quality_corrections = _arg;
    return *this;
  }
  Type & set__quality_receiver(
    const uint8_t & _arg)
  {
    this->quality_receiver = _arg;
    return *this;
  }
  Type & set__quality_gnss_signals(
    const uint8_t & _arg)
  {
    this->quality_gnss_signals = _arg;
    return *this;
  }
  Type & set__quality_post_processing(
    const uint8_t & _arg)
  {
    this->quality_post_processing = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::SensorGnssStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SensorGnssStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorGnssStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorGnssStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorGnssStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorGnssStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorGnssStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorGnssStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorGnssStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorGnssStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SensorGnssStatus
    std::shared_ptr<px4_msgs::msg::SensorGnssStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SensorGnssStatus
    std::shared_ptr<px4_msgs::msg::SensorGnssStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorGnssStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->quality_available != other.quality_available) {
      return false;
    }
    if (this->quality_corrections != other.quality_corrections) {
      return false;
    }
    if (this->quality_receiver != other.quality_receiver) {
      return false;
    }
    if (this->quality_gnss_signals != other.quality_gnss_signals) {
      return false;
    }
    if (this->quality_post_processing != other.quality_post_processing) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorGnssStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorGnssStatus_

// alias to use template instance with default allocator
using SensorGnssStatus =
  px4_msgs::msg::SensorGnssStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_STATUS__STRUCT_HPP_
