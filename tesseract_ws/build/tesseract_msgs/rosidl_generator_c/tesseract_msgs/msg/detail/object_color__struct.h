// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/ObjectColor.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__OBJECT_COLOR__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__OBJECT_COLOR__STRUCT_H_

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
// Member 'visual'
// Member 'collision'
#include "std_msgs/msg/detail/color_rgba__struct.h"

/// Struct defined in msg/ObjectColor in the package tesseract_msgs.
/**
  * the name of the object
 */
typedef struct tesseract_msgs__msg__ObjectColor
{
  rosidl_runtime_c__String name;
  /// the objects visual geometry color
  std_msgs__msg__ColorRGBA__Sequence visual;
  /// the objects collision geometry color
  std_msgs__msg__ColorRGBA__Sequence collision;
} tesseract_msgs__msg__ObjectColor;

// Struct for a sequence of tesseract_msgs__msg__ObjectColor.
typedef struct tesseract_msgs__msg__ObjectColor__Sequence
{
  tesseract_msgs__msg__ObjectColor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__ObjectColor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__OBJECT_COLOR__STRUCT_H_
