// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from myworkcell_core:srv/LocalizePart.idl
// generated code does not contain a copyright notice
#include "myworkcell_core/srv/detail/localize_part__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `base_frame`
#include "rosidl_runtime_c/string_functions.h"

bool
myworkcell_core__srv__LocalizePart_Request__init(myworkcell_core__srv__LocalizePart_Request * msg)
{
  if (!msg) {
    return false;
  }
  // base_frame
  if (!rosidl_runtime_c__String__init(&msg->base_frame)) {
    myworkcell_core__srv__LocalizePart_Request__fini(msg);
    return false;
  }
  return true;
}

void
myworkcell_core__srv__LocalizePart_Request__fini(myworkcell_core__srv__LocalizePart_Request * msg)
{
  if (!msg) {
    return;
  }
  // base_frame
  rosidl_runtime_c__String__fini(&msg->base_frame);
}

bool
myworkcell_core__srv__LocalizePart_Request__are_equal(const myworkcell_core__srv__LocalizePart_Request * lhs, const myworkcell_core__srv__LocalizePart_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->base_frame), &(rhs->base_frame)))
  {
    return false;
  }
  return true;
}

bool
myworkcell_core__srv__LocalizePart_Request__copy(
  const myworkcell_core__srv__LocalizePart_Request * input,
  myworkcell_core__srv__LocalizePart_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // base_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->base_frame), &(output->base_frame)))
  {
    return false;
  }
  return true;
}

myworkcell_core__srv__LocalizePart_Request *
myworkcell_core__srv__LocalizePart_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myworkcell_core__srv__LocalizePart_Request * msg = (myworkcell_core__srv__LocalizePart_Request *)allocator.allocate(sizeof(myworkcell_core__srv__LocalizePart_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(myworkcell_core__srv__LocalizePart_Request));
  bool success = myworkcell_core__srv__LocalizePart_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
myworkcell_core__srv__LocalizePart_Request__destroy(myworkcell_core__srv__LocalizePart_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    myworkcell_core__srv__LocalizePart_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
myworkcell_core__srv__LocalizePart_Request__Sequence__init(myworkcell_core__srv__LocalizePart_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myworkcell_core__srv__LocalizePart_Request * data = NULL;

  if (size) {
    data = (myworkcell_core__srv__LocalizePart_Request *)allocator.zero_allocate(size, sizeof(myworkcell_core__srv__LocalizePart_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = myworkcell_core__srv__LocalizePart_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        myworkcell_core__srv__LocalizePart_Request__fini(&data[i - 1]);
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
myworkcell_core__srv__LocalizePart_Request__Sequence__fini(myworkcell_core__srv__LocalizePart_Request__Sequence * array)
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
      myworkcell_core__srv__LocalizePart_Request__fini(&array->data[i]);
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

myworkcell_core__srv__LocalizePart_Request__Sequence *
myworkcell_core__srv__LocalizePart_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myworkcell_core__srv__LocalizePart_Request__Sequence * array = (myworkcell_core__srv__LocalizePart_Request__Sequence *)allocator.allocate(sizeof(myworkcell_core__srv__LocalizePart_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = myworkcell_core__srv__LocalizePart_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
myworkcell_core__srv__LocalizePart_Request__Sequence__destroy(myworkcell_core__srv__LocalizePart_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    myworkcell_core__srv__LocalizePart_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
myworkcell_core__srv__LocalizePart_Request__Sequence__are_equal(const myworkcell_core__srv__LocalizePart_Request__Sequence * lhs, const myworkcell_core__srv__LocalizePart_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!myworkcell_core__srv__LocalizePart_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
myworkcell_core__srv__LocalizePart_Request__Sequence__copy(
  const myworkcell_core__srv__LocalizePart_Request__Sequence * input,
  myworkcell_core__srv__LocalizePart_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(myworkcell_core__srv__LocalizePart_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    myworkcell_core__srv__LocalizePart_Request * data =
      (myworkcell_core__srv__LocalizePart_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!myworkcell_core__srv__LocalizePart_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          myworkcell_core__srv__LocalizePart_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!myworkcell_core__srv__LocalizePart_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
myworkcell_core__srv__LocalizePart_Response__init(myworkcell_core__srv__LocalizePart_Response * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    myworkcell_core__srv__LocalizePart_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
myworkcell_core__srv__LocalizePart_Response__fini(myworkcell_core__srv__LocalizePart_Response * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // success
}

bool
myworkcell_core__srv__LocalizePart_Response__are_equal(const myworkcell_core__srv__LocalizePart_Response * lhs, const myworkcell_core__srv__LocalizePart_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
myworkcell_core__srv__LocalizePart_Response__copy(
  const myworkcell_core__srv__LocalizePart_Response * input,
  myworkcell_core__srv__LocalizePart_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

myworkcell_core__srv__LocalizePart_Response *
myworkcell_core__srv__LocalizePart_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myworkcell_core__srv__LocalizePart_Response * msg = (myworkcell_core__srv__LocalizePart_Response *)allocator.allocate(sizeof(myworkcell_core__srv__LocalizePart_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(myworkcell_core__srv__LocalizePart_Response));
  bool success = myworkcell_core__srv__LocalizePart_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
myworkcell_core__srv__LocalizePart_Response__destroy(myworkcell_core__srv__LocalizePart_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    myworkcell_core__srv__LocalizePart_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
myworkcell_core__srv__LocalizePart_Response__Sequence__init(myworkcell_core__srv__LocalizePart_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myworkcell_core__srv__LocalizePart_Response * data = NULL;

  if (size) {
    data = (myworkcell_core__srv__LocalizePart_Response *)allocator.zero_allocate(size, sizeof(myworkcell_core__srv__LocalizePart_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = myworkcell_core__srv__LocalizePart_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        myworkcell_core__srv__LocalizePart_Response__fini(&data[i - 1]);
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
myworkcell_core__srv__LocalizePart_Response__Sequence__fini(myworkcell_core__srv__LocalizePart_Response__Sequence * array)
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
      myworkcell_core__srv__LocalizePart_Response__fini(&array->data[i]);
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

myworkcell_core__srv__LocalizePart_Response__Sequence *
myworkcell_core__srv__LocalizePart_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myworkcell_core__srv__LocalizePart_Response__Sequence * array = (myworkcell_core__srv__LocalizePart_Response__Sequence *)allocator.allocate(sizeof(myworkcell_core__srv__LocalizePart_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = myworkcell_core__srv__LocalizePart_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
myworkcell_core__srv__LocalizePart_Response__Sequence__destroy(myworkcell_core__srv__LocalizePart_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    myworkcell_core__srv__LocalizePart_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
myworkcell_core__srv__LocalizePart_Response__Sequence__are_equal(const myworkcell_core__srv__LocalizePart_Response__Sequence * lhs, const myworkcell_core__srv__LocalizePart_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!myworkcell_core__srv__LocalizePart_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
myworkcell_core__srv__LocalizePart_Response__Sequence__copy(
  const myworkcell_core__srv__LocalizePart_Response__Sequence * input,
  myworkcell_core__srv__LocalizePart_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(myworkcell_core__srv__LocalizePart_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    myworkcell_core__srv__LocalizePart_Response * data =
      (myworkcell_core__srv__LocalizePart_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!myworkcell_core__srv__LocalizePart_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          myworkcell_core__srv__LocalizePart_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!myworkcell_core__srv__LocalizePart_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
