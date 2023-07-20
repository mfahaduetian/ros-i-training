// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/ContactMarginPair.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__CONTACT_MARGIN_PAIR__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__CONTACT_MARGIN_PAIR__STRUCT_H_

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
#include "tesseract_msgs/msg/detail/string_pair__struct.h"

/// Struct defined in msg/ContactMarginPair in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__ContactMarginPair
{
  tesseract_msgs__msg__StringPair first;
  double second;
} tesseract_msgs__msg__ContactMarginPair;

// Struct for a sequence of tesseract_msgs__msg__ContactMarginPair.
typedef struct tesseract_msgs__msg__ContactMarginPair__Sequence
{
  tesseract_msgs__msg__ContactMarginPair * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__ContactMarginPair__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__CONTACT_MARGIN_PAIR__STRUCT_H_
