// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:action/GetMotionPlan.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/action/detail/get_motion_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `request`
#include "tesseract_msgs/msg/detail/planning_request__functions.h"

bool
tesseract_msgs__action__GetMotionPlan_Goal__init(tesseract_msgs__action__GetMotionPlan_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // request
  if (!tesseract_msgs__msg__PlanningRequest__init(&msg->request)) {
    tesseract_msgs__action__GetMotionPlan_Goal__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__action__GetMotionPlan_Goal__fini(tesseract_msgs__action__GetMotionPlan_Goal * msg)
{
  if (!msg) {
    return;
  }
  // request
  tesseract_msgs__msg__PlanningRequest__fini(&msg->request);
}

bool
tesseract_msgs__action__GetMotionPlan_Goal__are_equal(const tesseract_msgs__action__GetMotionPlan_Goal * lhs, const tesseract_msgs__action__GetMotionPlan_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (!tesseract_msgs__msg__PlanningRequest__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__action__GetMotionPlan_Goal__copy(
  const tesseract_msgs__action__GetMotionPlan_Goal * input,
  tesseract_msgs__action__GetMotionPlan_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  if (!tesseract_msgs__msg__PlanningRequest__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__action__GetMotionPlan_Goal *
tesseract_msgs__action__GetMotionPlan_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_Goal * msg = (tesseract_msgs__action__GetMotionPlan_Goal *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__action__GetMotionPlan_Goal));
  bool success = tesseract_msgs__action__GetMotionPlan_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__action__GetMotionPlan_Goal__destroy(tesseract_msgs__action__GetMotionPlan_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__action__GetMotionPlan_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__action__GetMotionPlan_Goal__Sequence__init(tesseract_msgs__action__GetMotionPlan_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_Goal * data = NULL;

  if (size) {
    data = (tesseract_msgs__action__GetMotionPlan_Goal *)allocator.zero_allocate(size, sizeof(tesseract_msgs__action__GetMotionPlan_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__action__GetMotionPlan_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__action__GetMotionPlan_Goal__fini(&data[i - 1]);
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
tesseract_msgs__action__GetMotionPlan_Goal__Sequence__fini(tesseract_msgs__action__GetMotionPlan_Goal__Sequence * array)
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
      tesseract_msgs__action__GetMotionPlan_Goal__fini(&array->data[i]);
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

tesseract_msgs__action__GetMotionPlan_Goal__Sequence *
tesseract_msgs__action__GetMotionPlan_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_Goal__Sequence * array = (tesseract_msgs__action__GetMotionPlan_Goal__Sequence *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__action__GetMotionPlan_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__action__GetMotionPlan_Goal__Sequence__destroy(tesseract_msgs__action__GetMotionPlan_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__action__GetMotionPlan_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__action__GetMotionPlan_Goal__Sequence__are_equal(const tesseract_msgs__action__GetMotionPlan_Goal__Sequence * lhs, const tesseract_msgs__action__GetMotionPlan_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__action__GetMotionPlan_Goal__Sequence__copy(
  const tesseract_msgs__action__GetMotionPlan_Goal__Sequence * input,
  tesseract_msgs__action__GetMotionPlan_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__action__GetMotionPlan_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__action__GetMotionPlan_Goal * data =
      (tesseract_msgs__action__GetMotionPlan_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__action__GetMotionPlan_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__action__GetMotionPlan_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
#include "tesseract_msgs/msg/detail/planning_response__functions.h"

bool
tesseract_msgs__action__GetMotionPlan_Result__init(tesseract_msgs__action__GetMotionPlan_Result * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!tesseract_msgs__msg__PlanningResponse__init(&msg->response)) {
    tesseract_msgs__action__GetMotionPlan_Result__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__action__GetMotionPlan_Result__fini(tesseract_msgs__action__GetMotionPlan_Result * msg)
{
  if (!msg) {
    return;
  }
  // response
  tesseract_msgs__msg__PlanningResponse__fini(&msg->response);
}

bool
tesseract_msgs__action__GetMotionPlan_Result__are_equal(const tesseract_msgs__action__GetMotionPlan_Result * lhs, const tesseract_msgs__action__GetMotionPlan_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!tesseract_msgs__msg__PlanningResponse__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__action__GetMotionPlan_Result__copy(
  const tesseract_msgs__action__GetMotionPlan_Result * input,
  tesseract_msgs__action__GetMotionPlan_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!tesseract_msgs__msg__PlanningResponse__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__action__GetMotionPlan_Result *
tesseract_msgs__action__GetMotionPlan_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_Result * msg = (tesseract_msgs__action__GetMotionPlan_Result *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__action__GetMotionPlan_Result));
  bool success = tesseract_msgs__action__GetMotionPlan_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__action__GetMotionPlan_Result__destroy(tesseract_msgs__action__GetMotionPlan_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__action__GetMotionPlan_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__action__GetMotionPlan_Result__Sequence__init(tesseract_msgs__action__GetMotionPlan_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_Result * data = NULL;

  if (size) {
    data = (tesseract_msgs__action__GetMotionPlan_Result *)allocator.zero_allocate(size, sizeof(tesseract_msgs__action__GetMotionPlan_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__action__GetMotionPlan_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__action__GetMotionPlan_Result__fini(&data[i - 1]);
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
tesseract_msgs__action__GetMotionPlan_Result__Sequence__fini(tesseract_msgs__action__GetMotionPlan_Result__Sequence * array)
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
      tesseract_msgs__action__GetMotionPlan_Result__fini(&array->data[i]);
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

tesseract_msgs__action__GetMotionPlan_Result__Sequence *
tesseract_msgs__action__GetMotionPlan_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_Result__Sequence * array = (tesseract_msgs__action__GetMotionPlan_Result__Sequence *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__action__GetMotionPlan_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__action__GetMotionPlan_Result__Sequence__destroy(tesseract_msgs__action__GetMotionPlan_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__action__GetMotionPlan_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__action__GetMotionPlan_Result__Sequence__are_equal(const tesseract_msgs__action__GetMotionPlan_Result__Sequence * lhs, const tesseract_msgs__action__GetMotionPlan_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__action__GetMotionPlan_Result__Sequence__copy(
  const tesseract_msgs__action__GetMotionPlan_Result__Sequence * input,
  tesseract_msgs__action__GetMotionPlan_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__action__GetMotionPlan_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__action__GetMotionPlan_Result * data =
      (tesseract_msgs__action__GetMotionPlan_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__action__GetMotionPlan_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__action__GetMotionPlan_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tesseract_msgs__action__GetMotionPlan_Feedback__init(tesseract_msgs__action__GetMotionPlan_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
tesseract_msgs__action__GetMotionPlan_Feedback__fini(tesseract_msgs__action__GetMotionPlan_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
tesseract_msgs__action__GetMotionPlan_Feedback__are_equal(const tesseract_msgs__action__GetMotionPlan_Feedback * lhs, const tesseract_msgs__action__GetMotionPlan_Feedback * rhs)
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
tesseract_msgs__action__GetMotionPlan_Feedback__copy(
  const tesseract_msgs__action__GetMotionPlan_Feedback * input,
  tesseract_msgs__action__GetMotionPlan_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

tesseract_msgs__action__GetMotionPlan_Feedback *
tesseract_msgs__action__GetMotionPlan_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_Feedback * msg = (tesseract_msgs__action__GetMotionPlan_Feedback *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__action__GetMotionPlan_Feedback));
  bool success = tesseract_msgs__action__GetMotionPlan_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__action__GetMotionPlan_Feedback__destroy(tesseract_msgs__action__GetMotionPlan_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__action__GetMotionPlan_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__action__GetMotionPlan_Feedback__Sequence__init(tesseract_msgs__action__GetMotionPlan_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_Feedback * data = NULL;

  if (size) {
    data = (tesseract_msgs__action__GetMotionPlan_Feedback *)allocator.zero_allocate(size, sizeof(tesseract_msgs__action__GetMotionPlan_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__action__GetMotionPlan_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__action__GetMotionPlan_Feedback__fini(&data[i - 1]);
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
tesseract_msgs__action__GetMotionPlan_Feedback__Sequence__fini(tesseract_msgs__action__GetMotionPlan_Feedback__Sequence * array)
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
      tesseract_msgs__action__GetMotionPlan_Feedback__fini(&array->data[i]);
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

tesseract_msgs__action__GetMotionPlan_Feedback__Sequence *
tesseract_msgs__action__GetMotionPlan_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_Feedback__Sequence * array = (tesseract_msgs__action__GetMotionPlan_Feedback__Sequence *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__action__GetMotionPlan_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__action__GetMotionPlan_Feedback__Sequence__destroy(tesseract_msgs__action__GetMotionPlan_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__action__GetMotionPlan_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__action__GetMotionPlan_Feedback__Sequence__are_equal(const tesseract_msgs__action__GetMotionPlan_Feedback__Sequence * lhs, const tesseract_msgs__action__GetMotionPlan_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__action__GetMotionPlan_Feedback__Sequence__copy(
  const tesseract_msgs__action__GetMotionPlan_Feedback__Sequence * input,
  tesseract_msgs__action__GetMotionPlan_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__action__GetMotionPlan_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__action__GetMotionPlan_Feedback * data =
      (tesseract_msgs__action__GetMotionPlan_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__action__GetMotionPlan_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__action__GetMotionPlan_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "tesseract_msgs/action/detail/get_motion_plan__functions.h"

bool
tesseract_msgs__action__GetMotionPlan_SendGoal_Request__init(tesseract_msgs__action__GetMotionPlan_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tesseract_msgs__action__GetMotionPlan_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!tesseract_msgs__action__GetMotionPlan_Goal__init(&msg->goal)) {
    tesseract_msgs__action__GetMotionPlan_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__action__GetMotionPlan_SendGoal_Request__fini(tesseract_msgs__action__GetMotionPlan_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  tesseract_msgs__action__GetMotionPlan_Goal__fini(&msg->goal);
}

bool
tesseract_msgs__action__GetMotionPlan_SendGoal_Request__are_equal(const tesseract_msgs__action__GetMotionPlan_SendGoal_Request * lhs, const tesseract_msgs__action__GetMotionPlan_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!tesseract_msgs__action__GetMotionPlan_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__action__GetMotionPlan_SendGoal_Request__copy(
  const tesseract_msgs__action__GetMotionPlan_SendGoal_Request * input,
  tesseract_msgs__action__GetMotionPlan_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!tesseract_msgs__action__GetMotionPlan_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__action__GetMotionPlan_SendGoal_Request *
tesseract_msgs__action__GetMotionPlan_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_SendGoal_Request * msg = (tesseract_msgs__action__GetMotionPlan_SendGoal_Request *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__action__GetMotionPlan_SendGoal_Request));
  bool success = tesseract_msgs__action__GetMotionPlan_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__action__GetMotionPlan_SendGoal_Request__destroy(tesseract_msgs__action__GetMotionPlan_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__action__GetMotionPlan_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence__init(tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_SendGoal_Request * data = NULL;

  if (size) {
    data = (tesseract_msgs__action__GetMotionPlan_SendGoal_Request *)allocator.zero_allocate(size, sizeof(tesseract_msgs__action__GetMotionPlan_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__action__GetMotionPlan_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__action__GetMotionPlan_SendGoal_Request__fini(&data[i - 1]);
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
tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence__fini(tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence * array)
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
      tesseract_msgs__action__GetMotionPlan_SendGoal_Request__fini(&array->data[i]);
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

tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence *
tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence * array = (tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence__destroy(tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence__are_equal(const tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence * lhs, const tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence__copy(
  const tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence * input,
  tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__action__GetMotionPlan_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__action__GetMotionPlan_SendGoal_Request * data =
      (tesseract_msgs__action__GetMotionPlan_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__action__GetMotionPlan_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__action__GetMotionPlan_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
tesseract_msgs__action__GetMotionPlan_SendGoal_Response__init(tesseract_msgs__action__GetMotionPlan_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tesseract_msgs__action__GetMotionPlan_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__action__GetMotionPlan_SendGoal_Response__fini(tesseract_msgs__action__GetMotionPlan_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
tesseract_msgs__action__GetMotionPlan_SendGoal_Response__are_equal(const tesseract_msgs__action__GetMotionPlan_SendGoal_Response * lhs, const tesseract_msgs__action__GetMotionPlan_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__action__GetMotionPlan_SendGoal_Response__copy(
  const tesseract_msgs__action__GetMotionPlan_SendGoal_Response * input,
  tesseract_msgs__action__GetMotionPlan_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__action__GetMotionPlan_SendGoal_Response *
tesseract_msgs__action__GetMotionPlan_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_SendGoal_Response * msg = (tesseract_msgs__action__GetMotionPlan_SendGoal_Response *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__action__GetMotionPlan_SendGoal_Response));
  bool success = tesseract_msgs__action__GetMotionPlan_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__action__GetMotionPlan_SendGoal_Response__destroy(tesseract_msgs__action__GetMotionPlan_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__action__GetMotionPlan_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence__init(tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_SendGoal_Response * data = NULL;

  if (size) {
    data = (tesseract_msgs__action__GetMotionPlan_SendGoal_Response *)allocator.zero_allocate(size, sizeof(tesseract_msgs__action__GetMotionPlan_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__action__GetMotionPlan_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__action__GetMotionPlan_SendGoal_Response__fini(&data[i - 1]);
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
tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence__fini(tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence * array)
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
      tesseract_msgs__action__GetMotionPlan_SendGoal_Response__fini(&array->data[i]);
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

tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence *
tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence * array = (tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence__destroy(tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence__are_equal(const tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence * lhs, const tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence__copy(
  const tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence * input,
  tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__action__GetMotionPlan_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__action__GetMotionPlan_SendGoal_Response * data =
      (tesseract_msgs__action__GetMotionPlan_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__action__GetMotionPlan_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__action__GetMotionPlan_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
tesseract_msgs__action__GetMotionPlan_GetResult_Request__init(tesseract_msgs__action__GetMotionPlan_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tesseract_msgs__action__GetMotionPlan_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__action__GetMotionPlan_GetResult_Request__fini(tesseract_msgs__action__GetMotionPlan_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
tesseract_msgs__action__GetMotionPlan_GetResult_Request__are_equal(const tesseract_msgs__action__GetMotionPlan_GetResult_Request * lhs, const tesseract_msgs__action__GetMotionPlan_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__action__GetMotionPlan_GetResult_Request__copy(
  const tesseract_msgs__action__GetMotionPlan_GetResult_Request * input,
  tesseract_msgs__action__GetMotionPlan_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__action__GetMotionPlan_GetResult_Request *
tesseract_msgs__action__GetMotionPlan_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_GetResult_Request * msg = (tesseract_msgs__action__GetMotionPlan_GetResult_Request *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__action__GetMotionPlan_GetResult_Request));
  bool success = tesseract_msgs__action__GetMotionPlan_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__action__GetMotionPlan_GetResult_Request__destroy(tesseract_msgs__action__GetMotionPlan_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__action__GetMotionPlan_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence__init(tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_GetResult_Request * data = NULL;

  if (size) {
    data = (tesseract_msgs__action__GetMotionPlan_GetResult_Request *)allocator.zero_allocate(size, sizeof(tesseract_msgs__action__GetMotionPlan_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__action__GetMotionPlan_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__action__GetMotionPlan_GetResult_Request__fini(&data[i - 1]);
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
tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence__fini(tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence * array)
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
      tesseract_msgs__action__GetMotionPlan_GetResult_Request__fini(&array->data[i]);
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

tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence *
tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence * array = (tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence__destroy(tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence__are_equal(const tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence * lhs, const tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence__copy(
  const tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence * input,
  tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__action__GetMotionPlan_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__action__GetMotionPlan_GetResult_Request * data =
      (tesseract_msgs__action__GetMotionPlan_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__action__GetMotionPlan_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__action__GetMotionPlan_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "tesseract_msgs/action/detail/get_motion_plan__functions.h"

bool
tesseract_msgs__action__GetMotionPlan_GetResult_Response__init(tesseract_msgs__action__GetMotionPlan_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!tesseract_msgs__action__GetMotionPlan_Result__init(&msg->result)) {
    tesseract_msgs__action__GetMotionPlan_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__action__GetMotionPlan_GetResult_Response__fini(tesseract_msgs__action__GetMotionPlan_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  tesseract_msgs__action__GetMotionPlan_Result__fini(&msg->result);
}

bool
tesseract_msgs__action__GetMotionPlan_GetResult_Response__are_equal(const tesseract_msgs__action__GetMotionPlan_GetResult_Response * lhs, const tesseract_msgs__action__GetMotionPlan_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!tesseract_msgs__action__GetMotionPlan_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__action__GetMotionPlan_GetResult_Response__copy(
  const tesseract_msgs__action__GetMotionPlan_GetResult_Response * input,
  tesseract_msgs__action__GetMotionPlan_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!tesseract_msgs__action__GetMotionPlan_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__action__GetMotionPlan_GetResult_Response *
tesseract_msgs__action__GetMotionPlan_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_GetResult_Response * msg = (tesseract_msgs__action__GetMotionPlan_GetResult_Response *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__action__GetMotionPlan_GetResult_Response));
  bool success = tesseract_msgs__action__GetMotionPlan_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__action__GetMotionPlan_GetResult_Response__destroy(tesseract_msgs__action__GetMotionPlan_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__action__GetMotionPlan_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence__init(tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_GetResult_Response * data = NULL;

  if (size) {
    data = (tesseract_msgs__action__GetMotionPlan_GetResult_Response *)allocator.zero_allocate(size, sizeof(tesseract_msgs__action__GetMotionPlan_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__action__GetMotionPlan_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__action__GetMotionPlan_GetResult_Response__fini(&data[i - 1]);
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
tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence__fini(tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence * array)
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
      tesseract_msgs__action__GetMotionPlan_GetResult_Response__fini(&array->data[i]);
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

tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence *
tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence * array = (tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence__destroy(tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence__are_equal(const tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence * lhs, const tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence__copy(
  const tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence * input,
  tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__action__GetMotionPlan_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__action__GetMotionPlan_GetResult_Response * data =
      (tesseract_msgs__action__GetMotionPlan_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__action__GetMotionPlan_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__action__GetMotionPlan_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "tesseract_msgs/action/detail/get_motion_plan__functions.h"

bool
tesseract_msgs__action__GetMotionPlan_FeedbackMessage__init(tesseract_msgs__action__GetMotionPlan_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tesseract_msgs__action__GetMotionPlan_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!tesseract_msgs__action__GetMotionPlan_Feedback__init(&msg->feedback)) {
    tesseract_msgs__action__GetMotionPlan_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__action__GetMotionPlan_FeedbackMessage__fini(tesseract_msgs__action__GetMotionPlan_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  tesseract_msgs__action__GetMotionPlan_Feedback__fini(&msg->feedback);
}

bool
tesseract_msgs__action__GetMotionPlan_FeedbackMessage__are_equal(const tesseract_msgs__action__GetMotionPlan_FeedbackMessage * lhs, const tesseract_msgs__action__GetMotionPlan_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tesseract_msgs__action__GetMotionPlan_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__action__GetMotionPlan_FeedbackMessage__copy(
  const tesseract_msgs__action__GetMotionPlan_FeedbackMessage * input,
  tesseract_msgs__action__GetMotionPlan_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tesseract_msgs__action__GetMotionPlan_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__action__GetMotionPlan_FeedbackMessage *
tesseract_msgs__action__GetMotionPlan_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_FeedbackMessage * msg = (tesseract_msgs__action__GetMotionPlan_FeedbackMessage *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__action__GetMotionPlan_FeedbackMessage));
  bool success = tesseract_msgs__action__GetMotionPlan_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__action__GetMotionPlan_FeedbackMessage__destroy(tesseract_msgs__action__GetMotionPlan_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__action__GetMotionPlan_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence__init(tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_FeedbackMessage * data = NULL;

  if (size) {
    data = (tesseract_msgs__action__GetMotionPlan_FeedbackMessage *)allocator.zero_allocate(size, sizeof(tesseract_msgs__action__GetMotionPlan_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__action__GetMotionPlan_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__action__GetMotionPlan_FeedbackMessage__fini(&data[i - 1]);
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
tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence__fini(tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence * array)
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
      tesseract_msgs__action__GetMotionPlan_FeedbackMessage__fini(&array->data[i]);
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

tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence *
tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence * array = (tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence *)allocator.allocate(sizeof(tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence__destroy(tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence__are_equal(const tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence * lhs, const tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence__copy(
  const tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence * input,
  tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__action__GetMotionPlan_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__action__GetMotionPlan_FeedbackMessage * data =
      (tesseract_msgs__action__GetMotionPlan_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__action__GetMotionPlan_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__action__GetMotionPlan_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__action__GetMotionPlan_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
