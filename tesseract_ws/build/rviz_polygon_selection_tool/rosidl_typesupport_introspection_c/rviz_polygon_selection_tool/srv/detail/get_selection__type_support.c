// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rviz_polygon_selection_tool:srv/GetSelection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rviz_polygon_selection_tool/srv/detail/get_selection__rosidl_typesupport_introspection_c.h"
#include "rviz_polygon_selection_tool/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rviz_polygon_selection_tool/srv/detail/get_selection__functions.h"
#include "rviz_polygon_selection_tool/srv/detail/get_selection__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rviz_polygon_selection_tool__srv__GetSelection_Request__rosidl_typesupport_introspection_c__GetSelection_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rviz_polygon_selection_tool__srv__GetSelection_Request__init(message_memory);
}

void rviz_polygon_selection_tool__srv__GetSelection_Request__rosidl_typesupport_introspection_c__GetSelection_Request_fini_function(void * message_memory)
{
  rviz_polygon_selection_tool__srv__GetSelection_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rviz_polygon_selection_tool__srv__GetSelection_Request__rosidl_typesupport_introspection_c__GetSelection_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_polygon_selection_tool__srv__GetSelection_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rviz_polygon_selection_tool__srv__GetSelection_Request__rosidl_typesupport_introspection_c__GetSelection_Request_message_members = {
  "rviz_polygon_selection_tool__srv",  // message namespace
  "GetSelection_Request",  // message name
  1,  // number of fields
  sizeof(rviz_polygon_selection_tool__srv__GetSelection_Request),
  rviz_polygon_selection_tool__srv__GetSelection_Request__rosidl_typesupport_introspection_c__GetSelection_Request_message_member_array,  // message members
  rviz_polygon_selection_tool__srv__GetSelection_Request__rosidl_typesupport_introspection_c__GetSelection_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rviz_polygon_selection_tool__srv__GetSelection_Request__rosidl_typesupport_introspection_c__GetSelection_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rviz_polygon_selection_tool__srv__GetSelection_Request__rosidl_typesupport_introspection_c__GetSelection_Request_message_type_support_handle = {
  0,
  &rviz_polygon_selection_tool__srv__GetSelection_Request__rosidl_typesupport_introspection_c__GetSelection_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rviz_polygon_selection_tool
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_polygon_selection_tool, srv, GetSelection_Request)() {
  if (!rviz_polygon_selection_tool__srv__GetSelection_Request__rosidl_typesupport_introspection_c__GetSelection_Request_message_type_support_handle.typesupport_identifier) {
    rviz_polygon_selection_tool__srv__GetSelection_Request__rosidl_typesupport_introspection_c__GetSelection_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rviz_polygon_selection_tool__srv__GetSelection_Request__rosidl_typesupport_introspection_c__GetSelection_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rviz_polygon_selection_tool/srv/detail/get_selection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rviz_polygon_selection_tool/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rviz_polygon_selection_tool/srv/detail/get_selection__functions.h"
// already included above
// #include "rviz_polygon_selection_tool/srv/detail/get_selection__struct.h"


// Include directives for member types
// Member `selection`
#include "geometry_msgs/msg/point_stamped.h"
// Member `selection`
#include "geometry_msgs/msg/detail/point_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__GetSelection_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rviz_polygon_selection_tool__srv__GetSelection_Response__init(message_memory);
}

void rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__GetSelection_Response_fini_function(void * message_memory)
{
  rviz_polygon_selection_tool__srv__GetSelection_Response__fini(message_memory);
}

size_t rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__size_function__GetSelection_Response__selection(
  const void * untyped_member)
{
  const geometry_msgs__msg__PointStamped__Sequence * member =
    (const geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__get_const_function__GetSelection_Response__selection(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PointStamped__Sequence * member =
    (const geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__get_function__GetSelection_Response__selection(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PointStamped__Sequence * member =
    (geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__fetch_function__GetSelection_Response__selection(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__PointStamped * item =
    ((const geometry_msgs__msg__PointStamped *)
    rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__get_const_function__GetSelection_Response__selection(untyped_member, index));
  geometry_msgs__msg__PointStamped * value =
    (geometry_msgs__msg__PointStamped *)(untyped_value);
  *value = *item;
}

void rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__assign_function__GetSelection_Response__selection(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__PointStamped * item =
    ((geometry_msgs__msg__PointStamped *)
    rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__get_function__GetSelection_Response__selection(untyped_member, index));
  const geometry_msgs__msg__PointStamped * value =
    (const geometry_msgs__msg__PointStamped *)(untyped_value);
  *item = *value;
}

bool rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__resize_function__GetSelection_Response__selection(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PointStamped__Sequence * member =
    (geometry_msgs__msg__PointStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PointStamped__Sequence__fini(member);
  return geometry_msgs__msg__PointStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__GetSelection_Response_message_member_array[1] = {
  {
    "selection",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_polygon_selection_tool__srv__GetSelection_Response, selection),  // bytes offset in struct
    NULL,  // default value
    rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__size_function__GetSelection_Response__selection,  // size() function pointer
    rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__get_const_function__GetSelection_Response__selection,  // get_const(index) function pointer
    rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__get_function__GetSelection_Response__selection,  // get(index) function pointer
    rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__fetch_function__GetSelection_Response__selection,  // fetch(index, &value) function pointer
    rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__assign_function__GetSelection_Response__selection,  // assign(index, value) function pointer
    rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__resize_function__GetSelection_Response__selection  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__GetSelection_Response_message_members = {
  "rviz_polygon_selection_tool__srv",  // message namespace
  "GetSelection_Response",  // message name
  1,  // number of fields
  sizeof(rviz_polygon_selection_tool__srv__GetSelection_Response),
  rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__GetSelection_Response_message_member_array,  // message members
  rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__GetSelection_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__GetSelection_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__GetSelection_Response_message_type_support_handle = {
  0,
  &rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__GetSelection_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rviz_polygon_selection_tool
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_polygon_selection_tool, srv, GetSelection_Response)() {
  rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__GetSelection_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PointStamped)();
  if (!rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__GetSelection_Response_message_type_support_handle.typesupport_identifier) {
    rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__GetSelection_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rviz_polygon_selection_tool__srv__GetSelection_Response__rosidl_typesupport_introspection_c__GetSelection_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rviz_polygon_selection_tool/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rviz_polygon_selection_tool/srv/detail/get_selection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rviz_polygon_selection_tool__srv__detail__get_selection__rosidl_typesupport_introspection_c__GetSelection_service_members = {
  "rviz_polygon_selection_tool__srv",  // service namespace
  "GetSelection",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rviz_polygon_selection_tool__srv__detail__get_selection__rosidl_typesupport_introspection_c__GetSelection_Request_message_type_support_handle,
  NULL  // response message
  // rviz_polygon_selection_tool__srv__detail__get_selection__rosidl_typesupport_introspection_c__GetSelection_Response_message_type_support_handle
};

static rosidl_service_type_support_t rviz_polygon_selection_tool__srv__detail__get_selection__rosidl_typesupport_introspection_c__GetSelection_service_type_support_handle = {
  0,
  &rviz_polygon_selection_tool__srv__detail__get_selection__rosidl_typesupport_introspection_c__GetSelection_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_polygon_selection_tool, srv, GetSelection_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_polygon_selection_tool, srv, GetSelection_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rviz_polygon_selection_tool
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_polygon_selection_tool, srv, GetSelection)() {
  if (!rviz_polygon_selection_tool__srv__detail__get_selection__rosidl_typesupport_introspection_c__GetSelection_service_type_support_handle.typesupport_identifier) {
    rviz_polygon_selection_tool__srv__detail__get_selection__rosidl_typesupport_introspection_c__GetSelection_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rviz_polygon_selection_tool__srv__detail__get_selection__rosidl_typesupport_introspection_c__GetSelection_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_polygon_selection_tool, srv, GetSelection_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_polygon_selection_tool, srv, GetSelection_Response)()->data;
  }

  return &rviz_polygon_selection_tool__srv__detail__get_selection__rosidl_typesupport_introspection_c__GetSelection_service_type_support_handle;
}
