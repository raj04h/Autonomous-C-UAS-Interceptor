// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EstimatorFusionControl.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_fusion_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__EstimatorFusionControl__init(px4_msgs__msg__EstimatorFusionControl * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // gps_intended
  // of_intended
  // ev_intended
  // agp_intended
  // baro_intended
  // rng_intended
  // mag_intended
  // aspd_intended
  // rngbcn_intended
  // gps_active
  // of_active
  // ev_active
  // agp_active
  // baro_active
  // rng_active
  // mag_active
  // aspd_active
  // rngbcn_active
  return true;
}

void
px4_msgs__msg__EstimatorFusionControl__fini(px4_msgs__msg__EstimatorFusionControl * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // gps_intended
  // of_intended
  // ev_intended
  // agp_intended
  // baro_intended
  // rng_intended
  // mag_intended
  // aspd_intended
  // rngbcn_intended
  // gps_active
  // of_active
  // ev_active
  // agp_active
  // baro_active
  // rng_active
  // mag_active
  // aspd_active
  // rngbcn_active
}

bool
px4_msgs__msg__EstimatorFusionControl__are_equal(const px4_msgs__msg__EstimatorFusionControl * lhs, const px4_msgs__msg__EstimatorFusionControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // gps_intended
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->gps_intended[i] != rhs->gps_intended[i]) {
      return false;
    }
  }
  // of_intended
  if (lhs->of_intended != rhs->of_intended) {
    return false;
  }
  // ev_intended
  if (lhs->ev_intended != rhs->ev_intended) {
    return false;
  }
  // agp_intended
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->agp_intended[i] != rhs->agp_intended[i]) {
      return false;
    }
  }
  // baro_intended
  if (lhs->baro_intended != rhs->baro_intended) {
    return false;
  }
  // rng_intended
  if (lhs->rng_intended != rhs->rng_intended) {
    return false;
  }
  // mag_intended
  if (lhs->mag_intended != rhs->mag_intended) {
    return false;
  }
  // aspd_intended
  if (lhs->aspd_intended != rhs->aspd_intended) {
    return false;
  }
  // rngbcn_intended
  if (lhs->rngbcn_intended != rhs->rngbcn_intended) {
    return false;
  }
  // gps_active
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->gps_active[i] != rhs->gps_active[i]) {
      return false;
    }
  }
  // of_active
  if (lhs->of_active != rhs->of_active) {
    return false;
  }
  // ev_active
  if (lhs->ev_active != rhs->ev_active) {
    return false;
  }
  // agp_active
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->agp_active[i] != rhs->agp_active[i]) {
      return false;
    }
  }
  // baro_active
  if (lhs->baro_active != rhs->baro_active) {
    return false;
  }
  // rng_active
  if (lhs->rng_active != rhs->rng_active) {
    return false;
  }
  // mag_active
  if (lhs->mag_active != rhs->mag_active) {
    return false;
  }
  // aspd_active
  if (lhs->aspd_active != rhs->aspd_active) {
    return false;
  }
  // rngbcn_active
  if (lhs->rngbcn_active != rhs->rngbcn_active) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__EstimatorFusionControl__copy(
  const px4_msgs__msg__EstimatorFusionControl * input,
  px4_msgs__msg__EstimatorFusionControl * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // gps_intended
  for (size_t i = 0; i < 2; ++i) {
    output->gps_intended[i] = input->gps_intended[i];
  }
  // of_intended
  output->of_intended = input->of_intended;
  // ev_intended
  output->ev_intended = input->ev_intended;
  // agp_intended
  for (size_t i = 0; i < 4; ++i) {
    output->agp_intended[i] = input->agp_intended[i];
  }
  // baro_intended
  output->baro_intended = input->baro_intended;
  // rng_intended
  output->rng_intended = input->rng_intended;
  // mag_intended
  output->mag_intended = input->mag_intended;
  // aspd_intended
  output->aspd_intended = input->aspd_intended;
  // rngbcn_intended
  output->rngbcn_intended = input->rngbcn_intended;
  // gps_active
  for (size_t i = 0; i < 2; ++i) {
    output->gps_active[i] = input->gps_active[i];
  }
  // of_active
  output->of_active = input->of_active;
  // ev_active
  output->ev_active = input->ev_active;
  // agp_active
  for (size_t i = 0; i < 4; ++i) {
    output->agp_active[i] = input->agp_active[i];
  }
  // baro_active
  output->baro_active = input->baro_active;
  // rng_active
  output->rng_active = input->rng_active;
  // mag_active
  output->mag_active = input->mag_active;
  // aspd_active
  output->aspd_active = input->aspd_active;
  // rngbcn_active
  output->rngbcn_active = input->rngbcn_active;
  return true;
}

px4_msgs__msg__EstimatorFusionControl *
px4_msgs__msg__EstimatorFusionControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorFusionControl * msg = (px4_msgs__msg__EstimatorFusionControl *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorFusionControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EstimatorFusionControl));
  bool success = px4_msgs__msg__EstimatorFusionControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EstimatorFusionControl__destroy(px4_msgs__msg__EstimatorFusionControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__EstimatorFusionControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__EstimatorFusionControl__Sequence__init(px4_msgs__msg__EstimatorFusionControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorFusionControl * data = NULL;

  if (size) {
    data = (px4_msgs__msg__EstimatorFusionControl *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__EstimatorFusionControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EstimatorFusionControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EstimatorFusionControl__fini(&data[i - 1]);
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
px4_msgs__msg__EstimatorFusionControl__Sequence__fini(px4_msgs__msg__EstimatorFusionControl__Sequence * array)
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
      px4_msgs__msg__EstimatorFusionControl__fini(&array->data[i]);
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

px4_msgs__msg__EstimatorFusionControl__Sequence *
px4_msgs__msg__EstimatorFusionControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorFusionControl__Sequence * array = (px4_msgs__msg__EstimatorFusionControl__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorFusionControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EstimatorFusionControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EstimatorFusionControl__Sequence__destroy(px4_msgs__msg__EstimatorFusionControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__EstimatorFusionControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__EstimatorFusionControl__Sequence__are_equal(const px4_msgs__msg__EstimatorFusionControl__Sequence * lhs, const px4_msgs__msg__EstimatorFusionControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__EstimatorFusionControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EstimatorFusionControl__Sequence__copy(
  const px4_msgs__msg__EstimatorFusionControl__Sequence * input,
  px4_msgs__msg__EstimatorFusionControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__EstimatorFusionControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__EstimatorFusionControl * data =
      (px4_msgs__msg__EstimatorFusionControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__EstimatorFusionControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__EstimatorFusionControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__EstimatorFusionControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
