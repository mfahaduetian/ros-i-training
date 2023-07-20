// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from industrial_reconstruction_msgs:srv/StartReconstruction.idl
// generated code does not contain a copyright notice
#include "industrial_reconstruction_msgs/srv/detail/start_reconstruction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `tracking_frame`
// Member `relative_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `tsdf_params`
#include "industrial_reconstruction_msgs/msg/detail/tsdf_volume_params__functions.h"
// Member `rgbd_params`
#include "industrial_reconstruction_msgs/msg/detail/rgbd_image_params__functions.h"

bool
industrial_reconstruction_msgs__srv__StartReconstruction_Request__init(industrial_reconstruction_msgs__srv__StartReconstruction_Request * msg)
{
  if (!msg) {
    return false;
  }
  // tracking_frame
  if (!rosidl_runtime_c__String__init(&msg->tracking_frame)) {
    industrial_reconstruction_msgs__srv__StartReconstruction_Request__fini(msg);
    return false;
  }
  // relative_frame
  if (!rosidl_runtime_c__String__init(&msg->relative_frame)) {
    industrial_reconstruction_msgs__srv__StartReconstruction_Request__fini(msg);
    return false;
  }
  // translation_distance
  // rotational_distance
  // live
  // tsdf_params
  if (!industrial_reconstruction_msgs__msg__TSDFVolumeParams__init(&msg->tsdf_params)) {
    industrial_reconstruction_msgs__srv__StartReconstruction_Request__fini(msg);
    return false;
  }
  // rgbd_params
  if (!industrial_reconstruction_msgs__msg__RGBDImageParams__init(&msg->rgbd_params)) {
    industrial_reconstruction_msgs__srv__StartReconstruction_Request__fini(msg);
    return false;
  }
  return true;
}

void
industrial_reconstruction_msgs__srv__StartReconstruction_Request__fini(industrial_reconstruction_msgs__srv__StartReconstruction_Request * msg)
{
  if (!msg) {
    return;
  }
  // tracking_frame
  rosidl_runtime_c__String__fini(&msg->tracking_frame);
  // relative_frame
  rosidl_runtime_c__String__fini(&msg->relative_frame);
  // translation_distance
  // rotational_distance
  // live
  // tsdf_params
  industrial_reconstruction_msgs__msg__TSDFVolumeParams__fini(&msg->tsdf_params);
  // rgbd_params
  industrial_reconstruction_msgs__msg__RGBDImageParams__fini(&msg->rgbd_params);
}

bool
industrial_reconstruction_msgs__srv__StartReconstruction_Request__are_equal(const industrial_reconstruction_msgs__srv__StartReconstruction_Request * lhs, const industrial_reconstruction_msgs__srv__StartReconstruction_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tracking_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tracking_frame), &(rhs->tracking_frame)))
  {
    return false;
  }
  // relative_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->relative_frame), &(rhs->relative_frame)))
  {
    return false;
  }
  // translation_distance
  if (lhs->translation_distance != rhs->translation_distance) {
    return false;
  }
  // rotational_distance
  if (lhs->rotational_distance != rhs->rotational_distance) {
    return false;
  }
  // live
  if (lhs->live != rhs->live) {
    return false;
  }
  // tsdf_params
  if (!industrial_reconstruction_msgs__msg__TSDFVolumeParams__are_equal(
      &(lhs->tsdf_params), &(rhs->tsdf_params)))
  {
    return false;
  }
  // rgbd_params
  if (!industrial_reconstruction_msgs__msg__RGBDImageParams__are_equal(
      &(lhs->rgbd_params), &(rhs->rgbd_params)))
  {
    return false;
  }
  return true;
}

bool
industrial_reconstruction_msgs__srv__StartReconstruction_Request__copy(
  const industrial_reconstruction_msgs__srv__StartReconstruction_Request * input,
  industrial_reconstruction_msgs__srv__StartReconstruction_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // tracking_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->tracking_frame), &(output->tracking_frame)))
  {
    return false;
  }
  // relative_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->relative_frame), &(output->relative_frame)))
  {
    return false;
  }
  // translation_distance
  output->translation_distance = input->translation_distance;
  // rotational_distance
  output->rotational_distance = input->rotational_distance;
  // live
  output->live = input->live;
  // tsdf_params
  if (!industrial_reconstruction_msgs__msg__TSDFVolumeParams__copy(
      &(input->tsdf_params), &(output->tsdf_params)))
  {
    return false;
  }
  // rgbd_params
  if (!industrial_reconstruction_msgs__msg__RGBDImageParams__copy(
      &(input->rgbd_params), &(output->rgbd_params)))
  {
    return false;
  }
  return true;
}

industrial_reconstruction_msgs__srv__StartReconstruction_Request *
industrial_reconstruction_msgs__srv__StartReconstruction_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__srv__StartReconstruction_Request * msg = (industrial_reconstruction_msgs__srv__StartReconstruction_Request *)allocator.allocate(sizeof(industrial_reconstruction_msgs__srv__StartReconstruction_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(industrial_reconstruction_msgs__srv__StartReconstruction_Request));
  bool success = industrial_reconstruction_msgs__srv__StartReconstruction_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
industrial_reconstruction_msgs__srv__StartReconstruction_Request__destroy(industrial_reconstruction_msgs__srv__StartReconstruction_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    industrial_reconstruction_msgs__srv__StartReconstruction_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__init(industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__srv__StartReconstruction_Request * data = NULL;

  if (size) {
    data = (industrial_reconstruction_msgs__srv__StartReconstruction_Request *)allocator.zero_allocate(size, sizeof(industrial_reconstruction_msgs__srv__StartReconstruction_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = industrial_reconstruction_msgs__srv__StartReconstruction_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        industrial_reconstruction_msgs__srv__StartReconstruction_Request__fini(&data[i - 1]);
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
industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__fini(industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence * array)
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
      industrial_reconstruction_msgs__srv__StartReconstruction_Request__fini(&array->data[i]);
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

industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence *
industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence * array = (industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence *)allocator.allocate(sizeof(industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__destroy(industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__are_equal(const industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence * lhs, const industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!industrial_reconstruction_msgs__srv__StartReconstruction_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__copy(
  const industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence * input,
  industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(industrial_reconstruction_msgs__srv__StartReconstruction_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    industrial_reconstruction_msgs__srv__StartReconstruction_Request * data =
      (industrial_reconstruction_msgs__srv__StartReconstruction_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!industrial_reconstruction_msgs__srv__StartReconstruction_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          industrial_reconstruction_msgs__srv__StartReconstruction_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!industrial_reconstruction_msgs__srv__StartReconstruction_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
industrial_reconstruction_msgs__srv__StartReconstruction_Response__init(industrial_reconstruction_msgs__srv__StartReconstruction_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
industrial_reconstruction_msgs__srv__StartReconstruction_Response__fini(industrial_reconstruction_msgs__srv__StartReconstruction_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
industrial_reconstruction_msgs__srv__StartReconstruction_Response__are_equal(const industrial_reconstruction_msgs__srv__StartReconstruction_Response * lhs, const industrial_reconstruction_msgs__srv__StartReconstruction_Response * rhs)
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
industrial_reconstruction_msgs__srv__StartReconstruction_Response__copy(
  const industrial_reconstruction_msgs__srv__StartReconstruction_Response * input,
  industrial_reconstruction_msgs__srv__StartReconstruction_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

industrial_reconstruction_msgs__srv__StartReconstruction_Response *
industrial_reconstruction_msgs__srv__StartReconstruction_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__srv__StartReconstruction_Response * msg = (industrial_reconstruction_msgs__srv__StartReconstruction_Response *)allocator.allocate(sizeof(industrial_reconstruction_msgs__srv__StartReconstruction_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(industrial_reconstruction_msgs__srv__StartReconstruction_Response));
  bool success = industrial_reconstruction_msgs__srv__StartReconstruction_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
industrial_reconstruction_msgs__srv__StartReconstruction_Response__destroy(industrial_reconstruction_msgs__srv__StartReconstruction_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    industrial_reconstruction_msgs__srv__StartReconstruction_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__init(industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__srv__StartReconstruction_Response * data = NULL;

  if (size) {
    data = (industrial_reconstruction_msgs__srv__StartReconstruction_Response *)allocator.zero_allocate(size, sizeof(industrial_reconstruction_msgs__srv__StartReconstruction_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = industrial_reconstruction_msgs__srv__StartReconstruction_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        industrial_reconstruction_msgs__srv__StartReconstruction_Response__fini(&data[i - 1]);
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
industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__fini(industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence * array)
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
      industrial_reconstruction_msgs__srv__StartReconstruction_Response__fini(&array->data[i]);
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

industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence *
industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence * array = (industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence *)allocator.allocate(sizeof(industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__destroy(industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__are_equal(const industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence * lhs, const industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!industrial_reconstruction_msgs__srv__StartReconstruction_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__copy(
  const industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence * input,
  industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(industrial_reconstruction_msgs__srv__StartReconstruction_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    industrial_reconstruction_msgs__srv__StartReconstruction_Response * data =
      (industrial_reconstruction_msgs__srv__StartReconstruction_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!industrial_reconstruction_msgs__srv__StartReconstruction_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          industrial_reconstruction_msgs__srv__StartReconstruction_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!industrial_reconstruction_msgs__srv__StartReconstruction_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
