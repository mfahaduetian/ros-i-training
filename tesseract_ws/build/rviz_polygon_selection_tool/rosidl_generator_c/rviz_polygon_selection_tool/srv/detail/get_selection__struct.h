// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rviz_polygon_selection_tool:srv/GetSelection.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__STRUCT_H_
#define RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetSelection in the package rviz_polygon_selection_tool.
typedef struct rviz_polygon_selection_tool__srv__GetSelection_Request
{
  uint8_t structure_needs_at_least_one_member;
} rviz_polygon_selection_tool__srv__GetSelection_Request;

// Struct for a sequence of rviz_polygon_selection_tool__srv__GetSelection_Request.
typedef struct rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence
{
  rviz_polygon_selection_tool__srv__GetSelection_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'selection'
#include "geometry_msgs/msg/detail/point_stamped__struct.h"

/// Struct defined in srv/GetSelection in the package rviz_polygon_selection_tool.
typedef struct rviz_polygon_selection_tool__srv__GetSelection_Response
{
  geometry_msgs__msg__PointStamped__Sequence selection;
} rviz_polygon_selection_tool__srv__GetSelection_Response;

// Struct for a sequence of rviz_polygon_selection_tool__srv__GetSelection_Response.
typedef struct rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence
{
  rviz_polygon_selection_tool__srv__GetSelection_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__STRUCT_H_
