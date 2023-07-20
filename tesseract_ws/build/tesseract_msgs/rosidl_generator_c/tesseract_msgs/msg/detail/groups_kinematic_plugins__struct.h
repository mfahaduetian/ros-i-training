// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/GroupsKinematicPlugins.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GROUPS_KINEMATIC_PLUGINS__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__GROUPS_KINEMATIC_PLUGINS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'group'
#include "rosidl_runtime_c/string.h"
// Member 'plugin_container'
#include "tesseract_msgs/msg/detail/plugin_info_container__struct.h"

/// Struct defined in msg/GroupsKinematicPlugins in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__GroupsKinematicPlugins
{
  rosidl_runtime_c__String group;
  tesseract_msgs__msg__PluginInfoContainer plugin_container;
} tesseract_msgs__msg__GroupsKinematicPlugins;

// Struct for a sequence of tesseract_msgs__msg__GroupsKinematicPlugins.
typedef struct tesseract_msgs__msg__GroupsKinematicPlugins__Sequence
{
  tesseract_msgs__msg__GroupsKinematicPlugins * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__GroupsKinematicPlugins__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__GROUPS_KINEMATIC_PLUGINS__STRUCT_H_
