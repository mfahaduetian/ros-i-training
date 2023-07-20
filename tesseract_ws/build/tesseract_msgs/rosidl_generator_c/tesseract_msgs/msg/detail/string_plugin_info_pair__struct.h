// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/StringPluginInfoPair.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__STRING_PLUGIN_INFO_PAIR__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__STRING_PLUGIN_INFO_PAIR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'first'
#include "rosidl_runtime_c/string.h"
// Member 'second'
#include "tesseract_msgs/msg/detail/plugin_info__struct.h"

/// Struct defined in msg/StringPluginInfoPair in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__StringPluginInfoPair
{
  rosidl_runtime_c__String first;
  tesseract_msgs__msg__PluginInfo second;
} tesseract_msgs__msg__StringPluginInfoPair;

// Struct for a sequence of tesseract_msgs__msg__StringPluginInfoPair.
typedef struct tesseract_msgs__msg__StringPluginInfoPair__Sequence
{
  tesseract_msgs__msg__StringPluginInfoPair * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__StringPluginInfoPair__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__STRING_PLUGIN_INFO_PAIR__STRUCT_H_
