// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/geometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mesh`
#include "tesseract_msgs/msg/detail/mesh__functions.h"
// Member `octomap`
#include "octomap_msgs/msg/detail/octomap__functions.h"
// Member `octomap_sub_type`
#include "tesseract_msgs/msg/detail/octree_sub_type__functions.h"

bool
tesseract_msgs__msg__Geometry__init(tesseract_msgs__msg__Geometry * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // sphere_radius
  // cylinder_dimensions
  // capsule_dimensions
  // cone_dimensions
  // box_dimensions
  // plane_coeff
  // mesh
  if (!tesseract_msgs__msg__Mesh__init(&msg->mesh)) {
    tesseract_msgs__msg__Geometry__fini(msg);
    return false;
  }
  // octomap
  if (!octomap_msgs__msg__Octomap__init(&msg->octomap)) {
    tesseract_msgs__msg__Geometry__fini(msg);
    return false;
  }
  // octomap_sub_type
  if (!tesseract_msgs__msg__OctreeSubType__init(&msg->octomap_sub_type)) {
    tesseract_msgs__msg__Geometry__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__Geometry__fini(tesseract_msgs__msg__Geometry * msg)
{
  if (!msg) {
    return;
  }
  // type
  // sphere_radius
  // cylinder_dimensions
  // capsule_dimensions
  // cone_dimensions
  // box_dimensions
  // plane_coeff
  // mesh
  tesseract_msgs__msg__Mesh__fini(&msg->mesh);
  // octomap
  octomap_msgs__msg__Octomap__fini(&msg->octomap);
  // octomap_sub_type
  tesseract_msgs__msg__OctreeSubType__fini(&msg->octomap_sub_type);
}

bool
tesseract_msgs__msg__Geometry__are_equal(const tesseract_msgs__msg__Geometry * lhs, const tesseract_msgs__msg__Geometry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // sphere_radius
  if (lhs->sphere_radius != rhs->sphere_radius) {
    return false;
  }
  // cylinder_dimensions
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->cylinder_dimensions[i] != rhs->cylinder_dimensions[i]) {
      return false;
    }
  }
  // capsule_dimensions
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->capsule_dimensions[i] != rhs->capsule_dimensions[i]) {
      return false;
    }
  }
  // cone_dimensions
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->cone_dimensions[i] != rhs->cone_dimensions[i]) {
      return false;
    }
  }
  // box_dimensions
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->box_dimensions[i] != rhs->box_dimensions[i]) {
      return false;
    }
  }
  // plane_coeff
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->plane_coeff[i] != rhs->plane_coeff[i]) {
      return false;
    }
  }
  // mesh
  if (!tesseract_msgs__msg__Mesh__are_equal(
      &(lhs->mesh), &(rhs->mesh)))
  {
    return false;
  }
  // octomap
  if (!octomap_msgs__msg__Octomap__are_equal(
      &(lhs->octomap), &(rhs->octomap)))
  {
    return false;
  }
  // octomap_sub_type
  if (!tesseract_msgs__msg__OctreeSubType__are_equal(
      &(lhs->octomap_sub_type), &(rhs->octomap_sub_type)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__msg__Geometry__copy(
  const tesseract_msgs__msg__Geometry * input,
  tesseract_msgs__msg__Geometry * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // sphere_radius
  output->sphere_radius = input->sphere_radius;
  // cylinder_dimensions
  for (size_t i = 0; i < 2; ++i) {
    output->cylinder_dimensions[i] = input->cylinder_dimensions[i];
  }
  // capsule_dimensions
  for (size_t i = 0; i < 2; ++i) {
    output->capsule_dimensions[i] = input->capsule_dimensions[i];
  }
  // cone_dimensions
  for (size_t i = 0; i < 2; ++i) {
    output->cone_dimensions[i] = input->cone_dimensions[i];
  }
  // box_dimensions
  for (size_t i = 0; i < 3; ++i) {
    output->box_dimensions[i] = input->box_dimensions[i];
  }
  // plane_coeff
  for (size_t i = 0; i < 4; ++i) {
    output->plane_coeff[i] = input->plane_coeff[i];
  }
  // mesh
  if (!tesseract_msgs__msg__Mesh__copy(
      &(input->mesh), &(output->mesh)))
  {
    return false;
  }
  // octomap
  if (!octomap_msgs__msg__Octomap__copy(
      &(input->octomap), &(output->octomap)))
  {
    return false;
  }
  // octomap_sub_type
  if (!tesseract_msgs__msg__OctreeSubType__copy(
      &(input->octomap_sub_type), &(output->octomap_sub_type)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__msg__Geometry *
tesseract_msgs__msg__Geometry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__Geometry * msg = (tesseract_msgs__msg__Geometry *)allocator.allocate(sizeof(tesseract_msgs__msg__Geometry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__Geometry));
  bool success = tesseract_msgs__msg__Geometry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__Geometry__destroy(tesseract_msgs__msg__Geometry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__Geometry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__Geometry__Sequence__init(tesseract_msgs__msg__Geometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__Geometry * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__Geometry *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__Geometry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__Geometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__Geometry__fini(&data[i - 1]);
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
tesseract_msgs__msg__Geometry__Sequence__fini(tesseract_msgs__msg__Geometry__Sequence * array)
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
      tesseract_msgs__msg__Geometry__fini(&array->data[i]);
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

tesseract_msgs__msg__Geometry__Sequence *
tesseract_msgs__msg__Geometry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__Geometry__Sequence * array = (tesseract_msgs__msg__Geometry__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__Geometry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__Geometry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__Geometry__Sequence__destroy(tesseract_msgs__msg__Geometry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__Geometry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__Geometry__Sequence__are_equal(const tesseract_msgs__msg__Geometry__Sequence * lhs, const tesseract_msgs__msg__Geometry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__Geometry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__Geometry__Sequence__copy(
  const tesseract_msgs__msg__Geometry__Sequence * input,
  tesseract_msgs__msg__Geometry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__Geometry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__Geometry * data =
      (tesseract_msgs__msg__Geometry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__Geometry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__Geometry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__Geometry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
