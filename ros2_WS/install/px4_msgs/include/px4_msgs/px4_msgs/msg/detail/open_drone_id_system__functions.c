// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/OpenDroneIdSystem.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/open_drone_id_system__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__OpenDroneIdSystem__init(px4_msgs__msg__OpenDroneIdSystem * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // id_or_mac
  // operator_location_type
  // classification_type
  // operator_latitude
  // operator_longitude
  // area_count
  // area_radius
  // area_ceiling
  // area_floor
  // category_eu
  // class_eu
  // operator_altitude_geo
  return true;
}

void
px4_msgs__msg__OpenDroneIdSystem__fini(px4_msgs__msg__OpenDroneIdSystem * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // id_or_mac
  // operator_location_type
  // classification_type
  // operator_latitude
  // operator_longitude
  // area_count
  // area_radius
  // area_ceiling
  // area_floor
  // category_eu
  // class_eu
  // operator_altitude_geo
}

bool
px4_msgs__msg__OpenDroneIdSystem__are_equal(const px4_msgs__msg__OpenDroneIdSystem * lhs, const px4_msgs__msg__OpenDroneIdSystem * rhs)
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
  // operator_location_type
  if (lhs->operator_location_type != rhs->operator_location_type) {
    return false;
  }
  // classification_type
  if (lhs->classification_type != rhs->classification_type) {
    return false;
  }
  // operator_latitude
  if (lhs->operator_latitude != rhs->operator_latitude) {
    return false;
  }
  // operator_longitude
  if (lhs->operator_longitude != rhs->operator_longitude) {
    return false;
  }
  // area_count
  if (lhs->area_count != rhs->area_count) {
    return false;
  }
  // area_radius
  if (lhs->area_radius != rhs->area_radius) {
    return false;
  }
  // area_ceiling
  if (lhs->area_ceiling != rhs->area_ceiling) {
    return false;
  }
  // area_floor
  if (lhs->area_floor != rhs->area_floor) {
    return false;
  }
  // category_eu
  if (lhs->category_eu != rhs->category_eu) {
    return false;
  }
  // class_eu
  if (lhs->class_eu != rhs->class_eu) {
    return false;
  }
  // operator_altitude_geo
  if (lhs->operator_altitude_geo != rhs->operator_altitude_geo) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__OpenDroneIdSystem__copy(
  const px4_msgs__msg__OpenDroneIdSystem * input,
  px4_msgs__msg__OpenDroneIdSystem * output)
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
  // operator_location_type
  output->operator_location_type = input->operator_location_type;
  // classification_type
  output->classification_type = input->classification_type;
  // operator_latitude
  output->operator_latitude = input->operator_latitude;
  // operator_longitude
  output->operator_longitude = input->operator_longitude;
  // area_count
  output->area_count = input->area_count;
  // area_radius
  output->area_radius = input->area_radius;
  // area_ceiling
  output->area_ceiling = input->area_ceiling;
  // area_floor
  output->area_floor = input->area_floor;
  // category_eu
  output->category_eu = input->category_eu;
  // class_eu
  output->class_eu = input->class_eu;
  // operator_altitude_geo
  output->operator_altitude_geo = input->operator_altitude_geo;
  return true;
}

px4_msgs__msg__OpenDroneIdSystem *
px4_msgs__msg__OpenDroneIdSystem__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__OpenDroneIdSystem * msg = (px4_msgs__msg__OpenDroneIdSystem *)allocator.allocate(sizeof(px4_msgs__msg__OpenDroneIdSystem), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__OpenDroneIdSystem));
  bool success = px4_msgs__msg__OpenDroneIdSystem__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__OpenDroneIdSystem__destroy(px4_msgs__msg__OpenDroneIdSystem * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__OpenDroneIdSystem__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__OpenDroneIdSystem__Sequence__init(px4_msgs__msg__OpenDroneIdSystem__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__OpenDroneIdSystem * data = NULL;

  if (size) {
    data = (px4_msgs__msg__OpenDroneIdSystem *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__OpenDroneIdSystem), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__OpenDroneIdSystem__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__OpenDroneIdSystem__fini(&data[i - 1]);
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
px4_msgs__msg__OpenDroneIdSystem__Sequence__fini(px4_msgs__msg__OpenDroneIdSystem__Sequence * array)
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
      px4_msgs__msg__OpenDroneIdSystem__fini(&array->data[i]);
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

px4_msgs__msg__OpenDroneIdSystem__Sequence *
px4_msgs__msg__OpenDroneIdSystem__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__OpenDroneIdSystem__Sequence * array = (px4_msgs__msg__OpenDroneIdSystem__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__OpenDroneIdSystem__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__OpenDroneIdSystem__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__OpenDroneIdSystem__Sequence__destroy(px4_msgs__msg__OpenDroneIdSystem__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__OpenDroneIdSystem__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__OpenDroneIdSystem__Sequence__are_equal(const px4_msgs__msg__OpenDroneIdSystem__Sequence * lhs, const px4_msgs__msg__OpenDroneIdSystem__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__OpenDroneIdSystem__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__OpenDroneIdSystem__Sequence__copy(
  const px4_msgs__msg__OpenDroneIdSystem__Sequence * input,
  px4_msgs__msg__OpenDroneIdSystem__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__OpenDroneIdSystem);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__OpenDroneIdSystem * data =
      (px4_msgs__msg__OpenDroneIdSystem *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__OpenDroneIdSystem__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__OpenDroneIdSystem__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__OpenDroneIdSystem__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
