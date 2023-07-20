// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/JointSafety.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_SAFETY__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_SAFETY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/JointSafety in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__JointSafety
{
  double soft_upper_limit;
  double soft_lower_limit;
  double k_position;
  double k_velocity;
  /// Indicates if not valid (aka: nullptr)
  bool empty;
} tesseract_msgs__msg__JointSafety;

// Struct for a sequence of tesseract_msgs__msg__JointSafety.
typedef struct tesseract_msgs__msg__JointSafety__Sequence
{
  tesseract_msgs__msg__JointSafety * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__JointSafety__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_SAFETY__STRUCT_H_
