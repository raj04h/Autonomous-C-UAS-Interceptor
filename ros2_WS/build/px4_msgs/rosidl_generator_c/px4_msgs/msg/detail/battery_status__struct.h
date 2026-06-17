// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MESSAGE_VERSION'.
enum
{
  px4_msgs__msg__BatteryStatus__MESSAGE_VERSION = 1ul
};

/// Constant 'MAX_INSTANCES'.
enum
{
  px4_msgs__msg__BatteryStatus__MAX_INSTANCES = 3
};

/// Constant 'SOURCE_POWER_MODULE'.
/**
  * Power module (analog ADC or I2C power monitor)
 */
enum
{
  px4_msgs__msg__BatteryStatus__SOURCE_POWER_MODULE = 0
};

/// Constant 'SOURCE_EXTERNAL'.
/**
  * External (MAVLink, CAN, or external driver)
 */
enum
{
  px4_msgs__msg__BatteryStatus__SOURCE_EXTERNAL = 1
};

/// Constant 'SOURCE_ESCS'.
/**
  * ESCs (via ESC telemetry)
 */
enum
{
  px4_msgs__msg__BatteryStatus__SOURCE_ESCS = 2
};

/// Constant 'WARNING_NONE'.
/**
  * No battery low voltage warning active
 */
enum
{
  px4_msgs__msg__BatteryStatus__WARNING_NONE = 0
};

/// Constant 'WARNING_LOW'.
/**
  * Low voltage warning
 */
enum
{
  px4_msgs__msg__BatteryStatus__WARNING_LOW = 1
};

/// Constant 'WARNING_CRITICAL'.
/**
  * Critical voltage, return / abort immediately
 */
enum
{
  px4_msgs__msg__BatteryStatus__WARNING_CRITICAL = 2
};

/// Constant 'WARNING_EMERGENCY'.
/**
  * Immediate landing required
 */
enum
{
  px4_msgs__msg__BatteryStatus__WARNING_EMERGENCY = 3
};

/// Constant 'WARNING_FAILED'.
/**
  * Battery has failed completely
 */
enum
{
  px4_msgs__msg__BatteryStatus__WARNING_FAILED = 4
};

/// Constant 'STATE_UNHEALTHY'.
/**
  * Battery is diagnosed to be defective or an error occurred, usage is discouraged / prohibited. Possible causes (faults) are listed in faults field
 */
enum
{
  px4_msgs__msg__BatteryStatus__STATE_UNHEALTHY = 6
};

/// Constant 'STATE_CHARGING'.
/**
  * Battery is charging
 */
enum
{
  px4_msgs__msg__BatteryStatus__STATE_CHARGING = 7
};

/// Constant 'FAULT_DEEP_DISCHARGE'.
/**
  * Battery has deep discharged
 */
enum
{
  px4_msgs__msg__BatteryStatus__FAULT_DEEP_DISCHARGE = 0
};

/// Constant 'FAULT_SPIKES'.
/**
  * Voltage spikes
 */
enum
{
  px4_msgs__msg__BatteryStatus__FAULT_SPIKES = 1
};

/// Constant 'FAULT_CELL_FAIL'.
/**
  * One or more cells have failed
 */
enum
{
  px4_msgs__msg__BatteryStatus__FAULT_CELL_FAIL = 2
};

/// Constant 'FAULT_OVER_CURRENT'.
/**
  * Over-current
 */
enum
{
  px4_msgs__msg__BatteryStatus__FAULT_OVER_CURRENT = 3
};

/// Constant 'FAULT_OVER_TEMPERATURE'.
/**
  * Over-temperature
 */
enum
{
  px4_msgs__msg__BatteryStatus__FAULT_OVER_TEMPERATURE = 4
};

/// Constant 'FAULT_UNDER_TEMPERATURE'.
/**
  * Under-temperature fault
 */
enum
{
  px4_msgs__msg__BatteryStatus__FAULT_UNDER_TEMPERATURE = 5
};

/// Constant 'FAULT_INCOMPATIBLE_VOLTAGE'.
/**
  * Vehicle voltage is not compatible with this battery (batteries on same power rail should have similar voltage)
 */
enum
{
  px4_msgs__msg__BatteryStatus__FAULT_INCOMPATIBLE_VOLTAGE = 6
};

/// Constant 'FAULT_INCOMPATIBLE_FIRMWARE'.
/**
  * Battery firmware is not compatible with current autopilot firmware
 */
enum
{
  px4_msgs__msg__BatteryStatus__FAULT_INCOMPATIBLE_FIRMWARE = 7
};

/// Constant 'FAULT_INCOMPATIBLE_MODEL'.
/**
  * Battery model is not supported by the system
 */
enum
{
  px4_msgs__msg__BatteryStatus__FAULT_INCOMPATIBLE_MODEL = 8
};

/// Constant 'FAULT_HARDWARE_FAILURE'.
/**
  * Hardware problem
 */
enum
{
  px4_msgs__msg__BatteryStatus__FAULT_HARDWARE_FAILURE = 9
};

/// Constant 'FAULT_FAILED_TO_ARM'.
/**
  * Battery had a problem while arming
 */
enum
{
  px4_msgs__msg__BatteryStatus__FAULT_FAILED_TO_ARM = 10
};

/// Constant 'FAULT_COUNT'.
/**
  * Counter. Keep this as last element
 */
enum
{
  px4_msgs__msg__BatteryStatus__FAULT_COUNT = 11
};

/// Struct defined in msg/BatteryStatus in the package px4_msgs.
/**
  * Battery status
  *
  * Battery status information for up to 3 battery instances.
  * These are populated from power module and smart battery device drivers, and one battery updated from MAVLink.
  * Battery instance information is also logged and streamed in MAVLink telemetry.
 */
typedef struct px4_msgs__msg__BatteryStatus
{
  /// Time since system start
  uint64_t timestamp;
  /// Whether or not a battery is connected. For power modules this is based on a voltage threshold.
  bool connected;
  /// [V] [@invalid 0] Battery voltage
  float voltage_v;
  /// [A] [@invalid -1] Battery current
  float current_a;
  /// [A] [@invalid -1] Battery current average (for FW average in level flight)
  float current_average_a;
  /// [mAh] [@invalid -1] Discharged amount
  float discharged_mah;
  /// [@range 0,1] Remaining capacity
  float remaining;
  /// [-] [@range 1,] [@invalid -1] Scaling factor to compensate for lower actuation power caused by voltage sag
  float scale;
  /// [s] [@invalid NaN] Predicted time remaining until battery is empty under previous averaged load
  float time_remaining_s;
  /// [degC] [@invalid NaN] Temperature of the battery
  float temperature;
  /// [-] [@invalid 0] Number of cells
  uint8_t cell_count;
  /// Battery source
  uint8_t source;
  /// Zero based priority is the connection on the Power Controller V1..Vn AKA BrickN-1
  uint8_t priority;
  /// Capacity of the battery when fully charged
  uint16_t capacity;
  /// Number of discharge cycles the battery has experienced
  uint16_t cycle_count;
  /// Predicted remaining battery capacity based on the average rate of discharge
  uint16_t average_time_to_empty;
  /// Manufacture date, part of serial number of the battery pack. Formatted as: Day + Month×32 + (Year–1980)×512
  uint16_t manufacture_date;
  /// [@range 0, 100] State of health. FullChargeCapacity/DesignCapacity
  uint16_t state_of_health;
  /// [@range 1, 100] Max error, expected margin of error in the state-of-charge calculation
  uint16_t max_error;
  /// ID number of a battery. Should be unique and consistent for the lifetime of a vehicle. 1-indexed
  uint8_t id;
  /// Interface error counter
  uint16_t interface_error;
  /// [V] [@invalid 0] Battery individual cell voltages
  float voltage_cell_v[14];
  /// Max difference between individual cell voltages
  float max_cell_voltage_delta;
  /// Power off event imminent indication, false if unknown
  bool is_powering_off;
  /// Set if the battery is explicitly required before arming
  bool is_required;
  /// Current battery warning
  uint8_t warning;
  /// Smart battery supply status/fault flags (bitmask) for health indication
  uint16_t faults;
  /// Compensated battery capacity
  float full_charge_capacity_wh;
  /// [Wh] [@invalid NaN] Compensated battery capacity remaining
  float remaining_capacity_wh;
  /// Number of battery overdischarge
  uint16_t over_discharge_count;
  /// [V] [@invalid NaN] Nominal voltage of the battery pack
  float nominal_voltage;
  /// Internal resistance per cell estimate
  float internal_resistance_estimate;
  /// Open circuit voltage estimate
  float ocv_estimate;
  /// Filtered open circuit voltage estimate
  float ocv_estimate_filtered;
  /// [@range 0, 1] Normalized volt based state of charge estimate
  float volt_based_soc_estimate;
  /// Predicted voltage
  float voltage_prediction;
  /// Prediction error
  float prediction_error;
  /// Norm of the covariance matrix
  float estimation_covariance_norm;
} px4_msgs__msg__BatteryStatus;

// Struct for a sequence of px4_msgs__msg__BatteryStatus.
typedef struct px4_msgs__msg__BatteryStatus__Sequence
{
  px4_msgs__msg__BatteryStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__BatteryStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
