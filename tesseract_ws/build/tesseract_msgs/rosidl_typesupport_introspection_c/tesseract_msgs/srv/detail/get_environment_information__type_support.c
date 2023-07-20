// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:srv/GetEnvironmentInformation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/srv/detail/get_environment_information__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/srv/detail/get_environment_information__functions.h"
#include "tesseract_msgs/srv/detail/get_environment_information__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__srv__GetEnvironmentInformation_Request__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__srv__GetEnvironmentInformation_Request__init(message_memory);
}

void tesseract_msgs__srv__GetEnvironmentInformation_Request__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Request_fini_function(void * message_memory)
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__srv__GetEnvironmentInformation_Request__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Request_message_member_array[1] = {
  {
    "flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Request, flags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__srv__GetEnvironmentInformation_Request__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Request_message_members = {
  "tesseract_msgs__srv",  // message namespace
  "GetEnvironmentInformation_Request",  // message name
  1,  // number of fields
  sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Request),
  tesseract_msgs__srv__GetEnvironmentInformation_Request__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Request_message_member_array,  // message members
  tesseract_msgs__srv__GetEnvironmentInformation_Request__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__srv__GetEnvironmentInformation_Request__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__srv__GetEnvironmentInformation_Request__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Request_message_type_support_handle = {
  0,
  &tesseract_msgs__srv__GetEnvironmentInformation_Request__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, GetEnvironmentInformation_Request)() {
  if (!tesseract_msgs__srv__GetEnvironmentInformation_Request__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Request_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__srv__GetEnvironmentInformation_Request__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__srv__GetEnvironmentInformation_Request__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tesseract_msgs/srv/detail/get_environment_information__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tesseract_msgs/srv/detail/get_environment_information__functions.h"
// already included above
// #include "tesseract_msgs/srv/detail/get_environment_information__struct.h"


// Include directives for member types
// Member `id`
// Member `link_names`
// Member `joint_names`
// Member `active_link_names`
// Member `active_joint_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `command_history`
#include "tesseract_msgs/msg/environment_command.h"
// Member `command_history`
#include "tesseract_msgs/msg/detail/environment_command__rosidl_typesupport_introspection_c.h"
// Member `links`
#include "tesseract_msgs/msg/link.h"
// Member `links`
#include "tesseract_msgs/msg/detail/link__rosidl_typesupport_introspection_c.h"
// Member `joints`
#include "tesseract_msgs/msg/joint.h"
// Member `joints`
#include "tesseract_msgs/msg/detail/joint__rosidl_typesupport_introspection_c.h"
// Member `link_transforms`
// Member `joint_transforms`
#include "tesseract_msgs/msg/transform_map.h"
// Member `link_transforms`
// Member `joint_transforms`
#include "tesseract_msgs/msg/detail/transform_map__rosidl_typesupport_introspection_c.h"
// Member `allowed_collision_matrix`
#include "tesseract_msgs/msg/allowed_collision_entry.h"
// Member `allowed_collision_matrix`
#include "tesseract_msgs/msg/detail/allowed_collision_entry__rosidl_typesupport_introspection_c.h"
// Member `kinematics_information`
#include "tesseract_msgs/msg/kinematics_information.h"
// Member `kinematics_information`
#include "tesseract_msgs/msg/detail/kinematics_information__rosidl_typesupport_introspection_c.h"
// Member `joint_states`
#include "sensor_msgs/msg/joint_state.h"
// Member `joint_states`
#include "sensor_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__srv__GetEnvironmentInformation_Response__init(message_memory);
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_fini_function(void * message_memory)
{
  tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(message_memory);
}

size_t tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__command_history(
  const void * untyped_member)
{
  const tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (const tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__command_history(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (const tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__command_history(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__command_history(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__EnvironmentCommand * item =
    ((const tesseract_msgs__msg__EnvironmentCommand *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__command_history(untyped_member, index));
  tesseract_msgs__msg__EnvironmentCommand * value =
    (tesseract_msgs__msg__EnvironmentCommand *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__command_history(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__EnvironmentCommand * item =
    ((tesseract_msgs__msg__EnvironmentCommand *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__command_history(untyped_member, index));
  const tesseract_msgs__msg__EnvironmentCommand * value =
    (const tesseract_msgs__msg__EnvironmentCommand *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__command_history(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(member);
  return tesseract_msgs__msg__EnvironmentCommand__Sequence__init(member, size);
}

size_t tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__links(
  const void * untyped_member)
{
  const tesseract_msgs__msg__Link__Sequence * member =
    (const tesseract_msgs__msg__Link__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__links(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__Link__Sequence * member =
    (const tesseract_msgs__msg__Link__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__links(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__Link__Sequence * member =
    (tesseract_msgs__msg__Link__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__Link * item =
    ((const tesseract_msgs__msg__Link *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__links(untyped_member, index));
  tesseract_msgs__msg__Link * value =
    (tesseract_msgs__msg__Link *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__Link * item =
    ((tesseract_msgs__msg__Link *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__links(untyped_member, index));
  const tesseract_msgs__msg__Link * value =
    (const tesseract_msgs__msg__Link *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__links(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__Link__Sequence * member =
    (tesseract_msgs__msg__Link__Sequence *)(untyped_member);
  tesseract_msgs__msg__Link__Sequence__fini(member);
  return tesseract_msgs__msg__Link__Sequence__init(member, size);
}

size_t tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__joints(
  const void * untyped_member)
{
  const tesseract_msgs__msg__Joint__Sequence * member =
    (const tesseract_msgs__msg__Joint__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__joints(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__Joint__Sequence * member =
    (const tesseract_msgs__msg__Joint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__joints(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__Joint__Sequence * member =
    (tesseract_msgs__msg__Joint__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__Joint * item =
    ((const tesseract_msgs__msg__Joint *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__joints(untyped_member, index));
  tesseract_msgs__msg__Joint * value =
    (tesseract_msgs__msg__Joint *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__Joint * item =
    ((tesseract_msgs__msg__Joint *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__joints(untyped_member, index));
  const tesseract_msgs__msg__Joint * value =
    (const tesseract_msgs__msg__Joint *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__joints(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__Joint__Sequence * member =
    (tesseract_msgs__msg__Joint__Sequence *)(untyped_member);
  tesseract_msgs__msg__Joint__Sequence__fini(member);
  return tesseract_msgs__msg__Joint__Sequence__init(member, size);
}

size_t tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__link_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__link_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__link_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__link_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__link_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__link_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__link_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__link_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__active_link_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__active_link_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__active_link_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__active_link_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__active_link_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__active_link_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__active_link_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__active_link_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__active_joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__active_joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__active_joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__active_joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__active_joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__active_joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__active_joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__active_joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__allowed_collision_matrix(
  const void * untyped_member)
{
  const tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (const tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__allowed_collision_matrix(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (const tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__allowed_collision_matrix(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__allowed_collision_matrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__AllowedCollisionEntry * item =
    ((const tesseract_msgs__msg__AllowedCollisionEntry *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__allowed_collision_matrix(untyped_member, index));
  tesseract_msgs__msg__AllowedCollisionEntry * value =
    (tesseract_msgs__msg__AllowedCollisionEntry *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__allowed_collision_matrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__AllowedCollisionEntry * item =
    ((tesseract_msgs__msg__AllowedCollisionEntry *)
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__allowed_collision_matrix(untyped_member, index));
  const tesseract_msgs__msg__AllowedCollisionEntry * value =
    (const tesseract_msgs__msg__AllowedCollisionEntry *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__allowed_collision_matrix(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence__fini(member);
  return tesseract_msgs__msg__AllowedCollisionEntry__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_member_array[15] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Response, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "revision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Response, revision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_history",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Response, command_history),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__command_history,  // size() function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__command_history,  // get_const(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__command_history,  // get(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__command_history,  // fetch(index, &value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__command_history,  // assign(index, value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__command_history  // resize(index) function pointer
  },
  {
    "links",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Response, links),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__links,  // size() function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__links,  // get_const(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__links,  // get(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__links,  // fetch(index, &value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__links,  // assign(index, value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__links  // resize(index) function pointer
  },
  {
    "joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Response, joints),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__joints,  // size() function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__joints,  // get_const(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__joints,  // get(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__joints,  // fetch(index, &value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__joints,  // assign(index, value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__joints  // resize(index) function pointer
  },
  {
    "link_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Response, link_names),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__link_names,  // size() function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__link_names,  // get_const(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__link_names,  // get(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__link_names,  // fetch(index, &value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__link_names,  // assign(index, value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__link_names  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Response, joint_names),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__joint_names,  // size() function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__joint_names,  // get_const(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__joint_names,  // get(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__joint_names,  // fetch(index, &value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__joint_names,  // assign(index, value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__joint_names  // resize(index) function pointer
  },
  {
    "active_link_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Response, active_link_names),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__active_link_names,  // size() function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__active_link_names,  // get_const(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__active_link_names,  // get(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__active_link_names,  // fetch(index, &value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__active_link_names,  // assign(index, value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__active_link_names  // resize(index) function pointer
  },
  {
    "active_joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Response, active_joint_names),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__active_joint_names,  // size() function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__active_joint_names,  // get_const(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__active_joint_names,  // get(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__active_joint_names,  // fetch(index, &value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__active_joint_names,  // assign(index, value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__active_joint_names  // resize(index) function pointer
  },
  {
    "link_transforms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Response, link_transforms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_transforms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Response, joint_transforms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allowed_collision_matrix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Response, allowed_collision_matrix),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentInformation_Response__allowed_collision_matrix,  // size() function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentInformation_Response__allowed_collision_matrix,  // get_const(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentInformation_Response__allowed_collision_matrix,  // get(index) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentInformation_Response__allowed_collision_matrix,  // fetch(index, &value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentInformation_Response__allowed_collision_matrix,  // assign(index, value) function pointer
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentInformation_Response__allowed_collision_matrix  // resize(index) function pointer
  },
  {
    "kinematics_information",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Response, kinematics_information),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentInformation_Response, joint_states),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_members = {
  "tesseract_msgs__srv",  // message namespace
  "GetEnvironmentInformation_Response",  // message name
  15,  // number of fields
  sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Response),
  tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_member_array,  // message members
  tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_type_support_handle = {
  0,
  &tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, GetEnvironmentInformation_Response)() {
  tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, EnvironmentCommand)();
  tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Link)();
  tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, Joint)();
  tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, TransformMap)();
  tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, TransformMap)();
  tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, AllowedCollisionEntry)();
  tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, KinematicsInformation)();
  tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  if (!tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__srv__GetEnvironmentInformation_Response__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tesseract_msgs/srv/detail/get_environment_information__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tesseract_msgs__srv__detail__get_environment_information__rosidl_typesupport_introspection_c__GetEnvironmentInformation_service_members = {
  "tesseract_msgs__srv",  // service namespace
  "GetEnvironmentInformation",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tesseract_msgs__srv__detail__get_environment_information__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Request_message_type_support_handle,
  NULL  // response message
  // tesseract_msgs__srv__detail__get_environment_information__rosidl_typesupport_introspection_c__GetEnvironmentInformation_Response_message_type_support_handle
};

static rosidl_service_type_support_t tesseract_msgs__srv__detail__get_environment_information__rosidl_typesupport_introspection_c__GetEnvironmentInformation_service_type_support_handle = {
  0,
  &tesseract_msgs__srv__detail__get_environment_information__rosidl_typesupport_introspection_c__GetEnvironmentInformation_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, GetEnvironmentInformation_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, GetEnvironmentInformation_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, GetEnvironmentInformation)() {
  if (!tesseract_msgs__srv__detail__get_environment_information__rosidl_typesupport_introspection_c__GetEnvironmentInformation_service_type_support_handle.typesupport_identifier) {
    tesseract_msgs__srv__detail__get_environment_information__rosidl_typesupport_introspection_c__GetEnvironmentInformation_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tesseract_msgs__srv__detail__get_environment_information__rosidl_typesupport_introspection_c__GetEnvironmentInformation_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, GetEnvironmentInformation_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, GetEnvironmentInformation_Response)()->data;
  }

  return &tesseract_msgs__srv__detail__get_environment_information__rosidl_typesupport_introspection_c__GetEnvironmentInformation_service_type_support_handle;
}
