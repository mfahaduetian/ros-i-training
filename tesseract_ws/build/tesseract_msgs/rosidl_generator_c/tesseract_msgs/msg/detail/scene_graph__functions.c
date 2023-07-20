// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/SceneGraph.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/scene_graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `root`
// Member `invisible_links`
// Member `disabled_collision_links`
#include "rosidl_runtime_c/string_functions.h"
// Member `links`
#include "tesseract_msgs/msg/detail/link__functions.h"
// Member `joints`
#include "tesseract_msgs/msg/detail/joint__functions.h"
// Member `acm`
#include "tesseract_msgs/msg/detail/allowed_collision_entry__functions.h"

bool
tesseract_msgs__msg__SceneGraph__init(tesseract_msgs__msg__SceneGraph * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    tesseract_msgs__msg__SceneGraph__fini(msg);
    return false;
  }
  // root
  if (!rosidl_runtime_c__String__init(&msg->root)) {
    tesseract_msgs__msg__SceneGraph__fini(msg);
    return false;
  }
  // links
  if (!tesseract_msgs__msg__Link__Sequence__init(&msg->links, 0)) {
    tesseract_msgs__msg__SceneGraph__fini(msg);
    return false;
  }
  // joints
  if (!tesseract_msgs__msg__Joint__Sequence__init(&msg->joints, 0)) {
    tesseract_msgs__msg__SceneGraph__fini(msg);
    return false;
  }
  // invisible_links
  if (!rosidl_runtime_c__String__Sequence__init(&msg->invisible_links, 0)) {
    tesseract_msgs__msg__SceneGraph__fini(msg);
    return false;
  }
  // disabled_collision_links
  if (!rosidl_runtime_c__String__Sequence__init(&msg->disabled_collision_links, 0)) {
    tesseract_msgs__msg__SceneGraph__fini(msg);
    return false;
  }
  // acm
  if (!tesseract_msgs__msg__AllowedCollisionEntry__Sequence__init(&msg->acm, 0)) {
    tesseract_msgs__msg__SceneGraph__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__SceneGraph__fini(tesseract_msgs__msg__SceneGraph * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // root
  rosidl_runtime_c__String__fini(&msg->root);
  // links
  tesseract_msgs__msg__Link__Sequence__fini(&msg->links);
  // joints
  tesseract_msgs__msg__Joint__Sequence__fini(&msg->joints);
  // invisible_links
  rosidl_runtime_c__String__Sequence__fini(&msg->invisible_links);
  // disabled_collision_links
  rosidl_runtime_c__String__Sequence__fini(&msg->disabled_collision_links);
  // acm
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence__fini(&msg->acm);
}

bool
tesseract_msgs__msg__SceneGraph__are_equal(const tesseract_msgs__msg__SceneGraph * lhs, const tesseract_msgs__msg__SceneGraph * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // root
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->root), &(rhs->root)))
  {
    return false;
  }
  // links
  if (!tesseract_msgs__msg__Link__Sequence__are_equal(
      &(lhs->links), &(rhs->links)))
  {
    return false;
  }
  // joints
  if (!tesseract_msgs__msg__Joint__Sequence__are_equal(
      &(lhs->joints), &(rhs->joints)))
  {
    return false;
  }
  // invisible_links
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->invisible_links), &(rhs->invisible_links)))
  {
    return false;
  }
  // disabled_collision_links
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->disabled_collision_links), &(rhs->disabled_collision_links)))
  {
    return false;
  }
  // acm
  if (!tesseract_msgs__msg__AllowedCollisionEntry__Sequence__are_equal(
      &(lhs->acm), &(rhs->acm)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__msg__SceneGraph__copy(
  const tesseract_msgs__msg__SceneGraph * input,
  tesseract_msgs__msg__SceneGraph * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // root
  if (!rosidl_runtime_c__String__copy(
      &(input->root), &(output->root)))
  {
    return false;
  }
  // links
  if (!tesseract_msgs__msg__Link__Sequence__copy(
      &(input->links), &(output->links)))
  {
    return false;
  }
  // joints
  if (!tesseract_msgs__msg__Joint__Sequence__copy(
      &(input->joints), &(output->joints)))
  {
    return false;
  }
  // invisible_links
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->invisible_links), &(output->invisible_links)))
  {
    return false;
  }
  // disabled_collision_links
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->disabled_collision_links), &(output->disabled_collision_links)))
  {
    return false;
  }
  // acm
  if (!tesseract_msgs__msg__AllowedCollisionEntry__Sequence__copy(
      &(input->acm), &(output->acm)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__msg__SceneGraph *
tesseract_msgs__msg__SceneGraph__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__SceneGraph * msg = (tesseract_msgs__msg__SceneGraph *)allocator.allocate(sizeof(tesseract_msgs__msg__SceneGraph), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__SceneGraph));
  bool success = tesseract_msgs__msg__SceneGraph__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__SceneGraph__destroy(tesseract_msgs__msg__SceneGraph * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__SceneGraph__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__SceneGraph__Sequence__init(tesseract_msgs__msg__SceneGraph__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__SceneGraph * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__SceneGraph *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__SceneGraph), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__SceneGraph__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__SceneGraph__fini(&data[i - 1]);
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
tesseract_msgs__msg__SceneGraph__Sequence__fini(tesseract_msgs__msg__SceneGraph__Sequence * array)
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
      tesseract_msgs__msg__SceneGraph__fini(&array->data[i]);
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

tesseract_msgs__msg__SceneGraph__Sequence *
tesseract_msgs__msg__SceneGraph__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__SceneGraph__Sequence * array = (tesseract_msgs__msg__SceneGraph__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__SceneGraph__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__SceneGraph__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__SceneGraph__Sequence__destroy(tesseract_msgs__msg__SceneGraph__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__SceneGraph__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__SceneGraph__Sequence__are_equal(const tesseract_msgs__msg__SceneGraph__Sequence * lhs, const tesseract_msgs__msg__SceneGraph__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__SceneGraph__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__SceneGraph__Sequence__copy(
  const tesseract_msgs__msg__SceneGraph__Sequence * input,
  tesseract_msgs__msg__SceneGraph__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__SceneGraph);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__SceneGraph * data =
      (tesseract_msgs__msg__SceneGraph *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__SceneGraph__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__SceneGraph__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__SceneGraph__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
