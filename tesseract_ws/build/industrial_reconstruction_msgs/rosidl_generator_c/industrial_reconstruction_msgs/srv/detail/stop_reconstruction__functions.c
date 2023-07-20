// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from industrial_reconstruction_msgs:srv/StopReconstruction.idl
// generated code does not contain a copyright notice
#include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `archive_directory`
// Member `mesh_filepath`
#include "rosidl_runtime_c/string_functions.h"
// Member `normal_filters`
#include "industrial_reconstruction_msgs/msg/detail/normal_filter_params__functions.h"

bool
industrial_reconstruction_msgs__srv__StopReconstruction_Request__init(industrial_reconstruction_msgs__srv__StopReconstruction_Request * msg)
{
  if (!msg) {
    return false;
  }
  // archive_directory
  if (!rosidl_runtime_c__String__init(&msg->archive_directory)) {
    industrial_reconstruction_msgs__srv__StopReconstruction_Request__fini(msg);
    return false;
  }
  // mesh_filepath
  if (!rosidl_runtime_c__String__init(&msg->mesh_filepath)) {
    industrial_reconstruction_msgs__srv__StopReconstruction_Request__fini(msg);
    return false;
  }
  // min_num_faces
  // normal_filters
  if (!industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__init(&msg->normal_filters, 0)) {
    industrial_reconstruction_msgs__srv__StopReconstruction_Request__fini(msg);
    return false;
  }
  return true;
}

void
industrial_reconstruction_msgs__srv__StopReconstruction_Request__fini(industrial_reconstruction_msgs__srv__StopReconstruction_Request * msg)
{
  if (!msg) {
    return;
  }
  // archive_directory
  rosidl_runtime_c__String__fini(&msg->archive_directory);
  // mesh_filepath
  rosidl_runtime_c__String__fini(&msg->mesh_filepath);
  // min_num_faces
  // normal_filters
  industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__fini(&msg->normal_filters);
}

bool
industrial_reconstruction_msgs__srv__StopReconstruction_Request__are_equal(const industrial_reconstruction_msgs__srv__StopReconstruction_Request * lhs, const industrial_reconstruction_msgs__srv__StopReconstruction_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // archive_directory
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->archive_directory), &(rhs->archive_directory)))
  {
    return false;
  }
  // mesh_filepath
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mesh_filepath), &(rhs->mesh_filepath)))
  {
    return false;
  }
  // min_num_faces
  if (lhs->min_num_faces != rhs->min_num_faces) {
    return false;
  }
  // normal_filters
  if (!industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__are_equal(
      &(lhs->normal_filters), &(rhs->normal_filters)))
  {
    return false;
  }
  return true;
}

bool
industrial_reconstruction_msgs__srv__StopReconstruction_Request__copy(
  const industrial_reconstruction_msgs__srv__StopReconstruction_Request * input,
  industrial_reconstruction_msgs__srv__StopReconstruction_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // archive_directory
  if (!rosidl_runtime_c__String__copy(
      &(input->archive_directory), &(output->archive_directory)))
  {
    return false;
  }
  // mesh_filepath
  if (!rosidl_runtime_c__String__copy(
      &(input->mesh_filepath), &(output->mesh_filepath)))
  {
    return false;
  }
  // min_num_faces
  output->min_num_faces = input->min_num_faces;
  // normal_filters
  if (!industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__copy(
      &(input->normal_filters), &(output->normal_filters)))
  {
    return false;
  }
  return true;
}

industrial_reconstruction_msgs__srv__StopReconstruction_Request *
industrial_reconstruction_msgs__srv__StopReconstruction_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__srv__StopReconstruction_Request * msg = (industrial_reconstruction_msgs__srv__StopReconstruction_Request *)allocator.allocate(sizeof(industrial_reconstruction_msgs__srv__StopReconstruction_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(industrial_reconstruction_msgs__srv__StopReconstruction_Request));
  bool success = industrial_reconstruction_msgs__srv__StopReconstruction_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
industrial_reconstruction_msgs__srv__StopReconstruction_Request__destroy(industrial_reconstruction_msgs__srv__StopReconstruction_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    industrial_reconstruction_msgs__srv__StopReconstruction_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence__init(industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__srv__StopReconstruction_Request * data = NULL;

  if (size) {
    data = (industrial_reconstruction_msgs__srv__StopReconstruction_Request *)allocator.zero_allocate(size, sizeof(industrial_reconstruction_msgs__srv__StopReconstruction_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = industrial_reconstruction_msgs__srv__StopReconstruction_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        industrial_reconstruction_msgs__srv__StopReconstruction_Request__fini(&data[i - 1]);
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
industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence__fini(industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence * array)
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
      industrial_reconstruction_msgs__srv__StopReconstruction_Request__fini(&array->data[i]);
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

industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence *
industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence * array = (industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence *)allocator.allocate(sizeof(industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence__destroy(industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence__are_equal(const industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence * lhs, const industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!industrial_reconstruction_msgs__srv__StopReconstruction_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence__copy(
  const industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence * input,
  industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(industrial_reconstruction_msgs__srv__StopReconstruction_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    industrial_reconstruction_msgs__srv__StopReconstruction_Request * data =
      (industrial_reconstruction_msgs__srv__StopReconstruction_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!industrial_reconstruction_msgs__srv__StopReconstruction_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          industrial_reconstruction_msgs__srv__StopReconstruction_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!industrial_reconstruction_msgs__srv__StopReconstruction_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
industrial_reconstruction_msgs__srv__StopReconstruction_Response__init(industrial_reconstruction_msgs__srv__StopReconstruction_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
industrial_reconstruction_msgs__srv__StopReconstruction_Response__fini(industrial_reconstruction_msgs__srv__StopReconstruction_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
industrial_reconstruction_msgs__srv__StopReconstruction_Response__are_equal(const industrial_reconstruction_msgs__srv__StopReconstruction_Response * lhs, const industrial_reconstruction_msgs__srv__StopReconstruction_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
industrial_reconstruction_msgs__srv__StopReconstruction_Response__copy(
  const industrial_reconstruction_msgs__srv__StopReconstruction_Response * input,
  industrial_reconstruction_msgs__srv__StopReconstruction_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

industrial_reconstruction_msgs__srv__StopReconstruction_Response *
industrial_reconstruction_msgs__srv__StopReconstruction_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__srv__StopReconstruction_Response * msg = (industrial_reconstruction_msgs__srv__StopReconstruction_Response *)allocator.allocate(sizeof(industrial_reconstruction_msgs__srv__StopReconstruction_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(industrial_reconstruction_msgs__srv__StopReconstruction_Response));
  bool success = industrial_reconstruction_msgs__srv__StopReconstruction_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
industrial_reconstruction_msgs__srv__StopReconstruction_Response__destroy(industrial_reconstruction_msgs__srv__StopReconstruction_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    industrial_reconstruction_msgs__srv__StopReconstruction_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence__init(industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__srv__StopReconstruction_Response * data = NULL;

  if (size) {
    data = (industrial_reconstruction_msgs__srv__StopReconstruction_Response *)allocator.zero_allocate(size, sizeof(industrial_reconstruction_msgs__srv__StopReconstruction_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = industrial_reconstruction_msgs__srv__StopReconstruction_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        industrial_reconstruction_msgs__srv__StopReconstruction_Response__fini(&data[i - 1]);
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
industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence__fini(industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence * array)
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
      industrial_reconstruction_msgs__srv__StopReconstruction_Response__fini(&array->data[i]);
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

industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence *
industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence * array = (industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence *)allocator.allocate(sizeof(industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence__destroy(industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence__are_equal(const industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence * lhs, const industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!industrial_reconstruction_msgs__srv__StopReconstruction_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence__copy(
  const industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence * input,
  industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(industrial_reconstruction_msgs__srv__StopReconstruction_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    industrial_reconstruction_msgs__srv__StopReconstruction_Response * data =
      (industrial_reconstruction_msgs__srv__StopReconstruction_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!industrial_reconstruction_msgs__srv__StopReconstruction_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          industrial_reconstruction_msgs__srv__StopReconstruction_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!industrial_reconstruction_msgs__srv__StopReconstruction_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
