// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/InternalCombustionEngineControl.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/internal_combustion_engine_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__InternalCombustionEngineControl__init(px4_msgs__msg__InternalCombustionEngineControl * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // ignition_on
  // throttle_control
  // choke_control
  // starter_engine_control
  // user_request
  return true;
}

void
px4_msgs__msg__InternalCombustionEngineControl__fini(px4_msgs__msg__InternalCombustionEngineControl * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // ignition_on
  // throttle_control
  // choke_control
  // starter_engine_control
  // user_request
}

bool
px4_msgs__msg__InternalCombustionEngineControl__are_equal(const px4_msgs__msg__InternalCombustionEngineControl * lhs, const px4_msgs__msg__InternalCombustionEngineControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // ignition_on
  if (lhs->ignition_on != rhs->ignition_on) {
    return false;
  }
  // throttle_control
  if (lhs->throttle_control != rhs->throttle_control) {
    return false;
  }
  // choke_control
  if (lhs->choke_control != rhs->choke_control) {
    return false;
  }
  // starter_engine_control
  if (lhs->starter_engine_control != rhs->starter_engine_control) {
    return false;
  }
  // user_request
  if (lhs->user_request != rhs->user_request) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__InternalCombustionEngineControl__copy(
  const px4_msgs__msg__InternalCombustionEngineControl * input,
  px4_msgs__msg__InternalCombustionEngineControl * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // ignition_on
  output->ignition_on = input->ignition_on;
  // throttle_control
  output->throttle_control = input->throttle_control;
  // choke_control
  output->choke_control = input->choke_control;
  // starter_engine_control
  output->starter_engine_control = input->starter_engine_control;
  // user_request
  output->user_request = input->user_request;
  return true;
}

px4_msgs__msg__InternalCombustionEngineControl *
px4_msgs__msg__InternalCombustionEngineControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__InternalCombustionEngineControl * msg = (px4_msgs__msg__InternalCombustionEngineControl *)allocator.allocate(sizeof(px4_msgs__msg__InternalCombustionEngineControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__InternalCombustionEngineControl));
  bool success = px4_msgs__msg__InternalCombustionEngineControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__InternalCombustionEngineControl__destroy(px4_msgs__msg__InternalCombustionEngineControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__InternalCombustionEngineControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__InternalCombustionEngineControl__Sequence__init(px4_msgs__msg__InternalCombustionEngineControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__InternalCombustionEngineControl * data = NULL;

  if (size) {
    data = (px4_msgs__msg__InternalCombustionEngineControl *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__InternalCombustionEngineControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__InternalCombustionEngineControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__InternalCombustionEngineControl__fini(&data[i - 1]);
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
px4_msgs__msg__InternalCombustionEngineControl__Sequence__fini(px4_msgs__msg__InternalCombustionEngineControl__Sequence * array)
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
      px4_msgs__msg__InternalCombustionEngineControl__fini(&array->data[i]);
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

px4_msgs__msg__InternalCombustionEngineControl__Sequence *
px4_msgs__msg__InternalCombustionEngineControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__InternalCombustionEngineControl__Sequence * array = (px4_msgs__msg__InternalCombustionEngineControl__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__InternalCombustionEngineControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__InternalCombustionEngineControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__InternalCombustionEngineControl__Sequence__destroy(px4_msgs__msg__InternalCombustionEngineControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__InternalCombustionEngineControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__InternalCombustionEngineControl__Sequence__are_equal(const px4_msgs__msg__InternalCombustionEngineControl__Sequence * lhs, const px4_msgs__msg__InternalCombustionEngineControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__InternalCombustionEngineControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__InternalCombustionEngineControl__Sequence__copy(
  const px4_msgs__msg__InternalCombustionEngineControl__Sequence * input,
  px4_msgs__msg__InternalCombustionEngineControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__InternalCombustionEngineControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__InternalCombustionEngineControl * data =
      (px4_msgs__msg__InternalCombustionEngineControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__InternalCombustionEngineControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__InternalCombustionEngineControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__InternalCombustionEngineControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
