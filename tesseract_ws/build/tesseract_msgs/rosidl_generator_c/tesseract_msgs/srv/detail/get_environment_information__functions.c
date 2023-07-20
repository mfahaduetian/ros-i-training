// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:srv/GetEnvironmentInformation.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/srv/detail/get_environment_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
tesseract_msgs__srv__GetEnvironmentInformation_Request__init(tesseract_msgs__srv__GetEnvironmentInformation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // flags
  return true;
}

void
tesseract_msgs__srv__GetEnvironmentInformation_Request__fini(tesseract_msgs__srv__GetEnvironmentInformation_Request * msg)
{
  if (!msg) {
    return;
  }
  // flags
}

bool
tesseract_msgs__srv__GetEnvironmentInformation_Request__are_equal(const tesseract_msgs__srv__GetEnvironmentInformation_Request * lhs, const tesseract_msgs__srv__GetEnvironmentInformation_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // flags
  if (lhs->flags != rhs->flags) {
    return false;
  }
  return true;
}

bool
tesseract_msgs__srv__GetEnvironmentInformation_Request__copy(
  const tesseract_msgs__srv__GetEnvironmentInformation_Request * input,
  tesseract_msgs__srv__GetEnvironmentInformation_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // flags
  output->flags = input->flags;
  return true;
}

tesseract_msgs__srv__GetEnvironmentInformation_Request *
tesseract_msgs__srv__GetEnvironmentInformation_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__srv__GetEnvironmentInformation_Request * msg = (tesseract_msgs__srv__GetEnvironmentInformation_Request *)allocator.allocate(sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Request));
  bool success = tesseract_msgs__srv__GetEnvironmentInformation_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__srv__GetEnvironmentInformation_Request__destroy(tesseract_msgs__srv__GetEnvironmentInformation_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__srv__GetEnvironmentInformation_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence__init(tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__srv__GetEnvironmentInformation_Request * data = NULL;

  if (size) {
    data = (tesseract_msgs__srv__GetEnvironmentInformation_Request *)allocator.zero_allocate(size, sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__srv__GetEnvironmentInformation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__srv__GetEnvironmentInformation_Request__fini(&data[i - 1]);
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
tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence__fini(tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence * array)
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
      tesseract_msgs__srv__GetEnvironmentInformation_Request__fini(&array->data[i]);
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

tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence *
tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence * array = (tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence *)allocator.allocate(sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence__destroy(tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence__are_equal(const tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence * lhs, const tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__srv__GetEnvironmentInformation_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence__copy(
  const tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence * input,
  tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__srv__GetEnvironmentInformation_Request * data =
      (tesseract_msgs__srv__GetEnvironmentInformation_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__srv__GetEnvironmentInformation_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__srv__GetEnvironmentInformation_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__srv__GetEnvironmentInformation_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `id`
// Member `link_names`
// Member `joint_names`
// Member `active_link_names`
// Member `active_joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `command_history`
#include "tesseract_msgs/msg/detail/environment_command__functions.h"
// Member `links`
#include "tesseract_msgs/msg/detail/link__functions.h"
// Member `joints`
#include "tesseract_msgs/msg/detail/joint__functions.h"
// Member `link_transforms`
// Member `joint_transforms`
#include "tesseract_msgs/msg/detail/transform_map__functions.h"
// Member `allowed_collision_matrix`
#include "tesseract_msgs/msg/detail/allowed_collision_entry__functions.h"
// Member `kinematics_information`
#include "tesseract_msgs/msg/detail/kinematics_information__functions.h"
// Member `joint_states`
#include "sensor_msgs/msg/detail/joint_state__functions.h"

bool
tesseract_msgs__srv__GetEnvironmentInformation_Response__init(tesseract_msgs__srv__GetEnvironmentInformation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // revision
  // command_history
  if (!tesseract_msgs__msg__EnvironmentCommand__Sequence__init(&msg->command_history, 0)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // links
  if (!tesseract_msgs__msg__Link__Sequence__init(&msg->links, 0)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // joints
  if (!tesseract_msgs__msg__Joint__Sequence__init(&msg->joints, 0)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // link_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->link_names, 0)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // active_link_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->active_link_names, 0)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // active_joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->active_joint_names, 0)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // link_transforms
  if (!tesseract_msgs__msg__TransformMap__init(&msg->link_transforms)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // joint_transforms
  if (!tesseract_msgs__msg__TransformMap__init(&msg->joint_transforms)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // allowed_collision_matrix
  if (!tesseract_msgs__msg__AllowedCollisionEntry__Sequence__init(&msg->allowed_collision_matrix, 0)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // kinematics_information
  if (!tesseract_msgs__msg__KinematicsInformation__init(&msg->kinematics_information)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // joint_states
  if (!sensor_msgs__msg__JointState__init(&msg->joint_states)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(tesseract_msgs__srv__GetEnvironmentInformation_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // revision
  // command_history
  tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(&msg->command_history);
  // links
  tesseract_msgs__msg__Link__Sequence__fini(&msg->links);
  // joints
  tesseract_msgs__msg__Joint__Sequence__fini(&msg->joints);
  // link_names
  rosidl_runtime_c__String__Sequence__fini(&msg->link_names);
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // active_link_names
  rosidl_runtime_c__String__Sequence__fini(&msg->active_link_names);
  // active_joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->active_joint_names);
  // link_transforms
  tesseract_msgs__msg__TransformMap__fini(&msg->link_transforms);
  // joint_transforms
  tesseract_msgs__msg__TransformMap__fini(&msg->joint_transforms);
  // allowed_collision_matrix
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence__fini(&msg->allowed_collision_matrix);
  // kinematics_information
  tesseract_msgs__msg__KinematicsInformation__fini(&msg->kinematics_information);
  // joint_states
  sensor_msgs__msg__JointState__fini(&msg->joint_states);
}

bool
tesseract_msgs__srv__GetEnvironmentInformation_Response__are_equal(const tesseract_msgs__srv__GetEnvironmentInformation_Response * lhs, const tesseract_msgs__srv__GetEnvironmentInformation_Response * rhs)
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
  // command_history
  if (!tesseract_msgs__msg__EnvironmentCommand__Sequence__are_equal(
      &(lhs->command_history), &(rhs->command_history)))
  {
    return false;
  }
  // links
  if (!tesseract_msgs__msg__Link__Sequence__are_equal(
      &(lhs->links), &(rhs->links)))
  {
    return false;
  }
  // joints
  if (!tesseract_msgs__msg__Joint__Sequence__are_equal(
      &(lhs->joints), &(rhs->joints)))
  {
    return false;
  }
  // link_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->link_names), &(rhs->link_names)))
  {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->joint_names), &(rhs->joint_names)))
  {
    return false;
  }
  // active_link_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->active_link_names), &(rhs->active_link_names)))
  {
    return false;
  }
  // active_joint_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->active_joint_names), &(rhs->active_joint_names)))
  {
    return false;
  }
  // link_transforms
  if (!tesseract_msgs__msg__TransformMap__are_equal(
      &(lhs->link_transforms), &(rhs->link_transforms)))
  {
    return false;
  }
  // joint_transforms
  if (!tesseract_msgs__msg__TransformMap__are_equal(
      &(lhs->joint_transforms), &(rhs->joint_transforms)))
  {
    return false;
  }
  // allowed_collision_matrix
  if (!tesseract_msgs__msg__AllowedCollisionEntry__Sequence__are_equal(
      &(lhs->allowed_collision_matrix), &(rhs->allowed_collision_matrix)))
  {
    return false;
  }
  // kinematics_information
  if (!tesseract_msgs__msg__KinematicsInformation__are_equal(
      &(lhs->kinematics_information), &(rhs->kinematics_information)))
  {
    return false;
  }
  // joint_states
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->joint_states), &(rhs->joint_states)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__srv__GetEnvironmentInformation_Response__copy(
  const tesseract_msgs__srv__GetEnvironmentInformation_Response * input,
  tesseract_msgs__srv__GetEnvironmentInformation_Response * output)
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
  // command_history
  if (!tesseract_msgs__msg__EnvironmentCommand__Sequence__copy(
      &(input->command_history), &(output->command_history)))
  {
    return false;
  }
  // links
  if (!tesseract_msgs__msg__Link__Sequence__copy(
      &(input->links), &(output->links)))
  {
    return false;
  }
  // joints
  if (!tesseract_msgs__msg__Joint__Sequence__copy(
      &(input->joints), &(output->joints)))
  {
    return false;
  }
  // link_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->link_names), &(output->link_names)))
  {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->joint_names), &(output->joint_names)))
  {
    return false;
  }
  // active_link_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->active_link_names), &(output->active_link_names)))
  {
    return false;
  }
  // active_joint_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->active_joint_names), &(output->active_joint_names)))
  {
    return false;
  }
  // link_transforms
  if (!tesseract_msgs__msg__TransformMap__copy(
      &(input->link_transforms), &(output->link_transforms)))
  {
    return false;
  }
  // joint_transforms
  if (!tesseract_msgs__msg__TransformMap__copy(
      &(input->joint_transforms), &(output->joint_transforms)))
  {
    return false;
  }
  // allowed_collision_matrix
  if (!tesseract_msgs__msg__AllowedCollisionEntry__Sequence__copy(
      &(input->allowed_collision_matrix), &(output->allowed_collision_matrix)))
  {
    return false;
  }
  // kinematics_information
  if (!tesseract_msgs__msg__KinematicsInformation__copy(
      &(input->kinematics_information), &(output->kinematics_information)))
  {
    return false;
  }
  // joint_states
  if (!sensor_msgs__msg__JointState__copy(
      &(input->joint_states), &(output->joint_states)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__srv__GetEnvironmentInformation_Response *
tesseract_msgs__srv__GetEnvironmentInformation_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__srv__GetEnvironmentInformation_Response * msg = (tesseract_msgs__srv__GetEnvironmentInformation_Response *)allocator.allocate(sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Response));
  bool success = tesseract_msgs__srv__GetEnvironmentInformation_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__srv__GetEnvironmentInformation_Response__destroy(tesseract_msgs__srv__GetEnvironmentInformation_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence__init(tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__srv__GetEnvironmentInformation_Response * data = NULL;

  if (size) {
    data = (tesseract_msgs__srv__GetEnvironmentInformation_Response *)allocator.zero_allocate(size, sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__srv__GetEnvironmentInformation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(&data[i - 1]);
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
tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence__fini(tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence * array)
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
      tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(&array->data[i]);
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

tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence *
tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence * array = (tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence *)allocator.allocate(sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence__destroy(tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence__are_equal(const tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence * lhs, const tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__srv__GetEnvironmentInformation_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence__copy(
  const tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence * input,
  tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__srv__GetEnvironmentInformation_Response * data =
      (tesseract_msgs__srv__GetEnvironmentInformation_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__srv__GetEnvironmentInformation_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__srv__GetEnvironmentInformation_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
