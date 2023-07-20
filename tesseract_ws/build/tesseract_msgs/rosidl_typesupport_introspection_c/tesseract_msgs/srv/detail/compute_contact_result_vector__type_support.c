// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tesseract_msgs:srv/ComputeContactResultVector.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tesseract_msgs/srv/detail/compute_contact_result_vector__rosidl_typesupport_introspection_c.h"
#include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tesseract_msgs/srv/detail/compute_contact_result_vector__functions.h"
#include "tesseract_msgs/srv/detail/compute_contact_result_vector__struct.h"


// Include directives for member types
// Member `joint_states`
#include "sensor_msgs/msg/joint_state.h"
// Member `joint_states`
#include "sensor_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__srv__ComputeContactResultVector_Request__rosidl_typesupport_introspection_c__ComputeContactResultVector_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__srv__ComputeContactResultVector_Request__init(message_memory);
}

void tesseract_msgs__srv__ComputeContactResultVector_Request__rosidl_typesupport_introspection_c__ComputeContactResultVector_Request_fini_function(void * message_memory)
{
  tesseract_msgs__srv__ComputeContactResultVector_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__srv__ComputeContactResultVector_Request__rosidl_typesupport_introspection_c__ComputeContactResultVector_Request_message_member_array[1] = {
  {
    "joint_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__ComputeContactResultVector_Request, joint_states),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__srv__ComputeContactResultVector_Request__rosidl_typesupport_introspection_c__ComputeContactResultVector_Request_message_members = {
  "tesseract_msgs__srv",  // message namespace
  "ComputeContactResultVector_Request",  // message name
  1,  // number of fields
  sizeof(tesseract_msgs__srv__ComputeContactResultVector_Request),
  tesseract_msgs__srv__ComputeContactResultVector_Request__rosidl_typesupport_introspection_c__ComputeContactResultVector_Request_message_member_array,  // message members
  tesseract_msgs__srv__ComputeContactResultVector_Request__rosidl_typesupport_introspection_c__ComputeContactResultVector_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__srv__ComputeContactResultVector_Request__rosidl_typesupport_introspection_c__ComputeContactResultVector_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__srv__ComputeContactResultVector_Request__rosidl_typesupport_introspection_c__ComputeContactResultVector_Request_message_type_support_handle = {
  0,
  &tesseract_msgs__srv__ComputeContactResultVector_Request__rosidl_typesupport_introspection_c__ComputeContactResultVector_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, ComputeContactResultVector_Request)() {
  tesseract_msgs__srv__ComputeContactResultVector_Request__rosidl_typesupport_introspection_c__ComputeContactResultVector_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  if (!tesseract_msgs__srv__ComputeContactResultVector_Request__rosidl_typesupport_introspection_c__ComputeContactResultVector_Request_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__srv__ComputeContactResultVector_Request__rosidl_typesupport_introspection_c__ComputeContactResultVector_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__srv__ComputeContactResultVector_Request__rosidl_typesupport_introspection_c__ComputeContactResultVector_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tesseract_msgs/srv/detail/compute_contact_result_vector__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tesseract_msgs/srv/detail/compute_contact_result_vector__functions.h"
// already included above
// #include "tesseract_msgs/srv/detail/compute_contact_result_vector__struct.h"


// Include directives for member types
// Member `collision_result`
#include "tesseract_msgs/msg/contact_result_vector.h"
// Member `collision_result`
#include "tesseract_msgs/msg/detail/contact_result_vector__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tesseract_msgs__srv__ComputeContactResultVector_Response__rosidl_typesupport_introspection_c__ComputeContactResultVector_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tesseract_msgs__srv__ComputeContactResultVector_Response__init(message_memory);
}

void tesseract_msgs__srv__ComputeContactResultVector_Response__rosidl_typesupport_introspection_c__ComputeContactResultVector_Response_fini_function(void * message_memory)
{
  tesseract_msgs__srv__ComputeContactResultVector_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tesseract_msgs__srv__ComputeContactResultVector_Response__rosidl_typesupport_introspection_c__ComputeContactResultVector_Response_message_member_array[2] = {
  {
    "collision_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__ComputeContactResultVector_Response, collision_result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs__srv__ComputeContactResultVector_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tesseract_msgs__srv__ComputeContactResultVector_Response__rosidl_typesupport_introspection_c__ComputeContactResultVector_Response_message_members = {
  "tesseract_msgs__srv",  // message namespace
  "ComputeContactResultVector_Response",  // message name
  2,  // number of fields
  sizeof(tesseract_msgs__srv__ComputeContactResultVector_Response),
  tesseract_msgs__srv__ComputeContactResultVector_Response__rosidl_typesupport_introspection_c__ComputeContactResultVector_Response_message_member_array,  // message members
  tesseract_msgs__srv__ComputeContactResultVector_Response__rosidl_typesupport_introspection_c__ComputeContactResultVector_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tesseract_msgs__srv__ComputeContactResultVector_Response__rosidl_typesupport_introspection_c__ComputeContactResultVector_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tesseract_msgs__srv__ComputeContactResultVector_Response__rosidl_typesupport_introspection_c__ComputeContactResultVector_Response_message_type_support_handle = {
  0,
  &tesseract_msgs__srv__ComputeContactResultVector_Response__rosidl_typesupport_introspection_c__ComputeContactResultVector_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, ComputeContactResultVector_Response)() {
  tesseract_msgs__srv__ComputeContactResultVector_Response__rosidl_typesupport_introspection_c__ComputeContactResultVector_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, msg, ContactResultVector)();
  if (!tesseract_msgs__srv__ComputeContactResultVector_Response__rosidl_typesupport_introspection_c__ComputeContactResultVector_Response_message_type_support_handle.typesupport_identifier) {
    tesseract_msgs__srv__ComputeContactResultVector_Response__rosidl_typesupport_introspection_c__ComputeContactResultVector_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tesseract_msgs__srv__ComputeContactResultVector_Response__rosidl_typesupport_introspection_c__ComputeContactResultVector_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tesseract_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tesseract_msgs/srv/detail/compute_contact_result_vector__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tesseract_msgs__srv__detail__compute_contact_result_vector__rosidl_typesupport_introspection_c__ComputeContactResultVector_service_members = {
  "tesseract_msgs__srv",  // service namespace
  "ComputeContactResultVector",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tesseract_msgs__srv__detail__compute_contact_result_vector__rosidl_typesupport_introspection_c__ComputeContactResultVector_Request_message_type_support_handle,
  NULL  // response message
  // tesseract_msgs__srv__detail__compute_contact_result_vector__rosidl_typesupport_introspection_c__ComputeContactResultVector_Response_message_type_support_handle
};

static rosidl_service_type_support_t tesseract_msgs__srv__detail__compute_contact_result_vector__rosidl_typesupport_introspection_c__ComputeContactResultVector_service_type_support_handle = {
  0,
  &tesseract_msgs__srv__detail__compute_contact_result_vector__rosidl_typesupport_introspection_c__ComputeContactResultVector_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, ComputeContactResultVector_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, ComputeContactResultVector_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tesseract_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, ComputeContactResultVector)() {
  if (!tesseract_msgs__srv__detail__compute_contact_result_vector__rosidl_typesupport_introspection_c__ComputeContactResultVector_service_type_support_handle.typesupport_identifier) {
    tesseract_msgs__srv__detail__compute_contact_result_vector__rosidl_typesupport_introspection_c__ComputeContactResultVector_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tesseract_msgs__srv__detail__compute_contact_result_vector__rosidl_typesupport_introspection_c__ComputeContactResultVector_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, ComputeContactResultVector_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tesseract_msgs, srv, ComputeContactResultVector_Response)()->data;
  }

  return &tesseract_msgs__srv__detail__compute_contact_result_vector__rosidl_typesupport_introspection_c__ComputeContactResultVector_service_type_support_handle;
}
