// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/CollisionMarginOverrideType.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/collision_margin_override_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tesseract_msgs__msg__CollisionMarginOverrideType__init(tesseract_msgs__msg__CollisionMarginOverrideType * msg)
{
  if (!msg) {
    return false;
  }
  // type
  return true;
}

void
tesseract_msgs__msg__CollisionMarginOverrideType__fini(tesseract_msgs__msg__CollisionMarginOverrideType * msg)
{
  if (!msg) {
    return;
  }
  // type
}

bool
tesseract_msgs__msg__CollisionMarginOverrideType__are_equal(const tesseract_msgs__msg__CollisionMarginOverrideType * lhs, const tesseract_msgs__msg__CollisionMarginOverrideType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  return true;
}

bool
tesseract_msgs__msg__CollisionMarginOverrideType__copy(
  const tesseract_msgs__msg__CollisionMarginOverrideType * input,
  tesseract_msgs__msg__CollisionMarginOverrideType * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  return true;
}

tesseract_msgs__msg__CollisionMarginOverrideType *
tesseract_msgs__msg__CollisionMarginOverrideType__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__CollisionMarginOverrideType * msg = (tesseract_msgs__msg__CollisionMarginOverrideType *)allocator.allocate(sizeof(tesseract_msgs__msg__CollisionMarginOverrideType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__CollisionMarginOverrideType));
  bool success = tesseract_msgs__msg__CollisionMarginOverrideType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__CollisionMarginOverrideType__destroy(tesseract_msgs__msg__CollisionMarginOverrideType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__CollisionMarginOverrideType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__CollisionMarginOverrideType__Sequence__init(tesseract_msgs__msg__CollisionMarginOverrideType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__CollisionMarginOverrideType * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__CollisionMarginOverrideType *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__CollisionMarginOverrideType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__CollisionMarginOverrideType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__CollisionMarginOverrideType__fini(&data[i - 1]);
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
tesseract_msgs__msg__CollisionMarginOverrideType__Sequence__fini(tesseract_msgs__msg__CollisionMarginOverrideType__Sequence * array)
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
      tesseract_msgs__msg__CollisionMarginOverrideType__fini(&array->data[i]);
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

tesseract_msgs__msg__CollisionMarginOverrideType__Sequence *
tesseract_msgs__msg__CollisionMarginOverrideType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__CollisionMarginOverrideType__Sequence * array = (tesseract_msgs__msg__CollisionMarginOverrideType__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__CollisionMarginOverrideType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__CollisionMarginOverrideType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__CollisionMarginOverrideType__Sequence__destroy(tesseract_msgs__msg__CollisionMarginOverrideType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__CollisionMarginOverrideType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__CollisionMarginOverrideType__Sequence__are_equal(const tesseract_msgs__msg__CollisionMarginOverrideType__Sequence * lhs, const tesseract_msgs__msg__CollisionMarginOverrideType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__CollisionMarginOverrideType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__CollisionMarginOverrideType__Sequence__copy(
  const tesseract_msgs__msg__CollisionMarginOverrideType__Sequence * input,
  tesseract_msgs__msg__CollisionMarginOverrideType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__CollisionMarginOverrideType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__CollisionMarginOverrideType * data =
      (tesseract_msgs__msg__CollisionMarginOverrideType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__CollisionMarginOverrideType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__CollisionMarginOverrideType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__CollisionMarginOverrideType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
