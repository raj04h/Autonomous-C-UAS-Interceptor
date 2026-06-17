// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/TargetGnss.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/target_gnss__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__TargetGnss__init(px4_msgs__msg__TargetGnss * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // latitude_deg
  // longitude_deg
  // altitude_msl_m
  // eph
  // epv
  // abs_pos_updated
  // vel_n_m_s
  // vel_e_m_s
  // vel_d_m_s
  // s_acc_m_s
  // vel_ned_updated
  return true;
}

void
px4_msgs__msg__TargetGnss__fini(px4_msgs__msg__TargetGnss * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // latitude_deg
  // longitude_deg
  // altitude_msl_m
  // eph
  // epv
  // abs_pos_updated
  // vel_n_m_s
  // vel_e_m_s
  // vel_d_m_s
  // s_acc_m_s
  // vel_ned_updated
}

bool
px4_msgs__msg__TargetGnss__are_equal(const px4_msgs__msg__TargetGnss * lhs, const px4_msgs__msg__TargetGnss * rhs)
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
  // latitude_deg
  if (lhs->latitude_deg != rhs->latitude_deg) {
    return false;
  }
  // longitude_deg
  if (lhs->longitude_deg != rhs->longitude_deg) {
    return false;
  }
  // altitude_msl_m
  if (lhs->altitude_msl_m != rhs->altitude_msl_m) {
    return false;
  }
  // eph
  if (lhs->eph != rhs->eph) {
    return false;
  }
  // epv
  if (lhs->epv != rhs->epv) {
    return false;
  }
  // abs_pos_updated
  if (lhs->abs_pos_updated != rhs->abs_pos_updated) {
    return false;
  }
  // vel_n_m_s
  if (lhs->vel_n_m_s != rhs->vel_n_m_s) {
    return false;
  }
  // vel_e_m_s
  if (lhs->vel_e_m_s != rhs->vel_e_m_s) {
    return false;
  }
  // vel_d_m_s
  if (lhs->vel_d_m_s != rhs->vel_d_m_s) {
    return false;
  }
  // s_acc_m_s
  if (lhs->s_acc_m_s != rhs->s_acc_m_s) {
    return false;
  }
  // vel_ned_updated
  if (lhs->vel_ned_updated != rhs->vel_ned_updated) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__TargetGnss__copy(
  const px4_msgs__msg__TargetGnss * input,
  px4_msgs__msg__TargetGnss * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // latitude_deg
  output->latitude_deg = input->latitude_deg;
  // longitude_deg
  output->longitude_deg = input->longitude_deg;
  // altitude_msl_m
  output->altitude_msl_m = input->altitude_msl_m;
  // eph
  output->eph = input->eph;
  // epv
  output->epv = input->epv;
  // abs_pos_updated
  output->abs_pos_updated = input->abs_pos_updated;
  // vel_n_m_s
  output->vel_n_m_s = input->vel_n_m_s;
  // vel_e_m_s
  output->vel_e_m_s = input->vel_e_m_s;
  // vel_d_m_s
  output->vel_d_m_s = input->vel_d_m_s;
  // s_acc_m_s
  output->s_acc_m_s = input->s_acc_m_s;
  // vel_ned_updated
  output->vel_ned_updated = input->vel_ned_updated;
  return true;
}

px4_msgs__msg__TargetGnss *
px4_msgs__msg__TargetGnss__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__TargetGnss * msg = (px4_msgs__msg__TargetGnss *)allocator.allocate(sizeof(px4_msgs__msg__TargetGnss), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__TargetGnss));
  bool success = px4_msgs__msg__TargetGnss__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__TargetGnss__destroy(px4_msgs__msg__TargetGnss * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__TargetGnss__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__TargetGnss__Sequence__init(px4_msgs__msg__TargetGnss__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__TargetGnss * data = NULL;

  if (size) {
    data = (px4_msgs__msg__TargetGnss *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__TargetGnss), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__TargetGnss__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__TargetGnss__fini(&data[i - 1]);
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
px4_msgs__msg__TargetGnss__Sequence__fini(px4_msgs__msg__TargetGnss__Sequence * array)
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
      px4_msgs__msg__TargetGnss__fini(&array->data[i]);
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

px4_msgs__msg__TargetGnss__Sequence *
px4_msgs__msg__TargetGnss__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__TargetGnss__Sequence * array = (px4_msgs__msg__TargetGnss__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__TargetGnss__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__TargetGnss__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__TargetGnss__Sequence__destroy(px4_msgs__msg__TargetGnss__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__TargetGnss__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__TargetGnss__Sequence__are_equal(const px4_msgs__msg__TargetGnss__Sequence * lhs, const px4_msgs__msg__TargetGnss__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__TargetGnss__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__TargetGnss__Sequence__copy(
  const px4_msgs__msg__TargetGnss__Sequence * input,
  px4_msgs__msg__TargetGnss__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__TargetGnss);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__TargetGnss * data =
      (px4_msgs__msg__TargetGnss *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__TargetGnss__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__TargetGnss__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__TargetGnss__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
