// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rviz_polygon_selection_tool:srv/GetSelection.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rviz_polygon_selection_tool/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rviz_polygon_selection_tool/srv/detail/get_selection__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace rviz_polygon_selection_tool
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_polygon_selection_tool
cdr_serialize(
  const rviz_polygon_selection_tool::srv::GetSelection_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_polygon_selection_tool
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rviz_polygon_selection_tool::srv::GetSelection_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_polygon_selection_tool
get_serialized_size(
  const rviz_polygon_selection_tool::srv::GetSelection_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_polygon_selection_tool
max_serialized_size_GetSelection_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rviz_polygon_selection_tool

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_polygon_selection_tool
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rviz_polygon_selection_tool, srv, GetSelection_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rviz_polygon_selection_tool/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "rviz_polygon_selection_tool/srv/detail/get_selection__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace rviz_polygon_selection_tool
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_polygon_selection_tool
cdr_serialize(
  const rviz_polygon_selection_tool::srv::GetSelection_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_polygon_selection_tool
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rviz_polygon_selection_tool::srv::GetSelection_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_polygon_selection_tool
get_serialized_size(
  const rviz_polygon_selection_tool::srv::GetSelection_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_polygon_selection_tool
max_serialized_size_GetSelection_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rviz_polygon_selection_tool

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_polygon_selection_tool
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rviz_polygon_selection_tool, srv, GetSelection_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rviz_polygon_selection_tool/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rviz_polygon_selection_tool
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rviz_polygon_selection_tool, srv, GetSelection)();

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
