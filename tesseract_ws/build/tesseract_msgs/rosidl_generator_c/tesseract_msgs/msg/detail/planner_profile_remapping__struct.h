// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/PlannerProfileRemapping.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLANNER_PROFILE_REMAPPING__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__PLANNER_PROFILE_REMAPPING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'planner'
#include "rosidl_runtime_c/string.h"
// Member 'mapping'
#include "tesseract_msgs/msg/detail/profile_map__struct.h"

/// Struct defined in msg/PlannerProfileRemapping in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__PlannerProfileRemapping
{
  rosidl_runtime_c__String__Sequence planner;
  tesseract_msgs__msg__ProfileMap__Sequence mapping;
} tesseract_msgs__msg__PlannerProfileRemapping;

// Struct for a sequence of tesseract_msgs__msg__PlannerProfileRemapping.
typedef struct tesseract_msgs__msg__PlannerProfileRemapping__Sequence
{
  tesseract_msgs__msg__PlannerProfileRemapping * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__PlannerProfileRemapping__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLANNER_PROFILE_REMAPPING__STRUCT_H_
