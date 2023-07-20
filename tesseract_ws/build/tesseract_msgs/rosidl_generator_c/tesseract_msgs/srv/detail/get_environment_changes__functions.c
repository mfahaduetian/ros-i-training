// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:srv/GetEnvironmentChanges.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/srv/detail/get_environment_changes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
tesseract_msgs__srv__GetEnvironmentChanges_Request__init(tesseract_msgs__srv__GetEnvironmentChanges_Request * msg)
{
  if (!msg) {
    return false;
  }
  // revision
  return true;
}

void
tesseract_msgs__srv__GetEnvironmentChanges_Request__fini(tesseract_msgs__srv__GetEnvironmentChanges_Request * msg)
{
  if (!msg) {
    return;
  }
  // revision
}

bool
tesseract_msgs__srv__GetEnvironmentChanges_Request__are_equal(const tesseract_msgs__srv__GetEnvironmentChanges_Request * lhs, const tesseract_msgs__srv__GetEnvironmentChanges_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // revision
  if (lhs->revision != rhs->revision) {
    return false;
  }
  return true;
}

bool
tesseract_msgs__srv__GetEnvironmentChanges_Request__copy(
  const tesseract_msgs__srv__GetEnvironmentChanges_Request * input,
  tesseract_msgs__srv__GetEnvironmentChanges_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // revision
  output->revision = input->revision;
  return true;
}

tesseract_msgs__srv__GetEnvironmentChanges_Request *
tesseract_msgs__srv__GetEnvironmentChanges_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__srv__GetEnvironmentChanges_Request * msg = (tesseract_msgs__srv__GetEnvironmentChanges_Request *)allocator.allocate(sizeof(tesseract_msgs__srv__GetEnvironmentChanges_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__srv__GetEnvironmentChanges_Request));
  bool success = tesseract_msgs__srv__GetEnvironmentChanges_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__srv__GetEnvironmentChanges_Request__destroy(tesseract_msgs__srv__GetEnvironmentChanges_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__srv__GetEnvironmentChanges_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence__init(tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__srv__GetEnvironmentChanges_Request * data = NULL;

  if (size) {
    data = (tesseract_msgs__srv__GetEnvironmentChanges_Request *)allocator.zero_allocate(size, sizeof(tesseract_msgs__srv__GetEnvironmentChanges_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__srv__GetEnvironmentChanges_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__srv__GetEnvironmentChanges_Request__fini(&data[i - 1]);
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
tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence__fini(tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence * array)
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
      tesseract_msgs__srv__GetEnvironmentChanges_Request__fini(&array->data[i]);
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

tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence *
tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence * array = (tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence *)allocator.allocate(sizeof(tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence__destroy(tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence__are_equal(const tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence * lhs, const tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__srv__GetEnvironmentChanges_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence__copy(
  const tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence * input,
  tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__srv__GetEnvironmentChanges_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__srv__GetEnvironmentChanges_Request * data =
      (tesseract_msgs__srv__GetEnvironmentChanges_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__srv__GetEnvironmentChanges_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__srv__GetEnvironmentChanges_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__srv__GetEnvironmentChanges_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `commands`
#include "tesseract_msgs/msg/detail/environment_command__functions.h"

bool
tesseract_msgs__srv__GetEnvironmentChanges_Response__init(tesseract_msgs__srv__GetEnvironmentChanges_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    tesseract_msgs__srv__GetEnvironmentChanges_Response__fini(msg);
    return false;
  }
  // revision
  // commands
  if (!tesseract_msgs__msg__EnvironmentCommand__Sequence__init(&msg->commands, 0)) {
    tesseract_msgs__srv__GetEnvironmentChanges_Response__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__srv__GetEnvironmentChanges_Response__fini(tesseract_msgs__srv__GetEnvironmentChanges_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // revision
  // commands
  tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(&msg->commands);
}

bool
tesseract_msgs__srv__GetEnvironmentChanges_Response__are_equal(const tesseract_msgs__srv__GetEnvironmentChanges_Response * lhs, const tesseract_msgs__srv__GetEnvironmentChanges_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
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
  // commands
  if (!tesseract_msgs__msg__EnvironmentCommand__Sequence__are_equal(
      &(lhs->commands), &(rhs->commands)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__srv__GetEnvironmentChanges_Response__copy(
  const tesseract_msgs__srv__GetEnvironmentChanges_Response * input,
  tesseract_msgs__srv__GetEnvironmentChanges_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // revision
  output->revision = input->revision;
  // commands
  if (!tesseract_msgs__msg__EnvironmentCommand__Sequence__copy(
      &(input->commands), &(output->commands)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__srv__GetEnvironmentChanges_Response *
tesseract_msgs__srv__GetEnvironmentChanges_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__srv__GetEnvironmentChanges_Response * msg = (tesseract_msgs__srv__GetEnvironmentChanges_Response *)allocator.allocate(sizeof(tesseract_msgs__srv__GetEnvironmentChanges_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__srv__GetEnvironmentChanges_Response));
  bool success = tesseract_msgs__srv__GetEnvironmentChanges_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__srv__GetEnvironmentChanges_Response__destroy(tesseract_msgs__srv__GetEnvironmentChanges_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__srv__GetEnvironmentChanges_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence__init(tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__srv__GetEnvironmentChanges_Response * data = NULL;

  if (size) {
    data = (tesseract_msgs__srv__GetEnvironmentChanges_Response *)allocator.zero_allocate(size, sizeof(tesseract_msgs__srv__GetEnvironmentChanges_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__srv__GetEnvironmentChanges_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__srv__GetEnvironmentChanges_Response__fini(&data[i - 1]);
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
tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence__fini(tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence * array)
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
      tesseract_msgs__srv__GetEnvironmentChanges_Response__fini(&array->data[i]);
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

tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence *
tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence * array = (tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence *)allocator.allocate(sizeof(tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence__destroy(tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence__are_equal(const tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence * lhs, const tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__srv__GetEnvironmentChanges_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence__copy(
  const tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence * input,
  tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__srv__GetEnvironmentChanges_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__srv__GetEnvironmentChanges_Response * data =
      (tesseract_msgs__srv__GetEnvironmentChanges_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__srv__GetEnvironmentChanges_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__srv__GetEnvironmentChanges_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__srv__GetEnvironmentChanges_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
