// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/JointMimic.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_MIMIC__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_MIMIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/JointMimic in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__JointMimic
{
  double offset;
  double multiplier;
  rosidl_runtime_c__String joint_name;
  /// Indicates if not valid (aka: nullptr)
  bool empty;
} tesseract_msgs__msg__JointMimic;

// Struct for a sequence of tesseract_msgs__msg__JointMimic.
typedef struct tesseract_msgs__msg__JointMimic__Sequence
{
  tesseract_msgs__msg__JointMimic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__JointMimic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_MIMIC__STRUCT_H_
