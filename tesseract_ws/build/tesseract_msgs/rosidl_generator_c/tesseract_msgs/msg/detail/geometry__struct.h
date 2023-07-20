// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GEOMETRY__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__GEOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPHERE'.
enum
{
  tesseract_msgs__msg__Geometry__SPHERE = 1
};

/// Constant 'CYLINDER'.
enum
{
  tesseract_msgs__msg__Geometry__CYLINDER = 2
};

/// Constant 'CAPSULE'.
enum
{
  tesseract_msgs__msg__Geometry__CAPSULE = 10
};

/// Constant 'CONE'.
enum
{
  tesseract_msgs__msg__Geometry__CONE = 3
};

/// Constant 'BOX'.
enum
{
  tesseract_msgs__msg__Geometry__BOX = 4
};

/// Constant 'PLANE'.
enum
{
  tesseract_msgs__msg__Geometry__PLANE = 5
};

/// Constant 'MESH'.
enum
{
  tesseract_msgs__msg__Geometry__MESH = 6
};

/// Constant 'CONVEX_MESH'.
enum
{
  tesseract_msgs__msg__Geometry__CONVEX_MESH = 7
};

/// Constant 'SDF_MESH'.
enum
{
  tesseract_msgs__msg__Geometry__SDF_MESH = 8
};

/// Constant 'OCTREE'.
enum
{
  tesseract_msgs__msg__Geometry__OCTREE = 9
};

// Include directives for member types
// Member 'mesh'
#include "tesseract_msgs/msg/detail/mesh__struct.h"
// Member 'octomap'
#include "octomap_msgs/msg/detail/octomap__struct.h"
// Member 'octomap_sub_type'
#include "tesseract_msgs/msg/detail/octree_sub_type__struct.h"

/// Struct defined in msg/Geometry in the package tesseract_msgs.
/**
  * Define geometries
 */
typedef struct tesseract_msgs__msg__Geometry
{
  /// The type of the geometry
  uint8_t type;
  /// Sphere
  double sphere_radius;
  /// CYLINDER
  double cylinder_dimensions[2];
  /// CAPSULE
  double capsule_dimensions[2];
  /// CONE (radius, length)
  double cone_dimensions[2];
  /// BOX (x, y, z) lengths
  double box_dimensions[3];
  /// PLANE
  double plane_coeff[4];
  /// MESH, CONVEX_MESH, SDF_MESH
  tesseract_msgs__msg__Mesh mesh;
  /// OCTREE
  octomap_msgs__msg__Octomap octomap;
  tesseract_msgs__msg__OctreeSubType octomap_sub_type;
} tesseract_msgs__msg__Geometry;

// Struct for a sequence of tesseract_msgs__msg__Geometry.
typedef struct tesseract_msgs__msg__Geometry__Sequence
{
  tesseract_msgs__msg__Geometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__Geometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__GEOMETRY__STRUCT_H_
