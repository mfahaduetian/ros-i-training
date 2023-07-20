// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snp_msgs:srv/GenerateMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__SRV__DETAIL__GENERATE_MOTION_PLAN__STRUCT_H_
#define SNP_MSGS__SRV__DETAIL__GENERATE_MOTION_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tool_paths'
#include "snp_msgs/msg/detail/tool_paths__struct.h"
// Member 'motion_group'
// Member 'tcp_frame'
// Member 'mesh_filename'
// Member 'mesh_frame'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GenerateMotionPlan in the package snp_msgs.
typedef struct snp_msgs__srv__GenerateMotionPlan_Request
{
  /// Tool Paths - the input tool paths that need to be planned on.  These follow Noether conventions.
  /// i.e. ToolPaths is a raster pattern.  ToolPath is a single raster, which may be broken up into
  /// discrete segments, each made of waypoints.
  snp_msgs__msg__ToolPaths tool_paths;
  /// Params
  /// [insert any relevant motion planning parameters here]
  rosidl_runtime_c__String motion_group;
  rosidl_runtime_c__String tcp_frame;
  /// Mesh - this is the scanned mesh which toolpaths were generated on.  Any path generated should be
  /// checked for collision against this mesh to ensure we don't hit it by mistake.
  rosidl_runtime_c__String mesh_filename;
  rosidl_runtime_c__String mesh_frame;
} snp_msgs__srv__GenerateMotionPlan_Request;

// Struct for a sequence of snp_msgs__srv__GenerateMotionPlan_Request.
typedef struct snp_msgs__srv__GenerateMotionPlan_Request__Sequence
{
  snp_msgs__srv__GenerateMotionPlan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snp_msgs__srv__GenerateMotionPlan_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'motion_plan'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GenerateMotionPlan in the package snp_msgs.
typedef struct snp_msgs__srv__GenerateMotionPlan_Response
{
  /// Motion Plan - a joint trajectory for the robot to follow
  trajectory_msgs__msg__JointTrajectory motion_plan;
  /// Success and error information
  bool success;
  rosidl_runtime_c__String message;
} snp_msgs__srv__GenerateMotionPlan_Response;

// Struct for a sequence of snp_msgs__srv__GenerateMotionPlan_Response.
typedef struct snp_msgs__srv__GenerateMotionPlan_Response__Sequence
{
  snp_msgs__srv__GenerateMotionPlan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snp_msgs__srv__GenerateMotionPlan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNP_MSGS__SRV__DETAIL__GENERATE_MOTION_PLAN__STRUCT_H_
