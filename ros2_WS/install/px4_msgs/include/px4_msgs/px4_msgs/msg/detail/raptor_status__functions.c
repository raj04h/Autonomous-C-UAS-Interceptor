// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/RaptorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/raptor_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__RaptorStatus__init(px4_msgs__msg__RaptorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // subscription_update_angular_velocity
  // subscription_update_local_position
  // subscription_update_attitude
  // subscription_update_trajectory_setpoint
  // subscription_update_vehicle_status
  // exit_reason
  // timestamp_last_vehicle_angular_velocity
  // timestamp_last_vehicle_local_position
  // timestamp_last_vehicle_attitude
  // timestamp_last_trajectory_setpoint
  // vehicle_angular_velocity_stale
  // vehicle_local_position_stale
  // vehicle_attitude_stale
  // trajectory_setpoint_stale
  // active
  // substep
  // control_interval
  // trajectory_setpoint_dt_mean
  // trajectory_setpoint_dt_max
  // trajectory_setpoint_dt_max_since_activation
  // internal_reference_position
  // internal_reference_linear_velocity
  return true;
}

void
px4_msgs__msg__RaptorStatus__fini(px4_msgs__msg__RaptorStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // subscription_update_angular_velocity
  // subscription_update_local_position
  // subscription_update_attitude
  // subscription_update_trajectory_setpoint
  // subscription_update_vehicle_status
  // exit_reason
  // timestamp_last_vehicle_angular_velocity
  // timestamp_last_vehicle_local_position
  // timestamp_last_vehicle_attitude
  // timestamp_last_trajectory_setpoint
  // vehicle_angular_velocity_stale
  // vehicle_local_position_stale
  // vehicle_attitude_stale
  // trajectory_setpoint_stale
  // active
  // substep
  // control_interval
  // trajectory_setpoint_dt_mean
  // trajectory_setpoint_dt_max
  // trajectory_setpoint_dt_max_since_activation
  // internal_reference_position
  // internal_reference_linear_velocity
}

bool
px4_msgs__msg__RaptorStatus__are_equal(const px4_msgs__msg__RaptorStatus * lhs, const px4_msgs__msg__RaptorStatus * rhs)
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
  // subscription_update_angular_velocity
  if (lhs->subscription_update_angular_velocity != rhs->subscription_update_angular_velocity) {
    return false;
  }
  // subscription_update_local_position
  if (lhs->subscription_update_local_position != rhs->subscription_update_local_position) {
    return false;
  }
  // subscription_update_attitude
  if (lhs->subscription_update_attitude != rhs->subscription_update_attitude) {
    return false;
  }
  // subscription_update_trajectory_setpoint
  if (lhs->subscription_update_trajectory_setpoint != rhs->subscription_update_trajectory_setpoint) {
    return false;
  }
  // subscription_update_vehicle_status
  if (lhs->subscription_update_vehicle_status != rhs->subscription_update_vehicle_status) {
    return false;
  }
  // exit_reason
  if (lhs->exit_reason != rhs->exit_reason) {
    return false;
  }
  // timestamp_last_vehicle_angular_velocity
  if (lhs->timestamp_last_vehicle_angular_velocity != rhs->timestamp_last_vehicle_angular_velocity) {
    return false;
  }
  // timestamp_last_vehicle_local_position
  if (lhs->timestamp_last_vehicle_local_position != rhs->timestamp_last_vehicle_local_position) {
    return false;
  }
  // timestamp_last_vehicle_attitude
  if (lhs->timestamp_last_vehicle_attitude != rhs->timestamp_last_vehicle_attitude) {
    return false;
  }
  // timestamp_last_trajectory_setpoint
  if (lhs->timestamp_last_trajectory_setpoint != rhs->timestamp_last_trajectory_setpoint) {
    return false;
  }
  // vehicle_angular_velocity_stale
  if (lhs->vehicle_angular_velocity_stale != rhs->vehicle_angular_velocity_stale) {
    return false;
  }
  // vehicle_local_position_stale
  if (lhs->vehicle_local_position_stale != rhs->vehicle_local_position_stale) {
    return false;
  }
  // vehicle_attitude_stale
  if (lhs->vehicle_attitude_stale != rhs->vehicle_attitude_stale) {
    return false;
  }
  // trajectory_setpoint_stale
  if (lhs->trajectory_setpoint_stale != rhs->trajectory_setpoint_stale) {
    return false;
  }
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  // substep
  if (lhs->substep != rhs->substep) {
    return false;
  }
  // control_interval
  if (lhs->control_interval != rhs->control_interval) {
    return false;
  }
  // trajectory_setpoint_dt_mean
  if (lhs->trajectory_setpoint_dt_mean != rhs->trajectory_setpoint_dt_mean) {
    return false;
  }
  // trajectory_setpoint_dt_max
  if (lhs->trajectory_setpoint_dt_max != rhs->trajectory_setpoint_dt_max) {
    return false;
  }
  // trajectory_setpoint_dt_max_since_activation
  if (lhs->trajectory_setpoint_dt_max_since_activation != rhs->trajectory_setpoint_dt_max_since_activation) {
    return false;
  }
  // internal_reference_position
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->internal_reference_position[i] != rhs->internal_reference_position[i]) {
      return false;
    }
  }
  // internal_reference_linear_velocity
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->internal_reference_linear_velocity[i] != rhs->internal_reference_linear_velocity[i]) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RaptorStatus__copy(
  const px4_msgs__msg__RaptorStatus * input,
  px4_msgs__msg__RaptorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // subscription_update_angular_velocity
  output->subscription_update_angular_velocity = input->subscription_update_angular_velocity;
  // subscription_update_local_position
  output->subscription_update_local_position = input->subscription_update_local_position;
  // subscription_update_attitude
  output->subscription_update_attitude = input->subscription_update_attitude;
  // subscription_update_trajectory_setpoint
  output->subscription_update_trajectory_setpoint = input->subscription_update_trajectory_setpoint;
  // subscription_update_vehicle_status
  output->subscription_update_vehicle_status = input->subscription_update_vehicle_status;
  // exit_reason
  output->exit_reason = input->exit_reason;
  // timestamp_last_vehicle_angular_velocity
  output->timestamp_last_vehicle_angular_velocity = input->timestamp_last_vehicle_angular_velocity;
  // timestamp_last_vehicle_local_position
  output->timestamp_last_vehicle_local_position = input->timestamp_last_vehicle_local_position;
  // timestamp_last_vehicle_attitude
  output->timestamp_last_vehicle_attitude = input->timestamp_last_vehicle_attitude;
  // timestamp_last_trajectory_setpoint
  output->timestamp_last_trajectory_setpoint = input->timestamp_last_trajectory_setpoint;
  // vehicle_angular_velocity_stale
  output->vehicle_angular_velocity_stale = input->vehicle_angular_velocity_stale;
  // vehicle_local_position_stale
  output->vehicle_local_position_stale = input->vehicle_local_position_stale;
  // vehicle_attitude_stale
  output->vehicle_attitude_stale = input->vehicle_attitude_stale;
  // trajectory_setpoint_stale
  output->trajectory_setpoint_stale = input->trajectory_setpoint_stale;
  // active
  output->active = input->active;
  // substep
  output->substep = input->substep;
  // control_interval
  output->control_interval = input->control_interval;
  // trajectory_setpoint_dt_mean
  output->trajectory_setpoint_dt_mean = input->trajectory_setpoint_dt_mean;
  // trajectory_setpoint_dt_max
  output->trajectory_setpoint_dt_max = input->trajectory_setpoint_dt_max;
  // trajectory_setpoint_dt_max_since_activation
  output->trajectory_setpoint_dt_max_since_activation = input->trajectory_setpoint_dt_max_since_activation;
  // internal_reference_position
  for (size_t i = 0; i < 3; ++i) {
    output->internal_reference_position[i] = input->internal_reference_position[i];
  }
  // internal_reference_linear_velocity
  for (size_t i = 0; i < 3; ++i) {
    output->internal_reference_linear_velocity[i] = input->internal_reference_linear_velocity[i];
  }
  return true;
}

px4_msgs__msg__RaptorStatus *
px4_msgs__msg__RaptorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RaptorStatus * msg = (px4_msgs__msg__RaptorStatus *)allocator.allocate(sizeof(px4_msgs__msg__RaptorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__RaptorStatus));
  bool success = px4_msgs__msg__RaptorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__RaptorStatus__destroy(px4_msgs__msg__RaptorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__RaptorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__RaptorStatus__Sequence__init(px4_msgs__msg__RaptorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RaptorStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__RaptorStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__RaptorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__RaptorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__RaptorStatus__fini(&data[i - 1]);
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
px4_msgs__msg__RaptorStatus__Sequence__fini(px4_msgs__msg__RaptorStatus__Sequence * array)
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
      px4_msgs__msg__RaptorStatus__fini(&array->data[i]);
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

px4_msgs__msg__RaptorStatus__Sequence *
px4_msgs__msg__RaptorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RaptorStatus__Sequence * array = (px4_msgs__msg__RaptorStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__RaptorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__RaptorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__RaptorStatus__Sequence__destroy(px4_msgs__msg__RaptorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__RaptorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__RaptorStatus__Sequence__are_equal(const px4_msgs__msg__RaptorStatus__Sequence * lhs, const px4_msgs__msg__RaptorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__RaptorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RaptorStatus__Sequence__copy(
  const px4_msgs__msg__RaptorStatus__Sequence * input,
  px4_msgs__msg__RaptorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__RaptorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__RaptorStatus * data =
      (px4_msgs__msg__RaptorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__RaptorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__RaptorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__RaptorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
