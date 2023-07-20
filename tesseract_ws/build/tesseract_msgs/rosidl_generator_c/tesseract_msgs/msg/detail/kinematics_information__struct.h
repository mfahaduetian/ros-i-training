// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/KinematicsInformation.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_INFORMATION__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'group_names'
#include "rosidl_runtime_c/string.h"
// Member 'group_joint_states'
#include "tesseract_msgs/msg/detail/groups_joint_states__struct.h"
// Member 'group_tcps'
#include "tesseract_msgs/msg/detail/groups_tc_ps__struct.h"
// Member 'chain_groups'
#include "tesseract_msgs/msg/detail/chain_group__struct.h"
// Member 'joint_groups'
#include "tesseract_msgs/msg/detail/joint_group__struct.h"
// Member 'link_groups'
#include "tesseract_msgs/msg/detail/link_group__struct.h"
// Member 'kinematics_plugin_info'
#include "tesseract_msgs/msg/detail/kinematics_plugin_info__struct.h"

/// Struct defined in msg/KinematicsInformation in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__KinematicsInformation
{
  rosidl_runtime_c__String__Sequence group_names;
  tesseract_msgs__msg__GroupsJointStates__Sequence group_joint_states;
  tesseract_msgs__msg__GroupsTCPs__Sequence group_tcps;
  tesseract_msgs__msg__ChainGroup__Sequence chain_groups;
  tesseract_msgs__msg__JointGroup__Sequence joint_groups;
  tesseract_msgs__msg__LinkGroup__Sequence link_groups;
  tesseract_msgs__msg__KinematicsPluginInfo kinematics_plugin_info;
} tesseract_msgs__msg__KinematicsInformation;

// Struct for a sequence of tesseract_msgs__msg__KinematicsInformation.
typedef struct tesseract_msgs__msg__KinematicsInformation__Sequence
{
  tesseract_msgs__msg__KinematicsInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__KinematicsInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__KINEMATICS_INFORMATION__STRUCT_H_
