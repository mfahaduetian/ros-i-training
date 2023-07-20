// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/ContactResultVector.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT_VECTOR__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT_VECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'contacts'
#include "tesseract_msgs/msg/detail/contact_result__struct.h"

/// Struct defined in msg/ContactResultVector in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__ContactResultVector
{
  tesseract_msgs__msg__ContactResult__Sequence contacts;
} tesseract_msgs__msg__ContactResultVector;

// Struct for a sequence of tesseract_msgs__msg__ContactResultVector.
typedef struct tesseract_msgs__msg__ContactResultVector__Sequence
{
  tesseract_msgs__msg__ContactResultVector * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__ContactResultVector__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT_VECTOR__STRUCT_H_
