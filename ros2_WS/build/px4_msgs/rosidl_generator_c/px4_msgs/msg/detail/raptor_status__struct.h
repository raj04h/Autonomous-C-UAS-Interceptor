// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RaptorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RAPTOR_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__RAPTOR_STATUS__STRUCT_H_

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
  * Diagnostic messages for the Raptor foundation policy.
  * This diagnostic data is useful for debugging (e.g. identifying missing input information).
 */
enum
{
  px4_msgs__msg__RaptorStatus__MESSAGE_VERSION = 0ul
};

/// Constant 'EXIT_REASON_NONE'.
/**
  * No exit reason => Raptor control step was executed (actuator_motors should have been published)
 */
enum
{
  px4_msgs__msg__RaptorStatus__EXIT_REASON_NONE = 0
};

/// Constant 'EXIT_REASON_NO_ANGULAR_VELOCITY_UPDATE'.
/**
  * We synchronize the control onto the input observation with the highest update frequency, which is vehicle_angular_velocity. If there was no update, we do not need to execute the policy again
 */
enum
{
  px4_msgs__msg__RaptorStatus__EXIT_REASON_NO_ANGULAR_VELOCITY_UPDATE = 1
};

/// Constant 'EXIT_REASON_NOT_ALL_OBSERVATIONS_SET'.
/**
  * We can not execute the policy if not all observations are available
 */
enum
{
  px4_msgs__msg__RaptorStatus__EXIT_REASON_NOT_ALL_OBSERVATIONS_SET = 2
};

/// Constant 'EXIT_REASON_ANGULAR_VELOCITY_STALE'.
/**
  * If OBSERVATION_TIMEOUT_ANGULAR_VELOCITY is exceeded, we treat the vehicle_angular_velocity as stale and can not run the policy
 */
enum
{
  px4_msgs__msg__RaptorStatus__EXIT_REASON_ANGULAR_VELOCITY_STALE = 3
};

/// Constant 'EXIT_REASON_LOCAL_POSITION_STALE'.
/**
  * If OBSERVATION_TIMEOUT_LOCAL_POSITION is exceeded, we treat the vehicle_local_position as stale and can not run the policy
 */
enum
{
  px4_msgs__msg__RaptorStatus__EXIT_REASON_LOCAL_POSITION_STALE = 4
};

/// Constant 'EXIT_REASON_ATTITUDE_STALE'.
/**
  * If OBSERVATION_TIMEOUT_ATTITUDE is exceeded, we treat the vehicle_attitude as stale and can not run the policy
 */
enum
{
  px4_msgs__msg__RaptorStatus__EXIT_REASON_ATTITUDE_STALE = 5
};

/// Constant 'EXIT_REASON_EXECUTOR_STATUS_SOURCE_NOT_CONTROL'.
/**
  * The executor that runs the policy can run in oversampling mode, where it decides if the policy should be ran based on the timestamp and not based on fixed synchronization onto the vehicle_angular_velocity. In this case the executor can decide to skip running the policy if the interval is too small, in which case this flag is set.
 */
enum
{
  px4_msgs__msg__RaptorStatus__EXIT_REASON_EXECUTOR_STATUS_SOURCE_NOT_CONTROL = 6
};

/// Struct defined in msg/RaptorStatus in the package px4_msgs.
/**
  * Raptor Status
 */
typedef struct px4_msgs__msg__RaptorStatus
{
  /// Time since system start
  uint64_t timestamp;
  /// Sampling timestamp of the data this control response is based on
  uint64_t timestamp_sample;
  /// Flag signalling if the vehicle_angular_velocity was updated
  bool subscription_update_angular_velocity;
  /// Flag signalling if the vehicle_local_position was updated
  bool subscription_update_local_position;
  /// Flag signalling if the vehicle_attitude was updated
  bool subscription_update_attitude;
  /// Flag signalling if the trajectory_setpoint was updated
  bool subscription_update_trajectory_setpoint;
  /// Flag signalling if the vehicle_status was updated
  bool subscription_update_vehicle_status;
  /// Exit reason identifier. Representing conditions that lead to the Raptor policy not being executed
  uint8_t exit_reason;
  /// Timestamp of the last received vehicle_angular_velocity message
  uint32_t timestamp_last_vehicle_angular_velocity;
  /// Timestamp of the last received vehicle_local_position message
  uint32_t timestamp_last_vehicle_local_position;
  /// Timestamp of the last received vehicle_attitude message
  uint32_t timestamp_last_vehicle_attitude;
  /// Timestamp of the last received trajectory_setpoint message
  uint32_t timestamp_last_trajectory_setpoint;
  /// True if vehicle_angular_velocity data is considered stale (exceeded timeout)
  bool vehicle_angular_velocity_stale;
  /// True if vehicle_local_position data is considered stale (exceeded timeout)
  bool vehicle_local_position_stale;
  /// True if vehicle_attitude data is considered stale (exceeded timeout)
  bool vehicle_attitude_stale;
  /// True if trajectory_setpoint data is considered stale (exceeded timeout)
  bool trajectory_setpoint_stale;
  /// True if the Raptor policy is currently active (publishing actuator_motors)
  bool active;
  /// The policy is trained at a fixed frequency (e.g. 100 Hz) but we might want to use it for control at higher frequencies (e.g. 400 Hz), which leads to a number of intermediate steps before the actual policy state is advanced (in this case 4 = 400 Hz / 100 Hz). This field provides the current substep (e.g. 0-3).
  uint8_t substep;
  /// Time interval between control updates
  float control_interval;
  /// The average trajectory setpoint arrival time interval (since Raptor mode activation within NUM_TRAJECTORY_SETPOINT_DTS received trajectory_setpoint messages)
  float trajectory_setpoint_dt_mean;
  /// The max trajectory setpoint arrival time interval (since Raptor mode activation and within NUM_TRAJECTORY_SETPOINT_DTS received trajectory_setpoint messages)
  float trajectory_setpoint_dt_max;
  /// The max trajectory setpoint arrival time interval (since Raptor mode activation)
  float trajectory_setpoint_dt_max_since_activation;
  /// [m] [@frame FLU] Internal reference position
  float internal_reference_position[3];
  /// [m/s] [@frame FLU] Internal reference linear velocity
  float internal_reference_linear_velocity[3];
} px4_msgs__msg__RaptorStatus;

// Struct for a sequence of px4_msgs__msg__RaptorStatus.
typedef struct px4_msgs__msg__RaptorStatus__Sequence
{
  px4_msgs__msg__RaptorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RaptorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__RAPTOR_STATUS__STRUCT_H_
