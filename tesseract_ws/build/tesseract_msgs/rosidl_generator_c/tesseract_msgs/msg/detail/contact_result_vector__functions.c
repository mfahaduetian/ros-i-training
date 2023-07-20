// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/ContactResultVector.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/contact_result_vector__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `contacts`
#include "tesseract_msgs/msg/detail/contact_result__functions.h"

bool
tesseract_msgs__msg__ContactResultVector__init(tesseract_msgs__msg__ContactResultVector * msg)
{
  if (!msg) {
    return false;
  }
  // contacts
  if (!tesseract_msgs__msg__ContactResult__Sequence__init(&msg->contacts, 0)) {
    tesseract_msgs__msg__ContactResultVector__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__ContactResultVector__fini(tesseract_msgs__msg__ContactResultVector * msg)
{
  if (!msg) {
    return;
  }
  // contacts
  tesseract_msgs__msg__ContactResult__Sequence__fini(&msg->contacts);
}

bool
tesseract_msgs__msg__ContactResultVector__are_equal(const tesseract_msgs__msg__ContactResultVector * lhs, const tesseract_msgs__msg__ContactResultVector * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // contacts
  if (!tesseract_msgs__msg__ContactResult__Sequence__are_equal(
      &(lhs->contacts), &(rhs->contacts)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__msg__ContactResultVector__copy(
  const tesseract_msgs__msg__ContactResultVector * input,
  tesseract_msgs__msg__ContactResultVector * output)
{
  if (!input || !output) {
    return false;
  }
  // contacts
  if (!tesseract_msgs__msg__ContactResult__Sequence__copy(
      &(input->contacts), &(output->contacts)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__msg__ContactResultVector *
tesseract_msgs__msg__ContactResultVector__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__ContactResultVector * msg = (tesseract_msgs__msg__ContactResultVector *)allocator.allocate(sizeof(tesseract_msgs__msg__ContactResultVector), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__ContactResultVector));
  bool success = tesseract_msgs__msg__ContactResultVector__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__ContactResultVector__destroy(tesseract_msgs__msg__ContactResultVector * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__ContactResultVector__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__ContactResultVector__Sequence__init(tesseract_msgs__msg__ContactResultVector__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__ContactResultVector * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__ContactResultVector *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__ContactResultVector), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__ContactResultVector__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__ContactResultVector__fini(&data[i - 1]);
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
tesseract_msgs__msg__ContactResultVector__Sequence__fini(tesseract_msgs__msg__ContactResultVector__Sequence * array)
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
      tesseract_msgs__msg__ContactResultVector__fini(&array->data[i]);
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

tesseract_msgs__msg__ContactResultVector__Sequence *
tesseract_msgs__msg__ContactResultVector__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__ContactResultVector__Sequence * array = (tesseract_msgs__msg__ContactResultVector__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__ContactResultVector__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__ContactResultVector__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__ContactResultVector__Sequence__destroy(tesseract_msgs__msg__ContactResultVector__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__ContactResultVector__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__ContactResultVector__Sequence__are_equal(const tesseract_msgs__msg__ContactResultVector__Sequence * lhs, const tesseract_msgs__msg__ContactResultVector__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__ContactResultVector__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__ContactResultVector__Sequence__copy(
  const tesseract_msgs__msg__ContactResultVector__Sequence * input,
  tesseract_msgs__msg__ContactResultVector__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__ContactResultVector);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__ContactResultVector * data =
      (tesseract_msgs__msg__ContactResultVector *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__ContactResultVector__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__ContactResultVector__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__ContactResultVector__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
