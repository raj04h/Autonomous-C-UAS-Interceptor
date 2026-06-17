// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/PurePursuitStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PURE_PURSUIT_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__PURE_PURSUIT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PurePursuitStatus in the package px4_msgs.
/**
  * Pure pursuit status
 */
typedef struct px4_msgs__msg__PurePursuitStatus
{
  /// Time since system start
  uint64_t timestamp;
  /// [@range 0, inf] Lookahead distance of pure the pursuit controller
  float lookahead_distance;
  /// [rad] [@range -pi, pi] [@frame NED] Target bearing calculated by the pure pursuit controller
  float target_bearing;
  /// [@range -inf (Left of the path), inf (Right of the path)] Shortest distance from the vehicle to the path
  float crosstrack_error;
  /// [@range -inf, inf]Distance from the vehicle to the current waypoint
  float distance_to_waypoint;
  /// [rad] [@range -pi, pi] [@frame NED]Bearing towards current waypoint
  float bearing_to_waypoint;
} px4_msgs__msg__PurePursuitStatus;

// Struct for a sequence of px4_msgs__msg__PurePursuitStatus.
typedef struct px4_msgs__msg__PurePursuitStatus__Sequence
{
  px4_msgs__msg__PurePursuitStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__PurePursuitStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__PURE_PURSUIT_STATUS__STRUCT_H_
