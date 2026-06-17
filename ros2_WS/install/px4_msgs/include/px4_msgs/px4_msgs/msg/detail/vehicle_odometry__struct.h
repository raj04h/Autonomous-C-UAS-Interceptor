// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleOdometry.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MESSAGE_VERSION'.
enum
{
  px4_msgs__msg__VehicleOdometry__MESSAGE_VERSION = 0ul
};

/// Constant 'POSE_FRAME_UNKNOWN'.
/**
  * Unknown frame
 */
enum
{
  px4_msgs__msg__VehicleOdometry__POSE_FRAME_UNKNOWN = 0
};

/// Constant 'POSE_FRAME_NED'.
/**
  * North-East-Down (NED) navigation frame. Aligned with True North.
 */
enum
{
  px4_msgs__msg__VehicleOdometry__POSE_FRAME_NED = 1
};

/// Constant 'POSE_FRAME_FRD'.
/**
  * Forward-Right-Down (FRD) frame. Constant arbitrary heading offset from True North. Z is down.
 */
enum
{
  px4_msgs__msg__VehicleOdometry__POSE_FRAME_FRD = 2
};

/// Constant 'VELOCITY_FRAME_UNKNOWN'.
/**
  * Unknown frame
 */
enum
{
  px4_msgs__msg__VehicleOdometry__VELOCITY_FRAME_UNKNOWN = 0
};

/// Constant 'VELOCITY_FRAME_NED'.
/**
  * NED navigation frame at current position.
 */
enum
{
  px4_msgs__msg__VehicleOdometry__VELOCITY_FRAME_NED = 1
};

/// Constant 'VELOCITY_FRAME_FRD'.
/**
  * FRD navigation frame at current position. Constant arbitrary heading offset from True North. Z is down.
 */
enum
{
  px4_msgs__msg__VehicleOdometry__VELOCITY_FRAME_FRD = 2
};

/// Constant 'VELOCITY_FRAME_BODY_FRD'.
/**
  * FRD body-fixed frame
 */
enum
{
  px4_msgs__msg__VehicleOdometry__VELOCITY_FRAME_BODY_FRD = 3
};

/// Struct defined in msg/VehicleOdometry in the package px4_msgs.
/**
  * Vehicle odometry data
  *
  * Fits ROS REP 147 for aerial vehicles
 */
typedef struct px4_msgs__msg__VehicleOdometry
{
  /// Time since system start
  uint64_t timestamp;
  /// Timestamp sample
  uint64_t timestamp_sample;
  /// Position and orientation frame of reference
  uint8_t pose_frame;
  /// [m] [@frame local frame] [@invalid NaN If invalid/unknown] Position. Origin is position of GC at startup.
  float position[3];
  /// [-] [@invalid NaN First value if invalid/unknown] Attitude (expressed as a quaternion) relative to pose reference frame at current location. Follows the Hamiltonian convention (w, x, y, z, right-handed, passive rotations from body to world)
  float q[4];
  /// Reference frame of the velocity data
  uint8_t velocity_frame;
  /// [m/s] [@frame @velocity_frame] [@invalid NaN If invalid/unknown] Velocity.
  float velocity[3];
  /// [rad/s] [@frame @VELOCITY_FRAME_BODY_FRD] [@invalid NaN If invalid/unknown] Angular velocity in body-fixed frame
  float angular_velocity[3];
  /// Variance of position error
  float position_variance[3];
  /// Variance of orientation/attitude error (expressed in body frame)
  float orientation_variance[3];
  /// Variance of velocity error
  float velocity_variance[3];
  /// Reset counter. Counts reset events on attitude, velocity and position.
  uint8_t reset_counter;
  /// [-] [@invalid 0] Quality. Unused.
  int8_t quality;
} px4_msgs__msg__VehicleOdometry;

// Struct for a sequence of px4_msgs__msg__VehicleOdometry.
typedef struct px4_msgs__msg__VehicleOdometry__Sequence
{
  px4_msgs__msg__VehicleOdometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleOdometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__STRUCT_H_
