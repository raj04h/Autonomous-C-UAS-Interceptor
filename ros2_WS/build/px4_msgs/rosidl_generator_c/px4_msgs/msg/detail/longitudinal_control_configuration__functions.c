// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/LongitudinalControlConfiguration.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/longitudinal_control_configuration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__LongitudinalControlConfiguration__init(px4_msgs__msg__LongitudinalControlConfiguration * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // pitch_min
  // pitch_max
  // throttle_min
  // throttle_max
  // climb_rate_target
  // sink_rate_target
  // speed_weight
  // enforce_low_height_condition
  // disable_underspeed_protection
  return true;
}

void
px4_msgs__msg__LongitudinalControlConfiguration__fini(px4_msgs__msg__LongitudinalControlConfiguration * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // pitch_min
  // pitch_max
  // throttle_min
  // throttle_max
  // climb_rate_target
  // sink_rate_target
  // speed_weight
  // enforce_low_height_condition
  // disable_underspeed_protection
}

bool
px4_msgs__msg__LongitudinalControlConfiguration__are_equal(const px4_msgs__msg__LongitudinalControlConfiguration * lhs, const px4_msgs__msg__LongitudinalControlConfiguration * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // pitch_min
  if (lhs->pitch_min != rhs->pitch_min) {
    return false;
  }
  // pitch_max
  if (lhs->pitch_max != rhs->pitch_max) {
    return false;
  }
  // throttle_min
  if (lhs->throttle_min != rhs->throttle_min) {
    return false;
  }
  // throttle_max
  if (lhs->throttle_max != rhs->throttle_max) {
    return false;
  }
  // climb_rate_target
  if (lhs->climb_rate_target != rhs->climb_rate_target) {
    return false;
  }
  // sink_rate_target
  if (lhs->sink_rate_target != rhs->sink_rate_target) {
    return false;
  }
  // speed_weight
  if (lhs->speed_weight != rhs->speed_weight) {
    return false;
  }
  // enforce_low_height_condition
  if (lhs->enforce_low_height_condition != rhs->enforce_low_height_condition) {
    return false;
  }
  // disable_underspeed_protection
  if (lhs->disable_underspeed_protection != rhs->disable_underspeed_protection) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__LongitudinalControlConfiguration__copy(
  const px4_msgs__msg__LongitudinalControlConfiguration * input,
  px4_msgs__msg__LongitudinalControlConfiguration * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // pitch_min
  output->pitch_min = input->pitch_min;
  // pitch_max
  output->pitch_max = input->pitch_max;
  // throttle_min
  output->throttle_min = input->throttle_min;
  // throttle_max
  output->throttle_max = input->throttle_max;
  // climb_rate_target
  output->climb_rate_target = input->climb_rate_target;
  // sink_rate_target
  output->sink_rate_target = input->sink_rate_target;
  // speed_weight
  output->speed_weight = input->speed_weight;
  // enforce_low_height_condition
  output->enforce_low_height_condition = input->enforce_low_height_condition;
  // disable_underspeed_protection
  output->disable_underspeed_protection = input->disable_underspeed_protection;
  return true;
}

px4_msgs__msg__LongitudinalControlConfiguration *
px4_msgs__msg__LongitudinalControlConfiguration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__LongitudinalControlConfiguration * msg = (px4_msgs__msg__LongitudinalControlConfiguration *)allocator.allocate(sizeof(px4_msgs__msg__LongitudinalControlConfiguration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__LongitudinalControlConfiguration));
  bool success = px4_msgs__msg__LongitudinalControlConfiguration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__LongitudinalControlConfiguration__destroy(px4_msgs__msg__LongitudinalControlConfiguration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__LongitudinalControlConfiguration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__LongitudinalControlConfiguration__Sequence__init(px4_msgs__msg__LongitudinalControlConfiguration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__LongitudinalControlConfiguration * data = NULL;

  if (size) {
    data = (px4_msgs__msg__LongitudinalControlConfiguration *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__LongitudinalControlConfiguration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__LongitudinalControlConfiguration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__LongitudinalControlConfiguration__fini(&data[i - 1]);
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
px4_msgs__msg__LongitudinalControlConfiguration__Sequence__fini(px4_msgs__msg__LongitudinalControlConfiguration__Sequence * array)
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
      px4_msgs__msg__LongitudinalControlConfiguration__fini(&array->data[i]);
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

px4_msgs__msg__LongitudinalControlConfiguration__Sequence *
px4_msgs__msg__LongitudinalControlConfiguration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__LongitudinalControlConfiguration__Sequence * array = (px4_msgs__msg__LongitudinalControlConfiguration__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__LongitudinalControlConfiguration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__LongitudinalControlConfiguration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__LongitudinalControlConfiguration__Sequence__destroy(px4_msgs__msg__LongitudinalControlConfiguration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__LongitudinalControlConfiguration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__LongitudinalControlConfiguration__Sequence__are_equal(const px4_msgs__msg__LongitudinalControlConfiguration__Sequence * lhs, const px4_msgs__msg__LongitudinalControlConfiguration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__LongitudinalControlConfiguration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__LongitudinalControlConfiguration__Sequence__copy(
  const px4_msgs__msg__LongitudinalControlConfiguration__Sequence * input,
  px4_msgs__msg__LongitudinalControlConfiguration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__LongitudinalControlConfiguration);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__LongitudinalControlConfiguration * data =
      (px4_msgs__msg__LongitudinalControlConfiguration *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__LongitudinalControlConfiguration__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__LongitudinalControlConfiguration__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__LongitudinalControlConfiguration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
