// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/StringLimitsPair.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__STRING_LIMITS_PAIR__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__STRING_LIMITS_PAIR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'first'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StringLimitsPair in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__StringLimitsPair
{
  rosidl_runtime_c__String first;
  double second[2];
} tesseract_msgs__msg__StringLimitsPair;

// Struct for a sequence of tesseract_msgs__msg__StringLimitsPair.
typedef struct tesseract_msgs__msg__StringLimitsPair__Sequence
{
  tesseract_msgs__msg__StringLimitsPair * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__StringLimitsPair__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__STRING_LIMITS_PAIR__STRUCT_H_
