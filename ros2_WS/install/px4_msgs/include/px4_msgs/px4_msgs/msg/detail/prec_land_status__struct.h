// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/PrecLandStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PREC_LAND_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__PREC_LAND_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PREC_LAND_STATE_STOPPED'.
/**
  * Task not active (inactivated or never started)
 */
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_STOPPED = 0
};

/// Constant 'PREC_LAND_STATE_START'.
/**
  * Task just activated, initial setup
 */
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_START = 1
};

/// Constant 'PREC_LAND_STATE_HORIZONTAL'.
/**
  * Positioning over landing target while maintaining altitude
 */
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_HORIZONTAL = 2
};

/// Constant 'PREC_LAND_STATE_DESCEND'.
/**
  * Descending while staying over the target
 */
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_DESCEND = 3
};

/// Constant 'PREC_LAND_STATE_FINAL'.
/**
  * Final landing approach (continues even without target in sight)
 */
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_FINAL = 4
};

/// Constant 'PREC_LAND_STATE_SEARCH'.
/**
  * Searching for the landing target
 */
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_SEARCH = 5
};

/// Constant 'PREC_LAND_STATE_FALLBACK'.
/**
  * Fallback landing method (no precision)
 */
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_FALLBACK = 6
};

/// Constant 'PREC_LAND_STATE_DONE'.
/**
  * Precision landing finished
 */
enum
{
  px4_msgs__msg__PrecLandStatus__PREC_LAND_STATE_DONE = 7
};

/// Struct defined in msg/PrecLandStatus in the package px4_msgs.
/**
  * Precision-landing runtime status: a single state captures both whether precision landing is active and which phase it is in.
  *
  * Published by: navigator (precland.cpp).
  * Subscribed by: vision_target_estimator, flight_mode_manager (FlightTaskAuto).
  *
  * STOPPED is published when the precision-landing task is not active (just inactivated, or never started).
  * The phase values (START..FALLBACK) are only published while the task is running and not yet finished.
  * DONE is published once on successful completion, then STOPPED on the subsequent inactivation.
 */
typedef struct px4_msgs__msg__PrecLandStatus
{
  /// Time since system start
  uint64_t timestamp;
  /// Current precision-landing state
  uint8_t state;
} px4_msgs__msg__PrecLandStatus;

// Struct for a sequence of px4_msgs__msg__PrecLandStatus.
typedef struct px4_msgs__msg__PrecLandStatus__Sequence
{
  px4_msgs__msg__PrecLandStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__PrecLandStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__PREC_LAND_STATUS__STRUCT_H_
