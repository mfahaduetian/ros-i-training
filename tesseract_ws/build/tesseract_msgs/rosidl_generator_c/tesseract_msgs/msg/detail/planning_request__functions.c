// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/PlanningRequest.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/planning_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `environment_state`
#include "tesseract_msgs/msg/detail/environment_state__functions.h"
// Member `commands`
#include "tesseract_msgs/msg/detail/environment_command__functions.h"
// Member `name`
// Member `executor`
// Member `instructions`
#include "rosidl_runtime_c/string_functions.h"
// Member `move_profile_remapping`
// Member `composite_profile_remapping`
#include "tesseract_msgs/msg/detail/planner_profile_remapping__functions.h"

bool
tesseract_msgs__msg__PlanningRequest__init(tesseract_msgs__msg__PlanningRequest * msg)
{
  if (!msg) {
    return false;
  }
  // environment_state
  if (!tesseract_msgs__msg__EnvironmentState__init(&msg->environment_state)) {
    tesseract_msgs__msg__PlanningRequest__fini(msg);
    return false;
  }
  // commands
  if (!tesseract_msgs__msg__EnvironmentCommand__Sequence__init(&msg->commands, 0)) {
    tesseract_msgs__msg__PlanningRequest__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    tesseract_msgs__msg__PlanningRequest__fini(msg);
    return false;
  }
  // executor
  if (!rosidl_runtime_c__String__init(&msg->executor)) {
    tesseract_msgs__msg__PlanningRequest__fini(msg);
    return false;
  }
  // instructions
  if (!rosidl_runtime_c__String__init(&msg->instructions)) {
    tesseract_msgs__msg__PlanningRequest__fini(msg);
    return false;
  }
  // dotgraph
  // debug
  // save_io
  // move_profile_remapping
  if (!tesseract_msgs__msg__PlannerProfileRemapping__init(&msg->move_profile_remapping)) {
    tesseract_msgs__msg__PlanningRequest__fini(msg);
    return false;
  }
  // composite_profile_remapping
  if (!tesseract_msgs__msg__PlannerProfileRemapping__init(&msg->composite_profile_remapping)) {
    tesseract_msgs__msg__PlanningRequest__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__PlanningRequest__fini(tesseract_msgs__msg__PlanningRequest * msg)
{
  if (!msg) {
    return;
  }
  // environment_state
  tesseract_msgs__msg__EnvironmentState__fini(&msg->environment_state);
  // commands
  tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(&msg->commands);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // executor
  rosidl_runtime_c__String__fini(&msg->executor);
  // instructions
  rosidl_runtime_c__String__fini(&msg->instructions);
  // dotgraph
  // debug
  // save_io
  // move_profile_remapping
  tesseract_msgs__msg__PlannerProfileRemapping__fini(&msg->move_profile_remapping);
  // composite_profile_remapping
  tesseract_msgs__msg__PlannerProfileRemapping__fini(&msg->composite_profile_remapping);
}

bool
tesseract_msgs__msg__PlanningRequest__are_equal(const tesseract_msgs__msg__PlanningRequest * lhs, const tesseract_msgs__msg__PlanningRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // environment_state
  if (!tesseract_msgs__msg__EnvironmentState__are_equal(
      &(lhs->environment_state), &(rhs->environment_state)))
  {
    return false;
  }
  // commands
  if (!tesseract_msgs__msg__EnvironmentCommand__Sequence__are_equal(
      &(lhs->commands), &(rhs->commands)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // executor
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->executor), &(rhs->executor)))
  {
    return false;
  }
  // instructions
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->instructions), &(rhs->instructions)))
  {
    return false;
  }
  // dotgraph
  if (lhs->dotgraph != rhs->dotgraph) {
    return false;
  }
  // debug
  if (lhs->debug != rhs->debug) {
    return false;
  }
  // save_io
  if (lhs->save_io != rhs->save_io) {
    return false;
  }
  // move_profile_remapping
  if (!tesseract_msgs__msg__PlannerProfileRemapping__are_equal(
      &(lhs->move_profile_remapping), &(rhs->move_profile_remapping)))
  {
    return false;
  }
  // composite_profile_remapping
  if (!tesseract_msgs__msg__PlannerProfileRemapping__are_equal(
      &(lhs->composite_profile_remapping), &(rhs->composite_profile_remapping)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__msg__PlanningRequest__copy(
  const tesseract_msgs__msg__PlanningRequest * input,
  tesseract_msgs__msg__PlanningRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // environment_state
  if (!tesseract_msgs__msg__EnvironmentState__copy(
      &(input->environment_state), &(output->environment_state)))
  {
    return false;
  }
  // commands
  if (!tesseract_msgs__msg__EnvironmentCommand__Sequence__copy(
      &(input->commands), &(output->commands)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // executor
  if (!rosidl_runtime_c__String__copy(
      &(input->executor), &(output->executor)))
  {
    return false;
  }
  // instructions
  if (!rosidl_runtime_c__String__copy(
      &(input->instructions), &(output->instructions)))
  {
    return false;
  }
  // dotgraph
  output->dotgraph = input->dotgraph;
  // debug
  output->debug = input->debug;
  // save_io
  output->save_io = input->save_io;
  // move_profile_remapping
  if (!tesseract_msgs__msg__PlannerProfileRemapping__copy(
      &(input->move_profile_remapping), &(output->move_profile_remapping)))
  {
    return false;
  }
  // composite_profile_remapping
  if (!tesseract_msgs__msg__PlannerProfileRemapping__copy(
      &(input->composite_profile_remapping), &(output->composite_profile_remapping)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__msg__PlanningRequest *
tesseract_msgs__msg__PlanningRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__PlanningRequest * msg = (tesseract_msgs__msg__PlanningRequest *)allocator.allocate(sizeof(tesseract_msgs__msg__PlanningRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__PlanningRequest));
  bool success = tesseract_msgs__msg__PlanningRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__PlanningRequest__destroy(tesseract_msgs__msg__PlanningRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__PlanningRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__PlanningRequest__Sequence__init(tesseract_msgs__msg__PlanningRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__PlanningRequest * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__PlanningRequest *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__PlanningRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__PlanningRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__PlanningRequest__fini(&data[i - 1]);
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
tesseract_msgs__msg__PlanningRequest__Sequence__fini(tesseract_msgs__msg__PlanningRequest__Sequence * array)
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
      tesseract_msgs__msg__PlanningRequest__fini(&array->data[i]);
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

tesseract_msgs__msg__PlanningRequest__Sequence *
tesseract_msgs__msg__PlanningRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__PlanningRequest__Sequence * array = (tesseract_msgs__msg__PlanningRequest__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__PlanningRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__PlanningRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__PlanningRequest__Sequence__destroy(tesseract_msgs__msg__PlanningRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__PlanningRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__PlanningRequest__Sequence__are_equal(const tesseract_msgs__msg__PlanningRequest__Sequence * lhs, const tesseract_msgs__msg__PlanningRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__PlanningRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__PlanningRequest__Sequence__copy(
  const tesseract_msgs__msg__PlanningRequest__Sequence * input,
  tesseract_msgs__msg__PlanningRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__PlanningRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__PlanningRequest * data =
      (tesseract_msgs__msg__PlanningRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__PlanningRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__PlanningRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__PlanningRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
