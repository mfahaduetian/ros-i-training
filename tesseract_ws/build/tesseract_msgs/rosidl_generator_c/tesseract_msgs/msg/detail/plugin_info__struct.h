// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/PluginInfo.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_name'
// Member 'config'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PluginInfo in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__PluginInfo
{
  /// The plugin class name
  rosidl_runtime_c__String class_name;
  /// The plugin config data as yaml string
  rosidl_runtime_c__String config;
} tesseract_msgs__msg__PluginInfo;

// Struct for a sequence of tesseract_msgs__msg__PluginInfo.
typedef struct tesseract_msgs__msg__PluginInfo__Sequence
{
  tesseract_msgs__msg__PluginInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__PluginInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLUGIN_INFO__STRUCT_H_
