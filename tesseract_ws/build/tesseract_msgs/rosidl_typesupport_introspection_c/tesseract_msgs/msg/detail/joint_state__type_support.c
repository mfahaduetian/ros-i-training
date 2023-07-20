// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/msg/detail/joint_state__functions.h"
#include "tesseract_msgs/msg/detail/joint_state__struct.h"


// Include directives for member types
// Member `joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `acceleration`
// Member `effort`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `time_from_start`
#include "builtin_interfaces/msg/duration.h"
// Member `time_from_start`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__msg__JointState__init(message_memory);
}

void tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_fini_function(void * message_memory)
{
  tesseract_msgs__msg__JointState__fini(message_memory);
}

size_t tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__size_function__JointState__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__fetch_function__JointState__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__assign_function__JointState__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__resize_function__JointState__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__size_function__JointState__position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__fetch_function__JointState__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__assign_function__JointState__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__resize_function__JointState__position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__size_function__JointState__velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__fetch_function__JointState__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__assign_function__JointState__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__resize_function__JointState__velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__size_function__JointState__acceleration(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__acceleration(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__acceleration(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__fetch_function__JointState__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__acceleration(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__assign_function__JointState__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__acceleration(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__resize_function__JointState__acceleration(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__size_function__JointState__effort(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__effort(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__effort(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__fetch_function__JointState__effort(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__effort(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__assign_function__JointState__effort(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__effort(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__resize_function__JointState__effort(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_member_array[6] = {
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__JointState, joint_names),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__size_function__JointState__joint_names,  // size() function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__joint_names,  // get_const(index) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__joint_names,  // get(index) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__fetch_function__JointState__joint_names,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__assign_function__JointState__joint_names,  // assign(index, value) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__resize_function__JointState__joint_names  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__JointState, position),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__size_function__JointState__position,  // size() function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__position,  // get_const(index) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__position,  // get(index) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__fetch_function__JointState__position,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__assign_function__JointState__position,  // assign(index, value) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__resize_function__JointState__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__JointState, velocity),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__size_function__JointState__velocity,  // size() function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__velocity,  // get_const(index) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__velocity,  // get(index) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__fetch_function__JointState__velocity,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__assign_function__JointState__velocity,  // assign(index, value) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__resize_function__JointState__velocity  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__JointState, acceleration),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__size_function__JointState__acceleration,  // size() function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__acceleration,  // get_const(index) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__acceleration,  // get(index) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__fetch_function__JointState__acceleration,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__assign_function__JointState__acceleration,  // assign(index, value) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__resize_function__JointState__acceleration  // resize(index) function pointer
  },
  {
    "effort",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__JointState, effort),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__size_function__JointState__effort,  // size() function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_const_function__JointState__effort,  // get_const(index) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__get_function__JointState__effort,  // get(index) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__fetch_function__JointState__effort,  // fetch(index, &value) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__assign_function__JointState__effort,  // assign(index, value) function pointer
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__resize_function__JointState__effort  // resize(index) function pointer
  },
  {
    "time_from_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__msg__JointState, time_from_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_members = {
  "tesseract_msgs__msg",  // message namespace
  "JointState",  // message name
  6,  // number of fields
  sizeof(tesseract_msgs__msg__JointState),
  tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_member_array,  // message members
  tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle = {
  0,
  &tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, JointState)() {
  tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__msg__JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
