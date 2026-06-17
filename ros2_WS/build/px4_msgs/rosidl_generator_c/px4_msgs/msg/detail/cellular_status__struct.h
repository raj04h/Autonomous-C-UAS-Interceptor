// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/CellularStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_FLAG_UNKNOWN'.
/**
  * State unknown or not reportable
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_UNKNOWN = 1
};

/// Constant 'STATUS_FLAG_FAILED'.
/**
  * Modem is unusable
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_FAILED = 2
};

/// Constant 'STATUS_FLAG_INITIALIZING'.
/**
  * Modem is being initialized
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_INITIALIZING = 4
};

/// Constant 'STATUS_FLAG_LOCKED'.
/**
  * Modem is locked
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_LOCKED = 8
};

/// Constant 'STATUS_FLAG_DISABLED'.
/**
  * Modem is not enabled and is powered down
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_DISABLED = 16
};

/// Constant 'STATUS_FLAG_DISABLING'.
/**
  * Modem is currently transitioning to the STATUS_FLAG_DISABLED state
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_DISABLING = 32
};

/// Constant 'STATUS_FLAG_ENABLING'.
/**
  * Modem is currently transitioning to the STATUS_FLAG_ENABLED state
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_ENABLING = 64
};

/// Constant 'STATUS_FLAG_ENABLED'.
/**
  * Modem is enabled and powered on but not registered with a network provider and not available for data connections
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_ENABLED = 128
};

/// Constant 'STATUS_FLAG_SEARCHING'.
/**
  * Modem is searching for a network provider to register
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_SEARCHING = 256
};

/// Constant 'STATUS_FLAG_REGISTERED'.
/**
  * Modem is registered with a network provider, and data connections and messaging may be available for use
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_REGISTERED = 512
};

/// Constant 'STATUS_FLAG_DISCONNECTING'.
/**
  * Modem is disconnecting and deactivating the last active packet data bearer. This state will not be entered if more than one packet data bearer is active and one of the active bearers is deactivated
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_DISCONNECTING = 1024
};

/// Constant 'STATUS_FLAG_CONNECTING'.
/**
  * Modem is activating and connecting the first packet data bearer. Subsequent bearer activations when another bearer is already active do not cause this state to be entered
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_CONNECTING = 2048
};

/// Constant 'STATUS_FLAG_CONNECTED'.
/**
  * One or more packet data bearers is active and connected
 */
enum
{
  px4_msgs__msg__CellularStatus__STATUS_FLAG_CONNECTED = 4096
};

/// Constant 'FAILURE_REASON_NONE'.
/**
  * No error
 */
enum
{
  px4_msgs__msg__CellularStatus__FAILURE_REASON_NONE = 0
};

/// Constant 'FAILURE_REASON_UNKNOWN'.
/**
  * Error state is unknown
 */
enum
{
  px4_msgs__msg__CellularStatus__FAILURE_REASON_UNKNOWN = 1
};

/// Constant 'FAILURE_REASON_SIM_MISSING'.
/**
  * SIM is required for the modem but missing
 */
enum
{
  px4_msgs__msg__CellularStatus__FAILURE_REASON_SIM_MISSING = 2
};

/// Constant 'FAILURE_REASON_SIM_ERROR'.
/**
  * SIM is available, but not usable for connection
 */
enum
{
  px4_msgs__msg__CellularStatus__FAILURE_REASON_SIM_ERROR = 3
};

/// Constant 'CELLULAR_NETWORK_RADIO_TYPE_NONE'.
/**
  * None
 */
enum
{
  px4_msgs__msg__CellularStatus__CELLULAR_NETWORK_RADIO_TYPE_NONE = 0
};

/// Constant 'CELLULAR_NETWORK_RADIO_TYPE_GSM'.
/**
  * GSM
 */
enum
{
  px4_msgs__msg__CellularStatus__CELLULAR_NETWORK_RADIO_TYPE_GSM = 1
};

/// Constant 'CELLULAR_NETWORK_RADIO_TYPE_CDMA'.
/**
  * CDMA
 */
enum
{
  px4_msgs__msg__CellularStatus__CELLULAR_NETWORK_RADIO_TYPE_CDMA = 2
};

/// Constant 'CELLULAR_NETWORK_RADIO_TYPE_WCDMA'.
/**
  * WCDMA
 */
enum
{
  px4_msgs__msg__CellularStatus__CELLULAR_NETWORK_RADIO_TYPE_WCDMA = 3
};

/// Constant 'CELLULAR_NETWORK_RADIO_TYPE_LTE'.
/**
  * LTE
 */
enum
{
  px4_msgs__msg__CellularStatus__CELLULAR_NETWORK_RADIO_TYPE_LTE = 4
};

/// Struct defined in msg/CellularStatus in the package px4_msgs.
/**
  * Cellular status
  *
  * This is currently used only for logging cell status from MAVLink.
 */
typedef struct px4_msgs__msg__CellularStatus
{
  /// Time since system start
  uint64_t timestamp;
  /// Status bitmap
  uint16_t status;
  /// Failure reason
  uint8_t failure_reason;
  /// Cellular network radio type
  uint8_t type;
  /// Cellular network RSSI/RSRP, absolute value
  uint8_t quality;
  /// Mobile country code
  uint16_t mcc;
  /// Mobile network code
  uint16_t mnc;
  /// Location area code
  uint16_t lac;
} px4_msgs__msg__CellularStatus;

// Struct for a sequence of px4_msgs__msg__CellularStatus.
typedef struct px4_msgs__msg__CellularStatus__Sequence
{
  px4_msgs__msg__CellularStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__CellularStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__STRUCT_H_
