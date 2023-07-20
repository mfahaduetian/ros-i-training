// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from snp_msgs:srv/ExecuteMotionPlan.idl
// generated code does not contain a copyright notice
#include "snp_msgs/srv/detail/execute_motion_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `motion_plan`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"

bool
snp_msgs__srv__ExecuteMotionPlan_Request__init(snp_msgs__srv__ExecuteMotionPlan_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motion_plan
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->motion_plan)) {
    snp_msgs__srv__ExecuteMotionPlan_Request__fini(msg);
    return false;
  }
  // use_tool
  return true;
}

void
snp_msgs__srv__ExecuteMotionPlan_Request__fini(snp_msgs__srv__ExecuteMotionPlan_Request * msg)
{
  if (!msg) {
    return;
  }
  // motion_plan
  trajectory_msgs__msg__JointTrajectory__fini(&msg->motion_plan);
  // use_tool
}

bool
snp_msgs__srv__ExecuteMotionPlan_Request__are_equal(const snp_msgs__srv__ExecuteMotionPlan_Request * lhs, const snp_msgs__srv__ExecuteMotionPlan_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motion_plan
  if (!trajectory_msgs__msg__JointTrajectory__are_equal(
      &(lhs->motion_plan), &(rhs->motion_plan)))
  {
    return false;
  }
  // use_tool
  if (lhs->use_tool != rhs->use_tool) {
    return false;
  }
  return true;
}

bool
snp_msgs__srv__ExecuteMotionPlan_Request__copy(
  const snp_msgs__srv__ExecuteMotionPlan_Request * input,
  snp_msgs__srv__ExecuteMotionPlan_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // motion_plan
  if (!trajectory_msgs__msg__JointTrajectory__copy(
      &(input->motion_plan), &(output->motion_plan)))
  {
    return false;
  }
  // use_tool
  output->use_tool = input->use_tool;
  return true;
}

snp_msgs__srv__ExecuteMotionPlan_Request *
snp_msgs__srv__ExecuteMotionPlan_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snp_msgs__srv__ExecuteMotionPlan_Request * msg = (snp_msgs__srv__ExecuteMotionPlan_Request *)allocator.allocate(sizeof(snp_msgs__srv__ExecuteMotionPlan_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snp_msgs__srv__ExecuteMotionPlan_Request));
  bool success = snp_msgs__srv__ExecuteMotionPlan_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
snp_msgs__srv__ExecuteMotionPlan_Request__destroy(snp_msgs__srv__ExecuteMotionPlan_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    snp_msgs__srv__ExecuteMotionPlan_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
snp_msgs__srv__ExecuteMotionPlan_Request__Sequence__init(snp_msgs__srv__ExecuteMotionPlan_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snp_msgs__srv__ExecuteMotionPlan_Request * data = NULL;

  if (size) {
    data = (snp_msgs__srv__ExecuteMotionPlan_Request *)allocator.zero_allocate(size, sizeof(snp_msgs__srv__ExecuteMotionPlan_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snp_msgs__srv__ExecuteMotionPlan_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snp_msgs__srv__ExecuteMotionPlan_Request__fini(&data[i - 1]);
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
snp_msgs__srv__ExecuteMotionPlan_Request__Sequence__fini(snp_msgs__srv__ExecuteMotionPlan_Request__Sequence * array)
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
      snp_msgs__srv__ExecuteMotionPlan_Request__fini(&array->data[i]);
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

snp_msgs__srv__ExecuteMotionPlan_Request__Sequence *
snp_msgs__srv__ExecuteMotionPlan_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snp_msgs__srv__ExecuteMotionPlan_Request__Sequence * array = (snp_msgs__srv__ExecuteMotionPlan_Request__Sequence *)allocator.allocate(sizeof(snp_msgs__srv__ExecuteMotionPlan_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = snp_msgs__srv__ExecuteMotionPlan_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
snp_msgs__srv__ExecuteMotionPlan_Request__Sequence__destroy(snp_msgs__srv__ExecuteMotionPlan_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    snp_msgs__srv__ExecuteMotionPlan_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
snp_msgs__srv__ExecuteMotionPlan_Request__Sequence__are_equal(const snp_msgs__srv__ExecuteMotionPlan_Request__Sequence * lhs, const snp_msgs__srv__ExecuteMotionPlan_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!snp_msgs__srv__ExecuteMotionPlan_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
snp_msgs__srv__ExecuteMotionPlan_Request__Sequence__copy(
  const snp_msgs__srv__ExecuteMotionPlan_Request__Sequence * input,
  snp_msgs__srv__ExecuteMotionPlan_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(snp_msgs__srv__ExecuteMotionPlan_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    snp_msgs__srv__ExecuteMotionPlan_Request * data =
      (snp_msgs__srv__ExecuteMotionPlan_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!snp_msgs__srv__ExecuteMotionPlan_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          snp_msgs__srv__ExecuteMotionPlan_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!snp_msgs__srv__ExecuteMotionPlan_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
snp_msgs__srv__ExecuteMotionPlan_Response__init(snp_msgs__srv__ExecuteMotionPlan_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    snp_msgs__srv__ExecuteMotionPlan_Response__fini(msg);
    return false;
  }
  return true;
}

void
snp_msgs__srv__ExecuteMotionPlan_Response__fini(snp_msgs__srv__ExecuteMotionPlan_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
snp_msgs__srv__ExecuteMotionPlan_Response__are_equal(const snp_msgs__srv__ExecuteMotionPlan_Response * lhs, const snp_msgs__srv__ExecuteMotionPlan_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
snp_msgs__srv__ExecuteMotionPlan_Response__copy(
  const snp_msgs__srv__ExecuteMotionPlan_Response * input,
  snp_msgs__srv__ExecuteMotionPlan_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

snp_msgs__srv__ExecuteMotionPlan_Response *
snp_msgs__srv__ExecuteMotionPlan_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snp_msgs__srv__ExecuteMotionPlan_Response * msg = (snp_msgs__srv__ExecuteMotionPlan_Response *)allocator.allocate(sizeof(snp_msgs__srv__ExecuteMotionPlan_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(snp_msgs__srv__ExecuteMotionPlan_Response));
  bool success = snp_msgs__srv__ExecuteMotionPlan_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
snp_msgs__srv__ExecuteMotionPlan_Response__destroy(snp_msgs__srv__ExecuteMotionPlan_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    snp_msgs__srv__ExecuteMotionPlan_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
snp_msgs__srv__ExecuteMotionPlan_Response__Sequence__init(snp_msgs__srv__ExecuteMotionPlan_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snp_msgs__srv__ExecuteMotionPlan_Response * data = NULL;

  if (size) {
    data = (snp_msgs__srv__ExecuteMotionPlan_Response *)allocator.zero_allocate(size, sizeof(snp_msgs__srv__ExecuteMotionPlan_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = snp_msgs__srv__ExecuteMotionPlan_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        snp_msgs__srv__ExecuteMotionPlan_Response__fini(&data[i - 1]);
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
snp_msgs__srv__ExecuteMotionPlan_Response__Sequence__fini(snp_msgs__srv__ExecuteMotionPlan_Response__Sequence * array)
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
      snp_msgs__srv__ExecuteMotionPlan_Response__fini(&array->data[i]);
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

snp_msgs__srv__ExecuteMotionPlan_Response__Sequence *
snp_msgs__srv__ExecuteMotionPlan_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  snp_msgs__srv__ExecuteMotionPlan_Response__Sequence * array = (snp_msgs__srv__ExecuteMotionPlan_Response__Sequence *)allocator.allocate(sizeof(snp_msgs__srv__ExecuteMotionPlan_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = snp_msgs__srv__ExecuteMotionPlan_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
snp_msgs__srv__ExecuteMotionPlan_Response__Sequence__destroy(snp_msgs__srv__ExecuteMotionPlan_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    snp_msgs__srv__ExecuteMotionPlan_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
snp_msgs__srv__ExecuteMotionPlan_Response__Sequence__are_equal(const snp_msgs__srv__ExecuteMotionPlan_Response__Sequence * lhs, const snp_msgs__srv__ExecuteMotionPlan_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!snp_msgs__srv__ExecuteMotionPlan_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
snp_msgs__srv__ExecuteMotionPlan_Response__Sequence__copy(
  const snp_msgs__srv__ExecuteMotionPlan_Response__Sequence * input,
  snp_msgs__srv__ExecuteMotionPlan_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(snp_msgs__srv__ExecuteMotionPlan_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    snp_msgs__srv__ExecuteMotionPlan_Response * data =
      (snp_msgs__srv__ExecuteMotionPlan_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!snp_msgs__srv__ExecuteMotionPlan_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          snp_msgs__srv__ExecuteMotionPlan_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!snp_msgs__srv__ExecuteMotionPlan_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
