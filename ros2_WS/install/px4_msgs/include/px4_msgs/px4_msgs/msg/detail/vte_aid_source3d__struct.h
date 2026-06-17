// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VteAidSource3d.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTE_AID_SOURCE3D__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VTE_AID_SOURCE3D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_IDLE'.
/**
  * No fusion attempted yet
 */
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_IDLE = 0
};

/// Constant 'STATUS_FUSED_CURRENT'.
/**
  * Fused immediately (low latency)
 */
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_FUSED_CURRENT = 1
};

/// Constant 'STATUS_FUSED_OOSM'.
/**
  * Fused via history buffer
 */
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_FUSED_OOSM = 2
};

/// Constant 'STATUS_REJECT_NIS'.
/**
  * Rejected by Normalized Innovation Squared check
 */
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_REJECT_NIS = 3
};

/// Constant 'STATUS_REJECT_COV'.
/**
  * Rejected due to invalid/infinite covariance or numerical error
 */
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_REJECT_COV = 4
};

/// Constant 'STATUS_REJECT_TOO_OLD'.
/**
  * Rejected: older than buffer limit (kOosmMaxTimeUs) or oldest sample
 */
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_REJECT_TOO_OLD = 5
};

/// Constant 'STATUS_REJECT_TOO_NEW'.
/**
  * Rejected: timestamp in the future (beyond tolerance)
 */
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_REJECT_TOO_NEW = 6
};

/// Constant 'STATUS_REJECT_STALE'.
/**
  * Rejected: history was reset due to staleness/discontinuity
 */
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_REJECT_STALE = 7
};

/// Constant 'STATUS_REJECT_EMPTY'.
/**
  * Rejected: history buffer not yet populated
 */
enum
{
  px4_msgs__msg__VteAidSource3d__STATUS_REJECT_EMPTY = 8
};

/// Struct defined in msg/VteAidSource3d in the package px4_msgs.
/**
  * Vision Target Estimator 3D fusion aid-source diagnostics, one fusion_status per NED axis.
  *
  * Published by: vision_target_estimator (VTEPosition) on every fusion attempt, including rejected ones.
  * Subscribed by: logger only. Inspect observation, innovation, test_ratio, and per-axis fusion_status to debug why a measurement was or was not fused.
 */
typedef struct px4_msgs__msg__VteAidSource3d
{
  /// Time since system start
  uint64_t timestamp;
  /// Timestamp of the raw observation
  uint64_t timestamp_sample;
  /// Timestamp of last filter prediction
  uint64_t time_last_predict;
  /// Observation & Innovation
  /// [-] [@frame NED] Sensor observation attempted to be fused
  float observation[3];
  /// [-] [@frame NED] Variance of the observation attempted to be fused
  float observation_variance[3];
  /// [-] [@frame NED] Kalman Filter innovation (y = z - Hx)
  float innovation[3];
  /// [-] [@frame NED] Kalman Filter variance of the innovation
  float innovation_variance[3];
  /// Normalized innovation squared (NIS)
  float test_ratio[3];
  /// Fusion status code per axis
  uint8_t fusion_status[3];
  /// OOSM Diagnostics (Shared across axes)
  /// [ms] (now - timestamp_sample)
  float time_since_meas_ms;
  /// Number of steps replayed in OOSM (0 if current or failed)
  uint8_t history_steps;
} px4_msgs__msg__VteAidSource3d;

// Struct for a sequence of px4_msgs__msg__VteAidSource3d.
typedef struct px4_msgs__msg__VteAidSource3d__Sequence
{
  px4_msgs__msg__VteAidSource3d * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VteAidSource3d__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VTE_AID_SOURCE3D__STRUCT_H_
