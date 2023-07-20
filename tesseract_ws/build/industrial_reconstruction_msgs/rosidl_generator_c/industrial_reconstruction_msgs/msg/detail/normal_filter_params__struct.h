// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from industrial_reconstruction_msgs:msg/NormalFilterParams.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__NORMAL_FILTER_PARAMS__STRUCT_H_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__NORMAL_FILTER_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'normal_direction'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/NormalFilterParams in the package industrial_reconstruction_msgs.
typedef struct industrial_reconstruction_msgs__msg__NormalFilterParams
{
  geometry_msgs__msg__Vector3 normal_direction;
  /// Keep triangles within this angle of the normal (degrees)
  float angle;
} industrial_reconstruction_msgs__msg__NormalFilterParams;

// Struct for a sequence of industrial_reconstruction_msgs__msg__NormalFilterParams.
typedef struct industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence
{
  industrial_reconstruction_msgs__msg__NormalFilterParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__NORMAL_FILTER_PARAMS__STRUCT_H_
