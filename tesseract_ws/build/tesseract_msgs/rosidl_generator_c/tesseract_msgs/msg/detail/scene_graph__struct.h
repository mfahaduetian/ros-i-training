// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/SceneGraph.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__SCENE_GRAPH__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__SCENE_GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'root'
// Member 'invisible_links'
// Member 'disabled_collision_links'
#include "rosidl_runtime_c/string.h"
// Member 'links'
#include "tesseract_msgs/msg/detail/link__struct.h"
// Member 'joints'
#include "tesseract_msgs/msg/detail/joint__struct.h"
// Member 'acm'
#include "tesseract_msgs/msg/detail/allowed_collision_entry__struct.h"

/// Struct defined in msg/SceneGraph in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__SceneGraph
{
  /// Scene Graph Name
  rosidl_runtime_c__String id;
  /// Root Link Name
  rosidl_runtime_c__String root;
  tesseract_msgs__msg__Link__Sequence links;
  tesseract_msgs__msg__Joint__Sequence joints;
  /// List of links which are hidden
  rosidl_runtime_c__String__Sequence invisible_links;
  /// List of links which have collision disabled
  rosidl_runtime_c__String__Sequence disabled_collision_links;
  /// The allowed collision matrix
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence acm;
} tesseract_msgs__msg__SceneGraph;

// Struct for a sequence of tesseract_msgs__msg__SceneGraph.
typedef struct tesseract_msgs__msg__SceneGraph__Sequence
{
  tesseract_msgs__msg__SceneGraph * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__SceneGraph__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__SCENE_GRAPH__STRUCT_H_
