// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/DeviceInformation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DEVICE_INFORMATION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__DEVICE_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEVICE_TYPE_GENERIC'.
/**
  * Generic/unknown sensor
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_GENERIC = 0
};

/// Constant 'DEVICE_TYPE_AIRSPEED'.
/**
  * Airspeed sensor
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_AIRSPEED = 1
};

/// Constant 'DEVICE_TYPE_ESC'.
/**
  * ESC
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_ESC = 2
};

/// Constant 'DEVICE_TYPE_SERVO'.
/**
  * Servo
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_SERVO = 3
};

/// Constant 'DEVICE_TYPE_GPS'.
/**
  * GPS
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_GPS = 4
};

/// Constant 'DEVICE_TYPE_MAGNETOMETER'.
/**
  * Magnetometer
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_MAGNETOMETER = 5
};

/// Constant 'DEVICE_TYPE_PARACHUTE'.
/**
  * Parachute
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_PARACHUTE = 6
};

/// Constant 'DEVICE_TYPE_RANGEFINDER'.
/**
  * Rangefinder
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_RANGEFINDER = 7
};

/// Constant 'DEVICE_TYPE_WINCH'.
/**
  * Winch
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_WINCH = 8
};

/// Constant 'DEVICE_TYPE_BAROMETER'.
/**
  * Barometer
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_BAROMETER = 9
};

/// Constant 'DEVICE_TYPE_OPTICAL_FLOW'.
/**
  * Optical flow
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_OPTICAL_FLOW = 10
};

/// Constant 'DEVICE_TYPE_ACCELEROMETER'.
/**
  * Accelerometer
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_ACCELEROMETER = 11
};

/// Constant 'DEVICE_TYPE_GYROSCOPE'.
/**
  * Gyroscope
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_GYROSCOPE = 12
};

/// Constant 'DEVICE_TYPE_DIFFERENTIAL_PRESSURE'.
/**
  * Differential pressure
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_DIFFERENTIAL_PRESSURE = 13
};

/// Constant 'DEVICE_TYPE_BATTERY'.
/**
  * Battery
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_BATTERY = 14
};

/// Constant 'DEVICE_TYPE_HYGROMETER'.
/**
  * Hygrometer
 */
enum
{
  px4_msgs__msg__DeviceInformation__DEVICE_TYPE_HYGROMETER = 15
};

/// Struct defined in msg/DeviceInformation in the package px4_msgs.
/**
  * Device information
  *
  * Can be used to uniquely associate a device_id from a sensor topic with a physical device using serial number.
  * as well as tracking of the used firmware versions on the devices.
 */
typedef struct px4_msgs__msg__DeviceInformation
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Type of the device. Matches MAVLink DEVICE_TYPE enum
  uint8_t device_type;
  /// Name of device e.g. DroneCAN node name
  uint8_t name[80];
  /// [-] [@invalid 0 if not available] Unique device ID for the sensor. Does not change between power cycles.
  uint32_t device_id;
  /// [-] [@invalid empty if not available] Firmware version.
  uint8_t firmware_version[24];
  /// [-] [@invalid empty if not available] Hardware version.
  uint8_t hardware_version[24];
  /// [-] [@invalid empty if not available] Device serial number or unique identifier.
  uint8_t serial_number[33];
} px4_msgs__msg__DeviceInformation;

// Struct for a sequence of px4_msgs__msg__DeviceInformation.
typedef struct px4_msgs__msg__DeviceInformation__Sequence
{
  px4_msgs__msg__DeviceInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__DeviceInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__DEVICE_INFORMATION__STRUCT_H_
