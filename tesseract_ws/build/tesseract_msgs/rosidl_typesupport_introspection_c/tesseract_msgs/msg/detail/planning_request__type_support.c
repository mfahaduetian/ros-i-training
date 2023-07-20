// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/PlanningRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/planning_request__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/planning_request__functions.h"
#include "tesseract_msgs/msg/detail/planning_request__struct.h"


// Include directives for member types
// Member `environment_state`
#include "tesseract_msgs/msg/environment_state.h"
// Member `environment_state`
#include "tesseract_msgs/msg/detail/environment_state__rosidl_typesupport_introspection_c.h"
// Member `commands`
#include "tesseract_msgs/msg/environment_command.h"
// Member `commands`
#include "tesseract_msgs/msg/detail/environment_command__rosidl_typesupport_introspection_c.h"
// Member `name`
// Member `executor`
// Member `instructions`
#include "rosidl_runtime_c/string_functions.h"
// Member `move_profile_remapping`
// Member `composite_profile_remapping`
#include "tesseract_msgs/msg/planner_profile_remapping.h"
// Member `move_profile_remapping`
// Member `composite_profile_remapping`
#include "tesseract_msgs/msg/detail/planner_profile_remapping__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__PlanningRequest__init(message_memory);
}

void tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_fini_function(void * message_memory)
{
  tesseract_msgs__msg__PlanningRequest__fini(message_memory);
}

size_t tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__size_function__PlanningRequest__commands(
  const void * untyped_member)
{
  const tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (const tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__get_const_function__PlanningRequest__commands(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (const tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__get_function__PlanningRequest__commands(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__fetch_function__PlanningRequest__commands(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__EnvironmentCommand * item =
    ((const tesseract_msgs__msg__EnvironmentCommand *)
    tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__get_const_function__PlanningRequest__commands(untyped_member, index));
  tesseract_msgs__msg__EnvironmentCommand * value =
    (tesseract_msgs__msg__EnvironmentCommand *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__assign_function__PlanningRequest__commands(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__EnvironmentCommand * item =
    ((tesseract_msgs__msg__EnvironmentCommand *)
    tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__get_function__PlanningRequest__commands(untyped_member, index));
  const tesseract_msgs__msg__EnvironmentCommand * value =
    (const tesseract_msgs__msg__EnvironmentCommand *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__resize_function__PlanningRequest__commands(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(member);
  return tesseract_msgs__msg__EnvironmentCommand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_message_member_array[10] = {
  {
    "environment_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__PlanningRequest, environment_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commands",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__PlanningRequest, commands),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__size_function__PlanningRequest__commands,  // size() function pointer
    tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__get_const_function__PlanningRequest__commands,  // get_const(index) function pointer
    tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__get_function__PlanningRequest__commands,  // get(index) function pointer
    tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__fetch_function__PlanningRequest__commands,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__assign_function__PlanningRequest__commands,  // assign(index, value) function pointer
    tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__resize_function__PlanningRequest__commands  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__PlanningRequest, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "executor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__PlanningRequest, executor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "instructions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__PlanningRequest, instructions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dotgraph",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__PlanningRequest, dotgraph),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "debug",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__PlanningRequest, debug),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "save_io",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__PlanningRequest, save_io),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "move_profile_remapping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__PlanningRequest, move_profile_remapping),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "composite_profile_remapping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__PlanningRequest, composite_profile_remapping),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "PlanningRequest",  // message name
  10,  // number of fields
  sizeof(tesseract_msgs__msg__PlanningRequest),
  tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_message_member_array,  // message members
  tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, PlanningRequest)() {
  tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, EnvironmentState)();
  tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, EnvironmentCommand)();
  tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, PlannerProfileRemapping)();
  tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, PlannerProfileRemapping)();
  if (!tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__PlanningRequest__rosidl_typesupport_introspection_c__PlanningRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
