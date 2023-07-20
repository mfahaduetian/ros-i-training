// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snp_msgs:msg/ToolPath.idl
// generated code does not contain a copyright notice
#include "snp_msgs/msg/detail/tool_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `segments`
#include "geometry_msgs/msg/detail/pose_array__functions.h"

bool
snp_msgs__msg__ToolPath__init(snp_msgs__msg__ToolPath * msg)
{
  if (!msg) {
    return false;
  }
  // segments
  if (!geometry_msgs__msg__PoseArray__Sequence__init(&msg->segments, 0)) {
    snp_msgs__msg__ToolPath__fini(msg);
    return false;
  }
  return true;
}

void
snp_msgs__msg__ToolPath__fini(snp_msgs__msg__ToolPath * msg)
{
  if (!msg) {
    return;
  }
  // segments
  geometry_msgs__msg__PoseArray__Sequence__fini(&msg->segments);
}

bool
snp_msgs__msg__ToolPath__are_equal(const snp_msgs__msg__ToolPath * lhs, const snp_msgs__msg__ToolPath * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // segments
  if (!geometry_msgs__msg__PoseArray__Sequence__are_equal(
      &(lhs->segments), &(rhs->segments)))
  {
    return false;
  }
  return true;
}

bool
snp_msgs__msg__ToolPath__copy(
  const snp_msgs__msg__ToolPath * input,
  snp_msgs__msg__ToolPath * output)
{
  if (!input || !output) {
    return false;
  }
  // segments
  if (!geometry_msgs__msg__PoseArray__Sequence__copy(
      &(input->segments), &(output->segments)))
  {
    return false;
  }
  return true;
}

snp_msgs__msg__ToolPath *
snp_msgs__msg__ToolPath__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snp_msgs__msg__ToolPath * msg = (snp_msgs__msg__ToolPath *)allocator.allocate(sizeof(snp_msgs__msg__ToolPath), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snp_msgs__msg__ToolPath));
  bool success = snp_msgs__msg__ToolPath__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
snp_msgs__msg__ToolPath__destroy(snp_msgs__msg__ToolPath * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    snp_msgs__msg__ToolPath__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
snp_msgs__msg__ToolPath__Sequence__init(snp_msgs__msg__ToolPath__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snp_msgs__msg__ToolPath * data = NULL;

  if (size) {
    data = (snp_msgs__msg__ToolPath *)allocator.zero_allocate(size, sizeof(snp_msgs__msg__ToolPath), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snp_msgs__msg__ToolPath__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snp_msgs__msg__ToolPath__fini(&data[i - 1]);
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
snp_msgs__msg__ToolPath__Sequence__fini(snp_msgs__msg__ToolPath__Sequence * array)
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
      snp_msgs__msg__ToolPath__fini(&array->data[i]);
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

snp_msgs__msg__ToolPath__Sequence *
snp_msgs__msg__ToolPath__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snp_msgs__msg__ToolPath__Sequence * array = (snp_msgs__msg__ToolPath__Sequence *)allocator.allocate(sizeof(snp_msgs__msg__ToolPath__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = snp_msgs__msg__ToolPath__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
snp_msgs__msg__ToolPath__Sequence__destroy(snp_msgs__msg__ToolPath__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    snp_msgs__msg__ToolPath__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
snp_msgs__msg__ToolPath__Sequence__are_equal(const snp_msgs__msg__ToolPath__Sequence * lhs, const snp_msgs__msg__ToolPath__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!snp_msgs__msg__ToolPath__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
snp_msgs__msg__ToolPath__Sequence__copy(
  const snp_msgs__msg__ToolPath__Sequence * input,
  snp_msgs__msg__ToolPath__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(snp_msgs__msg__ToolPath);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    snp_msgs__msg__ToolPath * data =
      (snp_msgs__msg__ToolPath *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!snp_msgs__msg__ToolPath__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          snp_msgs__msg__ToolPath__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!snp_msgs__msg__ToolPath__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
