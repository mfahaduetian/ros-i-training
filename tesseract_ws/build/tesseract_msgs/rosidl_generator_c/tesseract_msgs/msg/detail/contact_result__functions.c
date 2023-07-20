// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/ContactResult.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/contact_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `link_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `nearest_points`
// Member `nearest_points_local`
// Member `normal`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `transform`
// Member `cc_transform`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
tesseract_msgs__msg__ContactResult__init(tesseract_msgs__msg__ContactResult * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tesseract_msgs__msg__ContactResult__fini(msg);
    return false;
  }
  // distance
  // type_id
  // link_names
  for (size_t i = 0; i < 2; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->link_names[i])) {
      tesseract_msgs__msg__ContactResult__fini(msg);
      return false;
    }
  }
  // shape_id
  // subshape_id
  // nearest_points
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Vector3__init(&msg->nearest_points[i])) {
      tesseract_msgs__msg__ContactResult__fini(msg);
      return false;
    }
  }
  // nearest_points_local
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Vector3__init(&msg->nearest_points_local[i])) {
      tesseract_msgs__msg__ContactResult__fini(msg);
      return false;
    }
  }
  // transform
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Pose__init(&msg->transform[i])) {
      tesseract_msgs__msg__ContactResult__fini(msg);
      return false;
    }
  }
  // normal
  if (!geometry_msgs__msg__Vector3__init(&msg->normal)) {
    tesseract_msgs__msg__ContactResult__fini(msg);
    return false;
  }
  // cc_time
  // cc_type
  // cc_transform
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Pose__init(&msg->cc_transform[i])) {
      tesseract_msgs__msg__ContactResult__fini(msg);
      return false;
    }
  }
  return true;
}

void
tesseract_msgs__msg__ContactResult__fini(tesseract_msgs__msg__ContactResult * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // distance
  // type_id
  // link_names
  for (size_t i = 0; i < 2; ++i) {
    rosidl_runtime_c__String__fini(&msg->link_names[i]);
  }
  // shape_id
  // subshape_id
  // nearest_points
  for (size_t i = 0; i < 2; ++i) {
    geometry_msgs__msg__Vector3__fini(&msg->nearest_points[i]);
  }
  // nearest_points_local
  for (size_t i = 0; i < 2; ++i) {
    geometry_msgs__msg__Vector3__fini(&msg->nearest_points_local[i]);
  }
  // transform
  for (size_t i = 0; i < 2; ++i) {
    geometry_msgs__msg__Pose__fini(&msg->transform[i]);
  }
  // normal
  geometry_msgs__msg__Vector3__fini(&msg->normal);
  // cc_time
  // cc_type
  // cc_transform
  for (size_t i = 0; i < 2; ++i) {
    geometry_msgs__msg__Pose__fini(&msg->cc_transform[i]);
  }
}

bool
tesseract_msgs__msg__ContactResult__are_equal(const tesseract_msgs__msg__ContactResult * lhs, const tesseract_msgs__msg__ContactResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // type_id
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->type_id[i] != rhs->type_id[i]) {
      return false;
    }
  }
  // link_names
  for (size_t i = 0; i < 2; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->link_names[i]), &(rhs->link_names[i])))
    {
      return false;
    }
  }
  // shape_id
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->shape_id[i] != rhs->shape_id[i]) {
      return false;
    }
  }
  // subshape_id
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->subshape_id[i] != rhs->subshape_id[i]) {
      return false;
    }
  }
  // nearest_points
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Vector3__are_equal(
        &(lhs->nearest_points[i]), &(rhs->nearest_points[i])))
    {
      return false;
    }
  }
  // nearest_points_local
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Vector3__are_equal(
        &(lhs->nearest_points_local[i]), &(rhs->nearest_points_local[i])))
    {
      return false;
    }
  }
  // transform
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Pose__are_equal(
        &(lhs->transform[i]), &(rhs->transform[i])))
    {
      return false;
    }
  }
  // normal
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->normal), &(rhs->normal)))
  {
    return false;
  }
  // cc_time
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->cc_time[i] != rhs->cc_time[i]) {
      return false;
    }
  }
  // cc_type
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->cc_type[i] != rhs->cc_type[i]) {
      return false;
    }
  }
  // cc_transform
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Pose__are_equal(
        &(lhs->cc_transform[i]), &(rhs->cc_transform[i])))
    {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__ContactResult__copy(
  const tesseract_msgs__msg__ContactResult * input,
  tesseract_msgs__msg__ContactResult * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // distance
  output->distance = input->distance;
  // type_id
  for (size_t i = 0; i < 2; ++i) {
    output->type_id[i] = input->type_id[i];
  }
  // link_names
  for (size_t i = 0; i < 2; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->link_names[i]), &(output->link_names[i])))
    {
      return false;
    }
  }
  // shape_id
  for (size_t i = 0; i < 2; ++i) {
    output->shape_id[i] = input->shape_id[i];
  }
  // subshape_id
  for (size_t i = 0; i < 2; ++i) {
    output->subshape_id[i] = input->subshape_id[i];
  }
  // nearest_points
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Vector3__copy(
        &(input->nearest_points[i]), &(output->nearest_points[i])))
    {
      return false;
    }
  }
  // nearest_points_local
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Vector3__copy(
        &(input->nearest_points_local[i]), &(output->nearest_points_local[i])))
    {
      return false;
    }
  }
  // transform
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Pose__copy(
        &(input->transform[i]), &(output->transform[i])))
    {
      return false;
    }
  }
  // normal
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->normal), &(output->normal)))
  {
    return false;
  }
  // cc_time
  for (size_t i = 0; i < 2; ++i) {
    output->cc_time[i] = input->cc_time[i];
  }
  // cc_type
  for (size_t i = 0; i < 2; ++i) {
    output->cc_type[i] = input->cc_type[i];
  }
  // cc_transform
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Pose__copy(
        &(input->cc_transform[i]), &(output->cc_transform[i])))
    {
      return false;
    }
  }
  return true;
}

tesseract_msgs__msg__ContactResult *
tesseract_msgs__msg__ContactResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__ContactResult * msg = (tesseract_msgs__msg__ContactResult *)allocator.allocate(sizeof(tesseract_msgs__msg__ContactResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__ContactResult));
  bool success = tesseract_msgs__msg__ContactResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__ContactResult__destroy(tesseract_msgs__msg__ContactResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__ContactResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__ContactResult__Sequence__init(tesseract_msgs__msg__ContactResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__ContactResult * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__ContactResult *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__ContactResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__ContactResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__ContactResult__fini(&data[i - 1]);
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
tesseract_msgs__msg__ContactResult__Sequence__fini(tesseract_msgs__msg__ContactResult__Sequence * array)
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
      tesseract_msgs__msg__ContactResult__fini(&array->data[i]);
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

tesseract_msgs__msg__ContactResult__Sequence *
tesseract_msgs__msg__ContactResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__ContactResult__Sequence * array = (tesseract_msgs__msg__ContactResult__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__ContactResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__ContactResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__ContactResult__Sequence__destroy(tesseract_msgs__msg__ContactResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__ContactResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__ContactResult__Sequence__are_equal(const tesseract_msgs__msg__ContactResult__Sequence * lhs, const tesseract_msgs__msg__ContactResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__ContactResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__ContactResult__Sequence__copy(
  const tesseract_msgs__msg__ContactResult__Sequence * input,
  tesseract_msgs__msg__ContactResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__ContactResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__ContactResult * data =
      (tesseract_msgs__msg__ContactResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__ContactResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__ContactResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__ContactResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
