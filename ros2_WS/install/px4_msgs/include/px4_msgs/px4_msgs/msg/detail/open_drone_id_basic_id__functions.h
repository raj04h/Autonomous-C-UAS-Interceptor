// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from px4_msgs:msg/OpenDroneIdBasicId.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_BASIC_ID__FUNCTIONS_H_
#define PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_BASIC_ID__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "px4_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "px4_msgs/msg/detail/open_drone_id_basic_id__struct.h"

/// Initialize msg/OpenDroneIdBasicId message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * px4_msgs__msg__OpenDroneIdBasicId
 * )) before or use
 * px4_msgs__msg__OpenDroneIdBasicId__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__OpenDroneIdBasicId__init(px4_msgs__msg__OpenDroneIdBasicId * msg);

/// Finalize msg/OpenDroneIdBasicId message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__OpenDroneIdBasicId__fini(px4_msgs__msg__OpenDroneIdBasicId * msg);

/// Create msg/OpenDroneIdBasicId message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * px4_msgs__msg__OpenDroneIdBasicId__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__OpenDroneIdBasicId *
px4_msgs__msg__OpenDroneIdBasicId__create();

/// Destroy msg/OpenDroneIdBasicId message.
/**
 * It calls
 * px4_msgs__msg__OpenDroneIdBasicId__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__OpenDroneIdBasicId__destroy(px4_msgs__msg__OpenDroneIdBasicId * msg);

/// Check for msg/OpenDroneIdBasicId message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__OpenDroneIdBasicId__are_equal(const px4_msgs__msg__OpenDroneIdBasicId * lhs, const px4_msgs__msg__OpenDroneIdBasicId * rhs);

/// Copy a msg/OpenDroneIdBasicId message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__OpenDroneIdBasicId__copy(
  const px4_msgs__msg__OpenDroneIdBasicId * input,
  px4_msgs__msg__OpenDroneIdBasicId * output);

/// Initialize array of msg/OpenDroneIdBasicId messages.
/**
 * It allocates the memory for the number of elements and calls
 * px4_msgs__msg__OpenDroneIdBasicId__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__OpenDroneIdBasicId__Sequence__init(px4_msgs__msg__OpenDroneIdBasicId__Sequence * array, size_t size);

/// Finalize array of msg/OpenDroneIdBasicId messages.
/**
 * It calls
 * px4_msgs__msg__OpenDroneIdBasicId__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__OpenDroneIdBasicId__Sequence__fini(px4_msgs__msg__OpenDroneIdBasicId__Sequence * array);

/// Create array of msg/OpenDroneIdBasicId messages.
/**
 * It allocates the memory for the array and calls
 * px4_msgs__msg__OpenDroneIdBasicId__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__OpenDroneIdBasicId__Sequence *
px4_msgs__msg__OpenDroneIdBasicId__Sequence__create(size_t size);

/// Destroy array of msg/OpenDroneIdBasicId messages.
/**
 * It calls
 * px4_msgs__msg__OpenDroneIdBasicId__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__OpenDroneIdBasicId__Sequence__destroy(px4_msgs__msg__OpenDroneIdBasicId__Sequence * array);

/// Check for msg/OpenDroneIdBasicId message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__OpenDroneIdBasicId__Sequence__are_equal(const px4_msgs__msg__OpenDroneIdBasicId__Sequence * lhs, const px4_msgs__msg__OpenDroneIdBasicId__Sequence * rhs);

/// Copy an array of msg/OpenDroneIdBasicId messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__OpenDroneIdBasicId__Sequence__copy(
  const px4_msgs__msg__OpenDroneIdBasicId__Sequence * input,
  px4_msgs__msg__OpenDroneIdBasicId__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__OPEN_DRONE_ID_BASIC_ID__FUNCTIONS_H_
