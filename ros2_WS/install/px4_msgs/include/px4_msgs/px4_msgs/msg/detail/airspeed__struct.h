// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/Airspeed.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AIRSPEED__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__AIRSPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Airspeed in the package px4_msgs.
/**
  * Airspeed data from sensors
  *
  * This is published by airspeed sensor drivers, CAN airspeed sensors, simulators.
  * It is subscribed by the airspeed selector module, which validates the data from multiple sensors and passes on a single estimation to the EKF, controllers and telemetry providers.
 */
typedef struct px4_msgs__msg__Airspeed
{
  /// Time since system start
  uint64_t timestamp;
  /// Timestamp of the raw data
  uint64_t timestamp_sample;
  /// Indicated airspeed
  float indicated_airspeed_m_s;
  /// True airspeed
  float true_airspeed_m_s;
  /// [@range 0,1] Confidence value for this sensor
  float confidence;
} px4_msgs__msg__Airspeed;

// Struct for a sequence of px4_msgs__msg__Airspeed.
typedef struct px4_msgs__msg__Airspeed__Sequence
{
  px4_msgs__msg__Airspeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__Airspeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__AIRSPEED__STRUCT_H_
