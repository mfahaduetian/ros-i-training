// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/ChainGroup.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__CHAIN_GROUP__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__CHAIN_GROUP__STRUCT_H_

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
// Member 'chains'
#include "tesseract_msgs/msg/detail/string_pair__struct.h"

/// Struct defined in msg/ChainGroup in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__ChainGroup
{
  rosidl_runtime_c__String name;
  tesseract_msgs__msg__StringPair__Sequence chains;
} tesseract_msgs__msg__ChainGroup;

// Struct for a sequence of tesseract_msgs__msg__ChainGroup.
typedef struct tesseract_msgs__msg__ChainGroup__Sequence
{
  tesseract_msgs__msg__ChainGroup * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__ChainGroup__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__CHAIN_GROUP__STRUCT_H_
