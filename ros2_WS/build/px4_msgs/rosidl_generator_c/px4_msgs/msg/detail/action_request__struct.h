// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ActionRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTION_REQUEST__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ACTION_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACTION_DISARM'.
/**
  * Disarm vehicle
 */
enum
{
  px4_msgs__msg__ActionRequest__ACTION_DISARM = 0
};

/// Constant 'ACTION_ARM'.
/**
  * Arm vehicle
 */
enum
{
  px4_msgs__msg__ActionRequest__ACTION_ARM = 1
};

/// Constant 'ACTION_TOGGLE_ARMING'.
/**
  * Toggle arming
 */
enum
{
  px4_msgs__msg__ActionRequest__ACTION_TOGGLE_ARMING = 2
};

/// Constant 'ACTION_UNKILL'.
/**
  * Revert a kill action
 */
enum
{
  px4_msgs__msg__ActionRequest__ACTION_UNKILL = 3
};

/// Constant 'ACTION_KILL'.
/**
  * Kill vehicle (instantly stop the motors)
 */
enum
{
  px4_msgs__msg__ActionRequest__ACTION_KILL = 4
};

/// Constant 'ACTION_SWITCH_MODE'.
/**
  * Switch mode. The target mode is set in the `mode` field.
 */
enum
{
  px4_msgs__msg__ActionRequest__ACTION_SWITCH_MODE = 5
};

/// Constant 'ACTION_VTOL_TRANSITION_TO_MULTICOPTER'.
/**
  * Transition to hover flight
 */
enum
{
  px4_msgs__msg__ActionRequest__ACTION_VTOL_TRANSITION_TO_MULTICOPTER = 6
};

/// Constant 'ACTION_VTOL_TRANSITION_TO_FIXEDWING'.
/**
  * Transition to fast forward flight
 */
enum
{
  px4_msgs__msg__ActionRequest__ACTION_VTOL_TRANSITION_TO_FIXEDWING = 7
};

/// Constant 'ACTION_TERMINATION'.
/**
  * Irreversibly output failsafe values on all outputs, trigger parachute
 */
enum
{
  px4_msgs__msg__ActionRequest__ACTION_TERMINATION = 8
};

/// Constant 'SOURCE_STICK_GESTURE'.
/**
  * Triggered by holding the sticks in a certain position
 */
enum
{
  px4_msgs__msg__ActionRequest__SOURCE_STICK_GESTURE = 0
};

/// Constant 'SOURCE_RC_SWITCH'.
/**
  * Triggered by an RC switch moving into a certain position
 */
enum
{
  px4_msgs__msg__ActionRequest__SOURCE_RC_SWITCH = 1
};

/// Constant 'SOURCE_RC_BUTTON'.
/**
  * Triggered by a momentary button on the RC being pressed or held
 */
enum
{
  px4_msgs__msg__ActionRequest__SOURCE_RC_BUTTON = 2
};

/// Constant 'SOURCE_RC_MODE_SLOT'.
/**
  * Mode change through the RC mode selection mechanism
 */
enum
{
  px4_msgs__msg__ActionRequest__SOURCE_RC_MODE_SLOT = 3
};

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__ActionRequest__ORB_QUEUE_LENGTH = 4
};

/// Struct defined in msg/ActionRequest in the package px4_msgs.
/**
  * Action request for the vehicle's main state
  *
  * Message represents actions requested by a PX4 internal component towards the main state machine such as a request to arm or switch mode.
  * It allows mapping triggers from various external interfaces like RC channels or MAVLink to cause an action.
  * Request are published by `manual_control` and subscribed by the `commander` and `vtol_att_control` modules.
 */
typedef struct px4_msgs__msg__ActionRequest
{
  /// Time since system start
  uint64_t timestamp;
  /// Requested action
  uint8_t action;
  /// Request trigger type, such as a switch, button or gesture
  uint8_t source;
  /// Requested mode. Only applies when `action` is `ACTION_SWITCH_MODE`. Values for this field are defined by the `vehicle_status_s::NAVIGATION_STATE_*` enumeration.
  uint8_t mode;
} px4_msgs__msg__ActionRequest;

// Struct for a sequence of px4_msgs__msg__ActionRequest.
typedef struct px4_msgs__msg__ActionRequest__Sequence
{
  px4_msgs__msg__ActionRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ActionRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ACTION_REQUEST__STRUCT_H_
