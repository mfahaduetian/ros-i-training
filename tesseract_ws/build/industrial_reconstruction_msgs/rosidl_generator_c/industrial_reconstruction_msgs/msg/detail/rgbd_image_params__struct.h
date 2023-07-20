// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from industrial_reconstruction_msgs:msg/RGBDImageParams.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__RGBD_IMAGE_PARAMS__STRUCT_H_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__RGBD_IMAGE_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RGBDImageParams in the package industrial_reconstruction_msgs.
/**
  * See Open3d function create_from_color_and_depth for more details #
  *
  * The ratio to scale depth values. The depth values will first be scaled and then truncated.
 */
typedef struct industrial_reconstruction_msgs__msg__RGBDImageParams
{
  /// Recommended default: 1000.0
  float depth_scale;
  /// Depth values larger than depth_trunc gets truncated to 0. The depth values will first be scaled and then truncated.
  /// Recommended default: 3.0
  float depth_trunc;
  /// Whether to convert RGB image to intensity image.
  /// Recommended default: True
  bool convert_rgb_to_intensity;
} industrial_reconstruction_msgs__msg__RGBDImageParams;

// Struct for a sequence of industrial_reconstruction_msgs__msg__RGBDImageParams.
typedef struct industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence
{
  industrial_reconstruction_msgs__msg__RGBDImageParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} industrial_reconstruction_msgs__msg__RGBDImageParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__RGBD_IMAGE_PARAMS__STRUCT_H_
