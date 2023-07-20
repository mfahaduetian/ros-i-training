// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:srv/ComputeContactResultVector.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__DETAIL__COMPUTE_CONTACT_RESULT_VECTOR__STRUCT_H_
#define TESSERACT_MSGS__SRV__DETAIL__COMPUTE_CONTACT_RESULT_VECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_states'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in srv/ComputeContactResultVector in the package tesseract_msgs.
typedef struct tesseract_msgs__srv__ComputeContactResultVector_Request
{
  sensor_msgs__msg__JointState joint_states;
} tesseract_msgs__srv__ComputeContactResultVector_Request;

// Struct for a sequence of tesseract_msgs__srv__ComputeContactResultVector_Request.
typedef struct tesseract_msgs__srv__ComputeContactResultVector_Request__Sequence
{
  tesseract_msgs__srv__ComputeContactResultVector_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__srv__ComputeContactResultVector_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'collision_result'
#include "tesseract_msgs/msg/detail/contact_result_vector__struct.h"

/// Struct defined in srv/ComputeContactResultVector in the package tesseract_msgs.
typedef struct tesseract_msgs__srv__ComputeContactResultVector_Response
{
  tesseract_msgs__msg__ContactResultVector collision_result;
  bool success;
} tesseract_msgs__srv__ComputeContactResultVector_Response;

// Struct for a sequence of tesseract_msgs__srv__ComputeContactResultVector_Response.
typedef struct tesseract_msgs__srv__ComputeContactResultVector_Response__Sequence
{
  tesseract_msgs__srv__ComputeContactResultVector_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__srv__ComputeContactResultVector_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__SRV__DETAIL__COMPUTE_CONTACT_RESULT_VECTOR__STRUCT_H_
