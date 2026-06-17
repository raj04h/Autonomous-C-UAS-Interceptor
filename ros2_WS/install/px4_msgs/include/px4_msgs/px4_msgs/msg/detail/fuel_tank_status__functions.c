// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/FuelTankStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/fuel_tank_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__FuelTankStatus__init(px4_msgs__msg__FuelTankStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // maximum_fuel_capacity
  // consumed_fuel
  // fuel_consumption_rate
  // percent_remaining
  // remaining_fuel
  // fuel_tank_id
  // fuel_type
  // temperature
  return true;
}

void
px4_msgs__msg__FuelTankStatus__fini(px4_msgs__msg__FuelTankStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // maximum_fuel_capacity
  // consumed_fuel
  // fuel_consumption_rate
  // percent_remaining
  // remaining_fuel
  // fuel_tank_id
  // fuel_type
  // temperature
}

bool
px4_msgs__msg__FuelTankStatus__are_equal(const px4_msgs__msg__FuelTankStatus * lhs, const px4_msgs__msg__FuelTankStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // maximum_fuel_capacity
  if (lhs->maximum_fuel_capacity != rhs->maximum_fuel_capacity) {
    return false;
  }
  // consumed_fuel
  if (lhs->consumed_fuel != rhs->consumed_fuel) {
    return false;
  }
  // fuel_consumption_rate
  if (lhs->fuel_consumption_rate != rhs->fuel_consumption_rate) {
    return false;
  }
  // percent_remaining
  if (lhs->percent_remaining != rhs->percent_remaining) {
    return false;
  }
  // remaining_fuel
  if (lhs->remaining_fuel != rhs->remaining_fuel) {
    return false;
  }
  // fuel_tank_id
  if (lhs->fuel_tank_id != rhs->fuel_tank_id) {
    return false;
  }
  // fuel_type
  if (lhs->fuel_type != rhs->fuel_type) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__FuelTankStatus__copy(
  const px4_msgs__msg__FuelTankStatus * input,
  px4_msgs__msg__FuelTankStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // maximum_fuel_capacity
  output->maximum_fuel_capacity = input->maximum_fuel_capacity;
  // consumed_fuel
  output->consumed_fuel = input->consumed_fuel;
  // fuel_consumption_rate
  output->fuel_consumption_rate = input->fuel_consumption_rate;
  // percent_remaining
  output->percent_remaining = input->percent_remaining;
  // remaining_fuel
  output->remaining_fuel = input->remaining_fuel;
  // fuel_tank_id
  output->fuel_tank_id = input->fuel_tank_id;
  // fuel_type
  output->fuel_type = input->fuel_type;
  // temperature
  output->temperature = input->temperature;
  return true;
}

px4_msgs__msg__FuelTankStatus *
px4_msgs__msg__FuelTankStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FuelTankStatus * msg = (px4_msgs__msg__FuelTankStatus *)allocator.allocate(sizeof(px4_msgs__msg__FuelTankStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__FuelTankStatus));
  bool success = px4_msgs__msg__FuelTankStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__FuelTankStatus__destroy(px4_msgs__msg__FuelTankStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__FuelTankStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__FuelTankStatus__Sequence__init(px4_msgs__msg__FuelTankStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FuelTankStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__FuelTankStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__FuelTankStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__FuelTankStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__FuelTankStatus__fini(&data[i - 1]);
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
px4_msgs__msg__FuelTankStatus__Sequence__fini(px4_msgs__msg__FuelTankStatus__Sequence * array)
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
      px4_msgs__msg__FuelTankStatus__fini(&array->data[i]);
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

px4_msgs__msg__FuelTankStatus__Sequence *
px4_msgs__msg__FuelTankStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FuelTankStatus__Sequence * array = (px4_msgs__msg__FuelTankStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__FuelTankStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__FuelTankStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__FuelTankStatus__Sequence__destroy(px4_msgs__msg__FuelTankStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__FuelTankStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__FuelTankStatus__Sequence__are_equal(const px4_msgs__msg__FuelTankStatus__Sequence * lhs, const px4_msgs__msg__FuelTankStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__FuelTankStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__FuelTankStatus__Sequence__copy(
  const px4_msgs__msg__FuelTankStatus__Sequence * input,
  px4_msgs__msg__FuelTankStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__FuelTankStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__FuelTankStatus * data =
      (px4_msgs__msg__FuelTankStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__FuelTankStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__FuelTankStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__FuelTankStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
