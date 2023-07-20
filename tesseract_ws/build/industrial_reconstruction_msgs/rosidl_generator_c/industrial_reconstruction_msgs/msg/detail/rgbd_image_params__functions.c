// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from industrial_reconstruction_msgs:msg/RGBDImageParams.idl
// generated code does not contain a copyright notice
#include "industrial_reconstruction_msgs/msg/detail/rgbd_image_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
industrial_reconstruction_msgs__msg__RGBDImageParams__init(industrial_reconstruction_msgs__msg__RGBDImageParams * msg)
{
  if (!msg) {
    return false;
  }
  // depth_scale
  // depth_trunc
  // convert_rgb_to_intensity
  return true;
}

void
industrial_reconstruction_msgs__msg__RGBDImageParams__fini(industrial_reconstruction_msgs__msg__RGBDImageParams * msg)
{
  if (!msg) {
    return;
  }
  // depth_scale
  // depth_trunc
  // convert_rgb_to_intensity
}

bool
industrial_reconstruction_msgs__msg__RGBDImageParams__are_equal(const industrial_reconstruction_msgs__msg__RGBDImageParams * lhs, const industrial_reconstruction_msgs__msg__RGBDImageParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // depth_scale
  if (lhs->depth_scale != rhs->depth_scale) {
    return false;
  }
  // depth_trunc
  if (lhs->depth_trunc != rhs->depth_trunc) {
    return false;
  }
  // convert_rgb_to_intensity
  if (lhs->convert_rgb_to_intensity != rhs->convert_rgb_to_intensity) {
    return false;
  }
  return true;
}

bool
industrial_reconstruction_msgs__msg__RGBDImageParams__copy(
  const industrial_reconstruction_msgs__msg__RGBDImageParams * input,
  industrial_reconstruction_msgs__msg__RGBDImageParams * output)
{
  if (!input || !output) {
    return false;
  }
  // depth_scale
  output->depth_scale = input->depth_scale;
  // depth_trunc
  output->depth_trunc = input->depth_trunc;
  // convert_rgb_to_intensity
  output->convert_rgb_to_intensity = input->convert_rgb_to_intensity;
  return true;
}

industrial_reconstruction_msgs__msg__RGBDImageParams *
industrial_reconstruction_msgs__msg__RGBDImageParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__msg__RGBDImageParams * msg = (industrial_reconstruction_msgs__msg__RGBDImageParams *)allocator.allocate(sizeof(industrial_reconstruction_msgs__msg__RGBDImageParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(industrial_reconstruction_msgs__msg__RGBDImageParams));
  bool success = industrial_reconstruction_msgs__msg__RGBDImageParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
industrial_reconstruction_msgs__msg__RGBDImageParams__destroy(industrial_reconstruction_msgs__msg__RGBDImageParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    industrial_reconstruction_msgs__msg__RGBDImageParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence__init(industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__msg__RGBDImageParams * data = NULL;

  if (size) {
    data = (industrial_reconstruction_msgs__msg__RGBDImageParams *)allocator.zero_allocate(size, sizeof(industrial_reconstruction_msgs__msg__RGBDImageParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = industrial_reconstruction_msgs__msg__RGBDImageParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        industrial_reconstruction_msgs__msg__RGBDImageParams__fini(&data[i - 1]);
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
industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence__fini(industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence * array)
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
      industrial_reconstruction_msgs__msg__RGBDImageParams__fini(&array->data[i]);
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

industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence *
industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence * array = (industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence *)allocator.allocate(sizeof(industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence__destroy(industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence__are_equal(const industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence * lhs, const industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!industrial_reconstruction_msgs__msg__RGBDImageParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence__copy(
  const industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence * input,
  industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(industrial_reconstruction_msgs__msg__RGBDImageParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    industrial_reconstruction_msgs__msg__RGBDImageParams * data =
      (industrial_reconstruction_msgs__msg__RGBDImageParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!industrial_reconstruction_msgs__msg__RGBDImageParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          industrial_reconstruction_msgs__msg__RGBDImageParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!industrial_reconstruction_msgs__msg__RGBDImageParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
