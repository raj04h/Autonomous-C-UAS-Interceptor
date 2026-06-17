// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/AirspeedValidated.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AIRSPEED_VALIDATED__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__AIRSPEED_VALIDATED__STRUCT_H_

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
  px4_msgs__msg__AirspeedValidated__MESSAGE_VERSION = 1ul
};

/// Constant 'SOURCE_DISABLED'.
/**
  * Disabled
 */
enum
{
  px4_msgs__msg__AirspeedValidated__SOURCE_DISABLED = -1
};

/// Constant 'SOURCE_GROUND_MINUS_WIND'.
/**
  * Ground speed minus wind
 */
enum
{
  px4_msgs__msg__AirspeedValidated__SOURCE_GROUND_MINUS_WIND = 0
};

/// Constant 'SOURCE_SENSOR_1'.
/**
  * Sensor 1
 */
enum
{
  px4_msgs__msg__AirspeedValidated__SOURCE_SENSOR_1 = 1
};

/// Constant 'SOURCE_SENSOR_2'.
/**
  * Sensor 2
 */
enum
{
  px4_msgs__msg__AirspeedValidated__SOURCE_SENSOR_2 = 2
};

/// Constant 'SOURCE_SENSOR_3'.
/**
  * Sensor 3
 */
enum
{
  px4_msgs__msg__AirspeedValidated__SOURCE_SENSOR_3 = 3
};

/// Constant 'SOURCE_SYNTHETIC'.
/**
  * Synthetic airspeed
 */
enum
{
  px4_msgs__msg__AirspeedValidated__SOURCE_SYNTHETIC = 4
};

/// Struct defined in msg/AirspeedValidated in the package px4_msgs.
/**
  * Validated airspeed
  *
  * Provides information about airspeed (indicated, true, calibrated) and the source of the data.
  * Used by controllers, estimators and for airspeed reporting to operator.
 */
typedef struct px4_msgs__msg__AirspeedValidated
{
  /// Time since system start
  uint64_t timestamp;
  /// [m/s] [@invalid NaN] Indicated airspeed (IAS)
  float indicated_airspeed_m_s;
  /// [m/s] [@invalid NaN] Calibrated airspeed (CAS)
  float calibrated_airspeed_m_s;
  /// [m/s] [@invalid NaN] True airspeed (TAS)
  float true_airspeed_m_s;
  /// Source of currently published airspeed values
  int8_t airspeed_source;
  /// [m/s] [@invalid NaN] CAS calculated from groundspeed - windspeed, where windspeed is estimated based on a zero-sideslip assumption
  float calibrated_ground_minus_wind_m_s;
  /// [m/s] [@invalid NaN] Synthetic airspeed
  float calibraded_airspeed_synth_m_s;
  /// Filtered indicated airspeed derivative
  float airspeed_derivative_filtered;
  /// Filtered fixed-wing throttle
  float throttle_filtered;
  /// Filtered pitch
  float pitch_filtered;
} px4_msgs__msg__AirspeedValidated;

// Struct for a sequence of px4_msgs__msg__AirspeedValidated.
typedef struct px4_msgs__msg__AirspeedValidated__Sequence
{
  px4_msgs__msg__AirspeedValidated * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__AirspeedValidated__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__AIRSPEED_VALIDATED__STRUCT_H_
