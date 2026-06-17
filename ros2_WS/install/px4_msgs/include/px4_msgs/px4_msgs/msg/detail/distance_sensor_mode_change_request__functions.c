// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/DistanceSensorModeChangeRequest.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/distance_sensor_mode_change_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__DistanceSensorModeChangeRequest__init(px4_msgs__msg__DistanceSensorModeChangeRequest * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // request_on_off
  return true;
}

void
px4_msgs__msg__DistanceSensorModeChangeRequest__fini(px4_msgs__msg__DistanceSensorModeChangeRequest * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // request_on_off
}

bool
px4_msgs__msg__DistanceSensorModeChangeRequest__are_equal(const px4_msgs__msg__DistanceSensorModeChangeRequest * lhs, const px4_msgs__msg__DistanceSensorModeChangeRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // request_on_off
  if (lhs->request_on_off != rhs->request_on_off) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__DistanceSensorModeChangeRequest__copy(
  const px4_msgs__msg__DistanceSensorModeChangeRequest * input,
  px4_msgs__msg__DistanceSensorModeChangeRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // request_on_off
  output->request_on_off = input->request_on_off;
  return true;
}

px4_msgs__msg__DistanceSensorModeChangeRequest *
px4_msgs__msg__DistanceSensorModeChangeRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__DistanceSensorModeChangeRequest * msg = (px4_msgs__msg__DistanceSensorModeChangeRequest *)allocator.allocate(sizeof(px4_msgs__msg__DistanceSensorModeChangeRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__DistanceSensorModeChangeRequest));
  bool success = px4_msgs__msg__DistanceSensorModeChangeRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__DistanceSensorModeChangeRequest__destroy(px4_msgs__msg__DistanceSensorModeChangeRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__DistanceSensorModeChangeRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence__init(px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__DistanceSensorModeChangeRequest * data = NULL;

  if (size) {
    data = (px4_msgs__msg__DistanceSensorModeChangeRequest *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__DistanceSensorModeChangeRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__DistanceSensorModeChangeRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__DistanceSensorModeChangeRequest__fini(&data[i - 1]);
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
px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence__fini(px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence * array)
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
      px4_msgs__msg__DistanceSensorModeChangeRequest__fini(&array->data[i]);
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

px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence *
px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence * array = (px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence__destroy(px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence__are_equal(const px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence * lhs, const px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__DistanceSensorModeChangeRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence__copy(
  const px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence * input,
  px4_msgs__msg__DistanceSensorModeChangeRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__DistanceSensorModeChangeRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__DistanceSensorModeChangeRequest * data =
      (px4_msgs__msg__DistanceSensorModeChangeRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__DistanceSensorModeChangeRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__DistanceSensorModeChangeRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__DistanceSensorModeChangeRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
