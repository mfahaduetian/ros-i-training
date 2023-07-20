// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/PluginInfoContainer.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO_CONTAINER__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'default_plugin'
#include "rosidl_runtime_c/string.h"
// Member 'plugins'
#include "tesseract_msgs/msg/detail/string_plugin_info_pair__struct.h"

/// Struct defined in msg/PluginInfoContainer in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__PluginInfoContainer
{
  rosidl_runtime_c__String default_plugin;
  tesseract_msgs__msg__StringPluginInfoPair__Sequence plugins;
} tesseract_msgs__msg__PluginInfoContainer;

// Struct for a sequence of tesseract_msgs__msg__PluginInfoContainer.
typedef struct tesseract_msgs__msg__PluginInfoContainer__Sequence
{
  tesseract_msgs__msg__PluginInfoContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__PluginInfoContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO_CONTAINER__STRUCT_H_
