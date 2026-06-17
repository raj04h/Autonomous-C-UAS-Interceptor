// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/NeuralControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NEURAL_CONTROL__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__NEURAL_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NeuralControl in the package px4_msgs.
/**
  * Neural control
  *
  * Debugging topic for the Neural controller, logs the inputs and output vectors of the neural network, and the time it takes to run
  * Publisher: mc_nn_control
  * Subscriber: logger
 */
typedef struct px4_msgs__msg__NeuralControl
{
  /// Time since system start
  uint64_t timestamp;
  /// Observation vector (pos error (3), att (6d), lin vel (3), ang vel (3))
  float observation[15];
  /// Output from neural network
  float network_output[4];
  /// Time spent from input to output
  int32_t controller_time;
  /// Time spent for NN inference
  int32_t inference_time;
} px4_msgs__msg__NeuralControl;

// Struct for a sequence of px4_msgs__msg__NeuralControl.
typedef struct px4_msgs__msg__NeuralControl__Sequence
{
  px4_msgs__msg__NeuralControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__NeuralControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__NEURAL_CONTROL__STRUCT_H_
