// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/ContactResult.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CCTYPE_NONE'.
enum
{
  tesseract_msgs__msg__ContactResult__CCTYPE_NONE = 0
};

/// Constant 'CCTYPE_TIME0'.
enum
{
  tesseract_msgs__msg__ContactResult__CCTYPE_TIME0 = 1
};

/// Constant 'CCTYPE_TIME1'.
enum
{
  tesseract_msgs__msg__ContactResult__CCTYPE_TIME1 = 2
};

/// Constant 'CCTYPE_BETWEEN'.
enum
{
  tesseract_msgs__msg__ContactResult__CCTYPE_BETWEEN = 3
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'link_names'
#include "rosidl_runtime_c/string.h"
// Member 'nearest_points'
// Member 'nearest_points_local'
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'transform'
// Member 'cc_transform'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/ContactResult in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__ContactResult
{
  builtin_interfaces__msg__Time stamp;
  double distance;
  uint8_t type_id[2];
  /// The two links that are in contact
  rosidl_runtime_c__String link_names[2];
  /// The two shapes that are in contact. Each link can be made up of multiple shapes
  uint64_t shape_id[2];
  /// If mesh or octomap this will be the voxel/triangle index
  uint64_t subshape_id[2];
  /// The nearest point on both links in world coordinates
  geometry_msgs__msg__Vector3 nearest_points[2];
  /// The nearest point on both links in local(link) coordinates
  geometry_msgs__msg__Vector3 nearest_points_local[2];
  /// Transform of link_names at time step 0
  geometry_msgs__msg__Pose transform[2];
  /// The normal vector to move the two objects out of contact in world coordinates
  geometry_msgs__msg__Vector3 normal;
  /// The time at contact during continuous collision checking
  double cc_time[2];
  /// CCTYPE_NONE = 0, CCTYPE_TIME0 = 1, CCTYPE_TIME1 = 2, CCTYPE_BETWEEN = 3
  uint8_t cc_type[2];
  /// Transform of link_names at time step 1
  geometry_msgs__msg__Pose cc_transform[2];
} tesseract_msgs__msg__ContactResult;

// Struct for a sequence of tesseract_msgs__msg__ContactResult.
typedef struct tesseract_msgs__msg__ContactResult__Sequence
{
  tesseract_msgs__msg__ContactResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__ContactResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT__STRUCT_H_
