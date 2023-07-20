// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ns'
// Member 'description'
// Member 'instructions'
#include "rosidl_runtime_c/string.h"
// Member 'environment'
#include "tesseract_msgs/msg/detail/environment__struct.h"
// Member 'commands'
#include "tesseract_msgs/msg/detail/environment_command__struct.h"
// Member 'initial_state'
#include "tesseract_msgs/msg/detail/string_double_pair__struct.h"
// Member 'joint_trajectories'
#include "tesseract_msgs/msg/detail/joint_trajectory__struct.h"

/// Struct defined in msg/Trajectory in the package tesseract_msgs.
/**
  * Header
 */
typedef struct tesseract_msgs__msg__Trajectory
{
  std_msgs__msg__Header header;
  /// The namespace the trajectory is associated with
  /// This is mostly used by visualization tools
  rosidl_runtime_c__String ns;
  /// A description of the trajectory
  rosidl_runtime_c__String description;
  /// (Optional) Override the existing Tesseract Environment
  tesseract_msgs__msg__Environment environment;
  /// (Optional) Additional Commands to be applied to environment prior to trajectory visualization
  tesseract_msgs__msg__EnvironmentCommand__Sequence commands;
  /// (Required) Initial Environment Joint State
  tesseract_msgs__msg__StringDoublePair__Sequence initial_state;
  /// One of the following options is required #
  ///
  /// Tesseract Command Language Instructions
  rosidl_runtime_c__String instructions;
  /// If instructions are provided this will be ignored
  tesseract_msgs__msg__JointTrajectory__Sequence joint_trajectories;
} tesseract_msgs__msg__Trajectory;

// Struct for a sequence of tesseract_msgs__msg__Trajectory.
typedef struct tesseract_msgs__msg__Trajectory__Sequence
{
  tesseract_msgs__msg__Trajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__Trajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
