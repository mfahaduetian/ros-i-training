// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/GroupsTCP.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GROUPS_TCP__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__GROUPS_TCP__STRUCT_H_

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
// Member 'tcp'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/GroupsTCP in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__GroupsTCP
{
  rosidl_runtime_c__String name;
  geometry_msgs__msg__Pose tcp;
} tesseract_msgs__msg__GroupsTCP;

// Struct for a sequence of tesseract_msgs__msg__GroupsTCP.
typedef struct tesseract_msgs__msg__GroupsTCP__Sequence
{
  tesseract_msgs__msg__GroupsTCP * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__GroupsTCP__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__GROUPS_TCP__STRUCT_H_
