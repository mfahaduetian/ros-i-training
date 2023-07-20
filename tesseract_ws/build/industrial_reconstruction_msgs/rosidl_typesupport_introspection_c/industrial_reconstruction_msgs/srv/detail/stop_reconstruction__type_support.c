// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from industrial_reconstruction_msgs:srv/StopReconstruction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__rosidl_typesupport_introspection_c.h"
#include "industrial_reconstruction_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__functions.h"
#include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__struct.h"


// Include directives for member types
// Member `archive_directory`
// Member `mesh_filepath`
#include "rosidl_runtime_c/string_functions.h"
// Member `normal_filters`
#include "industrial_reconstruction_msgs/msg/normal_filter_params.h"
// Member `normal_filters`
#include "industrial_reconstruction_msgs/msg/detail/normal_filter_params__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__StopReconstruction_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  industrial_reconstruction_msgs__srv__StopReconstruction_Request__init(message_memory);
}

void industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__StopReconstruction_Request_fini_function(void * message_memory)
{
  industrial_reconstruction_msgs__srv__StopReconstruction_Request__fini(message_memory);
}

size_t industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__size_function__StopReconstruction_Request__normal_filters(
  const void * untyped_member)
{
  const industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * member =
    (const industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence *)(untyped_member);
  return member->size;
}

const void * industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__get_const_function__StopReconstruction_Request__normal_filters(
  const void * untyped_member, size_t index)
{
  const industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * member =
    (const industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence *)(untyped_member);
  return &member->data[index];
}

void * industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__get_function__StopReconstruction_Request__normal_filters(
  void * untyped_member, size_t index)
{
  industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * member =
    (industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence *)(untyped_member);
  return &member->data[index];
}

void industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__fetch_function__StopReconstruction_Request__normal_filters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const industrial_reconstruction_msgs__msg__NormalFilterParams * item =
    ((const industrial_reconstruction_msgs__msg__NormalFilterParams *)
    industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__get_const_function__StopReconstruction_Request__normal_filters(untyped_member, index));
  industrial_reconstruction_msgs__msg__NormalFilterParams * value =
    (industrial_reconstruction_msgs__msg__NormalFilterParams *)(untyped_value);
  *value = *item;
}

void industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__assign_function__StopReconstruction_Request__normal_filters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  industrial_reconstruction_msgs__msg__NormalFilterParams * item =
    ((industrial_reconstruction_msgs__msg__NormalFilterParams *)
    industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__get_function__StopReconstruction_Request__normal_filters(untyped_member, index));
  const industrial_reconstruction_msgs__msg__NormalFilterParams * value =
    (const industrial_reconstruction_msgs__msg__NormalFilterParams *)(untyped_value);
  *item = *value;
}

bool industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__resize_function__StopReconstruction_Request__normal_filters(
  void * untyped_member, size_t size)
{
  industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * member =
    (industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence *)(untyped_member);
  industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__fini(member);
  return industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__StopReconstruction_Request_message_member_array[4] = {
  {
    "archive_directory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_reconstruction_msgs__srv__StopReconstruction_Request, archive_directory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mesh_filepath",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_reconstruction_msgs__srv__StopReconstruction_Request, mesh_filepath),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_num_faces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_reconstruction_msgs__srv__StopReconstruction_Request, min_num_faces),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "normal_filters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_reconstruction_msgs__srv__StopReconstruction_Request, normal_filters),  // bytes offset in struct
    NULL,  // default value
    industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__size_function__StopReconstruction_Request__normal_filters,  // size() function pointer
    industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__get_const_function__StopReconstruction_Request__normal_filters,  // get_const(index) function pointer
    industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__get_function__StopReconstruction_Request__normal_filters,  // get(index) function pointer
    industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__fetch_function__StopReconstruction_Request__normal_filters,  // fetch(index, &value) function pointer
    industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__assign_function__StopReconstruction_Request__normal_filters,  // assign(index, value) function pointer
    industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__resize_function__StopReconstruction_Request__normal_filters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__StopReconstruction_Request_message_members = {
  "industrial_reconstruction_msgs__srv",  // message namespace
  "StopReconstruction_Request",  // message name
  4,  // number of fields
  sizeof(industrial_reconstruction_msgs__srv__StopReconstruction_Request),
  industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__StopReconstruction_Request_message_member_array,  // message members
  industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__StopReconstruction_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__StopReconstruction_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__StopReconstruction_Request_message_type_support_handle = {
  0,
  &industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__StopReconstruction_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_industrial_reconstruction_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_reconstruction_msgs, srv, StopReconstruction_Request)() {
  industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__StopReconstruction_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_reconstruction_msgs, msg, NormalFilterParams)();
  if (!industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__StopReconstruction_Request_message_type_support_handle.typesupport_identifier) {
    industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__StopReconstruction_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &industrial_reconstruction_msgs__srv__StopReconstruction_Request__rosidl_typesupport_introspection_c__StopReconstruction_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "industrial_reconstruction_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__functions.h"
// already included above
// #include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void industrial_reconstruction_msgs__srv__StopReconstruction_Response__rosidl_typesupport_introspection_c__StopReconstruction_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  industrial_reconstruction_msgs__srv__StopReconstruction_Response__init(message_memory);
}

void industrial_reconstruction_msgs__srv__StopReconstruction_Response__rosidl_typesupport_introspection_c__StopReconstruction_Response_fini_function(void * message_memory)
{
  industrial_reconstruction_msgs__srv__StopReconstruction_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember industrial_reconstruction_msgs__srv__StopReconstruction_Response__rosidl_typesupport_introspection_c__StopReconstruction_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_reconstruction_msgs__srv__StopReconstruction_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers industrial_reconstruction_msgs__srv__StopReconstruction_Response__rosidl_typesupport_introspection_c__StopReconstruction_Response_message_members = {
  "industrial_reconstruction_msgs__srv",  // message namespace
  "StopReconstruction_Response",  // message name
  1,  // number of fields
  sizeof(industrial_reconstruction_msgs__srv__StopReconstruction_Response),
  industrial_reconstruction_msgs__srv__StopReconstruction_Response__rosidl_typesupport_introspection_c__StopReconstruction_Response_message_member_array,  // message members
  industrial_reconstruction_msgs__srv__StopReconstruction_Response__rosidl_typesupport_introspection_c__StopReconstruction_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  industrial_reconstruction_msgs__srv__StopReconstruction_Response__rosidl_typesupport_introspection_c__StopReconstruction_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t industrial_reconstruction_msgs__srv__StopReconstruction_Response__rosidl_typesupport_introspection_c__StopReconstruction_Response_message_type_support_handle = {
  0,
  &industrial_reconstruction_msgs__srv__StopReconstruction_Response__rosidl_typesupport_introspection_c__StopReconstruction_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_industrial_reconstruction_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_reconstruction_msgs, srv, StopReconstruction_Response)() {
  if (!industrial_reconstruction_msgs__srv__StopReconstruction_Response__rosidl_typesupport_introspection_c__StopReconstruction_Response_message_type_support_handle.typesupport_identifier) {
    industrial_reconstruction_msgs__srv__StopReconstruction_Response__rosidl_typesupport_introspection_c__StopReconstruction_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &industrial_reconstruction_msgs__srv__StopReconstruction_Response__rosidl_typesupport_introspection_c__StopReconstruction_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "industrial_reconstruction_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers industrial_reconstruction_msgs__srv__detail__stop_reconstruction__rosidl_typesupport_introspection_c__StopReconstruction_service_members = {
  "industrial_reconstruction_msgs__srv",  // service namespace
  "StopReconstruction",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // industrial_reconstruction_msgs__srv__detail__stop_reconstruction__rosidl_typesupport_introspection_c__StopReconstruction_Request_message_type_support_handle,
  NULL  // response message
  // industrial_reconstruction_msgs__srv__detail__stop_reconstruction__rosidl_typesupport_introspection_c__StopReconstruction_Response_message_type_support_handle
};

static rosidl_service_type_support_t industrial_reconstruction_msgs__srv__detail__stop_reconstruction__rosidl_typesupport_introspection_c__StopReconstruction_service_type_support_handle = {
  0,
  &industrial_reconstruction_msgs__srv__detail__stop_reconstruction__rosidl_typesupport_introspection_c__StopReconstruction_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_reconstruction_msgs, srv, StopReconstruction_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_reconstruction_msgs, srv, StopReconstruction_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_industrial_reconstruction_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_reconstruction_msgs, srv, StopReconstruction)() {
  if (!industrial_reconstruction_msgs__srv__detail__stop_reconstruction__rosidl_typesupport_introspection_c__StopReconstruction_service_type_support_handle.typesupport_identifier) {
    industrial_reconstruction_msgs__srv__detail__stop_reconstruction__rosidl_typesupport_introspection_c__StopReconstruction_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)industrial_reconstruction_msgs__srv__detail__stop_reconstruction__rosidl_typesupport_introspection_c__StopReconstruction_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_reconstruction_msgs, srv, StopReconstruction_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_reconstruction_msgs, srv, StopReconstruction_Response)()->data;
  }

  return &industrial_reconstruction_msgs__srv__detail__stop_reconstruction__rosidl_typesupport_introspection_c__StopReconstruction_service_type_support_handle;
}
