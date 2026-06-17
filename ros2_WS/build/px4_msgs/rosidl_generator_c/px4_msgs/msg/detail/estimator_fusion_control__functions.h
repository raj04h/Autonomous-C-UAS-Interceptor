// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from px4_msgs:msg/EstimatorFusionControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_FUSION_CONTROL__FUNCTIONS_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_FUSION_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "px4_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "px4_msgs/msg/detail/estimator_fusion_control__struct.h"

/// Initialize msg/EstimatorFusionControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * px4_msgs__msg__EstimatorFusionControl
 * )) before or use
 * px4_msgs__msg__EstimatorFusionControl__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__EstimatorFusionControl__init(px4_msgs__msg__EstimatorFusionControl * msg);

/// Finalize msg/EstimatorFusionControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__EstimatorFusionControl__fini(px4_msgs__msg__EstimatorFusionControl * msg);

/// Create msg/EstimatorFusionControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * px4_msgs__msg__EstimatorFusionControl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__EstimatorFusionControl *
px4_msgs__msg__EstimatorFusionControl__create();

/// Destroy msg/EstimatorFusionControl message.
/**
 * It calls
 * px4_msgs__msg__EstimatorFusionControl__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__EstimatorFusionControl__destroy(px4_msgs__msg__EstimatorFusionControl * msg);

/// Check for msg/EstimatorFusionControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__EstimatorFusionControl__are_equal(const px4_msgs__msg__EstimatorFusionControl * lhs, const px4_msgs__msg__EstimatorFusionControl * rhs);

/// Copy a msg/EstimatorFusionControl message.
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
px4_msgs__msg__EstimatorFusionControl__copy(
  const px4_msgs__msg__EstimatorFusionControl * input,
  px4_msgs__msg__EstimatorFusionControl * output);

/// Initialize array of msg/EstimatorFusionControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * px4_msgs__msg__EstimatorFusionControl__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__EstimatorFusionControl__Sequence__init(px4_msgs__msg__EstimatorFusionControl__Sequence * array, size_t size);

/// Finalize array of msg/EstimatorFusionControl messages.
/**
 * It calls
 * px4_msgs__msg__EstimatorFusionControl__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__EstimatorFusionControl__Sequence__fini(px4_msgs__msg__EstimatorFusionControl__Sequence * array);

/// Create array of msg/EstimatorFusionControl messages.
/**
 * It allocates the memory for the array and calls
 * px4_msgs__msg__EstimatorFusionControl__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__EstimatorFusionControl__Sequence *
px4_msgs__msg__EstimatorFusionControl__Sequence__create(size_t size);

/// Destroy array of msg/EstimatorFusionControl messages.
/**
 * It calls
 * px4_msgs__msg__EstimatorFusionControl__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__EstimatorFusionControl__Sequence__destroy(px4_msgs__msg__EstimatorFusionControl__Sequence * array);

/// Check for msg/EstimatorFusionControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__EstimatorFusionControl__Sequence__are_equal(const px4_msgs__msg__EstimatorFusionControl__Sequence * lhs, const px4_msgs__msg__EstimatorFusionControl__Sequence * rhs);

/// Copy an array of msg/EstimatorFusionControl messages.
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
px4_msgs__msg__EstimatorFusionControl__Sequence__copy(
  const px4_msgs__msg__EstimatorFusionControl__Sequence * input,
  px4_msgs__msg__EstimatorFusionControl__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_FUSION_CONTROL__FUNCTIONS_H_
