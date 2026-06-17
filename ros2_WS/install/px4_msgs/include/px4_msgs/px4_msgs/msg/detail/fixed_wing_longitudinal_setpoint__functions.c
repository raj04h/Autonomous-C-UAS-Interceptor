// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/FixedWingLongitudinalSetpoint.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/fixed_wing_longitudinal_setpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__FixedWingLongitudinalSetpoint__init(px4_msgs__msg__FixedWingLongitudinalSetpoint * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // altitude
  // height_rate
  // equivalent_airspeed
  // pitch_direct
  // throttle_direct
  return true;
}

void
px4_msgs__msg__FixedWingLongitudinalSetpoint__fini(px4_msgs__msg__FixedWingLongitudinalSetpoint * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // altitude
  // height_rate
  // equivalent_airspeed
  // pitch_direct
  // throttle_direct
}

bool
px4_msgs__msg__FixedWingLongitudinalSetpoint__are_equal(const px4_msgs__msg__FixedWingLongitudinalSetpoint * lhs, const px4_msgs__msg__FixedWingLongitudinalSetpoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // height_rate
  if (lhs->height_rate != rhs->height_rate) {
    return false;
  }
  // equivalent_airspeed
  if (lhs->equivalent_airspeed != rhs->equivalent_airspeed) {
    return false;
  }
  // pitch_direct
  if (lhs->pitch_direct != rhs->pitch_direct) {
    return false;
  }
  // throttle_direct
  if (lhs->throttle_direct != rhs->throttle_direct) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__FixedWingLongitudinalSetpoint__copy(
  const px4_msgs__msg__FixedWingLongitudinalSetpoint * input,
  px4_msgs__msg__FixedWingLongitudinalSetpoint * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // altitude
  output->altitude = input->altitude;
  // height_rate
  output->height_rate = input->height_rate;
  // equivalent_airspeed
  output->equivalent_airspeed = input->equivalent_airspeed;
  // pitch_direct
  output->pitch_direct = input->pitch_direct;
  // throttle_direct
  output->throttle_direct = input->throttle_direct;
  return true;
}

px4_msgs__msg__FixedWingLongitudinalSetpoint *
px4_msgs__msg__FixedWingLongitudinalSetpoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FixedWingLongitudinalSetpoint * msg = (px4_msgs__msg__FixedWingLongitudinalSetpoint *)allocator.allocate(sizeof(px4_msgs__msg__FixedWingLongitudinalSetpoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__FixedWingLongitudinalSetpoint));
  bool success = px4_msgs__msg__FixedWingLongitudinalSetpoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__FixedWingLongitudinalSetpoint__destroy(px4_msgs__msg__FixedWingLongitudinalSetpoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__FixedWingLongitudinalSetpoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence__init(px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FixedWingLongitudinalSetpoint * data = NULL;

  if (size) {
    data = (px4_msgs__msg__FixedWingLongitudinalSetpoint *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__FixedWingLongitudinalSetpoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__FixedWingLongitudinalSetpoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__FixedWingLongitudinalSetpoint__fini(&data[i - 1]);
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
px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence__fini(px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence * array)
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
      px4_msgs__msg__FixedWingLongitudinalSetpoint__fini(&array->data[i]);
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

px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence *
px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence * array = (px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence__destroy(px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence__are_equal(const px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence * lhs, const px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__FixedWingLongitudinalSetpoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence__copy(
  const px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence * input,
  px4_msgs__msg__FixedWingLongitudinalSetpoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__FixedWingLongitudinalSetpoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__FixedWingLongitudinalSetpoint * data =
      (px4_msgs__msg__FixedWingLongitudinalSetpoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__FixedWingLongitudinalSetpoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__FixedWingLongitudinalSetpoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__FixedWingLongitudinalSetpoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
