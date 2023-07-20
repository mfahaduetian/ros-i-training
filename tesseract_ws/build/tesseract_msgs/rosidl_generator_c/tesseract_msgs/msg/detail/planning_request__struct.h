// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/PlanningRequest.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLANNING_REQUEST__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__PLANNING_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'environment_state'
#include "tesseract_msgs/msg/detail/environment_state__struct.h"
// Member 'commands'
#include "tesseract_msgs/msg/detail/environment_command__struct.h"
// Member 'name'
// Member 'executor'
// Member 'instructions'
#include "rosidl_runtime_c/string.h"
// Member 'move_profile_remapping'
// Member 'composite_profile_remapping'
#include "tesseract_msgs/msg/detail/planner_profile_remapping__struct.h"

/// Struct defined in msg/PlanningRequest in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__PlanningRequest
{
  tesseract_msgs__msg__EnvironmentState environment_state;
  /// Additional Commands to be applied to environment prior to planning
  tesseract_msgs__msg__EnvironmentCommand__Sequence commands;
  /// The name of the taskflow to use
  rosidl_runtime_c__String name;
  /// The executor to leverage, if empty default one is used.
  rosidl_runtime_c__String executor;
  /// This should an xml string of the command language instructions
  rosidl_runtime_c__String instructions;
  /// Enable if DOT Graph should be generated and returned
  bool dotgraph;
  /// Enable debug content
  bool debug;
  /// Enable saving of input and output for task infos
  bool save_io;
  tesseract_msgs__msg__PlannerProfileRemapping move_profile_remapping;
  tesseract_msgs__msg__PlannerProfileRemapping composite_profile_remapping;
} tesseract_msgs__msg__PlanningRequest;

// Struct for a sequence of tesseract_msgs__msg__PlanningRequest.
typedef struct tesseract_msgs__msg__PlanningRequest__Sequence
{
  tesseract_msgs__msg__PlanningRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__PlanningRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLANNING_REQUEST__STRUCT_H_
