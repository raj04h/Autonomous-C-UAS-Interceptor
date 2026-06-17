// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/Vtx.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vtx__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__Vtx__init(px4_msgs__msg__Vtx * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // protocol
  // device
  // mode
  // band
  // channel
  // frequency
  // band_letter
  // band_name
  // power_level
  // power_label
  return true;
}

void
px4_msgs__msg__Vtx__fini(px4_msgs__msg__Vtx * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // protocol
  // device
  // mode
  // band
  // channel
  // frequency
  // band_letter
  // band_name
  // power_level
  // power_label
}

bool
px4_msgs__msg__Vtx__are_equal(const px4_msgs__msg__Vtx * lhs, const px4_msgs__msg__Vtx * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // protocol
  if (lhs->protocol != rhs->protocol) {
    return false;
  }
  // device
  if (lhs->device != rhs->device) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // band
  if (lhs->band != rhs->band) {
    return false;
  }
  // channel
  if (lhs->channel != rhs->channel) {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  // band_letter
  if (lhs->band_letter != rhs->band_letter) {
    return false;
  }
  // band_name
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->band_name[i] != rhs->band_name[i]) {
      return false;
    }
  }
  // power_level
  if (lhs->power_level != rhs->power_level) {
    return false;
  }
  // power_label
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->power_label[i] != rhs->power_label[i]) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__Vtx__copy(
  const px4_msgs__msg__Vtx * input,
  px4_msgs__msg__Vtx * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // protocol
  output->protocol = input->protocol;
  // device
  output->device = input->device;
  // mode
  output->mode = input->mode;
  // band
  output->band = input->band;
  // channel
  output->channel = input->channel;
  // frequency
  output->frequency = input->frequency;
  // band_letter
  output->band_letter = input->band_letter;
  // band_name
  for (size_t i = 0; i < 12; ++i) {
    output->band_name[i] = input->band_name[i];
  }
  // power_level
  output->power_level = input->power_level;
  // power_label
  for (size_t i = 0; i < 4; ++i) {
    output->power_label[i] = input->power_label[i];
  }
  return true;
}

px4_msgs__msg__Vtx *
px4_msgs__msg__Vtx__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Vtx * msg = (px4_msgs__msg__Vtx *)allocator.allocate(sizeof(px4_msgs__msg__Vtx), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__Vtx));
  bool success = px4_msgs__msg__Vtx__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__Vtx__destroy(px4_msgs__msg__Vtx * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__Vtx__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__Vtx__Sequence__init(px4_msgs__msg__Vtx__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Vtx * data = NULL;

  if (size) {
    data = (px4_msgs__msg__Vtx *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__Vtx), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__Vtx__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__Vtx__fini(&data[i - 1]);
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
px4_msgs__msg__Vtx__Sequence__fini(px4_msgs__msg__Vtx__Sequence * array)
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
      px4_msgs__msg__Vtx__fini(&array->data[i]);
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

px4_msgs__msg__Vtx__Sequence *
px4_msgs__msg__Vtx__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Vtx__Sequence * array = (px4_msgs__msg__Vtx__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__Vtx__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__Vtx__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__Vtx__Sequence__destroy(px4_msgs__msg__Vtx__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__Vtx__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__Vtx__Sequence__are_equal(const px4_msgs__msg__Vtx__Sequence * lhs, const px4_msgs__msg__Vtx__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__Vtx__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__Vtx__Sequence__copy(
  const px4_msgs__msg__Vtx__Sequence * input,
  px4_msgs__msg__Vtx__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__Vtx);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__Vtx * data =
      (px4_msgs__msg__Vtx *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__Vtx__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__Vtx__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__Vtx__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
