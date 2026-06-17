// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FixedWingLateralGuidanceStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_GUIDANCE_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_GUIDANCE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FixedWingLateralGuidanceStatus in the package px4_msgs.
/**
  * Fixed Wing Lateral Guidance Status message
  * Published by fw_pos_control module to report the resultant lateral setpoints and NPFG debug outputs
 */
typedef struct px4_msgs__msg__FixedWingLateralGuidanceStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// [@range -pi, pi] Desired direction of travel over ground w.r.t (true) North. Set by guidance law
  float course_setpoint;
  /// [m/s^2] [FRD] lateral acceleration demand only for maintaining curvature
  float lateral_acceleration_ff;
  /// [@range 0,1] bearing feasibility
  float bearing_feas;
  /// [@range 0,1] on-track bearing feasibility
  float bearing_feas_on_track;
  /// signed track error
  float signed_track_error;
  /// track error bound
  float track_error_bound;
  /// [m] [@range 0, INF] [@INVALID NaN] distance from the current waypoint at which the navigator should advance to the next one (turn anticipation). If below NAV_ACC_RAD, the parameter value is used instead.
  float switch_distance;
  /// adapted period (if auto-tuning enabled)
  float adapted_period;
  /// true = wind estimate is valid and/or being used by controller (also indicates if wind estimate usage is disabled despite being valid)
  uint8_t wind_est_valid;
} px4_msgs__msg__FixedWingLateralGuidanceStatus;

// Struct for a sequence of px4_msgs__msg__FixedWingLateralGuidanceStatus.
typedef struct px4_msgs__msg__FixedWingLateralGuidanceStatus__Sequence
{
  px4_msgs__msg__FixedWingLateralGuidanceStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FixedWingLateralGuidanceStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FIXED_WING_LATERAL_GUIDANCE_STATUS__STRUCT_H_
