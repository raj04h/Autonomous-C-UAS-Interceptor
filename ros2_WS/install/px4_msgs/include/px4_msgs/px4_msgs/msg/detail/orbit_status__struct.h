// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/OrbitStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ORBIT_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ORBIT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FRAME_GLOBAL'.
/**
  * WGS84 global frame, MSL altitude. x/y = latitude/longitude (degrees × 1e7)
 */
enum
{
  px4_msgs__msg__OrbitStatus__FRAME_GLOBAL = 0
};

/// Constant 'FRAME_LOCAL_NED'.
/**
  * Local NED frame. x/y = north/east position (meters × 1e4)
 */
enum
{
  px4_msgs__msg__OrbitStatus__FRAME_LOCAL_NED = 1
};

/// Constant 'FRAME_GLOBAL_RELATIVE_ALT'.
/**
  * WGS84 global frame, altitude above home. x/y = latitude/longitude (degrees × 1e7)
 */
enum
{
  px4_msgs__msg__OrbitStatus__FRAME_GLOBAL_RELATIVE_ALT = 3
};

/// Constant 'FRAME_GLOBAL_TERRAIN_ALT'.
/**
  * WGS84 global frame, altitude above terrain. x/y = latitude/longitude (degrees × 1e7)
 */
enum
{
  px4_msgs__msg__OrbitStatus__FRAME_GLOBAL_TERRAIN_ALT = 10
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER'.
/**
  * Vehicle front points to the center (default).
 */
enum
{
  px4_msgs__msg__OrbitStatus__ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER = 0
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING'.
/**
  * Vehicle front holds heading when message received.
 */
enum
{
  px4_msgs__msg__OrbitStatus__ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING = 1
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_UNCONTROLLED'.
/**
  * Yaw uncontrolled.
 */
enum
{
  px4_msgs__msg__OrbitStatus__ORBIT_YAW_BEHAVIOUR_UNCONTROLLED = 2
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE'.
/**
  * Vehicle front follows flight path (tangential to circle).
 */
enum
{
  px4_msgs__msg__OrbitStatus__ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE = 3
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED'.
/**
  * Yaw controlled by RC input.
 */
enum
{
  px4_msgs__msg__OrbitStatus__ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED = 4
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_UNCHANGED'.
/**
  * Vehicle uses current yaw behaviour (unchanged). The vehicle-default yaw behaviour is used if this value is specified when orbit is first commanded.
 */
enum
{
  px4_msgs__msg__OrbitStatus__ORBIT_YAW_BEHAVIOUR_UNCHANGED = 5
};

/// Struct defined in msg/OrbitStatus in the package px4_msgs.
/**
  * Orbit status
  *
  * Current state of an orbit or loiter manoeuver, published while the maneuver is executing.
  * For multirotors, published by the orbit flight task (FlightTaskOrbit) on each control cycle
  * when a valid GPS projection is available.
  * For fixed-wing, published by FixedWingModeManager during loiter.
  * Subscribed by the MAVLink module and streamed to the GCS as ORBIT_EXECUTION_STATUS (message 360).
 */
typedef struct px4_msgs__msg__OrbitStatus
{
  /// Time since system start
  uint64_t timestamp;
  /// Radius of the orbit circle. Positive values orbit clockwise, negative values orbit counter-clockwise.
  float radius;
  /// The coordinate system of the fields: x, y, z
  uint8_t frame;
  /// X coordinate of center point. Coordinate system depends on frame field: `local = x position in meters * 1e4`, `global = latitude in degrees * 1e7`.
  double x;
  /// Y coordinate of center point. Coordinate system depends on frame field: `local = y position in meters * 1e4`, `global = longitude in degrees * 1e7`.
  double y;
  /// Altitude of center point. Coordinate system depends on frame field.
  float z;
  uint8_t yaw_behaviour;
} px4_msgs__msg__OrbitStatus;

// Struct for a sequence of px4_msgs__msg__OrbitStatus.
typedef struct px4_msgs__msg__OrbitStatus__Sequence
{
  px4_msgs__msg__OrbitStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__OrbitStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ORBIT_STATUS__STRUCT_H_
