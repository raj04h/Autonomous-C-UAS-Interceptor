// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/OpenDroneIdOperatorId.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/open_drone_id_operator_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__OpenDroneIdOperatorId__init(px4_msgs__msg__OpenDroneIdOperatorId * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // id_or_mac
  // operator_id_type
  // operator_id
  return true;
}

void
px4_msgs__msg__OpenDroneIdOperatorId__fini(px4_msgs__msg__OpenDroneIdOperatorId * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // id_or_mac
  // operator_id_type
  // operator_id
}

bool
px4_msgs__msg__OpenDroneIdOperatorId__are_equal(const px4_msgs__msg__OpenDroneIdOperatorId * lhs, const px4_msgs__msg__OpenDroneIdOperatorId * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // id_or_mac
  for (size_t i = 0; i < 20; ++i) {
    if (lhs->id_or_mac[i] != rhs->id_or_mac[i]) {
      return false;
    }
  }
  // operator_id_type
  if (lhs->operator_id_type != rhs->operator_id_type) {
    return false;
  }
  // operator_id
  for (size_t i = 0; i < 20; ++i) {
    if (lhs->operator_id[i] != rhs->operator_id[i]) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__OpenDroneIdOperatorId__copy(
  const px4_msgs__msg__OpenDroneIdOperatorId * input,
  px4_msgs__msg__OpenDroneIdOperatorId * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // id_or_mac
  for (size_t i = 0; i < 20; ++i) {
    output->id_or_mac[i] = input->id_or_mac[i];
  }
  // operator_id_type
  output->operator_id_type = input->operator_id_type;
  // operator_id
  for (size_t i = 0; i < 20; ++i) {
    output->operator_id[i] = input->operator_id[i];
  }
  return true;
}

px4_msgs__msg__OpenDroneIdOperatorId *
px4_msgs__msg__OpenDroneIdOperatorId__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__OpenDroneIdOperatorId * msg = (px4_msgs__msg__OpenDroneIdOperatorId *)allocator.allocate(sizeof(px4_msgs__msg__OpenDroneIdOperatorId), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__OpenDroneIdOperatorId));
  bool success = px4_msgs__msg__OpenDroneIdOperatorId__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__OpenDroneIdOperatorId__destroy(px4_msgs__msg__OpenDroneIdOperatorId * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__OpenDroneIdOperatorId__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__OpenDroneIdOperatorId__Sequence__init(px4_msgs__msg__OpenDroneIdOperatorId__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__OpenDroneIdOperatorId * data = NULL;

  if (size) {
    data = (px4_msgs__msg__OpenDroneIdOperatorId *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__OpenDroneIdOperatorId), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__OpenDroneIdOperatorId__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__OpenDroneIdOperatorId__fini(&data[i - 1]);
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
px4_msgs__msg__OpenDroneIdOperatorId__Sequence__fini(px4_msgs__msg__OpenDroneIdOperatorId__Sequence * array)
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
      px4_msgs__msg__OpenDroneIdOperatorId__fini(&array->data[i]);
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

px4_msgs__msg__OpenDroneIdOperatorId__Sequence *
px4_msgs__msg__OpenDroneIdOperatorId__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__OpenDroneIdOperatorId__Sequence * array = (px4_msgs__msg__OpenDroneIdOperatorId__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__OpenDroneIdOperatorId__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__OpenDroneIdOperatorId__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__OpenDroneIdOperatorId__Sequence__destroy(px4_msgs__msg__OpenDroneIdOperatorId__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__OpenDroneIdOperatorId__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__OpenDroneIdOperatorId__Sequence__are_equal(const px4_msgs__msg__OpenDroneIdOperatorId__Sequence * lhs, const px4_msgs__msg__OpenDroneIdOperatorId__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__OpenDroneIdOperatorId__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__OpenDroneIdOperatorId__Sequence__copy(
  const px4_msgs__msg__OpenDroneIdOperatorId__Sequence * input,
  px4_msgs__msg__OpenDroneIdOperatorId__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__OpenDroneIdOperatorId);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__OpenDroneIdOperatorId * data =
      (px4_msgs__msg__OpenDroneIdOperatorId *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__OpenDroneIdOperatorId__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__OpenDroneIdOperatorId__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__OpenDroneIdOperatorId__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
