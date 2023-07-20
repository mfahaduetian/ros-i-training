// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/allowed_collision_entry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `link_1`
// Member `link_2`
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
tesseract_msgs__msg__AllowedCollisionEntry__init(tesseract_msgs__msg__AllowedCollisionEntry * msg)
{
  if (!msg) {
    return false;
  }
  // link_1
  if (!rosidl_runtime_c__String__init(&msg->link_1)) {
    tesseract_msgs__msg__AllowedCollisionEntry__fini(msg);
    return false;
  }
  // link_2
  if (!rosidl_runtime_c__String__init(&msg->link_2)) {
    tesseract_msgs__msg__AllowedCollisionEntry__fini(msg);
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    tesseract_msgs__msg__AllowedCollisionEntry__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__AllowedCollisionEntry__fini(tesseract_msgs__msg__AllowedCollisionEntry * msg)
{
  if (!msg) {
    return;
  }
  // link_1
  rosidl_runtime_c__String__fini(&msg->link_1);
  // link_2
  rosidl_runtime_c__String__fini(&msg->link_2);
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
}

bool
tesseract_msgs__msg__AllowedCollisionEntry__are_equal(const tesseract_msgs__msg__AllowedCollisionEntry * lhs, const tesseract_msgs__msg__AllowedCollisionEntry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // link_1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link_1), &(rhs->link_1)))
  {
    return false;
  }
  // link_2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link_2), &(rhs->link_2)))
  {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__msg__AllowedCollisionEntry__copy(
  const tesseract_msgs__msg__AllowedCollisionEntry * input,
  tesseract_msgs__msg__AllowedCollisionEntry * output)
{
  if (!input || !output) {
    return false;
  }
  // link_1
  if (!rosidl_runtime_c__String__copy(
      &(input->link_1), &(output->link_1)))
  {
    return false;
  }
  // link_2
  if (!rosidl_runtime_c__String__copy(
      &(input->link_2), &(output->link_2)))
  {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__msg__AllowedCollisionEntry *
tesseract_msgs__msg__AllowedCollisionEntry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__AllowedCollisionEntry * msg = (tesseract_msgs__msg__AllowedCollisionEntry *)allocator.allocate(sizeof(tesseract_msgs__msg__AllowedCollisionEntry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__AllowedCollisionEntry));
  bool success = tesseract_msgs__msg__AllowedCollisionEntry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__AllowedCollisionEntry__destroy(tesseract_msgs__msg__AllowedCollisionEntry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__AllowedCollisionEntry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__AllowedCollisionEntry__Sequence__init(tesseract_msgs__msg__AllowedCollisionEntry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__AllowedCollisionEntry * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__AllowedCollisionEntry *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__AllowedCollisionEntry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__AllowedCollisionEntry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__AllowedCollisionEntry__fini(&data[i - 1]);
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
tesseract_msgs__msg__AllowedCollisionEntry__Sequence__fini(tesseract_msgs__msg__AllowedCollisionEntry__Sequence * array)
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
      tesseract_msgs__msg__AllowedCollisionEntry__fini(&array->data[i]);
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

tesseract_msgs__msg__AllowedCollisionEntry__Sequence *
tesseract_msgs__msg__AllowedCollisionEntry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence * array = (tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__AllowedCollisionEntry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__AllowedCollisionEntry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__AllowedCollisionEntry__Sequence__destroy(tesseract_msgs__msg__AllowedCollisionEntry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__AllowedCollisionEntry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__AllowedCollisionEntry__Sequence__are_equal(const tesseract_msgs__msg__AllowedCollisionEntry__Sequence * lhs, const tesseract_msgs__msg__AllowedCollisionEntry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__AllowedCollisionEntry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__AllowedCollisionEntry__Sequence__copy(
  const tesseract_msgs__msg__AllowedCollisionEntry__Sequence * input,
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__AllowedCollisionEntry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__AllowedCollisionEntry * data =
      (tesseract_msgs__msg__AllowedCollisionEntry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__AllowedCollisionEntry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__AllowedCollisionEntry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__AllowedCollisionEntry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
