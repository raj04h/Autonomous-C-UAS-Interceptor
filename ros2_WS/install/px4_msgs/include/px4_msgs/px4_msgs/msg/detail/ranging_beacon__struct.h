// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RangingBeacon.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RANGING_BEACON__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__RANGING_BEACON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ALT_TYPE_WGS84'.
/**
  * Altitude above WGS84 ellipsoid
 */
enum
{
  px4_msgs__msg__RangingBeacon__ALT_TYPE_WGS84 = 0
};

/// Constant 'ALT_TYPE_MSL'.
/**
  * Altitude above Mean Sea Level (AMSL)
 */
enum
{
  px4_msgs__msg__RangingBeacon__ALT_TYPE_MSL = 1
};

/// Struct defined in msg/RangingBeacon in the package px4_msgs.
/**
  * Ranging beacon measurement data (e.g. LoRa, UWB)
 */
typedef struct px4_msgs__msg__RangingBeacon
{
  /// time since system start
  uint64_t timestamp;
  /// the timestamp of the raw data
  uint64_t timestamp_sample;
  uint8_t beacon_id;
  /// Range measurement
  float range;
  /// Latitude
  double lat;
  /// Longitude
  double lon;
  /// Beacon altitude (frame defined in alt_type)
  float alt;
  /// Altitude frame for alt field
  uint8_t alt_type;
  /// Groundbeacon horizontal accuracy
  float hacc;
  /// Groundbeacon vertical accuracy
  float vacc;
  uint8_t sequence_nr;
  uint8_t status;
  /// Carrier frequency
  uint16_t carrier_freq;
  /// Range accuracy estimate
  float range_accuracy;
} px4_msgs__msg__RangingBeacon;

// Struct for a sequence of px4_msgs__msg__RangingBeacon.
typedef struct px4_msgs__msg__RangingBeacon__Sequence
{
  px4_msgs__msg__RangingBeacon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RangingBeacon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__RANGING_BEACON__STRUCT_H_
