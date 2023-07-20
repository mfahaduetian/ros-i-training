// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/ContactManagersPluginInfo.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__CONTACT_MANAGERS_PLUGIN_INFO__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__CONTACT_MANAGERS_PLUGIN_INFO__STRUCT_H_

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
// Member 'discrete_plugin_container'
// Member 'continuous_plugin_container'
#include "tesseract_msgs/msg/detail/plugin_info_container__struct.h"

/// Struct defined in msg/ContactManagersPluginInfo in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__ContactManagersPluginInfo
{
  rosidl_runtime_c__String__Sequence search_paths;
  rosidl_runtime_c__String__Sequence search_libraries;
  tesseract_msgs__msg__PluginInfoContainer discrete_plugin_container;
  tesseract_msgs__msg__PluginInfoContainer continuous_plugin_container;
} tesseract_msgs__msg__ContactManagersPluginInfo;

// Struct for a sequence of tesseract_msgs__msg__ContactManagersPluginInfo.
typedef struct tesseract_msgs__msg__ContactManagersPluginInfo__Sequence
{
  tesseract_msgs__msg__ContactManagersPluginInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__ContactManagersPluginInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__CONTACT_MANAGERS_PLUGIN_INFO__STRUCT_H_
