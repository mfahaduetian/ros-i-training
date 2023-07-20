// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from industrial_reconstruction_msgs:srv/StartReconstruction.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__START_RECONSTRUCTION__STRUCT_H_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__START_RECONSTRUCTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tracking_frame'
// Member 'relative_frame'
#include "rosidl_runtime_c/string.h"
// Member 'tsdf_params'
#include "industrial_reconstruction_msgs/msg/detail/tsdf_volume_params__struct.h"
// Member 'rgbd_params'
#include "industrial_reconstruction_msgs/msg/detail/rgbd_image_params__struct.h"

/// Struct defined in srv/StartReconstruction in the package industrial_reconstruction_msgs.
typedef struct industrial_reconstruction_msgs__srv__StartReconstruction_Request
{
  /// The frame to be tracked
  rosidl_runtime_c__String tracking_frame;
  /// The frame to recored the tracked_frame pose relative to
  rosidl_runtime_c__String relative_frame;
  /// The minimum translation distance in meters required before recording another image
  float translation_distance;
  /// The minimum rotational distance required before recording another image
  float rotational_distance;
  /// Whether or not to do integration live, may cause loss of some data
  bool live;
  industrial_reconstruction_msgs__msg__TSDFVolumeParams tsdf_params;
  industrial_reconstruction_msgs__msg__RGBDImageParams rgbd_params;
} industrial_reconstruction_msgs__srv__StartReconstruction_Request;

// Struct for a sequence of industrial_reconstruction_msgs__srv__StartReconstruction_Request.
typedef struct industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence
{
  industrial_reconstruction_msgs__srv__StartReconstruction_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/StartReconstruction in the package industrial_reconstruction_msgs.
typedef struct industrial_reconstruction_msgs__srv__StartReconstruction_Response
{
  bool success;
} industrial_reconstruction_msgs__srv__StartReconstruction_Response;

// Struct for a sequence of industrial_reconstruction_msgs__srv__StartReconstruction_Response.
typedef struct industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence
{
  industrial_reconstruction_msgs__srv__StartReconstruction_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__START_RECONSTRUCTION__STRUCT_H_
