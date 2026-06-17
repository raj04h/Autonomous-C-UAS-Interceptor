// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ArmingCheckRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REQUEST__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REQUEST__STRUCT_H_

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
  px4_msgs__msg__ArmingCheckRequest__MESSAGE_VERSION = 1ul
};

/// Struct defined in msg/ArmingCheckRequest in the package px4_msgs.
/**
  * Arming check request
  *
  * Broadcast message to request arming checks be reported by all registered components, such as external ROS 2 navigation modes.
  * All registered components should respond with an ArmingCheckReply message that indicates their current mode requirements, and any arming failure information.
  * The request is sent regularly, even while armed, so that the FMU always knows the current arming state for external modes, and can forward it to ground stations.
  *
  * The reply will include the published request_id, allowing correlation of all arming check information for a particular request.
  * The reply will also include the registration_id for each external component, provided to it during the registration process (RegisterExtComponentReply).
 */
typedef struct px4_msgs__msg__ArmingCheckRequest
{
  /// Time since system start
  uint64_t timestamp;
  /// Id of this request. Allows correlation with associated ArmingCheckReply messages.
  uint8_t request_id;
  /// Bitmask of valid registration ID's (the bit is also cleared if flagged as unresponsive)
  uint32_t valid_registrations_mask;
} px4_msgs__msg__ArmingCheckRequest;

// Struct for a sequence of px4_msgs__msg__ArmingCheckRequest.
typedef struct px4_msgs__msg__ArmingCheckRequest__Sequence
{
  px4_msgs__msg__ArmingCheckRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ArmingCheckRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REQUEST__STRUCT_H_
