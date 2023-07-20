// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/Inertial.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/inertial__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `origin`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
tesseract_msgs__msg__Inertial__init(tesseract_msgs__msg__Inertial * msg)
{
  if (!msg) {
    return false;
  }
  // origin
  if (!geometry_msgs__msg__Pose__init(&msg->origin)) {
    tesseract_msgs__msg__Inertial__fini(msg);
    return false;
  }
  // mass
  // ixx
  // ixy
  // ixz
  // iyy
  // iyz
  // izz
  // empty
  return true;
}

void
tesseract_msgs__msg__Inertial__fini(tesseract_msgs__msg__Inertial * msg)
{
  if (!msg) {
    return;
  }
  // origin
  geometry_msgs__msg__Pose__fini(&msg->origin);
  // mass
  // ixx
  // ixy
  // ixz
  // iyy
  // iyz
  // izz
  // empty
}

bool
tesseract_msgs__msg__Inertial__are_equal(const tesseract_msgs__msg__Inertial * lhs, const tesseract_msgs__msg__Inertial * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // origin
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->origin), &(rhs->origin)))
  {
    return false;
  }
  // mass
  if (lhs->mass != rhs->mass) {
    return false;
  }
  // ixx
  if (lhs->ixx != rhs->ixx) {
    return false;
  }
  // ixy
  if (lhs->ixy != rhs->ixy) {
    return false;
  }
  // ixz
  if (lhs->ixz != rhs->ixz) {
    return false;
  }
  // iyy
  if (lhs->iyy != rhs->iyy) {
    return false;
  }
  // iyz
  if (lhs->iyz != rhs->iyz) {
    return false;
  }
  // izz
  if (lhs->izz != rhs->izz) {
    return false;
  }
  // empty
  if (lhs->empty != rhs->empty) {
    return false;
  }
  return true;
}

bool
tesseract_msgs__msg__Inertial__copy(
  const tesseract_msgs__msg__Inertial * input,
  tesseract_msgs__msg__Inertial * output)
{
  if (!input || !output) {
    return false;
  }
  // origin
  if (!geometry_msgs__msg__Pose__copy(
      &(input->origin), &(output->origin)))
  {
    return false;
  }
  // mass
  output->mass = input->mass;
  // ixx
  output->ixx = input->ixx;
  // ixy
  output->ixy = input->ixy;
  // ixz
  output->ixz = input->ixz;
  // iyy
  output->iyy = input->iyy;
  // iyz
  output->iyz = input->iyz;
  // izz
  output->izz = input->izz;
  // empty
  output->empty = input->empty;
  return true;
}

tesseract_msgs__msg__Inertial *
tesseract_msgs__msg__Inertial__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__Inertial * msg = (tesseract_msgs__msg__Inertial *)allocator.allocate(sizeof(tesseract_msgs__msg__Inertial), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__Inertial));
  bool success = tesseract_msgs__msg__Inertial__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__Inertial__destroy(tesseract_msgs__msg__Inertial * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__Inertial__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__Inertial__Sequence__init(tesseract_msgs__msg__Inertial__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__Inertial * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__Inertial *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__Inertial), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__Inertial__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__Inertial__fini(&data[i - 1]);
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
tesseract_msgs__msg__Inertial__Sequence__fini(tesseract_msgs__msg__Inertial__Sequence * array)
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
      tesseract_msgs__msg__Inertial__fini(&array->data[i]);
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

tesseract_msgs__msg__Inertial__Sequence *
tesseract_msgs__msg__Inertial__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__Inertial__Sequence * array = (tesseract_msgs__msg__Inertial__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__Inertial__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__Inertial__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__Inertial__Sequence__destroy(tesseract_msgs__msg__Inertial__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__Inertial__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__Inertial__Sequence__are_equal(const tesseract_msgs__msg__Inertial__Sequence * lhs, const tesseract_msgs__msg__Inertial__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__Inertial__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__Inertial__Sequence__copy(
  const tesseract_msgs__msg__Inertial__Sequence * input,
  tesseract_msgs__msg__Inertial__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__Inertial);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__Inertial * data =
      (tesseract_msgs__msg__Inertial *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__Inertial__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__Inertial__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__Inertial__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
