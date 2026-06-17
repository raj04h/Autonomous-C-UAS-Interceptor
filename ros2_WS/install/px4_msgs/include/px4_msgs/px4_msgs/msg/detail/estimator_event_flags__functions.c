// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EstimatorEventFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_event_flags__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__EstimatorEventFlags__init(px4_msgs__msg__EstimatorEventFlags * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // information_event_changes
  // gps_checks_passed
  // reset_vel_to_gps
  // reset_vel_to_flow
  // reset_vel_to_vision
  // reset_vel_to_zero
  // reset_pos_to_last_known
  // reset_pos_to_gps
  // reset_pos_to_vision
  // starting_gps_fusion
  // starting_vision_pos_fusion
  // starting_vision_vel_fusion
  // starting_vision_yaw_fusion
  // yaw_aligned_to_imu_gps
  // reset_hgt_to_baro
  // reset_hgt_to_gps
  // reset_hgt_to_rng
  // reset_hgt_to_ev
  return true;
}

void
px4_msgs__msg__EstimatorEventFlags__fini(px4_msgs__msg__EstimatorEventFlags * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // information_event_changes
  // gps_checks_passed
  // reset_vel_to_gps
  // reset_vel_to_flow
  // reset_vel_to_vision
  // reset_vel_to_zero
  // reset_pos_to_last_known
  // reset_pos_to_gps
  // reset_pos_to_vision
  // starting_gps_fusion
  // starting_vision_pos_fusion
  // starting_vision_vel_fusion
  // starting_vision_yaw_fusion
  // yaw_aligned_to_imu_gps
  // reset_hgt_to_baro
  // reset_hgt_to_gps
  // reset_hgt_to_rng
  // reset_hgt_to_ev
}

bool
px4_msgs__msg__EstimatorEventFlags__are_equal(const px4_msgs__msg__EstimatorEventFlags * lhs, const px4_msgs__msg__EstimatorEventFlags * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // timestamp_sample
  if (lhs->timestamp_sample != rhs->timestamp_sample) {
    return false;
  }
  // information_event_changes
  if (lhs->information_event_changes != rhs->information_event_changes) {
    return false;
  }
  // gps_checks_passed
  if (lhs->gps_checks_passed != rhs->gps_checks_passed) {
    return false;
  }
  // reset_vel_to_gps
  if (lhs->reset_vel_to_gps != rhs->reset_vel_to_gps) {
    return false;
  }
  // reset_vel_to_flow
  if (lhs->reset_vel_to_flow != rhs->reset_vel_to_flow) {
    return false;
  }
  // reset_vel_to_vision
  if (lhs->reset_vel_to_vision != rhs->reset_vel_to_vision) {
    return false;
  }
  // reset_vel_to_zero
  if (lhs->reset_vel_to_zero != rhs->reset_vel_to_zero) {
    return false;
  }
  // reset_pos_to_last_known
  if (lhs->reset_pos_to_last_known != rhs->reset_pos_to_last_known) {
    return false;
  }
  // reset_pos_to_gps
  if (lhs->reset_pos_to_gps != rhs->reset_pos_to_gps) {
    return false;
  }
  // reset_pos_to_vision
  if (lhs->reset_pos_to_vision != rhs->reset_pos_to_vision) {
    return false;
  }
  // starting_gps_fusion
  if (lhs->starting_gps_fusion != rhs->starting_gps_fusion) {
    return false;
  }
  // starting_vision_pos_fusion
  if (lhs->starting_vision_pos_fusion != rhs->starting_vision_pos_fusion) {
    return false;
  }
  // starting_vision_vel_fusion
  if (lhs->starting_vision_vel_fusion != rhs->starting_vision_vel_fusion) {
    return false;
  }
  // starting_vision_yaw_fusion
  if (lhs->starting_vision_yaw_fusion != rhs->starting_vision_yaw_fusion) {
    return false;
  }
  // yaw_aligned_to_imu_gps
  if (lhs->yaw_aligned_to_imu_gps != rhs->yaw_aligned_to_imu_gps) {
    return false;
  }
  // reset_hgt_to_baro
  if (lhs->reset_hgt_to_baro != rhs->reset_hgt_to_baro) {
    return false;
  }
  // reset_hgt_to_gps
  if (lhs->reset_hgt_to_gps != rhs->reset_hgt_to_gps) {
    return false;
  }
  // reset_hgt_to_rng
  if (lhs->reset_hgt_to_rng != rhs->reset_hgt_to_rng) {
    return false;
  }
  // reset_hgt_to_ev
  if (lhs->reset_hgt_to_ev != rhs->reset_hgt_to_ev) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__EstimatorEventFlags__copy(
  const px4_msgs__msg__EstimatorEventFlags * input,
  px4_msgs__msg__EstimatorEventFlags * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // information_event_changes
  output->information_event_changes = input->information_event_changes;
  // gps_checks_passed
  output->gps_checks_passed = input->gps_checks_passed;
  // reset_vel_to_gps
  output->reset_vel_to_gps = input->reset_vel_to_gps;
  // reset_vel_to_flow
  output->reset_vel_to_flow = input->reset_vel_to_flow;
  // reset_vel_to_vision
  output->reset_vel_to_vision = input->reset_vel_to_vision;
  // reset_vel_to_zero
  output->reset_vel_to_zero = input->reset_vel_to_zero;
  // reset_pos_to_last_known
  output->reset_pos_to_last_known = input->reset_pos_to_last_known;
  // reset_pos_to_gps
  output->reset_pos_to_gps = input->reset_pos_to_gps;
  // reset_pos_to_vision
  output->reset_pos_to_vision = input->reset_pos_to_vision;
  // starting_gps_fusion
  output->starting_gps_fusion = input->starting_gps_fusion;
  // starting_vision_pos_fusion
  output->starting_vision_pos_fusion = input->starting_vision_pos_fusion;
  // starting_vision_vel_fusion
  output->starting_vision_vel_fusion = input->starting_vision_vel_fusion;
  // starting_vision_yaw_fusion
  output->starting_vision_yaw_fusion = input->starting_vision_yaw_fusion;
  // yaw_aligned_to_imu_gps
  output->yaw_aligned_to_imu_gps = input->yaw_aligned_to_imu_gps;
  // reset_hgt_to_baro
  output->reset_hgt_to_baro = input->reset_hgt_to_baro;
  // reset_hgt_to_gps
  output->reset_hgt_to_gps = input->reset_hgt_to_gps;
  // reset_hgt_to_rng
  output->reset_hgt_to_rng = input->reset_hgt_to_rng;
  // reset_hgt_to_ev
  output->reset_hgt_to_ev = input->reset_hgt_to_ev;
  return true;
}

px4_msgs__msg__EstimatorEventFlags *
px4_msgs__msg__EstimatorEventFlags__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorEventFlags * msg = (px4_msgs__msg__EstimatorEventFlags *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorEventFlags), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EstimatorEventFlags));
  bool success = px4_msgs__msg__EstimatorEventFlags__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EstimatorEventFlags__destroy(px4_msgs__msg__EstimatorEventFlags * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__EstimatorEventFlags__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__EstimatorEventFlags__Sequence__init(px4_msgs__msg__EstimatorEventFlags__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorEventFlags * data = NULL;

  if (size) {
    data = (px4_msgs__msg__EstimatorEventFlags *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__EstimatorEventFlags), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EstimatorEventFlags__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EstimatorEventFlags__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
px4_msgs__msg__EstimatorEventFlags__Sequence__fini(px4_msgs__msg__EstimatorEventFlags__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__EstimatorEventFlags__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

px4_msgs__msg__EstimatorEventFlags__Sequence *
px4_msgs__msg__EstimatorEventFlags__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorEventFlags__Sequence * array = (px4_msgs__msg__EstimatorEventFlags__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorEventFlags__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EstimatorEventFlags__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EstimatorEventFlags__Sequence__destroy(px4_msgs__msg__EstimatorEventFlags__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__EstimatorEventFlags__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__EstimatorEventFlags__Sequence__are_equal(const px4_msgs__msg__EstimatorEventFlags__Sequence * lhs, const px4_msgs__msg__EstimatorEventFlags__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__EstimatorEventFlags__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EstimatorEventFlags__Sequence__copy(
  const px4_msgs__msg__EstimatorEventFlags__Sequence * input,
  px4_msgs__msg__EstimatorEventFlags__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__EstimatorEventFlags);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__EstimatorEventFlags * data =
      (px4_msgs__msg__EstimatorEventFlags *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__EstimatorEventFlags__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__EstimatorEventFlags__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__EstimatorEventFlags__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
