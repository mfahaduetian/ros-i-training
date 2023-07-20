// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from industrial_reconstruction_msgs:srv/StopReconstruction.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__STOP_RECONSTRUCTION__STRUCT_H_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__STOP_RECONSTRUCTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'archive_directory'
// Member 'mesh_filepath'
#include "rosidl_runtime_c/string.h"
// Member 'normal_filters'
#include "industrial_reconstruction_msgs/msg/detail/normal_filter_params__struct.h"

/// Struct defined in srv/StopReconstruction in the package industrial_reconstruction_msgs.
typedef struct industrial_reconstruction_msgs__srv__StopReconstruction_Request
{
  /// If not empty it will dump rgb, depth, poses and intrinsics to this directory
  rosidl_runtime_c__String archive_directory;
  /// The filepath to save the mesh at
  rosidl_runtime_c__String mesh_filepath;
  /// Filtering parameters
  /// Minimum number of connected faces a surface needs
  uint32_t min_num_faces;
  /// Filter by normal orientation
  industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence normal_filters;
} industrial_reconstruction_msgs__srv__StopReconstruction_Request;

// Struct for a sequence of industrial_reconstruction_msgs__srv__StopReconstruction_Request.
typedef struct industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence
{
  industrial_reconstruction_msgs__srv__StopReconstruction_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} industrial_reconstruction_msgs__srv__StopReconstruction_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/StopReconstruction in the package industrial_reconstruction_msgs.
typedef struct industrial_reconstruction_msgs__srv__StopReconstruction_Response
{
  bool success;
} industrial_reconstruction_msgs__srv__StopReconstruction_Response;

// Struct for a sequence of industrial_reconstruction_msgs__srv__StopReconstruction_Response.
typedef struct industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence
{
  industrial_reconstruction_msgs__srv__StopReconstruction_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} industrial_reconstruction_msgs__srv__StopReconstruction_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__STOP_RECONSTRUCTION__STRUCT_H_
