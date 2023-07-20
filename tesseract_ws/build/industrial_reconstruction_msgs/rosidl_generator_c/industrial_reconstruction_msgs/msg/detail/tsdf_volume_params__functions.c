// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from industrial_reconstruction_msgs:msg/TSDFVolumeParams.idl
// generated code does not contain a copyright notice
#include "industrial_reconstruction_msgs/msg/detail/tsdf_volume_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `min_box_values`
// Member `max_box_values`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
industrial_reconstruction_msgs__msg__TSDFVolumeParams__init(industrial_reconstruction_msgs__msg__TSDFVolumeParams * msg)
{
  if (!msg) {
    return false;
  }
  // voxel_length
  // sdf_trunc
  // min_box_values
  if (!geometry_msgs__msg__Vector3__init(&msg->min_box_values)) {
    industrial_reconstruction_msgs__msg__TSDFVolumeParams__fini(msg);
    return false;
  }
  // max_box_values
  if (!geometry_msgs__msg__Vector3__init(&msg->max_box_values)) {
    industrial_reconstruction_msgs__msg__TSDFVolumeParams__fini(msg);
    return false;
  }
  return true;
}

void
industrial_reconstruction_msgs__msg__TSDFVolumeParams__fini(industrial_reconstruction_msgs__msg__TSDFVolumeParams * msg)
{
  if (!msg) {
    return;
  }
  // voxel_length
  // sdf_trunc
  // min_box_values
  geometry_msgs__msg__Vector3__fini(&msg->min_box_values);
  // max_box_values
  geometry_msgs__msg__Vector3__fini(&msg->max_box_values);
}

bool
industrial_reconstruction_msgs__msg__TSDFVolumeParams__are_equal(const industrial_reconstruction_msgs__msg__TSDFVolumeParams * lhs, const industrial_reconstruction_msgs__msg__TSDFVolumeParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // voxel_length
  if (lhs->voxel_length != rhs->voxel_length) {
    return false;
  }
  // sdf_trunc
  if (lhs->sdf_trunc != rhs->sdf_trunc) {
    return false;
  }
  // min_box_values
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->min_box_values), &(rhs->min_box_values)))
  {
    return false;
  }
  // max_box_values
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->max_box_values), &(rhs->max_box_values)))
  {
    return false;
  }
  return true;
}

bool
industrial_reconstruction_msgs__msg__TSDFVolumeParams__copy(
  const industrial_reconstruction_msgs__msg__TSDFVolumeParams * input,
  industrial_reconstruction_msgs__msg__TSDFVolumeParams * output)
{
  if (!input || !output) {
    return false;
  }
  // voxel_length
  output->voxel_length = input->voxel_length;
  // sdf_trunc
  output->sdf_trunc = input->sdf_trunc;
  // min_box_values
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->min_box_values), &(output->min_box_values)))
  {
    return false;
  }
  // max_box_values
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->max_box_values), &(output->max_box_values)))
  {
    return false;
  }
  return true;
}

industrial_reconstruction_msgs__msg__TSDFVolumeParams *
industrial_reconstruction_msgs__msg__TSDFVolumeParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__msg__TSDFVolumeParams * msg = (industrial_reconstruction_msgs__msg__TSDFVolumeParams *)allocator.allocate(sizeof(industrial_reconstruction_msgs__msg__TSDFVolumeParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(industrial_reconstruction_msgs__msg__TSDFVolumeParams));
  bool success = industrial_reconstruction_msgs__msg__TSDFVolumeParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
industrial_reconstruction_msgs__msg__TSDFVolumeParams__destroy(industrial_reconstruction_msgs__msg__TSDFVolumeParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    industrial_reconstruction_msgs__msg__TSDFVolumeParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence__init(industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__msg__TSDFVolumeParams * data = NULL;

  if (size) {
    data = (industrial_reconstruction_msgs__msg__TSDFVolumeParams *)allocator.zero_allocate(size, sizeof(industrial_reconstruction_msgs__msg__TSDFVolumeParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = industrial_reconstruction_msgs__msg__TSDFVolumeParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        industrial_reconstruction_msgs__msg__TSDFVolumeParams__fini(&data[i - 1]);
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
industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence__fini(industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence * array)
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
      industrial_reconstruction_msgs__msg__TSDFVolumeParams__fini(&array->data[i]);
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

industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence *
industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence * array = (industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence *)allocator.allocate(sizeof(industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence__destroy(industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence__are_equal(const industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence * lhs, const industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!industrial_reconstruction_msgs__msg__TSDFVolumeParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence__copy(
  const industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence * input,
  industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(industrial_reconstruction_msgs__msg__TSDFVolumeParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    industrial_reconstruction_msgs__msg__TSDFVolumeParams * data =
      (industrial_reconstruction_msgs__msg__TSDFVolumeParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!industrial_reconstruction_msgs__msg__TSDFVolumeParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          industrial_reconstruction_msgs__msg__TSDFVolumeParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!industrial_reconstruction_msgs__msg__TSDFVolumeParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
