// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snp_msgs:msg/ToolPaths.idl
// generated code does not contain a copyright notice
#include "snp_msgs/msg/detail/tool_paths__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `paths`
#include "snp_msgs/msg/detail/tool_path__functions.h"

bool
snp_msgs__msg__ToolPaths__init(snp_msgs__msg__ToolPaths * msg)
{
  if (!msg) {
    return false;
  }
  // paths
  if (!snp_msgs__msg__ToolPath__Sequence__init(&msg->paths, 0)) {
    snp_msgs__msg__ToolPaths__fini(msg);
    return false;
  }
  return true;
}

void
snp_msgs__msg__ToolPaths__fini(snp_msgs__msg__ToolPaths * msg)
{
  if (!msg) {
    return;
  }
  // paths
  snp_msgs__msg__ToolPath__Sequence__fini(&msg->paths);
}

bool
snp_msgs__msg__ToolPaths__are_equal(const snp_msgs__msg__ToolPaths * lhs, const snp_msgs__msg__ToolPaths * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // paths
  if (!snp_msgs__msg__ToolPath__Sequence__are_equal(
      &(lhs->paths), &(rhs->paths)))
  {
    return false;
  }
  return true;
}

bool
snp_msgs__msg__ToolPaths__copy(
  const snp_msgs__msg__ToolPaths * input,
  snp_msgs__msg__ToolPaths * output)
{
  if (!input || !output) {
    return false;
  }
  // paths
  if (!snp_msgs__msg__ToolPath__Sequence__copy(
      &(input->paths), &(output->paths)))
  {
    return false;
  }
  return true;
}

snp_msgs__msg__ToolPaths *
snp_msgs__msg__ToolPaths__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snp_msgs__msg__ToolPaths * msg = (snp_msgs__msg__ToolPaths *)allocator.allocate(sizeof(snp_msgs__msg__ToolPaths), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snp_msgs__msg__ToolPaths));
  bool success = snp_msgs__msg__ToolPaths__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
snp_msgs__msg__ToolPaths__destroy(snp_msgs__msg__ToolPaths * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    snp_msgs__msg__ToolPaths__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
snp_msgs__msg__ToolPaths__Sequence__init(snp_msgs__msg__ToolPaths__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snp_msgs__msg__ToolPaths * data = NULL;

  if (size) {
    data = (snp_msgs__msg__ToolPaths *)allocator.zero_allocate(size, sizeof(snp_msgs__msg__ToolPaths), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snp_msgs__msg__ToolPaths__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snp_msgs__msg__ToolPaths__fini(&data[i - 1]);
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
snp_msgs__msg__ToolPaths__Sequence__fini(snp_msgs__msg__ToolPaths__Sequence * array)
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
      snp_msgs__msg__ToolPaths__fini(&array->data[i]);
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

snp_msgs__msg__ToolPaths__Sequence *
snp_msgs__msg__ToolPaths__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snp_msgs__msg__ToolPaths__Sequence * array = (snp_msgs__msg__ToolPaths__Sequence *)allocator.allocate(sizeof(snp_msgs__msg__ToolPaths__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = snp_msgs__msg__ToolPaths__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
snp_msgs__msg__ToolPaths__Sequence__destroy(snp_msgs__msg__ToolPaths__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    snp_msgs__msg__ToolPaths__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
snp_msgs__msg__ToolPaths__Sequence__are_equal(const snp_msgs__msg__ToolPaths__Sequence * lhs, const snp_msgs__msg__ToolPaths__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!snp_msgs__msg__ToolPaths__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
snp_msgs__msg__ToolPaths__Sequence__copy(
  const snp_msgs__msg__ToolPaths__Sequence * input,
  snp_msgs__msg__ToolPaths__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(snp_msgs__msg__ToolPaths);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    snp_msgs__msg__ToolPaths * data =
      (snp_msgs__msg__ToolPaths *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!snp_msgs__msg__ToolPaths__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          snp_msgs__msg__ToolPaths__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!snp_msgs__msg__ToolPaths__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
