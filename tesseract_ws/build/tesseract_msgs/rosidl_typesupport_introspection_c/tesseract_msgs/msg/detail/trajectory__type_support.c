// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/trajectory__functions.h"
#include "tesseract_msgs/msg/detail/trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ns`
// Member `description`
// Member `instructions`
#include "rosidl_runtime_c/string_functions.h"
// Member `environment`
#include "tesseract_msgs/msg/environment.h"
// Member `environment`
#include "tesseract_msgs/msg/detail/environment__rosidl_typesupport_introspection_c.h"
// Member `commands`
#include "tesseract_msgs/msg/environment_command.h"
// Member `commands`
#include "tesseract_msgs/msg/detail/environment_command__rosidl_typesupport_introspection_c.h"
// Member `initial_state`
#include "tesseract_msgs/msg/string_double_pair.h"
// Member `initial_state`
#include "tesseract_msgs/msg/detail/string_double_pair__rosidl_typesupport_introspection_c.h"
// Member `joint_trajectories`
#include "tesseract_msgs/msg/joint_trajectory.h"
// Member `joint_trajectories`
#include "tesseract_msgs/msg/detail/joint_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__Trajectory__init(message_memory);
}

void tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_fini_function(void * message_memory)
{
  tesseract_msgs__msg__Trajectory__fini(message_memory);
}

size_t tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__commands(
  const void * untyped_member)
{
  const tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (const tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__commands(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (const tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__commands(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__commands(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__EnvironmentCommand * item =
    ((const tesseract_msgs__msg__EnvironmentCommand *)
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__commands(untyped_member, index));
  tesseract_msgs__msg__EnvironmentCommand * value =
    (tesseract_msgs__msg__EnvironmentCommand *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__commands(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__EnvironmentCommand * item =
    ((tesseract_msgs__msg__EnvironmentCommand *)
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__commands(untyped_member, index));
  const tesseract_msgs__msg__EnvironmentCommand * value =
    (const tesseract_msgs__msg__EnvironmentCommand *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__commands(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(member);
  return tesseract_msgs__msg__EnvironmentCommand__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__initial_state(
  const void * untyped_member)
{
  const tesseract_msgs__msg__StringDoublePair__Sequence * member =
    (const tesseract_msgs__msg__StringDoublePair__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__initial_state(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__StringDoublePair__Sequence * member =
    (const tesseract_msgs__msg__StringDoublePair__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__initial_state(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__StringDoublePair__Sequence * member =
    (tesseract_msgs__msg__StringDoublePair__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__initial_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__StringDoublePair * item =
    ((const tesseract_msgs__msg__StringDoublePair *)
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__initial_state(untyped_member, index));
  tesseract_msgs__msg__StringDoublePair * value =
    (tesseract_msgs__msg__StringDoublePair *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__initial_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__StringDoublePair * item =
    ((tesseract_msgs__msg__StringDoublePair *)
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__initial_state(untyped_member, index));
  const tesseract_msgs__msg__StringDoublePair * value =
    (const tesseract_msgs__msg__StringDoublePair *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__initial_state(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__StringDoublePair__Sequence * member =
    (tesseract_msgs__msg__StringDoublePair__Sequence *)(untyped_member);
  tesseract_msgs__msg__StringDoublePair__Sequence__fini(member);
  return tesseract_msgs__msg__StringDoublePair__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__joint_trajectories(
  const void * untyped_member)
{
  const tesseract_msgs__msg__JointTrajectory__Sequence * member =
    (const tesseract_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__joint_trajectories(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__JointTrajectory__Sequence * member =
    (const tesseract_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__joint_trajectories(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__JointTrajectory__Sequence * member =
    (tesseract_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__joint_trajectories(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__JointTrajectory * item =
    ((const tesseract_msgs__msg__JointTrajectory *)
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__joint_trajectories(untyped_member, index));
  tesseract_msgs__msg__JointTrajectory * value =
    (tesseract_msgs__msg__JointTrajectory *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__joint_trajectories(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__JointTrajectory * item =
    ((tesseract_msgs__msg__JointTrajectory *)
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__joint_trajectories(untyped_member, index));
  const tesseract_msgs__msg__JointTrajectory * value =
    (const tesseract_msgs__msg__JointTrajectory *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__joint_trajectories(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__JointTrajectory__Sequence * member =
    (tesseract_msgs__msg__JointTrajectory__Sequence *)(untyped_member);
  tesseract_msgs__msg__JointTrajectory__Sequence__fini(member);
  return tesseract_msgs__msg__JointTrajectory__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Trajectory, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ns",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Trajectory, ns),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Trajectory, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "environment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Trajectory, environment),  // bytes offset in struct
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
    offsetof(tesseract_msgs__msg__Trajectory, commands),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__commands,  // size() function pointer
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__commands,  // get_const(index) function pointer
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__commands,  // get(index) function pointer
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__commands,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__commands,  // assign(index, value) function pointer
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__commands  // resize(index) function pointer
  },
  {
    "initial_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Trajectory, initial_state),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__initial_state,  // size() function pointer
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__initial_state,  // get_const(index) function pointer
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__initial_state,  // get(index) function pointer
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__initial_state,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__initial_state,  // assign(index, value) function pointer
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__initial_state  // resize(index) function pointer
  },
  {
    "instructions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Trajectory, instructions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_trajectories",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__Trajectory, joint_trajectories),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__joint_trajectories,  // size() function pointer
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__joint_trajectories,  // get_const(index) function pointer
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__joint_trajectories,  // get(index) function pointer
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__joint_trajectories,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__joint_trajectories,  // assign(index, value) function pointer
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__joint_trajectories  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "Trajectory",  // message name
  8,  // number of fields
  sizeof(tesseract_msgs__msg__Trajectory),
  tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array,  // message members
  tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Trajectory)() {
  tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Environment)();
  tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, EnvironmentCommand)();
  tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, StringDoublePair)();
  tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, JointTrajectory)();
  if (!tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
