// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__MESH__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__MESH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vertices'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'faces'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'file_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Mesh in the package tesseract_msgs.
/**
  * General definition of a mesh
 */
typedef struct tesseract_msgs__msg__Mesh
{
  /// the actual vertices that make up the mesh
  geometry_msgs__msg__Point__Sequence vertices;
  /// the indicies that make up the faces in the mesh
  /// the first number indicates the number of vertices that make up the face,
  /// followed by the indices of the vertices.
  rosidl_runtime_c__uint32__Sequence faces;
  /// Optional, If created from file provide path
  rosidl_runtime_c__String file_path;
  /// Optional, If file_path is provide provide the scale that was used
  float scale[3];
} tesseract_msgs__msg__Mesh;

// Struct for a sequence of tesseract_msgs__msg__Mesh.
typedef struct tesseract_msgs__msg__Mesh__Sequence
{
  tesseract_msgs__msg__Mesh * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__Mesh__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__MESH__STRUCT_H_
