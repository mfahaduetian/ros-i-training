// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/TaskComposerNodeInfo.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/task_composer_node_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `uuid`
// Member `inbound_edges`
// Member `outbound_edges`
// Member `input_keys`
// Member `output_keys`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
tesseract_msgs__msg__TaskComposerNodeInfo__init(tesseract_msgs__msg__TaskComposerNodeInfo * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    tesseract_msgs__msg__TaskComposerNodeInfo__fini(msg);
    return false;
  }
  // uuid
  if (!rosidl_runtime_c__String__init(&msg->uuid)) {
    tesseract_msgs__msg__TaskComposerNodeInfo__fini(msg);
    return false;
  }
  // inbound_edges
  if (!rosidl_runtime_c__String__Sequence__init(&msg->inbound_edges, 0)) {
    tesseract_msgs__msg__TaskComposerNodeInfo__fini(msg);
    return false;
  }
  // outbound_edges
  if (!rosidl_runtime_c__String__Sequence__init(&msg->outbound_edges, 0)) {
    tesseract_msgs__msg__TaskComposerNodeInfo__fini(msg);
    return false;
  }
  // input_keys
  if (!rosidl_runtime_c__String__Sequence__init(&msg->input_keys, 0)) {
    tesseract_msgs__msg__TaskComposerNodeInfo__fini(msg);
    return false;
  }
  // output_keys
  if (!rosidl_runtime_c__String__Sequence__init(&msg->output_keys, 0)) {
    tesseract_msgs__msg__TaskComposerNodeInfo__fini(msg);
    return false;
  }
  // return_value
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    tesseract_msgs__msg__TaskComposerNodeInfo__fini(msg);
    return false;
  }
  // elapsed_time
  return true;
}

void
tesseract_msgs__msg__TaskComposerNodeInfo__fini(tesseract_msgs__msg__TaskComposerNodeInfo * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // uuid
  rosidl_runtime_c__String__fini(&msg->uuid);
  // inbound_edges
  rosidl_runtime_c__String__Sequence__fini(&msg->inbound_edges);
  // outbound_edges
  rosidl_runtime_c__String__Sequence__fini(&msg->outbound_edges);
  // input_keys
  rosidl_runtime_c__String__Sequence__fini(&msg->input_keys);
  // output_keys
  rosidl_runtime_c__String__Sequence__fini(&msg->output_keys);
  // return_value
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // elapsed_time
}

bool
tesseract_msgs__msg__TaskComposerNodeInfo__are_equal(const tesseract_msgs__msg__TaskComposerNodeInfo * lhs, const tesseract_msgs__msg__TaskComposerNodeInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // uuid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->uuid), &(rhs->uuid)))
  {
    return false;
  }
  // inbound_edges
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->inbound_edges), &(rhs->inbound_edges)))
  {
    return false;
  }
  // outbound_edges
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->outbound_edges), &(rhs->outbound_edges)))
  {
    return false;
  }
  // input_keys
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->input_keys), &(rhs->input_keys)))
  {
    return false;
  }
  // output_keys
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->output_keys), &(rhs->output_keys)))
  {
    return false;
  }
  // return_value
  if (lhs->return_value != rhs->return_value) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // elapsed_time
  if (lhs->elapsed_time != rhs->elapsed_time) {
    return false;
  }
  return true;
}

bool
tesseract_msgs__msg__TaskComposerNodeInfo__copy(
  const tesseract_msgs__msg__TaskComposerNodeInfo * input,
  tesseract_msgs__msg__TaskComposerNodeInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // uuid
  if (!rosidl_runtime_c__String__copy(
      &(input->uuid), &(output->uuid)))
  {
    return false;
  }
  // inbound_edges
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->inbound_edges), &(output->inbound_edges)))
  {
    return false;
  }
  // outbound_edges
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->outbound_edges), &(output->outbound_edges)))
  {
    return false;
  }
  // input_keys
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->input_keys), &(output->input_keys)))
  {
    return false;
  }
  // output_keys
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->output_keys), &(output->output_keys)))
  {
    return false;
  }
  // return_value
  output->return_value = input->return_value;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // elapsed_time
  output->elapsed_time = input->elapsed_time;
  return true;
}

tesseract_msgs__msg__TaskComposerNodeInfo *
tesseract_msgs__msg__TaskComposerNodeInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__TaskComposerNodeInfo * msg = (tesseract_msgs__msg__TaskComposerNodeInfo *)allocator.allocate(sizeof(tesseract_msgs__msg__TaskComposerNodeInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__TaskComposerNodeInfo));
  bool success = tesseract_msgs__msg__TaskComposerNodeInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__TaskComposerNodeInfo__destroy(tesseract_msgs__msg__TaskComposerNodeInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__TaskComposerNodeInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__TaskComposerNodeInfo__Sequence__init(tesseract_msgs__msg__TaskComposerNodeInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__TaskComposerNodeInfo * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__TaskComposerNodeInfo *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__TaskComposerNodeInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__TaskComposerNodeInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__TaskComposerNodeInfo__fini(&data[i - 1]);
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
tesseract_msgs__msg__TaskComposerNodeInfo__Sequence__fini(tesseract_msgs__msg__TaskComposerNodeInfo__Sequence * array)
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
      tesseract_msgs__msg__TaskComposerNodeInfo__fini(&array->data[i]);
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

tesseract_msgs__msg__TaskComposerNodeInfo__Sequence *
tesseract_msgs__msg__TaskComposerNodeInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__TaskComposerNodeInfo__Sequence * array = (tesseract_msgs__msg__TaskComposerNodeInfo__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__TaskComposerNodeInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__TaskComposerNodeInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__TaskComposerNodeInfo__Sequence__destroy(tesseract_msgs__msg__TaskComposerNodeInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__TaskComposerNodeInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__TaskComposerNodeInfo__Sequence__are_equal(const tesseract_msgs__msg__TaskComposerNodeInfo__Sequence * lhs, const tesseract_msgs__msg__TaskComposerNodeInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__TaskComposerNodeInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__TaskComposerNodeInfo__Sequence__copy(
  const tesseract_msgs__msg__TaskComposerNodeInfo__Sequence * input,
  tesseract_msgs__msg__TaskComposerNodeInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__TaskComposerNodeInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__TaskComposerNodeInfo * data =
      (tesseract_msgs__msg__TaskComposerNodeInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__TaskComposerNodeInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__TaskComposerNodeInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__TaskComposerNodeInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
