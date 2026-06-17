// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/AuxGlobalPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AUX_GLOBAL_POSITION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__AUX_GLOBAL_POSITION__STRUCT_H_

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
  px4_msgs__msg__AuxGlobalPosition__MESSAGE_VERSION = 1ul
};

/// Constant 'SOURCE_UNKNOWN'.
/**
  * Unknown source
 */
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_UNKNOWN = 0
};

/// Constant 'SOURCE_GNSS'.
/**
  * GNSS
 */
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_GNSS = 1
};

/// Constant 'SOURCE_VISION'.
/**
  * Vision
 */
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_VISION = 2
};

/// Constant 'SOURCE_PSEUDOLITES'.
/**
  * Pseudolites
 */
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_PSEUDOLITES = 3
};

/// Constant 'SOURCE_TERRAIN'.
/**
  * Terrain
 */
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_TERRAIN = 4
};

/// Constant 'SOURCE_MAGNETIC'.
/**
  * Magnetic
 */
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_MAGNETIC = 5
};

/// Constant 'SOURCE_ESTIMATOR'.
/**
  * Estimator
 */
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_ESTIMATOR = 6
};

/// Constant 'SOURCE_LEO'.
/**
  * Low Earth Orbit satellite-based positioning
 */
enum
{
  px4_msgs__msg__AuxGlobalPosition__SOURCE_LEO = 7
};

/// Struct defined in msg/AuxGlobalPosition in the package px4_msgs.
/**
  * Auxiliary global position
  *
  * This message provides global position data from an external source such as
  * pseudolites, visual navigation, or other positioning system.
 */
typedef struct px4_msgs__msg__AuxGlobalPosition
{
  /// Time since system start
  uint64_t timestamp;
  /// Timestamp of the raw data
  uint64_t timestamp_sample;
  /// Unique identifier for the AGP source
  uint8_t id;
  /// Source type of the position data (based on mavlink::GLOBAL_POSITION_SRC)
  uint8_t source;
  /// lat, lon: required for horizontal position fusion, alt: required for vertical position fusion
  /// [deg] Latitude in WGS84
  double lat;
  /// Longitude in WGS84
  double lon;
  /// [m] [@invalid NaN] Altitude above mean sea level (AMSL)
  float alt;
  /// [m] [@invalid NaN] Std dev of horizontal position, lower bounded by NOISE param
  float eph;
  /// [m] [@invalid NaN] Std dev of vertical position, lower bounded by NOISE param
  float epv;
  /// Counter for reset events on horizontal position coordinates
  uint8_t lat_lon_reset_counter;
} px4_msgs__msg__AuxGlobalPosition;

// Struct for a sequence of px4_msgs__msg__AuxGlobalPosition.
typedef struct px4_msgs__msg__AuxGlobalPosition__Sequence
{
  px4_msgs__msg__AuxGlobalPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__AuxGlobalPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__AUX_GLOBAL_POSITION__STRUCT_H_
