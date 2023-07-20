// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from industrial_reconstruction_msgs:msg/NormalFilterParams.idl
// generated code does not contain a copyright notice
#include "industrial_reconstruction_msgs/msg/detail/normal_filter_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `normal_direction`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
industrial_reconstruction_msgs__msg__NormalFilterParams__init(industrial_reconstruction_msgs__msg__NormalFilterParams * msg)
{
  if (!msg) {
    return false;
  }
  // normal_direction
  if (!geometry_msgs__msg__Vector3__init(&msg->normal_direction)) {
    industrial_reconstruction_msgs__msg__NormalFilterParams__fini(msg);
    return false;
  }
  // angle
  return true;
}

void
industrial_reconstruction_msgs__msg__NormalFilterParams__fini(industrial_reconstruction_msgs__msg__NormalFilterParams * msg)
{
  if (!msg) {
    return;
  }
  // normal_direction
  geometry_msgs__msg__Vector3__fini(&msg->normal_direction);
  // angle
}

bool
industrial_reconstruction_msgs__msg__NormalFilterParams__are_equal(const industrial_reconstruction_msgs__msg__NormalFilterParams * lhs, const industrial_reconstruction_msgs__msg__NormalFilterParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // normal_direction
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->normal_direction), &(rhs->normal_direction)))
  {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
industrial_reconstruction_msgs__msg__NormalFilterParams__copy(
  const industrial_reconstruction_msgs__msg__NormalFilterParams * input,
  industrial_reconstruction_msgs__msg__NormalFilterParams * output)
{
  if (!input || !output) {
    return false;
  }
  // normal_direction
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->normal_direction), &(output->normal_direction)))
  {
    return false;
  }
  // angle
  output->angle = input->angle;
  return true;
}

industrial_reconstruction_msgs__msg__NormalFilterParams *
industrial_reconstruction_msgs__msg__NormalFilterParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__msg__NormalFilterParams * msg = (industrial_reconstruction_msgs__msg__NormalFilterParams *)allocator.allocate(sizeof(industrial_reconstruction_msgs__msg__NormalFilterParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(industrial_reconstruction_msgs__msg__NormalFilterParams));
  bool success = industrial_reconstruction_msgs__msg__NormalFilterParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
industrial_reconstruction_msgs__msg__NormalFilterParams__destroy(industrial_reconstruction_msgs__msg__NormalFilterParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    industrial_reconstruction_msgs__msg__NormalFilterParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__init(industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__msg__NormalFilterParams * data = NULL;

  if (size) {
    data = (industrial_reconstruction_msgs__msg__NormalFilterParams *)allocator.zero_allocate(size, sizeof(industrial_reconstruction_msgs__msg__NormalFilterParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = industrial_reconstruction_msgs__msg__NormalFilterParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        industrial_reconstruction_msgs__msg__NormalFilterParams__fini(&data[i - 1]);
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
industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__fini(industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * array)
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
      industrial_reconstruction_msgs__msg__NormalFilterParams__fini(&array->data[i]);
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

industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence *
industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * array = (industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence *)allocator.allocate(sizeof(industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__destroy(industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__are_equal(const industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * lhs, const industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!industrial_reconstruction_msgs__msg__NormalFilterParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__copy(
  const industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * input,
  industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(industrial_reconstruction_msgs__msg__NormalFilterParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    industrial_reconstruction_msgs__msg__NormalFilterParams * data =
      (industrial_reconstruction_msgs__msg__NormalFilterParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!industrial_reconstruction_msgs__msg__NormalFilterParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          industrial_reconstruction_msgs__msg__NormalFilterParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!industrial_reconstruction_msgs__msg__NormalFilterParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
