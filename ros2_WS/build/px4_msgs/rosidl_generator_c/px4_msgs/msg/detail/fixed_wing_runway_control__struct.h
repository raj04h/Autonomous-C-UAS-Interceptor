// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FixedWingRunwayControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIXED_WING_RUNWAY_CONTROL__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FIXED_WING_RUNWAY_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_THROTTLE_RAMP'.
/**
  * ramping up throttle
 */
enum
{
  px4_msgs__msg__FixedWingRunwayControl__STATE_THROTTLE_RAMP = 0
};

/// Constant 'STATE_CLAMPED_TO_RUNWAY'.
/**
  * clamped to runway, controlling yaw directly (wheel or rudder)
 */
enum
{
  px4_msgs__msg__FixedWingRunwayControl__STATE_CLAMPED_TO_RUNWAY = 1
};

/// Constant 'STATE_CLIMBOUT'.
/**
  * climbout to safe height before navigation
 */
enum
{
  px4_msgs__msg__FixedWingRunwayControl__STATE_CLIMBOUT = 2
};

/// Constant 'STATE_FLYING'.
/**
  * navigate freely
 */
enum
{
  px4_msgs__msg__FixedWingRunwayControl__STATE_FLYING = 3
};

/// Struct defined in msg/FixedWingRunwayControl in the package px4_msgs.
/**
  * Auxiliary control fields for fixed-wing runway takeoff/landing
 */
typedef struct px4_msgs__msg__FixedWingRunwayControl
{
  /// Passes information from the FixedWingModeManager to the FixedWingAttitudeController (wheel control) and FixedWingLandDetector (takeoff state)
  /// [us] time since system start
  uint64_t timestamp;
  /// Current state of runway takeoff state machine
  uint8_t runway_takeoff_state;
  /// Flag that enables the wheel steering.
  bool wheel_steering_enabled;
  /// [norm] [@range -1, 1] [FRD] Manual wheel nudging, added to controller output. NAN is interpreted as 0.
  float wheel_steering_nudging_rate;
} px4_msgs__msg__FixedWingRunwayControl;

// Struct for a sequence of px4_msgs__msg__FixedWingRunwayControl.
typedef struct px4_msgs__msg__FixedWingRunwayControl__Sequence
{
  px4_msgs__msg__FixedWingRunwayControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FixedWingRunwayControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FIXED_WING_RUNWAY_CONTROL__STRUCT_H_
