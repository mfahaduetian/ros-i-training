// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:srv/GetEnvironmentInformation.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_INFORMATION__STRUCT_H_
#define TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COMMAND_HISTORY'.
/**
  * Get the current change history
 */
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__COMMAND_HISTORY = 1
};

/// Constant 'LINK_LIST'.
/**
  * Get the current list of links
 */
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__LINK_LIST = 2
};

/// Constant 'JOINT_LIST'.
/**
  * Get the current list of joints
 */
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__JOINT_LIST = 4
};

/// Constant 'LINK_NAMES'.
/**
  * Get the current list of links names
 */
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__LINK_NAMES = 8
};

/// Constant 'JOINT_NAMES'.
/**
  * Get the current list of joint names
 */
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__JOINT_NAMES = 16
};

/// Constant 'ACTIVE_LINK_NAMES'.
/**
  * Get the current list of active links
 */
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__ACTIVE_LINK_NAMES = 32
};

/// Constant 'ACTIVE_JOINT_NAMES'.
/**
  * Get the current list of active joints
 */
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__ACTIVE_JOINT_NAMES = 64
};

/// Constant 'LINK_TRANSFORMS'.
/**
  * Get the current list of link transforms
 */
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__LINK_TRANSFORMS = 128
};

/// Constant 'JOINT_TRANSFORMS'.
/**
  * Get the current list of joint transforms
 */
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__JOINT_TRANSFORMS = 256
};

/// Constant 'ALLOWED_COLLISION_MATRIX'.
/**
  * Get the current allowed collision matrix
 */
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__ALLOWED_COLLISION_MATRIX = 512
};

/// Constant 'KINEMATICS_INFORMATION'.
/**
  * Get the current kinematics information
 */
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__KINEMATICS_INFORMATION = 1024
};

/// Constant 'JOINT_STATES'.
/**
  * Get the current kinematics information
 */
enum
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__JOINT_STATES = 2048
};

/// Struct defined in srv/GetEnvironmentInformation in the package tesseract_msgs.
typedef struct tesseract_msgs__srv__GetEnvironmentInformation_Request
{
  /// The flags indicating what information should be returned.
  uint16_t flags;
} tesseract_msgs__srv__GetEnvironmentInformation_Request;

// Struct for a sequence of tesseract_msgs__srv__GetEnvironmentInformation_Request.
typedef struct tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'link_names'
// Member 'joint_names'
// Member 'active_link_names'
// Member 'active_joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'command_history'
#include "tesseract_msgs/msg/detail/environment_command__struct.h"
// Member 'links'
#include "tesseract_msgs/msg/detail/link__struct.h"
// Member 'joints'
#include "tesseract_msgs/msg/detail/joint__struct.h"
// Member 'link_transforms'
// Member 'joint_transforms'
#include "tesseract_msgs/msg/detail/transform_map__struct.h"
// Member 'allowed_collision_matrix'
#include "tesseract_msgs/msg/detail/allowed_collision_entry__struct.h"
// Member 'kinematics_information'
#include "tesseract_msgs/msg/detail/kinematics_information__struct.h"
// Member 'joint_states'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in srv/GetEnvironmentInformation in the package tesseract_msgs.
typedef struct tesseract_msgs__srv__GetEnvironmentInformation_Response
{
  bool success;
  /// Name/Id of the environment
  rosidl_runtime_c__String id;
  /// The revision number of the modified environment, these should match after applying commands to local copy of environment
  uint64_t revision;
  tesseract_msgs__msg__EnvironmentCommand__Sequence command_history;
  tesseract_msgs__msg__Link__Sequence links;
  tesseract_msgs__msg__Joint__Sequence joints;
  rosidl_runtime_c__String__Sequence link_names;
  rosidl_runtime_c__String__Sequence joint_names;
  rosidl_runtime_c__String__Sequence active_link_names;
  rosidl_runtime_c__String__Sequence active_joint_names;
  tesseract_msgs__msg__TransformMap link_transforms;
  tesseract_msgs__msg__TransformMap joint_transforms;
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence allowed_collision_matrix;
  tesseract_msgs__msg__KinematicsInformation kinematics_information;
  sensor_msgs__msg__JointState joint_states;
} tesseract_msgs__srv__GetEnvironmentInformation_Response;

// Struct for a sequence of tesseract_msgs__srv__GetEnvironmentInformation_Response.
typedef struct tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence
{
  tesseract_msgs__srv__GetEnvironmentInformation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_INFORMATION__STRUCT_H_
