// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'states'
#include "tesseract_msgs/msg/detail/joint_state__struct.h"
// Member 'description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/JointTrajectory in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__JointTrajectory
{
  tesseract_msgs__msg__JointState__Sequence states;
  /// A description of the trajectory
  rosidl_runtime_c__String description;
} tesseract_msgs__msg__JointTrajectory;

// Struct for a sequence of tesseract_msgs__msg__JointTrajectory.
typedef struct tesseract_msgs__msg__JointTrajectory__Sequence
{
  tesseract_msgs__msg__JointTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__JointTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
