// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/EnvironmentState.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/environment_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `joint_state`
#include "sensor_msgs/msg/detail/joint_state__functions.h"

bool
tesseract_msgs__msg__EnvironmentState__init(tesseract_msgs__msg__EnvironmentState * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    tesseract_msgs__msg__EnvironmentState__fini(msg);
    return false;
  }
  // revision
  // joint_state
  if (!sensor_msgs__msg__JointState__init(&msg->joint_state)) {
    tesseract_msgs__msg__EnvironmentState__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__EnvironmentState__fini(tesseract_msgs__msg__EnvironmentState * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // revision
  // joint_state
  sensor_msgs__msg__JointState__fini(&msg->joint_state);
}

bool
tesseract_msgs__msg__EnvironmentState__are_equal(const tesseract_msgs__msg__EnvironmentState * lhs, const tesseract_msgs__msg__EnvironmentState * rhs)
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
  // revision
  if (lhs->revision != rhs->revision) {
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->joint_state), &(rhs->joint_state)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__msg__EnvironmentState__copy(
  const tesseract_msgs__msg__EnvironmentState * input,
  tesseract_msgs__msg__EnvironmentState * output)
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
  // revision
  output->revision = input->revision;
  // joint_state
  if (!sensor_msgs__msg__JointState__copy(
      &(input->joint_state), &(output->joint_state)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__msg__EnvironmentState *
tesseract_msgs__msg__EnvironmentState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__EnvironmentState * msg = (tesseract_msgs__msg__EnvironmentState *)allocator.allocate(sizeof(tesseract_msgs__msg__EnvironmentState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__EnvironmentState));
  bool success = tesseract_msgs__msg__EnvironmentState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__EnvironmentState__destroy(tesseract_msgs__msg__EnvironmentState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__EnvironmentState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__EnvironmentState__Sequence__init(tesseract_msgs__msg__EnvironmentState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__EnvironmentState * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__EnvironmentState *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__EnvironmentState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__EnvironmentState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__EnvironmentState__fini(&data[i - 1]);
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
tesseract_msgs__msg__EnvironmentState__Sequence__fini(tesseract_msgs__msg__EnvironmentState__Sequence * array)
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
      tesseract_msgs__msg__EnvironmentState__fini(&array->data[i]);
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

tesseract_msgs__msg__EnvironmentState__Sequence *
tesseract_msgs__msg__EnvironmentState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__EnvironmentState__Sequence * array = (tesseract_msgs__msg__EnvironmentState__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__EnvironmentState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__EnvironmentState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__EnvironmentState__Sequence__destroy(tesseract_msgs__msg__EnvironmentState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__EnvironmentState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__EnvironmentState__Sequence__are_equal(const tesseract_msgs__msg__EnvironmentState__Sequence * lhs, const tesseract_msgs__msg__EnvironmentState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__EnvironmentState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__EnvironmentState__Sequence__copy(
  const tesseract_msgs__msg__EnvironmentState__Sequence * input,
  tesseract_msgs__msg__EnvironmentState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__EnvironmentState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__EnvironmentState * data =
      (tesseract_msgs__msg__EnvironmentState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__EnvironmentState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__EnvironmentState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__EnvironmentState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
