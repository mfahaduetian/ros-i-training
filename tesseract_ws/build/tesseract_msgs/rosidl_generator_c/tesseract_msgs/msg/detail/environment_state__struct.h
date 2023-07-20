// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/EnvironmentState.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_STATE__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in msg/EnvironmentState in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__EnvironmentState
{
  /// Environment Name
  rosidl_runtime_c__String id;
  /// This is the revision number so others know when it changes.
  uint64_t revision;
  /// This message contains information about the state, i.e. the positions of its joints and links
  sensor_msgs__msg__JointState joint_state;
} tesseract_msgs__msg__EnvironmentState;

// Struct for a sequence of tesseract_msgs__msg__EnvironmentState.
typedef struct tesseract_msgs__msg__EnvironmentState__Sequence
{
  tesseract_msgs__msg__EnvironmentState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__EnvironmentState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__ENVIRONMENT_STATE__STRUCT_H_
