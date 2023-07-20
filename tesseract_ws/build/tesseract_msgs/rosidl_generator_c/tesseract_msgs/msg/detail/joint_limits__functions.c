// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/joint_limits__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tesseract_msgs__msg__JointLimits__init(tesseract_msgs__msg__JointLimits * msg)
{
  if (!msg) {
    return false;
  }
  // lower
  // upper
  // effort
  // velocity
  // acceleration
  // empty
  return true;
}

void
tesseract_msgs__msg__JointLimits__fini(tesseract_msgs__msg__JointLimits * msg)
{
  if (!msg) {
    return;
  }
  // lower
  // upper
  // effort
  // velocity
  // acceleration
  // empty
}

bool
tesseract_msgs__msg__JointLimits__are_equal(const tesseract_msgs__msg__JointLimits * lhs, const tesseract_msgs__msg__JointLimits * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lower
  if (lhs->lower != rhs->lower) {
    return false;
  }
  // upper
  if (lhs->upper != rhs->upper) {
    return false;
  }
  // effort
  if (lhs->effort != rhs->effort) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  // empty
  if (lhs->empty != rhs->empty) {
    return false;
  }
  return true;
}

bool
tesseract_msgs__msg__JointLimits__copy(
  const tesseract_msgs__msg__JointLimits * input,
  tesseract_msgs__msg__JointLimits * output)
{
  if (!input || !output) {
    return false;
  }
  // lower
  output->lower = input->lower;
  // upper
  output->upper = input->upper;
  // effort
  output->effort = input->effort;
  // velocity
  output->velocity = input->velocity;
  // acceleration
  output->acceleration = input->acceleration;
  // empty
  output->empty = input->empty;
  return true;
}

tesseract_msgs__msg__JointLimits *
tesseract_msgs__msg__JointLimits__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__JointLimits * msg = (tesseract_msgs__msg__JointLimits *)allocator.allocate(sizeof(tesseract_msgs__msg__JointLimits), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__JointLimits));
  bool success = tesseract_msgs__msg__JointLimits__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__JointLimits__destroy(tesseract_msgs__msg__JointLimits * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__JointLimits__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__JointLimits__Sequence__init(tesseract_msgs__msg__JointLimits__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__JointLimits * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__JointLimits *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__JointLimits), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__JointLimits__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__JointLimits__fini(&data[i - 1]);
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
tesseract_msgs__msg__JointLimits__Sequence__fini(tesseract_msgs__msg__JointLimits__Sequence * array)
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
      tesseract_msgs__msg__JointLimits__fini(&array->data[i]);
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

tesseract_msgs__msg__JointLimits__Sequence *
tesseract_msgs__msg__JointLimits__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__JointLimits__Sequence * array = (tesseract_msgs__msg__JointLimits__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__JointLimits__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__JointLimits__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__JointLimits__Sequence__destroy(tesseract_msgs__msg__JointLimits__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__JointLimits__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__JointLimits__Sequence__are_equal(const tesseract_msgs__msg__JointLimits__Sequence * lhs, const tesseract_msgs__msg__JointLimits__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__JointLimits__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__JointLimits__Sequence__copy(
  const tesseract_msgs__msg__JointLimits__Sequence * input,
  tesseract_msgs__msg__JointLimits__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__JointLimits);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__JointLimits * data =
      (tesseract_msgs__msg__JointLimits *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__JointLimits__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__JointLimits__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__JointLimits__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
