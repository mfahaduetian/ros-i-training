// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/GroupsTCPs.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GROUPS_TC_PS__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__GROUPS_TC_PS__STRUCT_H_

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
// Member 'tcps'
#include "tesseract_msgs/msg/detail/groups_tcp__struct.h"

/// Struct defined in msg/GroupsTCPs in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__GroupsTCPs
{
  rosidl_runtime_c__String name;
  tesseract_msgs__msg__GroupsTCP__Sequence tcps;
} tesseract_msgs__msg__GroupsTCPs;

// Struct for a sequence of tesseract_msgs__msg__GroupsTCPs.
typedef struct tesseract_msgs__msg__GroupsTCPs__Sequence
{
  tesseract_msgs__msg__GroupsTCPs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__GroupsTCPs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__GROUPS_TC_PS__STRUCT_H_
