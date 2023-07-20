// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__LINK__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__LINK__STRUCT_H_

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
// Member 'inertial'
#include "tesseract_msgs/msg/detail/inertial__struct.h"
// Member 'visual'
#include "tesseract_msgs/msg/detail/visual_geometry__struct.h"
// Member 'collision'
#include "tesseract_msgs/msg/detail/collision_geometry__struct.h"

/// Struct defined in msg/Link in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__Link
{
  rosidl_runtime_c__String name;
  tesseract_msgs__msg__Inertial inertial;
  tesseract_msgs__msg__VisualGeometry__Sequence visual;
  tesseract_msgs__msg__CollisionGeometry__Sequence collision;
} tesseract_msgs__msg__Link;

// Struct for a sequence of tesseract_msgs__msg__Link.
typedef struct tesseract_msgs__msg__Link__Sequence
{
  tesseract_msgs__msg__Link * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__Link__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__LINK__STRUCT_H_
