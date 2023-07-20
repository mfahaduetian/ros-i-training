// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rviz_polygon_selection_tool:srv/GetSelection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rviz_polygon_selection_tool/srv/detail/get_selection__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rviz_polygon_selection_tool
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetSelection_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rviz_polygon_selection_tool::srv::GetSelection_Request(_init);
}

void GetSelection_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rviz_polygon_selection_tool::srv::GetSelection_Request *>(message_memory);
  typed_message->~GetSelection_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetSelection_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_polygon_selection_tool::srv::GetSelection_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetSelection_Request_message_members = {
  "rviz_polygon_selection_tool::srv",  // message namespace
  "GetSelection_Request",  // message name
  1,  // number of fields
  sizeof(rviz_polygon_selection_tool::srv::GetSelection_Request),
  GetSelection_Request_message_member_array,  // message members
  GetSelection_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetSelection_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetSelection_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetSelection_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rviz_polygon_selection_tool


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rviz_polygon_selection_tool::srv::GetSelection_Request>()
{
  return &::rviz_polygon_selection_tool::srv::rosidl_typesupport_introspection_cpp::GetSelection_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rviz_polygon_selection_tool, srv, GetSelection_Request)() {
  return &::rviz_polygon_selection_tool::srv::rosidl_typesupport_introspection_cpp::GetSelection_Request_message_type_support_handle;
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
// #include "rviz_polygon_selection_tool/srv/detail/get_selection__struct.hpp"
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

namespace rviz_polygon_selection_tool
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetSelection_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rviz_polygon_selection_tool::srv::GetSelection_Response(_init);
}

void GetSelection_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rviz_polygon_selection_tool::srv::GetSelection_Response *>(message_memory);
  typed_message->~GetSelection_Response();
}

size_t size_function__GetSelection_Response__selection(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetSelection_Response__selection(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__GetSelection_Response__selection(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetSelection_Response__selection(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::PointStamped *>(
    get_const_function__GetSelection_Response__selection(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::PointStamped *>(untyped_value);
  value = item;
}

void assign_function__GetSelection_Response__selection(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::PointStamped *>(
    get_function__GetSelection_Response__selection(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::PointStamped *>(untyped_value);
  item = value;
}

void resize_function__GetSelection_Response__selection(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::PointStamped> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetSelection_Response_message_member_array[1] = {
  {
    "selection",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PointStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_polygon_selection_tool::srv::GetSelection_Response, selection),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetSelection_Response__selection,  // size() function pointer
    get_const_function__GetSelection_Response__selection,  // get_const(index) function pointer
    get_function__GetSelection_Response__selection,  // get(index) function pointer
    fetch_function__GetSelection_Response__selection,  // fetch(index, &value) function pointer
    assign_function__GetSelection_Response__selection,  // assign(index, value) function pointer
    resize_function__GetSelection_Response__selection  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetSelection_Response_message_members = {
  "rviz_polygon_selection_tool::srv",  // message namespace
  "GetSelection_Response",  // message name
  1,  // number of fields
  sizeof(rviz_polygon_selection_tool::srv::GetSelection_Response),
  GetSelection_Response_message_member_array,  // message members
  GetSelection_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetSelection_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetSelection_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetSelection_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rviz_polygon_selection_tool


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rviz_polygon_selection_tool::srv::GetSelection_Response>()
{
  return &::rviz_polygon_selection_tool::srv::rosidl_typesupport_introspection_cpp::GetSelection_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rviz_polygon_selection_tool, srv, GetSelection_Response)() {
  return &::rviz_polygon_selection_tool::srv::rosidl_typesupport_introspection_cpp::GetSelection_Response_message_type_support_handle;
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
// #include "rviz_polygon_selection_tool/srv/detail/get_selection__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace rviz_polygon_selection_tool
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetSelection_service_members = {
  "rviz_polygon_selection_tool::srv",  // service namespace
  "GetSelection",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<rviz_polygon_selection_tool::srv::GetSelection>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetSelection_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetSelection_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rviz_polygon_selection_tool


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rviz_polygon_selection_tool::srv::GetSelection>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::rviz_polygon_selection_tool::srv::rosidl_typesupport_introspection_cpp::GetSelection_service_type_support_handle;
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
        ::rviz_polygon_selection_tool::srv::GetSelection_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rviz_polygon_selection_tool::srv::GetSelection_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rviz_polygon_selection_tool, srv, GetSelection)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<rviz_polygon_selection_tool::srv::GetSelection>();
}

#ifdef __cplusplus
}
#endif
