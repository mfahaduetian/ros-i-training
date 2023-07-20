// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/KinematicsPluginInfo.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_PLUGIN_INFO__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_PLUGIN_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'search_paths'
// Member 'search_libraries'
#include "rosidl_runtime_c/string.h"
// Member 'group_fwd_plugins'
// Member 'group_inv_plugins'
#include "tesseract_msgs/msg/detail/groups_kinematic_plugins__struct.h"

/// Struct defined in msg/KinematicsPluginInfo in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__KinematicsPluginInfo
{
  rosidl_runtime_c__String__Sequence search_paths;
  rosidl_runtime_c__String__Sequence search_libraries;
  tesseract_msgs__msg__GroupsKinematicPlugins__Sequence group_fwd_plugins;
  tesseract_msgs__msg__GroupsKinematicPlugins__Sequence group_inv_plugins;
} tesseract_msgs__msg__KinematicsPluginInfo;

// Struct for a sequence of tesseract_msgs__msg__KinematicsPluginInfo.
typedef struct tesseract_msgs__msg__KinematicsPluginInfo__Sequence
{
  tesseract_msgs__msg__KinematicsPluginInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__KinematicsPluginInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_PLUGIN_INFO__STRUCT_H_
