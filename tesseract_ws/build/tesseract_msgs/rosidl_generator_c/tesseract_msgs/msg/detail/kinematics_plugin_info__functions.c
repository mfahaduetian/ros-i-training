// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/KinematicsPluginInfo.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/kinematics_plugin_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `search_paths`
// Member `search_libraries`
#include "rosidl_runtime_c/string_functions.h"
// Member `group_fwd_plugins`
// Member `group_inv_plugins`
#include "tesseract_msgs/msg/detail/groups_kinematic_plugins__functions.h"

bool
tesseract_msgs__msg__KinematicsPluginInfo__init(tesseract_msgs__msg__KinematicsPluginInfo * msg)
{
  if (!msg) {
    return false;
  }
  // search_paths
  if (!rosidl_runtime_c__String__Sequence__init(&msg->search_paths, 0)) {
    tesseract_msgs__msg__KinematicsPluginInfo__fini(msg);
    return false;
  }
  // search_libraries
  if (!rosidl_runtime_c__String__Sequence__init(&msg->search_libraries, 0)) {
    tesseract_msgs__msg__KinematicsPluginInfo__fini(msg);
    return false;
  }
  // group_fwd_plugins
  if (!tesseract_msgs__msg__GroupsKinematicPlugins__Sequence__init(&msg->group_fwd_plugins, 0)) {
    tesseract_msgs__msg__KinematicsPluginInfo__fini(msg);
    return false;
  }
  // group_inv_plugins
  if (!tesseract_msgs__msg__GroupsKinematicPlugins__Sequence__init(&msg->group_inv_plugins, 0)) {
    tesseract_msgs__msg__KinematicsPluginInfo__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__KinematicsPluginInfo__fini(tesseract_msgs__msg__KinematicsPluginInfo * msg)
{
  if (!msg) {
    return;
  }
  // search_paths
  rosidl_runtime_c__String__Sequence__fini(&msg->search_paths);
  // search_libraries
  rosidl_runtime_c__String__Sequence__fini(&msg->search_libraries);
  // group_fwd_plugins
  tesseract_msgs__msg__GroupsKinematicPlugins__Sequence__fini(&msg->group_fwd_plugins);
  // group_inv_plugins
  tesseract_msgs__msg__GroupsKinematicPlugins__Sequence__fini(&msg->group_inv_plugins);
}

bool
tesseract_msgs__msg__KinematicsPluginInfo__are_equal(const tesseract_msgs__msg__KinematicsPluginInfo * lhs, const tesseract_msgs__msg__KinematicsPluginInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // search_paths
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->search_paths), &(rhs->search_paths)))
  {
    return false;
  }
  // search_libraries
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->search_libraries), &(rhs->search_libraries)))
  {
    return false;
  }
  // group_fwd_plugins
  if (!tesseract_msgs__msg__GroupsKinematicPlugins__Sequence__are_equal(
      &(lhs->group_fwd_plugins), &(rhs->group_fwd_plugins)))
  {
    return false;
  }
  // group_inv_plugins
  if (!tesseract_msgs__msg__GroupsKinematicPlugins__Sequence__are_equal(
      &(lhs->group_inv_plugins), &(rhs->group_inv_plugins)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__msg__KinematicsPluginInfo__copy(
  const tesseract_msgs__msg__KinematicsPluginInfo * input,
  tesseract_msgs__msg__KinematicsPluginInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // search_paths
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->search_paths), &(output->search_paths)))
  {
    return false;
  }
  // search_libraries
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->search_libraries), &(output->search_libraries)))
  {
    return false;
  }
  // group_fwd_plugins
  if (!tesseract_msgs__msg__GroupsKinematicPlugins__Sequence__copy(
      &(input->group_fwd_plugins), &(output->group_fwd_plugins)))
  {
    return false;
  }
  // group_inv_plugins
  if (!tesseract_msgs__msg__GroupsKinematicPlugins__Sequence__copy(
      &(input->group_inv_plugins), &(output->group_inv_plugins)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__msg__KinematicsPluginInfo *
tesseract_msgs__msg__KinematicsPluginInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__KinematicsPluginInfo * msg = (tesseract_msgs__msg__KinematicsPluginInfo *)allocator.allocate(sizeof(tesseract_msgs__msg__KinematicsPluginInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__KinematicsPluginInfo));
  bool success = tesseract_msgs__msg__KinematicsPluginInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__KinematicsPluginInfo__destroy(tesseract_msgs__msg__KinematicsPluginInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__KinematicsPluginInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__KinematicsPluginInfo__Sequence__init(tesseract_msgs__msg__KinematicsPluginInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__KinematicsPluginInfo * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__KinematicsPluginInfo *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__KinematicsPluginInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__KinematicsPluginInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__KinematicsPluginInfo__fini(&data[i - 1]);
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
tesseract_msgs__msg__KinematicsPluginInfo__Sequence__fini(tesseract_msgs__msg__KinematicsPluginInfo__Sequence * array)
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
      tesseract_msgs__msg__KinematicsPluginInfo__fini(&array->data[i]);
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

tesseract_msgs__msg__KinematicsPluginInfo__Sequence *
tesseract_msgs__msg__KinematicsPluginInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__KinematicsPluginInfo__Sequence * array = (tesseract_msgs__msg__KinematicsPluginInfo__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__KinematicsPluginInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__KinematicsPluginInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__KinematicsPluginInfo__Sequence__destroy(tesseract_msgs__msg__KinematicsPluginInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__KinematicsPluginInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__KinematicsPluginInfo__Sequence__are_equal(const tesseract_msgs__msg__KinematicsPluginInfo__Sequence * lhs, const tesseract_msgs__msg__KinematicsPluginInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__KinematicsPluginInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__KinematicsPluginInfo__Sequence__copy(
  const tesseract_msgs__msg__KinematicsPluginInfo__Sequence * input,
  tesseract_msgs__msg__KinematicsPluginInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__KinematicsPluginInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__KinematicsPluginInfo * data =
      (tesseract_msgs__msg__KinematicsPluginInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__KinematicsPluginInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__KinematicsPluginInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__KinematicsPluginInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
