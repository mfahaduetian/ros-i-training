// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/PlanningResponse.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLANNING_RESPONSE__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__PLANNING_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'results'
// Member 'dotgraph'
// Member 'status_string'
#include "rosidl_runtime_c/string.h"
// Member 'initial_state'
#include "tesseract_msgs/msg/detail/string_double_pair__struct.h"

/// Struct defined in msg/PlanningResponse in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__PlanningResponse
{
  /// This should an xml string of the command language results
  rosidl_runtime_c__String results;
  /// The initial state of the environment when planning started
  tesseract_msgs__msg__StringDoublePair__Sequence initial_state;
  /// The DOT Graph if requested
  rosidl_runtime_c__String dotgraph;
  bool successful;
  /// This will status description
  rosidl_runtime_c__String status_string;
} tesseract_msgs__msg__PlanningResponse;

// Struct for a sequence of tesseract_msgs__msg__PlanningResponse.
typedef struct tesseract_msgs__msg__PlanningResponse__Sequence
{
  tesseract_msgs__msg__PlanningResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__PlanningResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLANNING_RESPONSE__STRUCT_H_
