// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/Environment.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command_history'
#include "tesseract_msgs/msg/detail/environment_command__struct.h"
// Member 'joint_states'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in msg/Environment in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__Environment
{
  tesseract_msgs__msg__EnvironmentCommand__Sequence command_history;
  sensor_msgs__msg__JointState joint_states;
} tesseract_msgs__msg__Environment;

// Struct for a sequence of tesseract_msgs__msg__Environment.
typedef struct tesseract_msgs__msg__Environment__Sequence
{
  tesseract_msgs__msg__Environment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__Environment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT__STRUCT_H_
