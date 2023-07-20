// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rviz_polygon_selection_tool:srv/GetSelection.idl
// generated code does not contain a copyright notice
#include "rviz_polygon_selection_tool/srv/detail/get_selection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
rviz_polygon_selection_tool__srv__GetSelection_Request__init(rviz_polygon_selection_tool__srv__GetSelection_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rviz_polygon_selection_tool__srv__GetSelection_Request__fini(rviz_polygon_selection_tool__srv__GetSelection_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
rviz_polygon_selection_tool__srv__GetSelection_Request__are_equal(const rviz_polygon_selection_tool__srv__GetSelection_Request * lhs, const rviz_polygon_selection_tool__srv__GetSelection_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
rviz_polygon_selection_tool__srv__GetSelection_Request__copy(
  const rviz_polygon_selection_tool__srv__GetSelection_Request * input,
  rviz_polygon_selection_tool__srv__GetSelection_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

rviz_polygon_selection_tool__srv__GetSelection_Request *
rviz_polygon_selection_tool__srv__GetSelection_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_polygon_selection_tool__srv__GetSelection_Request * msg = (rviz_polygon_selection_tool__srv__GetSelection_Request *)allocator.allocate(sizeof(rviz_polygon_selection_tool__srv__GetSelection_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rviz_polygon_selection_tool__srv__GetSelection_Request));
  bool success = rviz_polygon_selection_tool__srv__GetSelection_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rviz_polygon_selection_tool__srv__GetSelection_Request__destroy(rviz_polygon_selection_tool__srv__GetSelection_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rviz_polygon_selection_tool__srv__GetSelection_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__init(rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_polygon_selection_tool__srv__GetSelection_Request * data = NULL;

  if (size) {
    data = (rviz_polygon_selection_tool__srv__GetSelection_Request *)allocator.zero_allocate(size, sizeof(rviz_polygon_selection_tool__srv__GetSelection_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rviz_polygon_selection_tool__srv__GetSelection_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rviz_polygon_selection_tool__srv__GetSelection_Request__fini(&data[i - 1]);
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
rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__fini(rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence * array)
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
      rviz_polygon_selection_tool__srv__GetSelection_Request__fini(&array->data[i]);
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

rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence *
rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence * array = (rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence *)allocator.allocate(sizeof(rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__destroy(rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__are_equal(const rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence * lhs, const rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rviz_polygon_selection_tool__srv__GetSelection_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__copy(
  const rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence * input,
  rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rviz_polygon_selection_tool__srv__GetSelection_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rviz_polygon_selection_tool__srv__GetSelection_Request * data =
      (rviz_polygon_selection_tool__srv__GetSelection_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rviz_polygon_selection_tool__srv__GetSelection_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rviz_polygon_selection_tool__srv__GetSelection_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rviz_polygon_selection_tool__srv__GetSelection_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `selection`
#include "geometry_msgs/msg/detail/point_stamped__functions.h"

bool
rviz_polygon_selection_tool__srv__GetSelection_Response__init(rviz_polygon_selection_tool__srv__GetSelection_Response * msg)
{
  if (!msg) {
    return false;
  }
  // selection
  if (!geometry_msgs__msg__PointStamped__Sequence__init(&msg->selection, 0)) {
    rviz_polygon_selection_tool__srv__GetSelection_Response__fini(msg);
    return false;
  }
  return true;
}

void
rviz_polygon_selection_tool__srv__GetSelection_Response__fini(rviz_polygon_selection_tool__srv__GetSelection_Response * msg)
{
  if (!msg) {
    return;
  }
  // selection
  geometry_msgs__msg__PointStamped__Sequence__fini(&msg->selection);
}

bool
rviz_polygon_selection_tool__srv__GetSelection_Response__are_equal(const rviz_polygon_selection_tool__srv__GetSelection_Response * lhs, const rviz_polygon_selection_tool__srv__GetSelection_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // selection
  if (!geometry_msgs__msg__PointStamped__Sequence__are_equal(
      &(lhs->selection), &(rhs->selection)))
  {
    return false;
  }
  return true;
}

bool
rviz_polygon_selection_tool__srv__GetSelection_Response__copy(
  const rviz_polygon_selection_tool__srv__GetSelection_Response * input,
  rviz_polygon_selection_tool__srv__GetSelection_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // selection
  if (!geometry_msgs__msg__PointStamped__Sequence__copy(
      &(input->selection), &(output->selection)))
  {
    return false;
  }
  return true;
}

rviz_polygon_selection_tool__srv__GetSelection_Response *
rviz_polygon_selection_tool__srv__GetSelection_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_polygon_selection_tool__srv__GetSelection_Response * msg = (rviz_polygon_selection_tool__srv__GetSelection_Response *)allocator.allocate(sizeof(rviz_polygon_selection_tool__srv__GetSelection_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rviz_polygon_selection_tool__srv__GetSelection_Response));
  bool success = rviz_polygon_selection_tool__srv__GetSelection_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rviz_polygon_selection_tool__srv__GetSelection_Response__destroy(rviz_polygon_selection_tool__srv__GetSelection_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rviz_polygon_selection_tool__srv__GetSelection_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__init(rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_polygon_selection_tool__srv__GetSelection_Response * data = NULL;

  if (size) {
    data = (rviz_polygon_selection_tool__srv__GetSelection_Response *)allocator.zero_allocate(size, sizeof(rviz_polygon_selection_tool__srv__GetSelection_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rviz_polygon_selection_tool__srv__GetSelection_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rviz_polygon_selection_tool__srv__GetSelection_Response__fini(&data[i - 1]);
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
rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__fini(rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence * array)
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
      rviz_polygon_selection_tool__srv__GetSelection_Response__fini(&array->data[i]);
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

rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence *
rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence * array = (rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence *)allocator.allocate(sizeof(rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__destroy(rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__are_equal(const rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence * lhs, const rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rviz_polygon_selection_tool__srv__GetSelection_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__copy(
  const rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence * input,
  rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rviz_polygon_selection_tool__srv__GetSelection_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rviz_polygon_selection_tool__srv__GetSelection_Response * data =
      (rviz_polygon_selection_tool__srv__GetSelection_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rviz_polygon_selection_tool__srv__GetSelection_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rviz_polygon_selection_tool__srv__GetSelection_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rviz_polygon_selection_tool__srv__GetSelection_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
