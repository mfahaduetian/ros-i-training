// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snp_msgs:srv/ExecuteMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__SRV__DETAIL__EXECUTE_MOTION_PLAN__STRUCT_H_
#define SNP_MSGS__SRV__DETAIL__EXECUTE_MOTION_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motion_plan'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"

/// Struct defined in srv/ExecuteMotionPlan in the package snp_msgs.
typedef struct snp_msgs__srv__ExecuteMotionPlan_Request
{
  /// Motion Plan - the trajectory we wish the robot to follow
  trajectory_msgs__msg__JointTrajectory motion_plan;
  /// Whether to activate the tool
  bool use_tool;
} snp_msgs__srv__ExecuteMotionPlan_Request;

// Struct for a sequence of snp_msgs__srv__ExecuteMotionPlan_Request.
typedef struct snp_msgs__srv__ExecuteMotionPlan_Request__Sequence
{
  snp_msgs__srv__ExecuteMotionPlan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snp_msgs__srv__ExecuteMotionPlan_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ExecuteMotionPlan in the package snp_msgs.
typedef struct snp_msgs__srv__ExecuteMotionPlan_Response
{
  /// Success and error information
  bool success;
  rosidl_runtime_c__String message;
} snp_msgs__srv__ExecuteMotionPlan_Response;

// Struct for a sequence of snp_msgs__srv__ExecuteMotionPlan_Response.
typedef struct snp_msgs__srv__ExecuteMotionPlan_Response__Sequence
{
  snp_msgs__srv__ExecuteMotionPlan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snp_msgs__srv__ExecuteMotionPlan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNP_MSGS__SRV__DETAIL__EXECUTE_MOTION_PLAN__STRUCT_H_
