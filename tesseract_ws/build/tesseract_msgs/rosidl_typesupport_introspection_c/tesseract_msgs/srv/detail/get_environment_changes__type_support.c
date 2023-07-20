// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:srv/GetEnvironmentChanges.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/srv/detail/get_environment_changes__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/srv/detail/get_environment_changes__functions.h"
#include "tesseract_msgs/srv/detail/get_environment_changes__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__srv__GetEnvironmentChanges_Request__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__srv__GetEnvironmentChanges_Request__init(message_memory);
}

void tesseract_msgs__srv__GetEnvironmentChanges_Request__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Request_fini_function(void * message_memory)
{
  tesseract_msgs__srv__GetEnvironmentChanges_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__srv__GetEnvironmentChanges_Request__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Request_message_member_array[1] = {
  {
    "revision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentChanges_Request, revision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__srv__GetEnvironmentChanges_Request__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Request_message_members = {
  "tesseract_msgs__srv",  // message namespace
  "GetEnvironmentChanges_Request",  // message name
  1,  // number of fields
  sizeof(tesseract_msgs__srv__GetEnvironmentChanges_Request),
  tesseract_msgs__srv__GetEnvironmentChanges_Request__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Request_message_member_array,  // message members
  tesseract_msgs__srv__GetEnvironmentChanges_Request__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__srv__GetEnvironmentChanges_Request__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__srv__GetEnvironmentChanges_Request__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Request_message_type_support_handle = {
  0,
  &tesseract_msgs__srv__GetEnvironmentChanges_Request__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, GetEnvironmentChanges_Request)() {
  if (!tesseract_msgs__srv__GetEnvironmentChanges_Request__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Request_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__srv__GetEnvironmentChanges_Request__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__srv__GetEnvironmentChanges_Request__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tesseract_msgs/srv/detail/get_environment_changes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tesseract_msgs/srv/detail/get_environment_changes__functions.h"
// already included above
// #include "tesseract_msgs/srv/detail/get_environment_changes__struct.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `commands`
#include "tesseract_msgs/msg/environment_command.h"
// Member `commands`
#include "tesseract_msgs/msg/detail/environment_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__srv__GetEnvironmentChanges_Response__init(message_memory);
}

void tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Response_fini_function(void * message_memory)
{
  tesseract_msgs__srv__GetEnvironmentChanges_Response__fini(message_memory);
}

size_t tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentChanges_Response__commands(
  const void * untyped_member)
{
  const tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (const tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentChanges_Response__commands(
  const void * untyped_member, size_t index)
{
  const tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (const tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentChanges_Response__commands(
  void * untyped_member, size_t index)
{
  tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentChanges_Response__commands(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tesseract_msgs__msg__EnvironmentCommand * item =
    ((const tesseract_msgs__msg__EnvironmentCommand *)
    tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentChanges_Response__commands(untyped_member, index));
  tesseract_msgs__msg__EnvironmentCommand * value =
    (tesseract_msgs__msg__EnvironmentCommand *)(untyped_value);
  *value = *item;
}

void tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentChanges_Response__commands(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tesseract_msgs__msg__EnvironmentCommand * item =
    ((tesseract_msgs__msg__EnvironmentCommand *)
    tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentChanges_Response__commands(untyped_member, index));
  const tesseract_msgs__msg__EnvironmentCommand * value =
    (const tesseract_msgs__msg__EnvironmentCommand *)(untyped_value);
  *item = *value;
}

bool tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentChanges_Response__commands(
  void * untyped_member, size_t size)
{
  tesseract_msgs__msg__EnvironmentCommand__Sequence * member =
    (tesseract_msgs__msg__EnvironmentCommand__Sequence *)(untyped_member);
  tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(member);
  return tesseract_msgs__msg__EnvironmentCommand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Response_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__GetEnvironmentChanges_Response, success),  // bytes offset in struct
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
    offsetof(tesseract_msgs__srv__GetEnvironmentChanges_Response, id),  // bytes offset in struct
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
    offsetof(tesseract_msgs__srv__GetEnvironmentChanges_Response, revision),  // bytes offset in struct
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
    offsetof(tesseract_msgs__srv__GetEnvironmentChanges_Response, commands),  // bytes offset in struct
    NULL,  // default value
    tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__size_function__GetEnvironmentChanges_Response__commands,  // size() function pointer
    tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__get_const_function__GetEnvironmentChanges_Response__commands,  // get_const(index) function pointer
    tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__get_function__GetEnvironmentChanges_Response__commands,  // get(index) function pointer
    tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__fetch_function__GetEnvironmentChanges_Response__commands,  // fetch(index, &value) function pointer
    tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__assign_function__GetEnvironmentChanges_Response__commands,  // assign(index, value) function pointer
    tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__resize_function__GetEnvironmentChanges_Response__commands  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Response_message_members = {
  "tesseract_msgs__srv",  // message namespace
  "GetEnvironmentChanges_Response",  // message name
  4,  // number of fields
  sizeof(tesseract_msgs__srv__GetEnvironmentChanges_Response),
  tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Response_message_member_array,  // message members
  tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Response_message_type_support_handle = {
  0,
  &tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, GetEnvironmentChanges_Response)() {
  tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, EnvironmentCommand)();
  if (!tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Response_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__srv__GetEnvironmentChanges_Response__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tesseract_msgs/srv/detail/get_environment_changes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tesseract_msgs__srv__detail__get_environment_changes__rosidl_typesupport_introspection_c__GetEnvironmentChanges_service_members = {
  "tesseract_msgs__srv",  // service namespace
  "GetEnvironmentChanges",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tesseract_msgs__srv__detail__get_environment_changes__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Request_message_type_support_handle,
  NULL  // response message
  // tesseract_msgs__srv__detail__get_environment_changes__rosidl_typesupport_introspection_c__GetEnvironmentChanges_Response_message_type_support_handle
};

static rosidl_service_type_support_t tesseract_msgs__srv__detail__get_environment_changes__rosidl_typesupport_introspection_c__GetEnvironmentChanges_service_type_support_handle = {
  0,
  &tesseract_msgs__srv__detail__get_environment_changes__rosidl_typesupport_introspection_c__GetEnvironmentChanges_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, GetEnvironmentChanges_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, GetEnvironmentChanges_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, GetEnvironmentChanges)() {
  if (!tesseract_msgs__srv__detail__get_environment_changes__rosidl_typesupport_introspection_c__GetEnvironmentChanges_service_type_support_handle.typesupport_identifier) {
    tesseract_msgs__srv__detail__get_environment_changes__rosidl_typesupport_introspection_c__GetEnvironmentChanges_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tesseract_msgs__srv__detail__get_environment_changes__rosidl_typesupport_introspection_c__GetEnvironmentChanges_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, GetEnvironmentChanges_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, GetEnvironmentChanges_Response)()->data;
  }

  return &tesseract_msgs__srv__detail__get_environment_changes__rosidl_typesupport_introspection_c__GetEnvironmentChanges_service_type_support_handle;
}
