// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VtePosition.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vte_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VtePosition__init(px4_msgs__msg__VtePosition * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // rel_pos_valid
  // rel_vel_valid
  // rel_pos
  // vel_uav
  // vel_target
  // bias
  // acc_target
  // cov_rel_pos
  // cov_vel_uav
  // cov_bias
  // cov_vel_target
  // cov_acc_target
  return true;
}

void
px4_msgs__msg__VtePosition__fini(px4_msgs__msg__VtePosition * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // rel_pos_valid
  // rel_vel_valid
  // rel_pos
  // vel_uav
  // vel_target
  // bias
  // acc_target
  // cov_rel_pos
  // cov_vel_uav
  // cov_bias
  // cov_vel_target
  // cov_acc_target
}

bool
px4_msgs__msg__VtePosition__are_equal(const px4_msgs__msg__VtePosition * lhs, const px4_msgs__msg__VtePosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // rel_pos_valid
  if (lhs->rel_pos_valid != rhs->rel_pos_valid) {
    return false;
  }
  // rel_vel_valid
  if (lhs->rel_vel_valid != rhs->rel_vel_valid) {
    return false;
  }
  // rel_pos
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->rel_pos[i] != rhs->rel_pos[i]) {
      return false;
    }
  }
  // vel_uav
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->vel_uav[i] != rhs->vel_uav[i]) {
      return false;
    }
  }
  // vel_target
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->vel_target[i] != rhs->vel_target[i]) {
      return false;
    }
  }
  // bias
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->bias[i] != rhs->bias[i]) {
      return false;
    }
  }
  // acc_target
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->acc_target[i] != rhs->acc_target[i]) {
      return false;
    }
  }
  // cov_rel_pos
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->cov_rel_pos[i] != rhs->cov_rel_pos[i]) {
      return false;
    }
  }
  // cov_vel_uav
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->cov_vel_uav[i] != rhs->cov_vel_uav[i]) {
      return false;
    }
  }
  // cov_bias
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->cov_bias[i] != rhs->cov_bias[i]) {
      return false;
    }
  }
  // cov_vel_target
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->cov_vel_target[i] != rhs->cov_vel_target[i]) {
      return false;
    }
  }
  // cov_acc_target
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->cov_acc_target[i] != rhs->cov_acc_target[i]) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VtePosition__copy(
  const px4_msgs__msg__VtePosition * input,
  px4_msgs__msg__VtePosition * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // rel_pos_valid
  output->rel_pos_valid = input->rel_pos_valid;
  // rel_vel_valid
  output->rel_vel_valid = input->rel_vel_valid;
  // rel_pos
  for (size_t i = 0; i < 3; ++i) {
    output->rel_pos[i] = input->rel_pos[i];
  }
  // vel_uav
  for (size_t i = 0; i < 3; ++i) {
    output->vel_uav[i] = input->vel_uav[i];
  }
  // vel_target
  for (size_t i = 0; i < 3; ++i) {
    output->vel_target[i] = input->vel_target[i];
  }
  // bias
  for (size_t i = 0; i < 3; ++i) {
    output->bias[i] = input->bias[i];
  }
  // acc_target
  for (size_t i = 0; i < 3; ++i) {
    output->acc_target[i] = input->acc_target[i];
  }
  // cov_rel_pos
  for (size_t i = 0; i < 3; ++i) {
    output->cov_rel_pos[i] = input->cov_rel_pos[i];
  }
  // cov_vel_uav
  for (size_t i = 0; i < 3; ++i) {
    output->cov_vel_uav[i] = input->cov_vel_uav[i];
  }
  // cov_bias
  for (size_t i = 0; i < 3; ++i) {
    output->cov_bias[i] = input->cov_bias[i];
  }
  // cov_vel_target
  for (size_t i = 0; i < 3; ++i) {
    output->cov_vel_target[i] = input->cov_vel_target[i];
  }
  // cov_acc_target
  for (size_t i = 0; i < 3; ++i) {
    output->cov_acc_target[i] = input->cov_acc_target[i];
  }
  return true;
}

px4_msgs__msg__VtePosition *
px4_msgs__msg__VtePosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VtePosition * msg = (px4_msgs__msg__VtePosition *)allocator.allocate(sizeof(px4_msgs__msg__VtePosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VtePosition));
  bool success = px4_msgs__msg__VtePosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VtePosition__destroy(px4_msgs__msg__VtePosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VtePosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VtePosition__Sequence__init(px4_msgs__msg__VtePosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VtePosition * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VtePosition *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VtePosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VtePosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VtePosition__fini(&data[i - 1]);
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
px4_msgs__msg__VtePosition__Sequence__fini(px4_msgs__msg__VtePosition__Sequence * array)
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
      px4_msgs__msg__VtePosition__fini(&array->data[i]);
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

px4_msgs__msg__VtePosition__Sequence *
px4_msgs__msg__VtePosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VtePosition__Sequence * array = (px4_msgs__msg__VtePosition__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VtePosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VtePosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VtePosition__Sequence__destroy(px4_msgs__msg__VtePosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VtePosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VtePosition__Sequence__are_equal(const px4_msgs__msg__VtePosition__Sequence * lhs, const px4_msgs__msg__VtePosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VtePosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VtePosition__Sequence__copy(
  const px4_msgs__msg__VtePosition__Sequence * input,
  px4_msgs__msg__VtePosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VtePosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__VtePosition * data =
      (px4_msgs__msg__VtePosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VtePosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VtePosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__VtePosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
