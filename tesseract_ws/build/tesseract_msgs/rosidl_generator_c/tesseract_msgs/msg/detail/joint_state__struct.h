// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'velocity'
// Member 'acceleration'
// Member 'effort'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/JointState in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__JointState
{
  rosidl_runtime_c__String__Sequence joint_names;
  rosidl_runtime_c__double__Sequence position;
  rosidl_runtime_c__double__Sequence velocity;
  rosidl_runtime_c__double__Sequence acceleration;
  rosidl_runtime_c__double__Sequence effort;
  builtin_interfaces__msg__Duration time_from_start;
} tesseract_msgs__msg__JointState;

// Struct for a sequence of tesseract_msgs__msg__JointState.
typedef struct tesseract_msgs__msg__JointState__Sequence
{
  tesseract_msgs__msg__JointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__JointState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_H_
