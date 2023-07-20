// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/Material.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__MATERIAL__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__MATERIAL__STRUCT_H_

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
// Member 'texture_filename'
#include "rosidl_runtime_c/string.h"
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.h"

/// Struct defined in msg/Material in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__Material
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String texture_filename;
  std_msgs__msg__ColorRGBA color;
  /// Indicates if not valid (aka: nullptr)
  bool empty;
} tesseract_msgs__msg__Material;

// Struct for a sequence of tesseract_msgs__msg__Material.
typedef struct tesseract_msgs__msg__Material__Sequence
{
  tesseract_msgs__msg__Material * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__Material__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__MATERIAL__STRUCT_H_
