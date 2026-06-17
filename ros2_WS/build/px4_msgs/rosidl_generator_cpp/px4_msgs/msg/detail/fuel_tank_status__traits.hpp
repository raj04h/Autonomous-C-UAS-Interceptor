// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/FuelTankStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FUEL_TANK_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__FUEL_TANK_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/fuel_tank_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FuelTankStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: maximum_fuel_capacity
  {
    out << "maximum_fuel_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_fuel_capacity, out);
    out << ", ";
  }

  // member: consumed_fuel
  {
    out << "consumed_fuel: ";
    rosidl_generator_traits::value_to_yaml(msg.consumed_fuel, out);
    out << ", ";
  }

  // member: fuel_consumption_rate
  {
    out << "fuel_consumption_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_consumption_rate, out);
    out << ", ";
  }

  // member: percent_remaining
  {
    out << "percent_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.percent_remaining, out);
    out << ", ";
  }

  // member: remaining_fuel
  {
    out << "remaining_fuel: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_fuel, out);
    out << ", ";
  }

  // member: fuel_tank_id
  {
    out << "fuel_tank_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_tank_id, out);
    out << ", ";
  }

  // member: fuel_type
  {
    out << "fuel_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_type, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FuelTankStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: maximum_fuel_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_fuel_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_fuel_capacity, out);
    out << "\n";
  }

  // member: consumed_fuel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "consumed_fuel: ";
    rosidl_generator_traits::value_to_yaml(msg.consumed_fuel, out);
    out << "\n";
  }

  // member: fuel_consumption_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_consumption_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_consumption_rate, out);
    out << "\n";
  }

  // member: percent_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "percent_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.percent_remaining, out);
    out << "\n";
  }

  // member: remaining_fuel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_fuel: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_fuel, out);
    out << "\n";
  }

  // member: fuel_tank_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_tank_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_tank_id, out);
    out << "\n";
  }

  // member: fuel_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fuel_type, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FuelTankStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::FuelTankStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::FuelTankStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::FuelTankStatus>()
{
  return "px4_msgs::msg::FuelTankStatus";
}

template<>
inline const char * name<px4_msgs::msg::FuelTankStatus>()
{
  return "px4_msgs/msg/FuelTankStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::FuelTankStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::FuelTankStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::FuelTankStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__FUEL_TANK_STATUS__TRAITS_HPP_
