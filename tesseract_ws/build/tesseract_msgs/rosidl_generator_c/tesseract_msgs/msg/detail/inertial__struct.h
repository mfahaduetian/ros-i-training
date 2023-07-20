// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/Inertial.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__INERTIAL__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__INERTIAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Inertial in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__Inertial
{
  geometry_msgs__msg__Pose origin;
  double mass;
  double ixx;
  double ixy;
  double ixz;
  double iyy;
  double iyz;
  double izz;
  /// Indicates if not used (aka: nullptr)
  bool empty;
} tesseract_msgs__msg__Inertial;

// Struct for a sequence of tesseract_msgs__msg__Inertial.
typedef struct tesseract_msgs__msg__Inertial__Sequence
{
  tesseract_msgs__msg__Inertial * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__Inertial__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__INERTIAL__STRUCT_H_
