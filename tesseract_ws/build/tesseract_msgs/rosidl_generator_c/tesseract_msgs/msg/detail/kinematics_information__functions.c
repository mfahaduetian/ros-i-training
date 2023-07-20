// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/KinematicsInformation.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/kinematics_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `group_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `group_joint_states`
#include "tesseract_msgs/msg/detail/groups_joint_states__functions.h"
// Member `group_tcps`
#include "tesseract_msgs/msg/detail/groups_tc_ps__functions.h"
// Member `chain_groups`
#include "tesseract_msgs/msg/detail/chain_group__functions.h"
// Member `joint_groups`
#include "tesseract_msgs/msg/detail/joint_group__functions.h"
// Member `link_groups`
#include "tesseract_msgs/msg/detail/link_group__functions.h"
// Member `kinematics_plugin_info`
#include "tesseract_msgs/msg/detail/kinematics_plugin_info__functions.h"

bool
tesseract_msgs__msg__KinematicsInformation__init(tesseract_msgs__msg__KinematicsInformation * msg)
{
  if (!msg) {
    return false;
  }
  // group_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->group_names, 0)) {
    tesseract_msgs__msg__KinematicsInformation__fini(msg);
    return false;
  }
  // group_joint_states
  if (!tesseract_msgs__msg__GroupsJointStates__Sequence__init(&msg->group_joint_states, 0)) {
    tesseract_msgs__msg__KinematicsInformation__fini(msg);
    return false;
  }
  // group_tcps
  if (!tesseract_msgs__msg__GroupsTCPs__Sequence__init(&msg->group_tcps, 0)) {
    tesseract_msgs__msg__KinematicsInformation__fini(msg);
    return false;
  }
  // chain_groups
  if (!tesseract_msgs__msg__ChainGroup__Sequence__init(&msg->chain_groups, 0)) {
    tesseract_msgs__msg__KinematicsInformation__fini(msg);
    return false;
  }
  // joint_groups
  if (!tesseract_msgs__msg__JointGroup__Sequence__init(&msg->joint_groups, 0)) {
    tesseract_msgs__msg__KinematicsInformation__fini(msg);
    return false;
  }
  // link_groups
  if (!tesseract_msgs__msg__LinkGroup__Sequence__init(&msg->link_groups, 0)) {
    tesseract_msgs__msg__KinematicsInformation__fini(msg);
    return false;
  }
  // kinematics_plugin_info
  if (!tesseract_msgs__msg__KinematicsPluginInfo__init(&msg->kinematics_plugin_info)) {
    tesseract_msgs__msg__KinematicsInformation__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__KinematicsInformation__fini(tesseract_msgs__msg__KinematicsInformation * msg)
{
  if (!msg) {
    return;
  }
  // group_names
  rosidl_runtime_c__String__Sequence__fini(&msg->group_names);
  // group_joint_states
  tesseract_msgs__msg__GroupsJointStates__Sequence__fini(&msg->group_joint_states);
  // group_tcps
  tesseract_msgs__msg__GroupsTCPs__Sequence__fini(&msg->group_tcps);
  // chain_groups
  tesseract_msgs__msg__ChainGroup__Sequence__fini(&msg->chain_groups);
  // joint_groups
  tesseract_msgs__msg__JointGroup__Sequence__fini(&msg->joint_groups);
  // link_groups
  tesseract_msgs__msg__LinkGroup__Sequence__fini(&msg->link_groups);
  // kinematics_plugin_info
  tesseract_msgs__msg__KinematicsPluginInfo__fini(&msg->kinematics_plugin_info);
}

bool
tesseract_msgs__msg__KinematicsInformation__are_equal(const tesseract_msgs__msg__KinematicsInformation * lhs, const tesseract_msgs__msg__KinematicsInformation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // group_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->group_names), &(rhs->group_names)))
  {
    return false;
  }
  // group_joint_states
  if (!tesseract_msgs__msg__GroupsJointStates__Sequence__are_equal(
      &(lhs->group_joint_states), &(rhs->group_joint_states)))
  {
    return false;
  }
  // group_tcps
  if (!tesseract_msgs__msg__GroupsTCPs__Sequence__are_equal(
      &(lhs->group_tcps), &(rhs->group_tcps)))
  {
    return false;
  }
  // chain_groups
  if (!tesseract_msgs__msg__ChainGroup__Sequence__are_equal(
      &(lhs->chain_groups), &(rhs->chain_groups)))
  {
    return false;
  }
  // joint_groups
  if (!tesseract_msgs__msg__JointGroup__Sequence__are_equal(
      &(lhs->joint_groups), &(rhs->joint_groups)))
  {
    return false;
  }
  // link_groups
  if (!tesseract_msgs__msg__LinkGroup__Sequence__are_equal(
      &(lhs->link_groups), &(rhs->link_groups)))
  {
    return false;
  }
  // kinematics_plugin_info
  if (!tesseract_msgs__msg__KinematicsPluginInfo__are_equal(
      &(lhs->kinematics_plugin_info), &(rhs->kinematics_plugin_info)))
  {
    return false;
  }
  return true;
}

bool
tesseract_msgs__msg__KinematicsInformation__copy(
  const tesseract_msgs__msg__KinematicsInformation * input,
  tesseract_msgs__msg__KinematicsInformation * output)
{
  if (!input || !output) {
    return false;
  }
  // group_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->group_names), &(output->group_names)))
  {
    return false;
  }
  // group_joint_states
  if (!tesseract_msgs__msg__GroupsJointStates__Sequence__copy(
      &(input->group_joint_states), &(output->group_joint_states)))
  {
    return false;
  }
  // group_tcps
  if (!tesseract_msgs__msg__GroupsTCPs__Sequence__copy(
      &(input->group_tcps), &(output->group_tcps)))
  {
    return false;
  }
  // chain_groups
  if (!tesseract_msgs__msg__ChainGroup__Sequence__copy(
      &(input->chain_groups), &(output->chain_groups)))
  {
    return false;
  }
  // joint_groups
  if (!tesseract_msgs__msg__JointGroup__Sequence__copy(
      &(input->joint_groups), &(output->joint_groups)))
  {
    return false;
  }
  // link_groups
  if (!tesseract_msgs__msg__LinkGroup__Sequence__copy(
      &(input->link_groups), &(output->link_groups)))
  {
    return false;
  }
  // kinematics_plugin_info
  if (!tesseract_msgs__msg__KinematicsPluginInfo__copy(
      &(input->kinematics_plugin_info), &(output->kinematics_plugin_info)))
  {
    return false;
  }
  return true;
}

tesseract_msgs__msg__KinematicsInformation *
tesseract_msgs__msg__KinematicsInformation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__KinematicsInformation * msg = (tesseract_msgs__msg__KinematicsInformation *)allocator.allocate(sizeof(tesseract_msgs__msg__KinematicsInformation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__KinematicsInformation));
  bool success = tesseract_msgs__msg__KinematicsInformation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__KinematicsInformation__destroy(tesseract_msgs__msg__KinematicsInformation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tesseract_msgs__msg__KinematicsInformation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tesseract_msgs__msg__KinematicsInformation__Sequence__init(tesseract_msgs__msg__KinematicsInformation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__KinematicsInformation * data = NULL;

  if (size) {
    data = (tesseract_msgs__msg__KinematicsInformation *)allocator.zero_allocate(size, sizeof(tesseract_msgs__msg__KinematicsInformation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__KinematicsInformation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__KinematicsInformation__fini(&data[i - 1]);
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
tesseract_msgs__msg__KinematicsInformation__Sequence__fini(tesseract_msgs__msg__KinematicsInformation__Sequence * array)
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
      tesseract_msgs__msg__KinematicsInformation__fini(&array->data[i]);
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

tesseract_msgs__msg__KinematicsInformation__Sequence *
tesseract_msgs__msg__KinematicsInformation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tesseract_msgs__msg__KinematicsInformation__Sequence * array = (tesseract_msgs__msg__KinematicsInformation__Sequence *)allocator.allocate(sizeof(tesseract_msgs__msg__KinematicsInformation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__KinematicsInformation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__KinematicsInformation__Sequence__destroy(tesseract_msgs__msg__KinematicsInformation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tesseract_msgs__msg__KinematicsInformation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tesseract_msgs__msg__KinematicsInformation__Sequence__are_equal(const tesseract_msgs__msg__KinematicsInformation__Sequence * lhs, const tesseract_msgs__msg__KinematicsInformation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tesseract_msgs__msg__KinematicsInformation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tesseract_msgs__msg__KinematicsInformation__Sequence__copy(
  const tesseract_msgs__msg__KinematicsInformation__Sequence * input,
  tesseract_msgs__msg__KinematicsInformation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tesseract_msgs__msg__KinematicsInformation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tesseract_msgs__msg__KinematicsInformation * data =
      (tesseract_msgs__msg__KinematicsInformation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tesseract_msgs__msg__KinematicsInformation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tesseract_msgs__msg__KinematicsInformation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tesseract_msgs__msg__KinematicsInformation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
