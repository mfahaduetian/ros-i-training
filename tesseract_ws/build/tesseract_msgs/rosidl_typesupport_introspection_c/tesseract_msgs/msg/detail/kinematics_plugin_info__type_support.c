// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/KinematicsPluginInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/kinematics_plugin_info__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/kinematics_plugin_info__functions.h"
#include "tesseract_msgs/msg/detail/kinematics_plugin_info__struct.h"


// Include directives for member types
// Member `search_paths`
// Member `search_libraries`
#include "rosidl_runtime_c/string_functions.h"
// Member `group_fwd_plugins`
// Member `group_inv_plugins`
#include "tesseract_msgs/msg/groups_kinematic_plugins.h"
// Member `group_fwd_plugins`
// Member `group_inv_plugins`
#include "tesseract_msgs/msg/detail/groups_kinematic_plugins__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__KinematicsPluginInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__KinematicsPluginInfo__init(message_memory);
}

void tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__KinematicsPluginInfo_fini_function(void * message_memory)
{
  tesseract_msgs__msg__KinematicsPluginInfo__fini(message_memory);
}

size_t tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__size_function__KinematicsPluginInfo__search_paths(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicsPluginInfo__search_paths(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_function__KinematicsPluginInfo__search_paths(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__fetch_function__KinematicsPluginInfo__search_paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicsPluginInfo__search_paths(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__assign_function__KinematicsPluginInfo__search_paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_function__KinematicsPluginInfo__search_paths(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__resize_function__KinematicsPluginInfo__search_paths(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__size_function__KinematicsPluginInfo__search_libraries(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicsPluginInfo__search_libraries(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_function__KinematicsPluginInfo__search_libraries(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__fetch_function__KinematicsPluginInfo__search_libraries(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicsPluginInfo__search_libraries(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__assign_function__KinematicsPluginInfo__search_libraries(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_function__KinematicsPluginInfo__search_libraries(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__resize_function__KinematicsPluginInfo__search_libraries(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__size_function__KinematicsPluginInfo__group_fwd_plugins(
  const void * untyped_member)
{
  const tesseract_msgs__msg__GroupsKinematicPlugins__Sequence * member =
    (const tesseract_msgs__msg__GroupsKinematicPlugins__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicsPluginInfo__group_fwd_plugins(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__GroupsKinematicPlugins__Sequence * member =
    (const tesseract_msgs__msg__GroupsKinematicPlugins__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_function__KinematicsPluginInfo__group_fwd_plugins(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__GroupsKinematicPlugins__Sequence * member =
    (tesseract_msgs__msg__GroupsKinematicPlugins__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__fetch_function__KinematicsPluginInfo__group_fwd_plugins(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__GroupsKinematicPlugins * item =
    ((const tesseract_msgs__msg__GroupsKinematicPlugins *)
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicsPluginInfo__group_fwd_plugins(untyped_member, index));
  tesseract_msgs__msg__GroupsKinematicPlugins * value =
    (tesseract_msgs__msg__GroupsKinematicPlugins *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__assign_function__KinematicsPluginInfo__group_fwd_plugins(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__GroupsKinematicPlugins * item =
    ((tesseract_msgs__msg__GroupsKinematicPlugins *)
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_function__KinematicsPluginInfo__group_fwd_plugins(untyped_member, index));
  const tesseract_msgs__msg__GroupsKinematicPlugins * value =
    (const tesseract_msgs__msg__GroupsKinematicPlugins *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__resize_function__KinematicsPluginInfo__group_fwd_plugins(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__GroupsKinematicPlugins__Sequence * member =
    (tesseract_msgs__msg__GroupsKinematicPlugins__Sequence *)(untyped_member);
  tesseract_msgs__msg__GroupsKinematicPlugins__Sequence__fini(member);
  return tesseract_msgs__msg__GroupsKinematicPlugins__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__size_function__KinematicsPluginInfo__group_inv_plugins(
  const void * untyped_member)
{
  const tesseract_msgs__msg__GroupsKinematicPlugins__Sequence * member =
    (const tesseract_msgs__msg__GroupsKinematicPlugins__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicsPluginInfo__group_inv_plugins(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__GroupsKinematicPlugins__Sequence * member =
    (const tesseract_msgs__msg__GroupsKinematicPlugins__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_function__KinematicsPluginInfo__group_inv_plugins(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__GroupsKinematicPlugins__Sequence * member =
    (tesseract_msgs__msg__GroupsKinematicPlugins__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__fetch_function__KinematicsPluginInfo__group_inv_plugins(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__GroupsKinematicPlugins * item =
    ((const tesseract_msgs__msg__GroupsKinematicPlugins *)
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicsPluginInfo__group_inv_plugins(untyped_member, index));
  tesseract_msgs__msg__GroupsKinematicPlugins * value =
    (tesseract_msgs__msg__GroupsKinematicPlugins *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__assign_function__KinematicsPluginInfo__group_inv_plugins(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__GroupsKinematicPlugins * item =
    ((tesseract_msgs__msg__GroupsKinematicPlugins *)
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_function__KinematicsPluginInfo__group_inv_plugins(untyped_member, index));
  const tesseract_msgs__msg__GroupsKinematicPlugins * value =
    (const tesseract_msgs__msg__GroupsKinematicPlugins *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__resize_function__KinematicsPluginInfo__group_inv_plugins(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__GroupsKinematicPlugins__Sequence * member =
    (tesseract_msgs__msg__GroupsKinematicPlugins__Sequence *)(untyped_member);
  tesseract_msgs__msg__GroupsKinematicPlugins__Sequence__fini(member);
  return tesseract_msgs__msg__GroupsKinematicPlugins__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__KinematicsPluginInfo_message_member_array[4] = {
  {
    "search_paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__KinematicsPluginInfo, search_paths),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__size_function__KinematicsPluginInfo__search_paths,  // size() function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicsPluginInfo__search_paths,  // get_const(index) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_function__KinematicsPluginInfo__search_paths,  // get(index) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__fetch_function__KinematicsPluginInfo__search_paths,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__assign_function__KinematicsPluginInfo__search_paths,  // assign(index, value) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__resize_function__KinematicsPluginInfo__search_paths  // resize(index) function pointer
  },
  {
    "search_libraries",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__KinematicsPluginInfo, search_libraries),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__size_function__KinematicsPluginInfo__search_libraries,  // size() function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicsPluginInfo__search_libraries,  // get_const(index) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_function__KinematicsPluginInfo__search_libraries,  // get(index) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__fetch_function__KinematicsPluginInfo__search_libraries,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__assign_function__KinematicsPluginInfo__search_libraries,  // assign(index, value) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__resize_function__KinematicsPluginInfo__search_libraries  // resize(index) function pointer
  },
  {
    "group_fwd_plugins",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__KinematicsPluginInfo, group_fwd_plugins),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__size_function__KinematicsPluginInfo__group_fwd_plugins,  // size() function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicsPluginInfo__group_fwd_plugins,  // get_const(index) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_function__KinematicsPluginInfo__group_fwd_plugins,  // get(index) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__fetch_function__KinematicsPluginInfo__group_fwd_plugins,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__assign_function__KinematicsPluginInfo__group_fwd_plugins,  // assign(index, value) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__resize_function__KinematicsPluginInfo__group_fwd_plugins  // resize(index) function pointer
  },
  {
    "group_inv_plugins",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__KinematicsPluginInfo, group_inv_plugins),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__size_function__KinematicsPluginInfo__group_inv_plugins,  // size() function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_const_function__KinematicsPluginInfo__group_inv_plugins,  // get_const(index) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__get_function__KinematicsPluginInfo__group_inv_plugins,  // get(index) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__fetch_function__KinematicsPluginInfo__group_inv_plugins,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__assign_function__KinematicsPluginInfo__group_inv_plugins,  // assign(index, value) function pointer
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__resize_function__KinematicsPluginInfo__group_inv_plugins  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__KinematicsPluginInfo_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "KinematicsPluginInfo",  // message name
  4,  // number of fields
  sizeof(tesseract_msgs__msg__KinematicsPluginInfo),
  tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__KinematicsPluginInfo_message_member_array,  // message members
  tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__KinematicsPluginInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__KinematicsPluginInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__KinematicsPluginInfo_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__KinematicsPluginInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, KinematicsPluginInfo)() {
  tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__KinematicsPluginInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, GroupsKinematicPlugins)();
  tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__KinematicsPluginInfo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, GroupsKinematicPlugins)();
  if (!tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__KinematicsPluginInfo_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__KinematicsPluginInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__KinematicsPluginInfo__rosidl_typesupport_introspection_c__KinematicsPluginInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
