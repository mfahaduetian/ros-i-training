// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/JointGroup.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_GROUP__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_GROUP__STRUCT_H_

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
// Member 'joints'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/JointGroup in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__JointGroup
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String__Sequence joints;
} tesseract_msgs__msg__JointGroup;

// Struct for a sequence of tesseract_msgs__msg__JointGroup.
typedef struct tesseract_msgs__msg__JointGroup__Sequence
{
  tesseract_msgs__msg__JointGroup * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__JointGroup__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_GROUP__STRUCT_H_
