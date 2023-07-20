// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:action/GetMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__ACTION__DETAIL__GET_MOTION_PLAN__STRUCT_H_
#define TESSERACT_MSGS__ACTION__DETAIL__GET_MOTION_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "tesseract_msgs/msg/detail/planning_request__struct.h"

/// Struct defined in action/GetMotionPlan in the package tesseract_msgs.
typedef struct tesseract_msgs__action__GetMotionPlan_Goal
{
  tesseract_msgs__msg__PlanningRequest request;
} tesseract_msgs__action__GetMotionPlan_Goal;

// Struct for a sequence of tesseract_msgs__action__GetMotionPlan_Goal.
typedef struct tesseract_msgs__action__GetMotionPlan_Goal__Sequence
{
  tesseract_msgs__action__GetMotionPlan_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__action__GetMotionPlan_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "tesseract_msgs/msg/detail/planning_response__struct.h"

/// Struct defined in action/GetMotionPlan in the package tesseract_msgs.
typedef struct tesseract_msgs__action__GetMotionPlan_Result
{
  tesseract_msgs__msg__PlanningResponse response;
} tesseract_msgs__action__GetMotionPlan_Result;

// Struct for a sequence of tesseract_msgs__action__GetMotionPlan_Result.
typedef struct tesseract_msgs__action__GetMotionPlan_Result__Sequence
{
  tesseract_msgs__action__GetMotionPlan_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__action__GetMotionPlan_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/GetMotionPlan in the package tesseract_msgs.
typedef struct tesseract_msgs__action__GetMotionPlan_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} tesseract_msgs__action__GetMotionPlan_Feedback;

// Struct for a sequence of tesseract_msgs__action__GetMotionPlan_Feedback.
typedef struct tesseract_msgs__action__GetMotionPlan_Feedback__Sequence
{
  tesseract_msgs__action__GetMotionPlan_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__action__GetMotionPlan_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "tesseract_msgs/action/detail/get_motion_plan__struct.h"

/// Struct defined in action/GetMotionPlan in the package tesseract_msgs.
typedef struct tesseract_msgs__action__GetMotionPlan_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  tesseract_msgs__action__GetMotionPlan_Goal goal;
} tesseract_msgs__action__GetMotionPlan_SendGoal_Request;

// Struct for a sequence of tesseract_msgs__action__GetMotionPlan_SendGoal_Request.
typedef struct tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence
{
  tesseract_msgs__action__GetMotionPlan_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__action__GetMotionPlan_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GetMotionPlan in the package tesseract_msgs.
typedef struct tesseract_msgs__action__GetMotionPlan_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} tesseract_msgs__action__GetMotionPlan_SendGoal_Response;

// Struct for a sequence of tesseract_msgs__action__GetMotionPlan_SendGoal_Response.
typedef struct tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence
{
  tesseract_msgs__action__GetMotionPlan_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__action__GetMotionPlan_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GetMotionPlan in the package tesseract_msgs.
typedef struct tesseract_msgs__action__GetMotionPlan_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} tesseract_msgs__action__GetMotionPlan_GetResult_Request;

// Struct for a sequence of tesseract_msgs__action__GetMotionPlan_GetResult_Request.
typedef struct tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence
{
  tesseract_msgs__action__GetMotionPlan_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__action__GetMotionPlan_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "tesseract_msgs/action/detail/get_motion_plan__struct.h"

/// Struct defined in action/GetMotionPlan in the package tesseract_msgs.
typedef struct tesseract_msgs__action__GetMotionPlan_GetResult_Response
{
  int8_t status;
  tesseract_msgs__action__GetMotionPlan_Result result;
} tesseract_msgs__action__GetMotionPlan_GetResult_Response;

// Struct for a sequence of tesseract_msgs__action__GetMotionPlan_GetResult_Response.
typedef struct tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence
{
  tesseract_msgs__action__GetMotionPlan_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__action__GetMotionPlan_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "tesseract_msgs/action/detail/get_motion_plan__struct.h"

/// Struct defined in action/GetMotionPlan in the package tesseract_msgs.
typedef struct tesseract_msgs__action__GetMotionPlan_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  tesseract_msgs__action__GetMotionPlan_Feedback feedback;
} tesseract_msgs__action__GetMotionPlan_FeedbackMessage;

// Struct for a sequence of tesseract_msgs__action__GetMotionPlan_FeedbackMessage.
typedef struct tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence
{
  tesseract_msgs__action__GetMotionPlan_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__action__GetMotionPlan_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__ACTION__DETAIL__GET_MOTION_PLAN__STRUCT_H_
