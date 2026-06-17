// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EscEepromWrite.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/esc_eeprom_write__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__EscEepromWrite__init(px4_msgs__msg__EscEepromWrite * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // firmware
  // index
  // length
  // data
  // write_mask
  return true;
}

void
px4_msgs__msg__EscEepromWrite__fini(px4_msgs__msg__EscEepromWrite * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // firmware
  // index
  // length
  // data
  // write_mask
}

bool
px4_msgs__msg__EscEepromWrite__are_equal(const px4_msgs__msg__EscEepromWrite * lhs, const px4_msgs__msg__EscEepromWrite * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // firmware
  if (lhs->firmware != rhs->firmware) {
    return false;
  }
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // data
  for (size_t i = 0; i < 48; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  // write_mask
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->write_mask[i] != rhs->write_mask[i]) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EscEepromWrite__copy(
  const px4_msgs__msg__EscEepromWrite * input,
  px4_msgs__msg__EscEepromWrite * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // firmware
  output->firmware = input->firmware;
  // index
  output->index = input->index;
  // length
  output->length = input->length;
  // data
  for (size_t i = 0; i < 48; ++i) {
    output->data[i] = input->data[i];
  }
  // write_mask
  for (size_t i = 0; i < 2; ++i) {
    output->write_mask[i] = input->write_mask[i];
  }
  return true;
}

px4_msgs__msg__EscEepromWrite *
px4_msgs__msg__EscEepromWrite__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EscEepromWrite * msg = (px4_msgs__msg__EscEepromWrite *)allocator.allocate(sizeof(px4_msgs__msg__EscEepromWrite), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EscEepromWrite));
  bool success = px4_msgs__msg__EscEepromWrite__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EscEepromWrite__destroy(px4_msgs__msg__EscEepromWrite * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__EscEepromWrite__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__EscEepromWrite__Sequence__init(px4_msgs__msg__EscEepromWrite__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EscEepromWrite * data = NULL;

  if (size) {
    data = (px4_msgs__msg__EscEepromWrite *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__EscEepromWrite), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EscEepromWrite__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EscEepromWrite__fini(&data[i - 1]);
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
px4_msgs__msg__EscEepromWrite__Sequence__fini(px4_msgs__msg__EscEepromWrite__Sequence * array)
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
      px4_msgs__msg__EscEepromWrite__fini(&array->data[i]);
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

px4_msgs__msg__EscEepromWrite__Sequence *
px4_msgs__msg__EscEepromWrite__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EscEepromWrite__Sequence * array = (px4_msgs__msg__EscEepromWrite__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__EscEepromWrite__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EscEepromWrite__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EscEepromWrite__Sequence__destroy(px4_msgs__msg__EscEepromWrite__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__EscEepromWrite__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__EscEepromWrite__Sequence__are_equal(const px4_msgs__msg__EscEepromWrite__Sequence * lhs, const px4_msgs__msg__EscEepromWrite__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__EscEepromWrite__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EscEepromWrite__Sequence__copy(
  const px4_msgs__msg__EscEepromWrite__Sequence * input,
  px4_msgs__msg__EscEepromWrite__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__EscEepromWrite);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__EscEepromWrite * data =
      (px4_msgs__msg__EscEepromWrite *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__EscEepromWrite__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__EscEepromWrite__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__EscEepromWrite__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
