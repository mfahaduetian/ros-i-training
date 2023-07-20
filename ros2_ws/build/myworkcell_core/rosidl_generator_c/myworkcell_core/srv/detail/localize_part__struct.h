// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from myworkcell_core:srv/LocalizePart.idl
// generated code does not contain a copyright notice

#ifndef MYWORKCELL_CORE__SRV__DETAIL__LOCALIZE_PART__STRUCT_H_
#define MYWORKCELL_CORE__SRV__DETAIL__LOCALIZE_PART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'base_frame'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LocalizePart in the package myworkcell_core.
typedef struct myworkcell_core__srv__LocalizePart_Request
{
  rosidl_runtime_c__String base_frame;
} myworkcell_core__srv__LocalizePart_Request;

// Struct for a sequence of myworkcell_core__srv__LocalizePart_Request.
typedef struct myworkcell_core__srv__LocalizePart_Request__Sequence
{
  myworkcell_core__srv__LocalizePart_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myworkcell_core__srv__LocalizePart_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/LocalizePart in the package myworkcell_core.
typedef struct myworkcell_core__srv__LocalizePart_Response
{
  geometry_msgs__msg__Pose pose;
  bool success;
} myworkcell_core__srv__LocalizePart_Response;

// Struct for a sequence of myworkcell_core__srv__LocalizePart_Response.
typedef struct myworkcell_core__srv__LocalizePart_Response__Sequence
{
  myworkcell_core__srv__LocalizePart_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myworkcell_core__srv__LocalizePart_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYWORKCELL_CORE__SRV__DETAIL__LOCALIZE_PART__STRUCT_H_
