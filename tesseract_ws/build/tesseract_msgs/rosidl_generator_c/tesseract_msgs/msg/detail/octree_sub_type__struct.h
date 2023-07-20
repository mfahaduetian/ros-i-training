// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/OctreeSubType.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__OCTREE_SUB_TYPE__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__OCTREE_SUB_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BOX'.
enum
{
  tesseract_msgs__msg__OctreeSubType__BOX = 0
};

/// Constant 'SPHERE_INSIDE'.
enum
{
  tesseract_msgs__msg__OctreeSubType__SPHERE_INSIDE = 1
};

/// Constant 'SPHERE_OUTSIDE'.
enum
{
  tesseract_msgs__msg__OctreeSubType__SPHERE_OUTSIDE = 2
};

/// Struct defined in msg/OctreeSubType in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__OctreeSubType
{
  /// The type of the geometry
  uint8_t type;
} tesseract_msgs__msg__OctreeSubType;

// Struct for a sequence of tesseract_msgs__msg__OctreeSubType.
typedef struct tesseract_msgs__msg__OctreeSubType__Sequence
{
  tesseract_msgs__msg__OctreeSubType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__OctreeSubType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__OCTREE_SUB_TYPE__STRUCT_H_
