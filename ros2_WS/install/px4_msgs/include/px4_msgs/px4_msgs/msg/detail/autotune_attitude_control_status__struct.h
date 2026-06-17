// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/AutotuneAttitudeControlStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_IDLE'.
/**
  * Idle (not running)
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_IDLE = 0
};

/// Constant 'STATE_INIT'.
/**
  * Initialize filters and setup
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_INIT = 1
};

/// Constant 'STATE_ROLL_AMPLITUDE_DETECTION'.
/**
  * FW only: determine required excitation amplitude (roll)
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_ROLL_AMPLITUDE_DETECTION = 2
};

/// Constant 'STATE_ROLL'.
/**
  * Roll-axis excitation and model identification
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_ROLL = 3
};

/// Constant 'STATE_ROLL_PAUSE'.
/**
  * Pause to return to level flight
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_ROLL_PAUSE = 4
};

/// Constant 'STATE_PITCH_AMPLITUDE_DETECTION'.
/**
  * FW only: determine required excitation amplitude (pitch)
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_PITCH_AMPLITUDE_DETECTION = 5
};

/// Constant 'STATE_PITCH'.
/**
  * Pitch-axis excitation and model identification
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_PITCH = 6
};

/// Constant 'STATE_PITCH_PAUSE'.
/**
  * Pause to return to level flight
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_PITCH_PAUSE = 7
};

/// Constant 'STATE_YAW_AMPLITUDE_DETECTION'.
/**
  * FW only: determine required excitation amplitude (yaw)
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_YAW_AMPLITUDE_DETECTION = 8
};

/// Constant 'STATE_YAW'.
/**
  * Yaw-axis excitation and model identification
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_YAW = 9
};

/// Constant 'STATE_YAW_PAUSE'.
/**
  * Pause to return to level flight
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_YAW_PAUSE = 10
};

/// Constant 'STATE_VERIFICATION'.
/**
  * Verify model and candidate gains
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_VERIFICATION = 11
};

/// Constant 'STATE_APPLY'.
/**
  * Apply gains
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_APPLY = 12
};

/// Constant 'STATE_TEST'.
/**
  * Test gains in closed-loop
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_TEST = 13
};

/// Constant 'STATE_COMPLETE'.
/**
  * Tuning completed successfully
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_COMPLETE = 14
};

/// Constant 'STATE_FAIL'.
/**
  * Tuning failed (model invalid or controller unstable)
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_FAIL = 15
};

/// Constant 'STATE_WAIT_FOR_DISARM'.
/**
  * Waiting for disarm before finalizing
 */
enum
{
  px4_msgs__msg__AutotuneAttitudeControlStatus__STATE_WAIT_FOR_DISARM = 16
};

/// Struct defined in msg/AutotuneAttitudeControlStatus in the package px4_msgs.
/**
  * Autotune attitude control status
  *
  * This message is published by the fw_autotune_attitude_control and mc_autotune_attitude_control modules when the user engages autotune,
  * and is subscribed to by the respective attitude controllers to command rate setpoints.
  *
  * The rate_sp field is consumed by the controllers, while the remaining fields (model coefficients, gains, filters, and autotune state) are used for logging and debugging.
 */
typedef struct px4_msgs__msg__AutotuneAttitudeControlStatus
{
  /// Time since system start
  uint64_t timestamp;
  /// Coefficients of the identified discrete-time model
  float coeff[5];
  /// Coefficients' variance of the identified discrete-time model
  float coeff_var[5];
  /// Fitness of the parameter estimate
  float fitness;
  /// Innovation (residual error between model and measured output)
  float innov;
  /// Model sample time used for identification
  float dt_model;
  /// Proportional rate-loop gain (ideal form)
  float kc;
  /// Integral rate-loop gain (ideal form)
  float ki;
  /// Derivative rate-loop gain (ideal form)
  float kd;
  /// Feedforward rate-loop gain
  float kff;
  /// Proportional attitude gain
  float att_p;
  /// Rate setpoint commanded to the attitude controller.
  float rate_sp[3];
  /// Filtered input signal (normalized torque setpoint) used in system identification.
  float u_filt;
  /// Filtered output signal (angular velocity) used in system identification.
  float y_filt;
  /// Current state of the autotune procedure.
  uint8_t state;
} px4_msgs__msg__AutotuneAttitudeControlStatus;

// Struct for a sequence of px4_msgs__msg__AutotuneAttitudeControlStatus.
typedef struct px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence
{
  px4_msgs__msg__AutotuneAttitudeControlStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__STRUCT_H_
