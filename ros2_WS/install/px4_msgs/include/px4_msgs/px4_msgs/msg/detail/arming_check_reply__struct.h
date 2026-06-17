// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ArmingCheckReply.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REPLY__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REPLY__STRUCT_H_

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
  px4_msgs__msg__ArmingCheckReply__MESSAGE_VERSION = 1ul
};

/// Constant 'HEALTH_COMPONENT_INDEX_NONE'.
/**
  * Index of health component for which this response applies
 */
enum
{
  px4_msgs__msg__ArmingCheckReply__HEALTH_COMPONENT_INDEX_NONE = 0
};

/// Constant 'ORB_QUEUE_LENGTH'.
/**
  * Must be >= ExternalChecks::MAX_NUM_REGISTRATIONS so replies from all registered
  * modes fit in the queue within a single request cycle (otherwise replies from the
  * 5th+ mode overwrite earlier ones, causing spurious "unresponsive mode" failures).
 */
enum
{
  px4_msgs__msg__ArmingCheckReply__ORB_QUEUE_LENGTH = 8
};

// Include directives for member types
// Member 'events'
#include "px4_msgs/msg/detail/event__struct.h"

/// Struct defined in msg/ArmingCheckReply in the package px4_msgs.
/**
  * Arming check reply
  *
  * This is a response to an ArmingCheckRequest message sent by the FMU to an external component, such as a ROS 2 navigation mode.
  * The response contains the current set of external mode requirements, and a queue of events indicating recent failures to set the mode (which the FMU may then forward to a ground station).
  * The request is sent regularly to all registered ROS modes, even while armed, so that the FMU always knows and can forward the current state.
  *
  * Note that the external component is identified by its registration_id, which is allocated to the component during registration (arming_check_id in RegisterExtComponentReply).
  * The message is not used by internal/FMU components, as their mode requirements are known at compile time.
 */
typedef struct px4_msgs__msg__ArmingCheckReply
{
  /// Time since system start.
  uint64_t timestamp;
  /// Id of ArmingCheckRequest for which this is a response
  uint8_t request_id;
  /// Id of external component emitting this response
  uint8_t registration_id;
  uint8_t health_component_index;
  /// Unused. Intended for use with health events interface (health_component_t in events.json)
  bool health_component_is_present;
  /// Unused. Intended for use with health events interface (health_component_t in events.json)
  bool health_component_warning;
  /// Unused. Intended for use with health events interface (health_component_t in events.json)
  bool health_component_error;
  /// True if the component can arm. For navigation mode components, true if the component can arm in the mode or switch to the mode when already armed
  bool can_arm_and_run;
  /// Number of queued failure messages (Event) in the events field
  uint8_t num_events;
  /// Arming failure reasons (Queue of events to report to GCS)
  px4_msgs__msg__Event events[5];
  /// Mode requirements
  /// Requires angular velocity estimate (e.g. from gyroscope)
  bool mode_req_angular_velocity;
  /// Requires an attitude estimate
  bool mode_req_attitude;
  /// Requires a local altitude estimate
  bool mode_req_local_alt;
  /// Requires a local position estimate
  bool mode_req_local_position;
  /// Requires a more relaxed global position estimate
  bool mode_req_local_position_relaxed;
  /// Requires a global position estimate
  bool mode_req_global_position;
  /// Requires a relaxed global position estimate
  bool mode_req_global_position_relaxed;
  /// Requires an uploaded mission
  bool mode_req_mission;
  /// Requires a home position (such as RTL/Return mode)
  bool mode_req_home_position;
  /// Prevent arming (such as in Land mode)
  bool mode_req_prevent_arming;
  /// Requires a manual controller
  bool mode_req_manual_control;
} px4_msgs__msg__ArmingCheckReply;

// Struct for a sequence of px4_msgs__msg__ArmingCheckReply.
typedef struct px4_msgs__msg__ArmingCheckReply__Sequence
{
  px4_msgs__msg__ArmingCheckReply * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ArmingCheckReply__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REPLY__STRUCT_H_
