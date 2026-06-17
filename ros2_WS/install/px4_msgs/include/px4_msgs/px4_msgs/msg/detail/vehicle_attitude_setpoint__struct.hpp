// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleAttitudeSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleAttitudeSetpoint __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleAttitudeSetpoint __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleAttitudeSetpoint_
{
  using Type = VehicleAttitudeSetpoint_<ContainerAllocator>;

  explicit VehicleAttitudeSetpoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->yaw_sp_move_rate = 0.0f;
      std::fill<typename std::array<float, 4>::iterator, float>(this->q_d.begin(), this->q_d.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->thrust_body.begin(), this->thrust_body.end(), 0.0f);
    }
  }

  explicit VehicleAttitudeSetpoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q_d(_alloc),
    thrust_body(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->yaw_sp_move_rate = 0.0f;
      std::fill<typename std::array<float, 4>::iterator, float>(this->q_d.begin(), this->q_d.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->thrust_body.begin(), this->thrust_body.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _yaw_sp_move_rate_type =
    float;
  _yaw_sp_move_rate_type yaw_sp_move_rate;
  using _q_d_type =
    std::array<float, 4>;
  _q_d_type q_d;
  using _thrust_body_type =
    std::array<float, 3>;
  _thrust_body_type thrust_body;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__yaw_sp_move_rate(
    const float & _arg)
  {
    this->yaw_sp_move_rate = _arg;
    return *this;
  }
  Type & set__q_d(
    const std::array<float, 4> & _arg)
  {
    this->q_d = _arg;
    return *this;
  }
  Type & set__thrust_body(
    const std::array<float, 3> & _arg)
  {
    this->thrust_body = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MESSAGE_VERSION =
    1u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleAttitudeSetpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleAttitudeSetpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleAttitudeSetpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleAttitudeSetpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleAttitudeSetpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleAttitudeSetpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleAttitudeSetpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleAttitudeSetpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleAttitudeSetpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleAttitudeSetpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleAttitudeSetpoint
    std::shared_ptr<px4_msgs::msg::VehicleAttitudeSetpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleAttitudeSetpoint
    std::shared_ptr<px4_msgs::msg::VehicleAttitudeSetpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleAttitudeSetpoint_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->yaw_sp_move_rate != other.yaw_sp_move_rate) {
      return false;
    }
    if (this->q_d != other.q_d) {
      return false;
    }
    if (this->thrust_body != other.thrust_body) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleAttitudeSetpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleAttitudeSetpoint_

// alias to use template instance with default allocator
using VehicleAttitudeSetpoint =
  px4_msgs::msg::VehicleAttitudeSetpoint_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t VehicleAttitudeSetpoint_<ContainerAllocator>::MESSAGE_VERSION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__STRUCT_HPP_
