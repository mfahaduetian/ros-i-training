// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/mesh__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vertices`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `faces`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `file_path`
#include "rosidl_runtime_c/string_functions.h"

bool
tesseract_msgs__msg__Mesh__init(tesseract_msgs__msg__Mesh * msg)
{
  if (!msg) {
    return false;
  }
  // vertices
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->vertices, 0)) {
    tesseract_msgs__msg__Mesh__fini(msg);
    return false;
  }
  // faces
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->faces, 0)) {
    tesseract_msgs__msg__Mesh__fini(msg);
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__init(&msg->file_path)) {
    tesseract_msgs__msg__Mesh__fini(msg);
    return false;
  }
  // scale
  return true;
}

void
tesseract_msgs__msg__Mesh__fini(tesseract_msgs__msg__Mesh * msg)
{
  if (!msg) {
    return;
  }
  // vertices
  geometry_msgs__msg__Point__Sequence__fini(&msg->vertices);
  // faces
  rosidl_runtime_c__uint32__Sequence__fini(&msg->faces);
  // file_path
  rosidl_runtime_c__String__fini(&msg->file_path);
  // scale
}

bool
tesseract_msgs__msg__Mesh__are_equal(const tesseract_msgs__msg__Mesh * lhs, const tesseract_msgs__msg__Mesh * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vertices
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->vertices), &(rhs->vertices)))
  {
    return false;
  }
  // faces
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->faces), &(rhs->faces)))
  {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file_path), &(rhs->file_path)))
  {
    return false;
  }
  // scale
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->scale[i] != rhs->scale[i]) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__Mesh__copy(
  const tesseract_msgs__msg__Mesh * input,
  tesseract_msgs__msg__Mesh * output)
{
  if (!input || !output) {
    return false;
  }
  // vertices
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->vertices), &(output->vertices)))
  {
    return false;
  }
  // faces
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->faces), &(output->faces)))
  {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__copy(
      &(input->file_path), &(output->file_path)))
  {
    return false;
  }
  // scale
  for (size_t i = 0; i < 3; ++i) {
    output->scale[i] = input->scale[i];
  }
  return true;
}

tesseract_msgs__msg__Mesh *
tesseract_msgs__msg__Mesh__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__Mesh * msg = (tesseract_msgs__msg__Mesh *)allocator.allocate(sizeof(tesseract_msgs__msg__Mesh), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__Mesh));
  bool success = tesseract_msgs__msg__Mesh__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__Mesh__destroy(tesseract_msgs__msg__Mesh * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__Mesh__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__Mesh__Sequence__init(tesseract_msgs__msg__Mesh__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__Mesh * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__Mesh *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__Mesh), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__Mesh__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__Mesh__fini(&data[i - 1]);
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
tesseract_msgs__msg__Mesh__Sequence__fini(tesseract_msgs__msg__Mesh__Sequence * array)
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
      tesseract_msgs__msg__Mesh__fini(&array->data[i]);
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

tesseract_msgs__msg__Mesh__Sequence *
tesseract_msgs__msg__Mesh__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__Mesh__Sequence * array = (tesseract_msgs__msg__Mesh__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__Mesh__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__Mesh__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__Mesh__Sequence__destroy(tesseract_msgs__msg__Mesh__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__Mesh__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__Mesh__Sequence__are_equal(const tesseract_msgs__msg__Mesh__Sequence * lhs, const tesseract_msgs__msg__Mesh__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__Mesh__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__Mesh__Sequence__copy(
  const tesseract_msgs__msg__Mesh__Sequence * input,
  tesseract_msgs__msg__Mesh__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__Mesh);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__Mesh * data =
      (tesseract_msgs__msg__Mesh *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__Mesh__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__Mesh__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__Mesh__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
