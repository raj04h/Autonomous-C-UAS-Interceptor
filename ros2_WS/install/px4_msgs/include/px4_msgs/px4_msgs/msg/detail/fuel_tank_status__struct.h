// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FuelTankStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FUEL_TANK_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FUEL_TANK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAV_FUEL_TYPE_UNKNOWN'.
/**
  * fuel type not specified. Fuel levels are normalized (i.e., maximum is 1, and other levels are relative to 1).
 */
enum
{
  px4_msgs__msg__FuelTankStatus__MAV_FUEL_TYPE_UNKNOWN = 0
};

/// Constant 'MAV_FUEL_TYPE_LIQUID'.
/**
  * represents generic liquid fuels, such as gasoline or diesel. Fuel levels are measured in millilitres (ml), and flow rates in millilitres per second (ml/s).
 */
enum
{
  px4_msgs__msg__FuelTankStatus__MAV_FUEL_TYPE_LIQUID = 1
};

/// Constant 'MAV_FUEL_TYPE_GAS'.
/**
  * represents a gas fuel, such as hydrogen, methane, or propane. Fuel levels are in kilo-Pascal (kPa), and flow rates are in milliliters per second (ml/s).
 */
enum
{
  px4_msgs__msg__FuelTankStatus__MAV_FUEL_TYPE_GAS = 2
};

/// Struct defined in msg/FuelTankStatus in the package px4_msgs.
typedef struct px4_msgs__msg__FuelTankStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// maximum fuel capacity. Must always be provided, either from the driver or a parameter
  float maximum_fuel_capacity;
  /// consumed fuel, NaN if not measured. Should not be inferred from the max fuel capacity
  float consumed_fuel;
  /// fuel consumption rate, NaN if not measured
  float fuel_consumption_rate;
  /// percentage of remaining fuel, UINT8_MAX if not provided
  uint8_t percent_remaining;
  /// remaining fuel, NaN if not measured. Should not be inferred from the max fuel capacity
  float remaining_fuel;
  /// identifier for the fuel tank. Must match ID of other messages for same fuel system. 0 by default when only a single tank exists
  uint8_t fuel_tank_id;
  /// type of fuel based on MAV_FUEL_TYPE enum. Set to MAV_FUEL_TYPE_UNKNOWN if unknown or it does not fit the provided types
  uint32_t fuel_type;
  /// fuel temperature in Kelvin, NaN if not measured
  float temperature;
} px4_msgs__msg__FuelTankStatus;

// Struct for a sequence of px4_msgs__msg__FuelTankStatus.
typedef struct px4_msgs__msg__FuelTankStatus__Sequence
{
  px4_msgs__msg__FuelTankStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FuelTankStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FUEL_TANK_STATUS__STRUCT_H_
