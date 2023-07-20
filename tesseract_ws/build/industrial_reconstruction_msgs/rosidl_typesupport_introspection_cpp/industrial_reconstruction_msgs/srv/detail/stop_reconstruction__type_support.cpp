// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from industrial_reconstruction_msgs:srv/StopReconstruction.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace industrial_reconstruction_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void StopReconstruction_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) industrial_reconstruction_msgs::srv::StopReconstruction_Request(_init);
}

void StopReconstruction_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<industrial_reconstruction_msgs::srv::StopReconstruction_Request *>(message_memory);
  typed_message->~StopReconstruction_Request();
}

size_t size_function__StopReconstruction_Request__normal_filters(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<industrial_reconstruction_msgs::msg::NormalFilterParams> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StopReconstruction_Request__normal_filters(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<industrial_reconstruction_msgs::msg::NormalFilterParams> *>(untyped_member);
  return &member[index];
}

void * get_function__StopReconstruction_Request__normal_filters(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<industrial_reconstruction_msgs::msg::NormalFilterParams> *>(untyped_member);
  return &member[index];
}

void fetch_function__StopReconstruction_Request__normal_filters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const industrial_reconstruction_msgs::msg::NormalFilterParams *>(
    get_const_function__StopReconstruction_Request__normal_filters(untyped_member, index));
  auto & value = *reinterpret_cast<industrial_reconstruction_msgs::msg::NormalFilterParams *>(untyped_value);
  value = item;
}

void assign_function__StopReconstruction_Request__normal_filters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<industrial_reconstruction_msgs::msg::NormalFilterParams *>(
    get_function__StopReconstruction_Request__normal_filters(untyped_member, index));
  const auto & value = *reinterpret_cast<const industrial_reconstruction_msgs::msg::NormalFilterParams *>(untyped_value);
  item = value;
}

void resize_function__StopReconstruction_Request__normal_filters(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<industrial_reconstruction_msgs::msg::NormalFilterParams> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StopReconstruction_Request_message_member_array[4] = {
  {
    "archive_directory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_reconstruction_msgs::srv::StopReconstruction_Request, archive_directory),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mesh_filepath",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_reconstruction_msgs::srv::StopReconstruction_Request, mesh_filepath),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "min_num_faces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_reconstruction_msgs::srv::StopReconstruction_Request, min_num_faces),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "normal_filters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<industrial_reconstruction_msgs::msg::NormalFilterParams>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_reconstruction_msgs::srv::StopReconstruction_Request, normal_filters),  // bytes offset in struct
    nullptr,  // default value
    size_function__StopReconstruction_Request__normal_filters,  // size() function pointer
    get_const_function__StopReconstruction_Request__normal_filters,  // get_const(index) function pointer
    get_function__StopReconstruction_Request__normal_filters,  // get(index) function pointer
    fetch_function__StopReconstruction_Request__normal_filters,  // fetch(index, &value) function pointer
    assign_function__StopReconstruction_Request__normal_filters,  // assign(index, value) function pointer
    resize_function__StopReconstruction_Request__normal_filters  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StopReconstruction_Request_message_members = {
  "industrial_reconstruction_msgs::srv",  // message namespace
  "StopReconstruction_Request",  // message name
  4,  // number of fields
  sizeof(industrial_reconstruction_msgs::srv::StopReconstruction_Request),
  StopReconstruction_Request_message_member_array,  // message members
  StopReconstruction_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  StopReconstruction_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StopReconstruction_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StopReconstruction_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace industrial_reconstruction_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<industrial_reconstruction_msgs::srv::StopReconstruction_Request>()
{
  return &::industrial_reconstruction_msgs::srv::rosidl_typesupport_introspection_cpp::StopReconstruction_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, industrial_reconstruction_msgs, srv, StopReconstruction_Request)() {
  return &::industrial_reconstruction_msgs::srv::rosidl_typesupport_introspection_cpp::StopReconstruction_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace industrial_reconstruction_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void StopReconstruction_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) industrial_reconstruction_msgs::srv::StopReconstruction_Response(_init);
}

void StopReconstruction_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<industrial_reconstruction_msgs::srv::StopReconstruction_Response *>(message_memory);
  typed_message->~StopReconstruction_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StopReconstruction_Response_message_member_array[1] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(industrial_reconstruction_msgs::srv::StopReconstruction_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StopReconstruction_Response_message_members = {
  "industrial_reconstruction_msgs::srv",  // message namespace
  "StopReconstruction_Response",  // message name
  1,  // number of fields
  sizeof(industrial_reconstruction_msgs::srv::StopReconstruction_Response),
  StopReconstruction_Response_message_member_array,  // message members
  StopReconstruction_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  StopReconstruction_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StopReconstruction_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StopReconstruction_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace industrial_reconstruction_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<industrial_reconstruction_msgs::srv::StopReconstruction_Response>()
{
  return &::industrial_reconstruction_msgs::srv::rosidl_typesupport_introspection_cpp::StopReconstruction_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, industrial_reconstruction_msgs, srv, StopReconstruction_Response)() {
  return &::industrial_reconstruction_msgs::srv::rosidl_typesupport_introspection_cpp::StopReconstruction_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace industrial_reconstruction_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers StopReconstruction_service_members = {
  "industrial_reconstruction_msgs::srv",  // service namespace
  "StopReconstruction",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<industrial_reconstruction_msgs::srv::StopReconstruction>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t StopReconstruction_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StopReconstruction_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace industrial_reconstruction_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<industrial_reconstruction_msgs::srv::StopReconstruction>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::industrial_reconstruction_msgs::srv::rosidl_typesupport_introspection_cpp::StopReconstruction_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::industrial_reconstruction_msgs::srv::StopReconstruction_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::industrial_reconstruction_msgs::srv::StopReconstruction_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, industrial_reconstruction_msgs, srv, StopReconstruction)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<industrial_reconstruction_msgs::srv::StopReconstruction>();
}

#ifdef __cplusplus
}
#endif
