// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/GroupsJointStates.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATES__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'joint_states'
#include "tesseract_msgs/msg/detail/groups_joint_state__struct.h"

/// Struct defined in msg/GroupsJointStates in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__GroupsJointStates
{
  rosidl_runtime_c__String name;
  tesseract_msgs__msg__GroupsJointState__Sequence joint_states;
} tesseract_msgs__msg__GroupsJointStates;

// Struct for a sequence of tesseract_msgs__msg__GroupsJointStates.
typedef struct tesseract_msgs__msg__GroupsJointStates__Sequence
{
  tesseract_msgs__msg__GroupsJointStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__GroupsJointStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATES__STRUCT_H_
