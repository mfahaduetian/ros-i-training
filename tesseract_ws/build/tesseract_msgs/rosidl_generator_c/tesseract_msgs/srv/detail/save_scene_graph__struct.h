// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:srv/SaveSceneGraph.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__DETAIL__SAVE_SCENE_GRAPH__STRUCT_H_
#define TESSERACT_MSGS__SRV__DETAIL__SAVE_SCENE_GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filepath'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SaveSceneGraph in the package tesseract_msgs.
typedef struct tesseract_msgs__srv__SaveSceneGraph_Request
{
  /// Path to which the DOT file is saved
  rosidl_runtime_c__String filepath;
} tesseract_msgs__srv__SaveSceneGraph_Request;

// Struct for a sequence of tesseract_msgs__srv__SaveSceneGraph_Request.
typedef struct tesseract_msgs__srv__SaveSceneGraph_Request__Sequence
{
  tesseract_msgs__srv__SaveSceneGraph_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__srv__SaveSceneGraph_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'id'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SaveSceneGraph in the package tesseract_msgs.
typedef struct tesseract_msgs__srv__SaveSceneGraph_Response
{
  bool success;
  /// Name/Id of the environment which contained this scene graph
  rosidl_runtime_c__String id;
  /// Revision number of the environment that contained this scene graph
  uint64_t revision;
} tesseract_msgs__srv__SaveSceneGraph_Response;

// Struct for a sequence of tesseract_msgs__srv__SaveSceneGraph_Response.
typedef struct tesseract_msgs__srv__SaveSceneGraph_Response__Sequence
{
  tesseract_msgs__srv__SaveSceneGraph_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__srv__SaveSceneGraph_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__SRV__DETAIL__SAVE_SCENE_GRAPH__STRUCT_H_
