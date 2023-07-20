// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/KinematicsInformation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/kinematics_information__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/kinematics_information__functions.h"
#include "tesseract_msgs/msg/detail/kinematics_information__struct.h"


// Include directives for member types
// Member `group_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `group_joint_states`
#include "tesseract_msgs/msg/groups_joint_states.h"
// Member `group_joint_states`
#include "tesseract_msgs/msg/detail/groups_joint_states__rosidl_typesupport_introspection_c.h"
// Member `group_tcps`
#include "tesseract_msgs/msg/groups_tc_ps.h"
// Member `group_tcps`
#include "tesseract_msgs/msg/detail/groups_tc_ps__rosidl_typesupport_introspection_c.h"
// Member `chain_groups`
#include "tesseract_msgs/msg/chain_group.h"
// Member `chain_groups`
#include "tesseract_msgs/msg/detail/chain_group__rosidl_typesupport_introspection_c.h"
// Member `joint_groups`
#include "tesseract_msgs/msg/joint_group.h"
// Member `joint_groups`
#include "tesseract_msgs/msg/detail/joint_group__rosidl_typesupport_introspection_c.h"
// Member `link_groups`
#include "tesseract_msgs/msg/link_group.h"
// Member `link_groups`
#include "tesseract_msgs/msg/detail/link_group__rosidl_typesupport_introspection_c.h"
// Member `kinematics_plugin_info`
#include "tesseract_msgs/msg/kinematics_plugin_info.h"
// Member `kinematics_plugin_info`
#include "tesseract_msgs/msg/detail/kinematics_plugin_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__KinematicsInformation__init(message_memory);
}

void tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_fini_function(void * message_memory)
{
  tesseract_msgs__msg__KinematicsInformation__fini(message_memory);
}

size_t tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__size_function__KinematicsInformation__group_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__group_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__group_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__fetch_function__KinematicsInformation__group_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__group_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__assign_function__KinematicsInformation__group_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__group_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__resize_function__KinematicsInformation__group_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__size_function__KinematicsInformation__group_joint_states(
  const void * untyped_member)
{
  const tesseract_msgs__msg__GroupsJointStates__Sequence * member =
    (const tesseract_msgs__msg__GroupsJointStates__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__group_joint_states(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__GroupsJointStates__Sequence * member =
    (const tesseract_msgs__msg__GroupsJointStates__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__group_joint_states(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__GroupsJointStates__Sequence * member =
    (tesseract_msgs__msg__GroupsJointStates__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__fetch_function__KinematicsInformation__group_joint_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__GroupsJointStates * item =
    ((const tesseract_msgs__msg__GroupsJointStates *)
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__group_joint_states(untyped_member, index));
  tesseract_msgs__msg__GroupsJointStates * value =
    (tesseract_msgs__msg__GroupsJointStates *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__assign_function__KinematicsInformation__group_joint_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__GroupsJointStates * item =
    ((tesseract_msgs__msg__GroupsJointStates *)
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__group_joint_states(untyped_member, index));
  const tesseract_msgs__msg__GroupsJointStates * value =
    (const tesseract_msgs__msg__GroupsJointStates *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__resize_function__KinematicsInformation__group_joint_states(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__GroupsJointStates__Sequence * member =
    (tesseract_msgs__msg__GroupsJointStates__Sequence *)(untyped_member);
  tesseract_msgs__msg__GroupsJointStates__Sequence__fini(member);
  return tesseract_msgs__msg__GroupsJointStates__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__size_function__KinematicsInformation__group_tcps(
  const void * untyped_member)
{
  const tesseract_msgs__msg__GroupsTCPs__Sequence * member =
    (const tesseract_msgs__msg__GroupsTCPs__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__group_tcps(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__GroupsTCPs__Sequence * member =
    (const tesseract_msgs__msg__GroupsTCPs__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__group_tcps(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__GroupsTCPs__Sequence * member =
    (tesseract_msgs__msg__GroupsTCPs__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__fetch_function__KinematicsInformation__group_tcps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__GroupsTCPs * item =
    ((const tesseract_msgs__msg__GroupsTCPs *)
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__group_tcps(untyped_member, index));
  tesseract_msgs__msg__GroupsTCPs * value =
    (tesseract_msgs__msg__GroupsTCPs *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__assign_function__KinematicsInformation__group_tcps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__GroupsTCPs * item =
    ((tesseract_msgs__msg__GroupsTCPs *)
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__group_tcps(untyped_member, index));
  const tesseract_msgs__msg__GroupsTCPs * value =
    (const tesseract_msgs__msg__GroupsTCPs *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__resize_function__KinematicsInformation__group_tcps(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__GroupsTCPs__Sequence * member =
    (tesseract_msgs__msg__GroupsTCPs__Sequence *)(untyped_member);
  tesseract_msgs__msg__GroupsTCPs__Sequence__fini(member);
  return tesseract_msgs__msg__GroupsTCPs__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__size_function__KinematicsInformation__chain_groups(
  const void * untyped_member)
{
  const tesseract_msgs__msg__ChainGroup__Sequence * member =
    (const tesseract_msgs__msg__ChainGroup__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__chain_groups(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__ChainGroup__Sequence * member =
    (const tesseract_msgs__msg__ChainGroup__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__chain_groups(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__ChainGroup__Sequence * member =
    (tesseract_msgs__msg__ChainGroup__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__fetch_function__KinematicsInformation__chain_groups(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__ChainGroup * item =
    ((const tesseract_msgs__msg__ChainGroup *)
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__chain_groups(untyped_member, index));
  tesseract_msgs__msg__ChainGroup * value =
    (tesseract_msgs__msg__ChainGroup *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__assign_function__KinematicsInformation__chain_groups(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__ChainGroup * item =
    ((tesseract_msgs__msg__ChainGroup *)
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__chain_groups(untyped_member, index));
  const tesseract_msgs__msg__ChainGroup * value =
    (const tesseract_msgs__msg__ChainGroup *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__resize_function__KinematicsInformation__chain_groups(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__ChainGroup__Sequence * member =
    (tesseract_msgs__msg__ChainGroup__Sequence *)(untyped_member);
  tesseract_msgs__msg__ChainGroup__Sequence__fini(member);
  return tesseract_msgs__msg__ChainGroup__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__size_function__KinematicsInformation__joint_groups(
  const void * untyped_member)
{
  const tesseract_msgs__msg__JointGroup__Sequence * member =
    (const tesseract_msgs__msg__JointGroup__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__joint_groups(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__JointGroup__Sequence * member =
    (const tesseract_msgs__msg__JointGroup__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__joint_groups(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__JointGroup__Sequence * member =
    (tesseract_msgs__msg__JointGroup__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__fetch_function__KinematicsInformation__joint_groups(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__JointGroup * item =
    ((const tesseract_msgs__msg__JointGroup *)
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__joint_groups(untyped_member, index));
  tesseract_msgs__msg__JointGroup * value =
    (tesseract_msgs__msg__JointGroup *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__assign_function__KinematicsInformation__joint_groups(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__JointGroup * item =
    ((tesseract_msgs__msg__JointGroup *)
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__joint_groups(untyped_member, index));
  const tesseract_msgs__msg__JointGroup * value =
    (const tesseract_msgs__msg__JointGroup *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__resize_function__KinematicsInformation__joint_groups(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__JointGroup__Sequence * member =
    (tesseract_msgs__msg__JointGroup__Sequence *)(untyped_member);
  tesseract_msgs__msg__JointGroup__Sequence__fini(member);
  return tesseract_msgs__msg__JointGroup__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__size_function__KinematicsInformation__link_groups(
  const void * untyped_member)
{
  const tesseract_msgs__msg__LinkGroup__Sequence * member =
    (const tesseract_msgs__msg__LinkGroup__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__link_groups(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__LinkGroup__Sequence * member =
    (const tesseract_msgs__msg__LinkGroup__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__link_groups(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__LinkGroup__Sequence * member =
    (tesseract_msgs__msg__LinkGroup__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__fetch_function__KinematicsInformation__link_groups(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__LinkGroup * item =
    ((const tesseract_msgs__msg__LinkGroup *)
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__link_groups(untyped_member, index));
  tesseract_msgs__msg__LinkGroup * value =
    (tesseract_msgs__msg__LinkGroup *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__assign_function__KinematicsInformation__link_groups(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__LinkGroup * item =
    ((tesseract_msgs__msg__LinkGroup *)
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__link_groups(untyped_member, index));
  const tesseract_msgs__msg__LinkGroup * value =
    (const tesseract_msgs__msg__LinkGroup *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__resize_function__KinematicsInformation__link_groups(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__LinkGroup__Sequence * member =
    (tesseract_msgs__msg__LinkGroup__Sequence *)(untyped_member);
  tesseract_msgs__msg__LinkGroup__Sequence__fini(member);
  return tesseract_msgs__msg__LinkGroup__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_message_member_array[7] = {
  {
    "group_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__KinematicsInformation, group_names),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__size_function__KinematicsInformation__group_names,  // size() function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__group_names,  // get_const(index) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__group_names,  // get(index) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__fetch_function__KinematicsInformation__group_names,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__assign_function__KinematicsInformation__group_names,  // assign(index, value) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__resize_function__KinematicsInformation__group_names  // resize(index) function pointer
  },
  {
    "group_joint_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__KinematicsInformation, group_joint_states),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__size_function__KinematicsInformation__group_joint_states,  // size() function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__group_joint_states,  // get_const(index) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__group_joint_states,  // get(index) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__fetch_function__KinematicsInformation__group_joint_states,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__assign_function__KinematicsInformation__group_joint_states,  // assign(index, value) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__resize_function__KinematicsInformation__group_joint_states  // resize(index) function pointer
  },
  {
    "group_tcps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__KinematicsInformation, group_tcps),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__size_function__KinematicsInformation__group_tcps,  // size() function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__group_tcps,  // get_const(index) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__group_tcps,  // get(index) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__fetch_function__KinematicsInformation__group_tcps,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__assign_function__KinematicsInformation__group_tcps,  // assign(index, value) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__resize_function__KinematicsInformation__group_tcps  // resize(index) function pointer
  },
  {
    "chain_groups",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__KinematicsInformation, chain_groups),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__size_function__KinematicsInformation__chain_groups,  // size() function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__chain_groups,  // get_const(index) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__chain_groups,  // get(index) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__fetch_function__KinematicsInformation__chain_groups,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__assign_function__KinematicsInformation__chain_groups,  // assign(index, value) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__resize_function__KinematicsInformation__chain_groups  // resize(index) function pointer
  },
  {
    "joint_groups",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__KinematicsInformation, joint_groups),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__size_function__KinematicsInformation__joint_groups,  // size() function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__joint_groups,  // get_const(index) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__joint_groups,  // get(index) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__fetch_function__KinematicsInformation__joint_groups,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__assign_function__KinematicsInformation__joint_groups,  // assign(index, value) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__resize_function__KinematicsInformation__joint_groups  // resize(index) function pointer
  },
  {
    "link_groups",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__KinematicsInformation, link_groups),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__size_function__KinematicsInformation__link_groups,  // size() function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_const_function__KinematicsInformation__link_groups,  // get_const(index) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__get_function__KinematicsInformation__link_groups,  // get(index) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__fetch_function__KinematicsInformation__link_groups,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__assign_function__KinematicsInformation__link_groups,  // assign(index, value) function pointer
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__resize_function__KinematicsInformation__link_groups  // resize(index) function pointer
  },
  {
    "kinematics_plugin_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__KinematicsInformation, kinematics_plugin_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "KinematicsInformation",  // message name
  7,  // number of fields
  sizeof(tesseract_msgs__msg__KinematicsInformation),
  tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_message_member_array,  // message members
  tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, KinematicsInformation)() {
  tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, GroupsJointStates)();
  tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, GroupsTCPs)();
  tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, ChainGroup)();
  tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, JointGroup)();
  tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, LinkGroup)();
  tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, KinematicsPluginInfo)();
  if (!tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__KinematicsInformation__rosidl_typesupport_introspection_c__KinematicsInformation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
