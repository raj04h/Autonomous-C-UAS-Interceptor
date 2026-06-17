// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/DronecanNodeStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DRONECAN_NODE_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__DRONECAN_NODE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HEALTH_OK'.
/**
  * Abstract node health.
  *
  * The node is functioning properly.
 */
enum
{
  px4_msgs__msg__DronecanNodeStatus__HEALTH_OK = 0
};

/// Constant 'HEALTH_WARNING'.
/**
  * A critical parameter went out of range or the node encountered a minor failure.
 */
enum
{
  px4_msgs__msg__DronecanNodeStatus__HEALTH_WARNING = 1
};

/// Constant 'HEALTH_ERROR'.
/**
  * The node encountered a major failure.
 */
enum
{
  px4_msgs__msg__DronecanNodeStatus__HEALTH_ERROR = 2
};

/// Constant 'HEALTH_CRITICAL'.
/**
  * The node suffered a fatal malfunction.
 */
enum
{
  px4_msgs__msg__DronecanNodeStatus__HEALTH_CRITICAL = 3
};

/// Constant 'MODE_OPERATIONAL'.
/**
  * Current mode.
  *
  * Mode OFFLINE can be actually reported by the node to explicitly inform other network
  * participants that the sending node is about to shutdown. In this case other nodes will not
  * have to wait OFFLINE_TIMEOUT_MS before they detect that the node is no longer available.
  *
  * Reserved values can be used in future revisions of the specification.
  *
  * Normal operating mode.
 */
enum
{
  px4_msgs__msg__DronecanNodeStatus__MODE_OPERATIONAL = 0
};

/// Constant 'MODE_INITIALIZATION'.
/**
  * Initialization is in progress; this mode is entered immediately after startup.
 */
enum
{
  px4_msgs__msg__DronecanNodeStatus__MODE_INITIALIZATION = 1
};

/// Constant 'MODE_MAINTENANCE'.
/**
  * E.g. calibration, the bootloader is running, etc.
 */
enum
{
  px4_msgs__msg__DronecanNodeStatus__MODE_MAINTENANCE = 2
};

/// Constant 'MODE_SOFTWARE_UPDATE'.
/**
  * New software/firmware is being loaded.
 */
enum
{
  px4_msgs__msg__DronecanNodeStatus__MODE_SOFTWARE_UPDATE = 3
};

/// Constant 'MODE_OFFLINE'.
/**
  * The node is no longer available.
 */
enum
{
  px4_msgs__msg__DronecanNodeStatus__MODE_OFFLINE = 7
};

/// Struct defined in msg/DronecanNodeStatus in the package px4_msgs.
typedef struct px4_msgs__msg__DronecanNodeStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// The node ID which this data comes from
  uint16_t node_id;
  /// From the uavcan.protocol.NodeStatus message
  /// Node uptime
  uint32_t uptime_sec;
  uint8_t health;
  uint8_t mode;
  /// Not used currently, keep zero when publishing, ignore when receiving.
  uint8_t sub_mode;
  /// Optional, vendor-specific node status code, e.g. a fault code or a status bitmask.
  uint16_t vendor_specific_status_code;
} px4_msgs__msg__DronecanNodeStatus;

// Struct for a sequence of px4_msgs__msg__DronecanNodeStatus.
typedef struct px4_msgs__msg__DronecanNodeStatus__Sequence
{
  px4_msgs__msg__DronecanNodeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__DronecanNodeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__DRONECAN_NODE_STATUS__STRUCT_H_
