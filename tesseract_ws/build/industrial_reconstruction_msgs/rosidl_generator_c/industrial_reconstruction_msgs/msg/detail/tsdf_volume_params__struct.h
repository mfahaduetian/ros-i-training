// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from industrial_reconstruction_msgs:msg/TSDFVolumeParams.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__TSDF_VOLUME_PARAMS__STRUCT_H_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__TSDF_VOLUME_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'min_box_values'
// Member 'max_box_values'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/TSDFVolumeParams in the package industrial_reconstruction_msgs.
/**
  * See Open3d ScalableTSDFVolume for more details #
  *
  * Means a single voxel size in meters for TSDF volume. Example: 4.0m / 512.0 = 0.0078125m
  * Lowering this value makes a high-resolution TSDF volume, but the
  * integration result can be susceptible to depth noise
 */
typedef struct industrial_reconstruction_msgs__msg__TSDFVolumeParams
{
  /// Recommended default: 0.01
  float voxel_length;
  /// Specifies the truncation value for the signed distance function (SDF)
  /// Recommended default: 0.04
  float sdf_trunc;
  geometry_msgs__msg__Vector3 min_box_values;
  geometry_msgs__msg__Vector3 max_box_values;
} industrial_reconstruction_msgs__msg__TSDFVolumeParams;

// Struct for a sequence of industrial_reconstruction_msgs__msg__TSDFVolumeParams.
typedef struct industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence
{
  industrial_reconstruction_msgs__msg__TSDFVolumeParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} industrial_reconstruction_msgs__msg__TSDFVolumeParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__TSDF_VOLUME_PARAMS__STRUCT_H_
