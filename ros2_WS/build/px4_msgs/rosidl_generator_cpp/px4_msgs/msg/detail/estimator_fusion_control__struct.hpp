// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EstimatorFusionControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_FUSION_CONTROL__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_FUSION_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__EstimatorFusionControl __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EstimatorFusionControl __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimatorFusionControl_
{
  using Type = EstimatorFusionControl_<ContainerAllocator>;

  explicit EstimatorFusionControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<bool, 2>::iterator, bool>(this->gps_intended.begin(), this->gps_intended.end(), false);
      this->of_intended = false;
      this->ev_intended = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->agp_intended.begin(), this->agp_intended.end(), false);
      this->baro_intended = false;
      this->rng_intended = false;
      this->mag_intended = false;
      this->aspd_intended = false;
      this->rngbcn_intended = false;
      std::fill<typename std::array<bool, 2>::iterator, bool>(this->gps_active.begin(), this->gps_active.end(), false);
      this->of_active = false;
      this->ev_active = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->agp_active.begin(), this->agp_active.end(), false);
      this->baro_active = false;
      this->rng_active = false;
      this->mag_active = false;
      this->aspd_active = false;
      this->rngbcn_active = false;
    }
  }

  explicit EstimatorFusionControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gps_intended(_alloc),
    agp_intended(_alloc),
    gps_active(_alloc),
    agp_active(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<bool, 2>::iterator, bool>(this->gps_intended.begin(), this->gps_intended.end(), false);
      this->of_intended = false;
      this->ev_intended = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->agp_intended.begin(), this->agp_intended.end(), false);
      this->baro_intended = false;
      this->rng_intended = false;
      this->mag_intended = false;
      this->aspd_intended = false;
      this->rngbcn_intended = false;
      std::fill<typename std::array<bool, 2>::iterator, bool>(this->gps_active.begin(), this->gps_active.end(), false);
      this->of_active = false;
      this->ev_active = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->agp_active.begin(), this->agp_active.end(), false);
      this->baro_active = false;
      this->rng_active = false;
      this->mag_active = false;
      this->aspd_active = false;
      this->rngbcn_active = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _gps_intended_type =
    std::array<bool, 2>;
  _gps_intended_type gps_intended;
  using _of_intended_type =
    bool;
  _of_intended_type of_intended;
  using _ev_intended_type =
    bool;
  _ev_intended_type ev_intended;
  using _agp_intended_type =
    std::array<bool, 4>;
  _agp_intended_type agp_intended;
  using _baro_intended_type =
    bool;
  _baro_intended_type baro_intended;
  using _rng_intended_type =
    bool;
  _rng_intended_type rng_intended;
  using _mag_intended_type =
    bool;
  _mag_intended_type mag_intended;
  using _aspd_intended_type =
    bool;
  _aspd_intended_type aspd_intended;
  using _rngbcn_intended_type =
    bool;
  _rngbcn_intended_type rngbcn_intended;
  using _gps_active_type =
    std::array<bool, 2>;
  _gps_active_type gps_active;
  using _of_active_type =
    bool;
  _of_active_type of_active;
  using _ev_active_type =
    bool;
  _ev_active_type ev_active;
  using _agp_active_type =
    std::array<bool, 4>;
  _agp_active_type agp_active;
  using _baro_active_type =
    bool;
  _baro_active_type baro_active;
  using _rng_active_type =
    bool;
  _rng_active_type rng_active;
  using _mag_active_type =
    bool;
  _mag_active_type mag_active;
  using _aspd_active_type =
    bool;
  _aspd_active_type aspd_active;
  using _rngbcn_active_type =
    bool;
  _rngbcn_active_type rngbcn_active;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__gps_intended(
    const std::array<bool, 2> & _arg)
  {
    this->gps_intended = _arg;
    return *this;
  }
  Type & set__of_intended(
    const bool & _arg)
  {
    this->of_intended = _arg;
    return *this;
  }
  Type & set__ev_intended(
    const bool & _arg)
  {
    this->ev_intended = _arg;
    return *this;
  }
  Type & set__agp_intended(
    const std::array<bool, 4> & _arg)
  {
    this->agp_intended = _arg;
    return *this;
  }
  Type & set__baro_intended(
    const bool & _arg)
  {
    this->baro_intended = _arg;
    return *this;
  }
  Type & set__rng_intended(
    const bool & _arg)
  {
    this->rng_intended = _arg;
    return *this;
  }
  Type & set__mag_intended(
    const bool & _arg)
  {
    this->mag_intended = _arg;
    return *this;
  }
  Type & set__aspd_intended(
    const bool & _arg)
  {
    this->aspd_intended = _arg;
    return *this;
  }
  Type & set__rngbcn_intended(
    const bool & _arg)
  {
    this->rngbcn_intended = _arg;
    return *this;
  }
  Type & set__gps_active(
    const std::array<bool, 2> & _arg)
  {
    this->gps_active = _arg;
    return *this;
  }
  Type & set__of_active(
    const bool & _arg)
  {
    this->of_active = _arg;
    return *this;
  }
  Type & set__ev_active(
    const bool & _arg)
  {
    this->ev_active = _arg;
    return *this;
  }
  Type & set__agp_active(
    const std::array<bool, 4> & _arg)
  {
    this->agp_active = _arg;
    return *this;
  }
  Type & set__baro_active(
    const bool & _arg)
  {
    this->baro_active = _arg;
    return *this;
  }
  Type & set__rng_active(
    const bool & _arg)
  {
    this->rng_active = _arg;
    return *this;
  }
  Type & set__mag_active(
    const bool & _arg)
  {
    this->mag_active = _arg;
    return *this;
  }
  Type & set__aspd_active(
    const bool & _arg)
  {
    this->aspd_active = _arg;
    return *this;
  }
  Type & set__rngbcn_active(
    const bool & _arg)
  {
    this->rngbcn_active = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::EstimatorFusionControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EstimatorFusionControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorFusionControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorFusionControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorFusionControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorFusionControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorFusionControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorFusionControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorFusionControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorFusionControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EstimatorFusionControl
    std::shared_ptr<px4_msgs::msg::EstimatorFusionControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EstimatorFusionControl
    std::shared_ptr<px4_msgs::msg::EstimatorFusionControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimatorFusionControl_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->gps_intended != other.gps_intended) {
      return false;
    }
    if (this->of_intended != other.of_intended) {
      return false;
    }
    if (this->ev_intended != other.ev_intended) {
      return false;
    }
    if (this->agp_intended != other.agp_intended) {
      return false;
    }
    if (this->baro_intended != other.baro_intended) {
      return false;
    }
    if (this->rng_intended != other.rng_intended) {
      return false;
    }
    if (this->mag_intended != other.mag_intended) {
      return false;
    }
    if (this->aspd_intended != other.aspd_intended) {
      return false;
    }
    if (this->rngbcn_intended != other.rngbcn_intended) {
      return false;
    }
    if (this->gps_active != other.gps_active) {
      return false;
    }
    if (this->of_active != other.of_active) {
      return false;
    }
    if (this->ev_active != other.ev_active) {
      return false;
    }
    if (this->agp_active != other.agp_active) {
      return false;
    }
    if (this->baro_active != other.baro_active) {
      return false;
    }
    if (this->rng_active != other.rng_active) {
      return false;
    }
    if (this->mag_active != other.mag_active) {
      return false;
    }
    if (this->aspd_active != other.aspd_active) {
      return false;
    }
    if (this->rngbcn_active != other.rngbcn_active) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimatorFusionControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimatorFusionControl_

// alias to use template instance with default allocator
using EstimatorFusionControl =
  px4_msgs::msg::EstimatorFusionControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_FUSION_CONTROL__STRUCT_HPP_
