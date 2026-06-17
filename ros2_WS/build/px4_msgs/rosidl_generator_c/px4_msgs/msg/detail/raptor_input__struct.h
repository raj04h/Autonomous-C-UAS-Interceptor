// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RaptorInput.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RAPTOR_INPUT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__RAPTOR_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MESSAGE_VERSION'.
/**
  * The exact inputs to the Raptor foundation policy.
  * Having access to the exact inputs helps with debugging and post-hoc analysis.
 */
enum
{
  px4_msgs__msg__RaptorInput__MESSAGE_VERSION = 0ul
};

/// Constant 'ACTION_DIM'.
/**
  * Policy output dimensionality (for quadrotors)
 */
enum
{
  px4_msgs__msg__RaptorInput__ACTION_DIM = 4
};

/// Struct defined in msg/RaptorInput in the package px4_msgs.
/**
  * Raptor Input
 */
typedef struct px4_msgs__msg__RaptorInput
{
  /// Time since system start
  uint64_t timestamp;
  /// Sampling timestamp of the data this control response is based on
  uint64_t timestamp_sample;
  /// Signals if the policy is active (aka publishing actuator_motors)
  bool active;
  /// [m] [@frame FLU] Position of the vehicle_local_position frame
  float position[3];
  /// Orientation in the vehicle_attitude frame but using the FLU convention as a unit quaternion (w, x, y, z)
  float orientation[4];
  /// [m/s] [@frame FLU] Linear velocity in the vehicle_local_position frame
  float linear_velocity[3];
  /// [rad/s]  [@frame FLU] Angular velocity in the body frame
  float angular_velocity[3];
  /// [@range -1, 1] Previous action. Motor commands normalized to [-1, 1]
  float previous_action[4];
} px4_msgs__msg__RaptorInput;

// Struct for a sequence of px4_msgs__msg__RaptorInput.
typedef struct px4_msgs__msg__RaptorInput__Sequence
{
  px4_msgs__msg__RaptorInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RaptorInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__RAPTOR_INPUT__STRUCT_H_
