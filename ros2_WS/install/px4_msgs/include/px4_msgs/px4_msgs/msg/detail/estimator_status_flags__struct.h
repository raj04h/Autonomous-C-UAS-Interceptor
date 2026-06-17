// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS_FLAGS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS_FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EstimatorStatusFlags in the package px4_msgs.
typedef struct px4_msgs__msg__EstimatorStatusFlags
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// filter control status
  /// number of filter control status (cs) changes
  uint32_t control_status_changes;
  /// 0 - true if the filter tilt alignment is complete
  bool cs_tilt_align;
  /// 1 - true if the filter yaw alignment is complete
  bool cs_yaw_align;
  /// 2 - true if GNSS position measurement fusion is intended
  bool cs_gnss_pos;
  /// 3 - true if optical flow measurements fusion is intended
  bool cs_opt_flow;
  /// 4 - true if a simple magnetic yaw heading fusion is intended
  bool cs_mag_hdg;
  /// 5 - true if 3-axis magnetometer measurement fusion is intended
  bool cs_mag_3d;
  /// 6 - true if synthetic magnetic declination measurements fusion is intended
  bool cs_mag_dec;
  /// 7 - true when the vehicle is airborne
  bool cs_in_air;
  /// 8 - true when wind velocity is being estimated
  bool cs_wind;
  /// 9 - true when baro data is being fused
  bool cs_baro_hgt;
  /// 10 - true when range finder data is being fused for height aiding
  bool cs_rng_hgt;
  /// 11 - true when GPS altitude is being fused
  bool cs_gps_hgt;
  /// 12 - true when local position data fusion from external vision is intended
  bool cs_ev_pos;
  /// 13 - true when yaw data from external vision measurements fusion is intended
  bool cs_ev_yaw;
  /// 14 - true when height data from external vision measurements is being fused
  bool cs_ev_hgt;
  /// 15 - true when synthetic sideslip measurements are being fused
  bool cs_fuse_beta;
  /// 16 - true when the mag field does not match the expected strength
  bool cs_mag_field_disturbed;
  /// 17 - true when the vehicle is operating as a fixed wing vehicle
  bool cs_fixed_wing;
  /// 18 - true when the magnetometer has been declared faulty and is no longer being used
  bool cs_mag_fault;
  /// 19 - true when airspeed measurements are being fused
  bool cs_fuse_aspd;
  /// 20 - true when protection from ground effect induced static pressure rise is active
  bool cs_gnd_effect;
  /// 21 - true when rng data wasn't ready for more than 10s and new rng values haven't changed enough
  bool cs_rng_stuck;
  /// 22 - true when yaw (not ground course) data fusion from a GPS receiver is intended
  bool cs_gnss_yaw;
  /// 23 - true when the in-flight mag field alignment has been completed
  bool cs_mag_aligned_in_flight;
  /// 24 - true when local frame velocity data fusion from external vision measurements is intended
  bool cs_ev_vel;
  /// 25 - true when we are using a synthesized measurement for the magnetometer Z component
  bool cs_synthetic_mag_z;
  /// 26 - true when the vehicle is at rest
  bool cs_vehicle_at_rest;
  /// 27 - true when the GNSS heading has been declared faulty and is no longer being used
  bool cs_gnss_yaw_fault;
  /// 28 - true when the range finder has been declared faulty and is no longer being used
  bool cs_rng_fault;
  /// 29 - true if we are no longer fusing measurements that constrain horizontal velocity drift
  bool cs_inertial_dead_reckoning;
  /// 30 - true if we are navigationg reliant on wind relative measurements
  bool cs_wind_dead_reckoning;
  /// 31 - true when the range finder kinematic consistency check is passing
  bool cs_rng_kin_consistent;
  /// 32 - true when fake position measurements are being fused
  bool cs_fake_pos;
  /// 33 - true when fake height measurements are being fused
  bool cs_fake_hgt;
  /// 34 - true when gravity vector measurements are being fused
  bool cs_gravity_vector;
  /// 35 - true if 3-axis magnetometer measurement fusion (mag states only) is intended
  bool cs_mag;
  /// 36 - true when the EV heading has been declared faulty and is no longer being used
  bool cs_ev_yaw_fault;
  /// 37 - true when the heading obtained from mag data is declared consistent with the filter
  bool cs_mag_heading_consistent;
  /// 38 - true if auxiliary global position measurement fusion is intended
  bool cs_aux_gpos;
  /// 39 - true if we are fusing range finder data for terrain
  bool cs_rng_terrain;
  /// 40 - true if we are fusing flow data for terrain
  bool cs_opt_flow_terrain;
  /// 41 - true if a valid constant position is being fused
  bool cs_valid_fake_pos;
  /// 42 - true if the vehicle is at a constant position
  bool cs_constant_pos;
  /// 43 - true when the current baro has been declared faulty and is no longer being used
  bool cs_baro_fault;
  /// 44 - true if GNSS velocity measurement fusion is intended
  bool cs_gnss_vel;
  /// 45 - true if GNSS true if GNSS measurements (lat, lon, vel) have been declared faulty
  bool cs_gnss_fault;
  /// 46 - true if yaw has been set manually
  bool cs_yaw_manual;
  /// 47 - true if GNSS true if GNSS measurements (alt) have been declared faulty
  bool cs_gnss_hgt_fault;
  /// 48 - true if the vehicle is in vtol transition
  bool cs_in_transition;
  /// 49 - true when heading is observable
  bool cs_heading_observable;
  /// fault status
  /// number of filter fault status (fs) changes
  uint32_t fault_status_changes;
  /// 0 - true if the fusion of the magnetometer X-axis has encountered a numerical error
  bool fs_bad_mag_x;
  /// 1 - true if the fusion of the magnetometer Y-axis has encountered a numerical error
  bool fs_bad_mag_y;
  /// 2 - true if the fusion of the magnetometer Z-axis has encountered a numerical error
  bool fs_bad_mag_z;
  /// 3 - true if the fusion of the heading angle has encountered a numerical error
  bool fs_bad_hdg;
  /// 4 - true if the fusion of the magnetic declination has encountered a numerical error
  bool fs_bad_mag_decl;
  /// 5 - true if fusion of the airspeed has encountered a numerical error
  bool fs_bad_airspeed;
  /// 6 - true if fusion of the synthetic sideslip constraint has encountered a numerical error
  bool fs_bad_sideslip;
  /// 7 - true if fusion of the optical flow X axis has encountered a numerical error
  bool fs_bad_optflow_x;
  /// 8 - true if fusion of the optical flow Y axis has encountered a numerical error
  bool fs_bad_optflow_y;
  /// 10 - true if bad vertical accelerometer data has been detected
  bool fs_bad_acc_vertical;
  /// 11 - true if delta velocity data contains clipping (asymmetric railing)
  bool fs_bad_acc_clipping;
} px4_msgs__msg__EstimatorStatusFlags;

// Struct for a sequence of px4_msgs__msg__EstimatorStatusFlags.
typedef struct px4_msgs__msg__EstimatorStatusFlags__Sequence
{
  px4_msgs__msg__EstimatorStatusFlags * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorStatusFlags__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS_FLAGS__STRUCT_H_
