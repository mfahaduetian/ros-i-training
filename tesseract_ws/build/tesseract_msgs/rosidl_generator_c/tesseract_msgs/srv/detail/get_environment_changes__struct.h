// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:srv/GetEnvironmentChanges.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_CHANGES__STRUCT_H_
#define TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_CHANGES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetEnvironmentChanges in the package tesseract_msgs.
typedef struct tesseract_msgs__srv__GetEnvironmentChanges_Request
{
  /// The revision number from which your are requesting changes to the environment
  uint64_t revision;
} tesseract_msgs__srv__GetEnvironmentChanges_Request;

// Struct for a sequence of tesseract_msgs__srv__GetEnvironmentChanges_Request.
typedef struct tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence
{
  tesseract_msgs__srv__GetEnvironmentChanges_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'commands'
#include "tesseract_msgs/msg/detail/environment_command__struct.h"

/// Struct defined in srv/GetEnvironmentChanges in the package tesseract_msgs.
typedef struct tesseract_msgs__srv__GetEnvironmentChanges_Response
{
  bool success;
  /// Name/Id of the environment
  rosidl_runtime_c__String id;
  /// The revision number of the modified environment, these should match after applying commands to local copy of environment
  uint64_t revision;
  tesseract_msgs__msg__EnvironmentCommand__Sequence commands;
} tesseract_msgs__srv__GetEnvironmentChanges_Response;

// Struct for a sequence of tesseract_msgs__srv__GetEnvironmentChanges_Response.
typedef struct tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence
{
  tesseract_msgs__srv__GetEnvironmentChanges_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_CHANGES__STRUCT_H_
