// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/Joint.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/joint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `child_link_name`
// Member `parent_link_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `parent_to_joint_origin_transform`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `limits`
#include "tesseract_msgs/msg/detail/joint_limits__functions.h"
// Member `dynamics`
#include "tesseract_msgs/msg/detail/joint_dynamics__functions.h"
// Member `safety`
#include "tesseract_msgs/msg/detail/joint_safety__functions.h"
// Member `calibration`
#include "tesseract_msgs/msg/detail/joint_calibration__functions.h"
// Member `mimic`
#include "tesseract_msgs/msg/detail/joint_mimic__functions.h"

bool
tesseract_msgs__msg__Joint__init(tesseract_msgs__msg__Joint * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // type
  // axis
  // child_link_name
  if (!rosidl_runtime_c__String__init(&msg->child_link_name)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // parent_link_name
  if (!rosidl_runtime_c__String__init(&msg->parent_link_name)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // parent_to_joint_origin_transform
  if (!geometry_msgs__msg__Pose__init(&msg->parent_to_joint_origin_transform)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // limits
  if (!tesseract_msgs__msg__JointLimits__init(&msg->limits)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // dynamics
  if (!tesseract_msgs__msg__JointDynamics__init(&msg->dynamics)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // safety
  if (!tesseract_msgs__msg__JointSafety__init(&msg->safety)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // calibration
  if (!tesseract_msgs__msg__JointCalibration__init(&msg->calibration)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // mimic
  if (!tesseract_msgs__msg__JointMimic__init(&msg->mimic)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__Joint__fini(tesseract_msgs__msg__Joint * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  // axis
  // child_link_name
  rosidl_runtime_c__String__fini(&msg->child_link_name);
  // parent_link_name
  rosidl_runtime_c__String__fini(&msg->parent_link_name);
  // parent_to_joint_origin_transform
  geometry_msgs__msg__Pose__fini(&msg->parent_to_joint_origin_transform);
  // limits
  tesseract_msgs__msg__JointLimits__fini(&msg->limits);
  // dynamics
  tesseract_msgs__msg__JointDynamics__fini(&msg->dynamics);
  // safety
  tesseract_msgs__msg__JointSafety__fini(&msg->safety);
  // calibration
  tesseract_msgs__msg__JointCalibration__fini(&msg->calibration);
  // mimic
  tesseract_msgs__msg__JointMimic__fini(&msg->mimic);
}

bool
tesseract_msgs__msg__Joint__are_equal(const tesseract_msgs__msg__Joint * lhs, const tesseract_msgs__msg__Joint * rhs)
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
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // axis
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->axis[i] != rhs->axis[i]) {
      return false;
    }
  }
  // child_link_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->child_link_name), &(rhs->child_link_name)))
  {
    return false;
  }
  // parent_link_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->parent_link_name), &(rhs->parent_link_name)))
  {
    return false;
  }
  // parent_to_joint_origin_transform
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->parent_to_joint_origin_transform), &(rhs->parent_to_joint_origin_transform)))
  {
    return false;
  }
  // limits
  if (!tesseract_msgs__msg__JointLimits__are_equal(
      &(lhs->limits), &(rhs->limits)))
  {
    return false;
  }
  // dynamics
  if (!tesseract_msgs__msg__JointDynamics__are_equal(
      &(lhs->dynamics), &(rhs->dynamics)))
  {
    return false;
  }
  // safety
  if (!tesseract_msgs__msg__JointSafety__are_equal(
      &(lhs->safety), &(rhs->safety)))
  {
    return false;
  }
  // calibration
  if (!tesseract_msgs__msg__JointCalibration__are_equal(
      &(lhs->calibration), &(rhs->calibration)))
  {
    return false;
  }
  // mimic
  if (!tesseract_msgs__msg__JointMimic__are_equal(
      &(lhs->mimic), &(rhs->mimic)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__msg__Joint__copy(
  const tesseract_msgs__msg__Joint * input,
  tesseract_msgs__msg__Joint * output)
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
  // type
  output->type = input->type;
  // axis
  for (size_t i = 0; i < 3; ++i) {
    output->axis[i] = input->axis[i];
  }
  // child_link_name
  if (!rosidl_runtime_c__String__copy(
      &(input->child_link_name), &(output->child_link_name)))
  {
    return false;
  }
  // parent_link_name
  if (!rosidl_runtime_c__String__copy(
      &(input->parent_link_name), &(output->parent_link_name)))
  {
    return false;
  }
  // parent_to_joint_origin_transform
  if (!geometry_msgs__msg__Pose__copy(
      &(input->parent_to_joint_origin_transform), &(output->parent_to_joint_origin_transform)))
  {
    return false;
  }
  // limits
  if (!tesseract_msgs__msg__JointLimits__copy(
      &(input->limits), &(output->limits)))
  {
    return false;
  }
  // dynamics
  if (!tesseract_msgs__msg__JointDynamics__copy(
      &(input->dynamics), &(output->dynamics)))
  {
    return false;
  }
  // safety
  if (!tesseract_msgs__msg__JointSafety__copy(
      &(input->safety), &(output->safety)))
  {
    return false;
  }
  // calibration
  if (!tesseract_msgs__msg__JointCalibration__copy(
      &(input->calibration), &(output->calibration)))
  {
    return false;
  }
  // mimic
  if (!tesseract_msgs__msg__JointMimic__copy(
      &(input->mimic), &(output->mimic)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__msg__Joint *
tesseract_msgs__msg__Joint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__Joint * msg = (tesseract_msgs__msg__Joint *)allocator.allocate(sizeof(tesseract_msgs__msg__Joint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__Joint));
  bool success = tesseract_msgs__msg__Joint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__Joint__destroy(tesseract_msgs__msg__Joint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__Joint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__Joint__Sequence__init(tesseract_msgs__msg__Joint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__Joint * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__Joint *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__Joint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__Joint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__Joint__fini(&data[i - 1]);
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
tesseract_msgs__msg__Joint__Sequence__fini(tesseract_msgs__msg__Joint__Sequence * array)
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
      tesseract_msgs__msg__Joint__fini(&array->data[i]);
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

tesseract_msgs__msg__Joint__Sequence *
tesseract_msgs__msg__Joint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__Joint__Sequence * array = (tesseract_msgs__msg__Joint__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__Joint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__Joint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__Joint__Sequence__destroy(tesseract_msgs__msg__Joint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__Joint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__Joint__Sequence__are_equal(const tesseract_msgs__msg__Joint__Sequence * lhs, const tesseract_msgs__msg__Joint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__Joint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__Joint__Sequence__copy(
  const tesseract_msgs__msg__Joint__Sequence * input,
  tesseract_msgs__msg__Joint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__Joint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__Joint * data =
      (tesseract_msgs__msg__Joint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__Joint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__Joint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__Joint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
