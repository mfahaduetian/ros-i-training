// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/Environment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/environment__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/environment__functions.h"
#include "tesseract_msgs/msg/detail/environment__struct.h"


// Include directives for member types
// Member `command_history`
#include "tesseract_msgs/msg/environment_command.h"
// Member `command_history`
#include "tesseract_msgs/msg/detail/environment_command__rosidl_typesupport_introspection_c.h"
// Member `joint_states`
#include "sensor_msgs/msg/joint_state.h"
// Member `joint_states`
#include "sensor_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__Environment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__Environment__init(message_memory);
}

void tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__Environment_fini_function(void * message_memory)
{
  tesseract_msgs__msg__Environment__fini(message_memory);
}

size_t tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__size_function__Environment__command_history(
  const void * untyped_member)
{
  const tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (const tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__get_const_function__Environment__command_history(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (const tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__get_function__Environment__command_history(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__fetch_function__Environment__command_history(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__EnvironmentCommand * item =
    ((const tesseract_msgs__msg__EnvironmentCommand *)
    tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__get_const_function__Environment__command_history(untyped_member, index));
  tesseract_msgs__msg__EnvironmentCommand * value =
    (tesseract_msgs__msg__EnvironmentCommand *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__assign_function__Environment__command_history(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__EnvironmentCommand * item =
    ((tesseract_msgs__msg__EnvironmentCommand *)
    tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__get_function__Environment__command_history(untyped_member, index));
  const tesseract_msgs__msg__EnvironmentCommand * value =
    (const tesseract_msgs__msg__EnvironmentCommand *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__resize_function__Environment__command_history(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(member);
  return tesseract_msgs__msg__EnvironmentCommand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__Environment_message_member_array[2] = {
  {
    "command_history",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Environment, command_history),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__size_function__Environment__command_history,  // size() function pointer
    tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__get_const_function__Environment__command_history,  // get_const(index) function pointer
    tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__get_function__Environment__command_history,  // get(index) function pointer
    tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__fetch_function__Environment__command_history,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__assign_function__Environment__command_history,  // assign(index, value) function pointer
    tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__resize_function__Environment__command_history  // resize(index) function pointer
  },
  {
    "joint_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Environment, joint_states),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__Environment_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "Environment",  // message name
  2,  // number of fields
  sizeof(tesseract_msgs__msg__Environment),
  tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__Environment_message_member_array,  // message members
  tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__Environment_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__Environment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__Environment_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__Environment_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Environment)() {
  tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__Environment_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, EnvironmentCommand)();
  tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__Environment_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  if (!tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__Environment_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__Environment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__Environment__rosidl_typesupport_introspection_c__Environment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif