// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link_1'
// Member 'link_2'
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AllowedCollisionEntry in the package tesseract_msgs.
/**
  * Names for the link in this collision pair
 */
typedef struct tesseract_msgs__msg__AllowedCollisionEntry
{
  rosidl_runtime_c__String link_1;
  rosidl_runtime_c__String link_2;
  rosidl_runtime_c__String reason;
} tesseract_msgs__msg__AllowedCollisionEntry;

// Struct for a sequence of tesseract_msgs__msg__AllowedCollisionEntry.
typedef struct tesseract_msgs__msg__AllowedCollisionEntry__Sequence
{
  tesseract_msgs__msg__AllowedCollisionEntry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__AllowedCollisionEntry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_ENTRY__STRUCT_H_
