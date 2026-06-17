// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorFusionControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_FUSION_CONTROL__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_FUSION_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EstimatorFusionControl in the package px4_msgs.
typedef struct px4_msgs__msg__EstimatorFusionControl
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// sensor intended for fusion (enabled via EKF2_SENS_EN AND CTRL param != disabled)
  bool gps_intended[2];
  bool of_intended;
  bool ev_intended;
  bool agp_intended[4];
  bool baro_intended;
  bool rng_intended;
  bool mag_intended;
  bool aspd_intended;
  bool rngbcn_intended;
  /// whether the estimator is actively fusing data from each source
  bool gps_active[2];
  bool of_active;
  bool ev_active;
  bool agp_active[4];
  bool baro_active;
  bool rng_active;
  bool mag_active;
  bool aspd_active;
  bool rngbcn_active;
} px4_msgs__msg__EstimatorFusionControl;

// Struct for a sequence of px4_msgs__msg__EstimatorFusionControl.
typedef struct px4_msgs__msg__EstimatorFusionControl__Sequence
{
  px4_msgs__msg__EstimatorFusionControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorFusionControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_FUSION_CONTROL__STRUCT_H_
