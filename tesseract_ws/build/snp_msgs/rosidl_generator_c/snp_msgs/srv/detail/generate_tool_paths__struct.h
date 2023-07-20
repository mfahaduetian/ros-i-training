// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snp_msgs:srv/GenerateToolPaths.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__STRUCT_H_
#define SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mesh_filename'
// Member 'mesh_frame'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GenerateToolPaths in the package snp_msgs.
typedef struct snp_msgs__srv__GenerateToolPaths_Request
{
  /// Mesh - the input to the path planning algorithm
  /// The surfaces on which to generate paths.
  rosidl_runtime_c__String mesh_filename;
  /// Name of the frame to which the mesh vertices are relative
  rosidl_runtime_c__String mesh_frame;
} snp_msgs__srv__GenerateToolPaths_Request;

// Struct for a sequence of snp_msgs__srv__GenerateToolPaths_Request.
typedef struct snp_msgs__srv__GenerateToolPaths_Request__Sequence
{
  snp_msgs__srv__GenerateToolPaths_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snp_msgs__srv__GenerateToolPaths_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'tool_paths'
#include "snp_msgs/msg/detail/tool_paths__struct.h"
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GenerateToolPaths in the package snp_msgs.
typedef struct snp_msgs__srv__GenerateToolPaths_Response
{
  /// Whether the planning was successful
  bool success;
  /// The resulting paths
  snp_msgs__msg__ToolPaths tool_paths;
  /// Information about planning operations
  rosidl_runtime_c__String message;
} snp_msgs__srv__GenerateToolPaths_Response;

// Struct for a sequence of snp_msgs__srv__GenerateToolPaths_Response.
typedef struct snp_msgs__srv__GenerateToolPaths_Response__Sequence
{
  snp_msgs__srv__GenerateToolPaths_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snp_msgs__srv__GenerateToolPaths_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__STRUCT_H_
