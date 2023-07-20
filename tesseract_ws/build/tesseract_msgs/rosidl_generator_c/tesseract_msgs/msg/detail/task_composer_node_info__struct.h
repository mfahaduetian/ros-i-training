// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/TaskComposerNodeInfo.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__TASK_COMPOSER_NODE_INFO__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__TASK_COMPOSER_NODE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'uuid'
// Member 'inbound_edges'
// Member 'outbound_edges'
// Member 'input_keys'
// Member 'output_keys'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TaskComposerNodeInfo in the package tesseract_msgs.
/**
  * This message corresponds to tesseract_planning::TaskComposerNodeInfo
 */
typedef struct tesseract_msgs__msg__TaskComposerNodeInfo
{
  /// Name of the Task
  rosidl_runtime_c__String name;
  /// Unique ID generated for the Task by Taskflow
  rosidl_runtime_c__String uuid;
  /// Inbound Edges
  rosidl_runtime_c__String__Sequence inbound_edges;
  /// Outbound Edges
  rosidl_runtime_c__String__Sequence outbound_edges;
  /// Input keys
  rosidl_runtime_c__String__Sequence input_keys;
  /// Output keys
  rosidl_runtime_c__String__Sequence output_keys;
  /// Value returned from the Task on completion
  int32_t return_value;
  /// Debug message
  rosidl_runtime_c__String message;
  /// Time elapsed
  double elapsed_time;
} tesseract_msgs__msg__TaskComposerNodeInfo;

// Struct for a sequence of tesseract_msgs__msg__TaskComposerNodeInfo.
typedef struct tesseract_msgs__msg__TaskComposerNodeInfo__Sequence
{
  tesseract_msgs__msg__TaskComposerNodeInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__TaskComposerNodeInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__TASK_COMPOSER_NODE_INFO__STRUCT_H_
