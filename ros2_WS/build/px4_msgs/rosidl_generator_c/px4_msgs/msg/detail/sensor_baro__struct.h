// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorBaro.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_BARO__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSOR_BARO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__SensorBaro__ORB_QUEUE_LENGTH = 4
};

/// Struct defined in msg/SensorBaro in the package px4_msgs.
/**
  * Barometer sensor
  *
  * This is populated by barometer drivers and used by the EKF2 estimator.
  * The information is published in the `SCALED_PRESSURE_n` MAVLink messages (along with information from a corresponding `DifferentialPressure` instance).
 */
typedef struct px4_msgs__msg__SensorBaro
{
  /// Time of publication (since system start)
  uint64_t timestamp;
  /// Time of raw data capture
  uint64_t timestamp_sample;
  /// Unique device ID for the sensor that does not change between power cycles
  uint32_t device_id;
  /// Static pressure measurement
  float pressure;
  /// Temperature.
  float temperature;
  /// Number of errors detected by driver.
  uint32_t error_count;
} px4_msgs__msg__SensorBaro;

// Struct for a sequence of px4_msgs__msg__SensorBaro.
typedef struct px4_msgs__msg__SensorBaro__Sequence
{
  px4_msgs__msg__SensorBaro * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorBaro__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_BARO__STRUCT_H_
