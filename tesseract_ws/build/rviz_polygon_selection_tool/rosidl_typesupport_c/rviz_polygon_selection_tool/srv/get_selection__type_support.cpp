// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rviz_polygon_selection_tool:srv/GetSelection.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rviz_polygon_selection_tool/srv/detail/get_selection__struct.h"
#include "rviz_polygon_selection_tool/srv/detail/get_selection__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rviz_polygon_selection_tool
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetSelection_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetSelection_Request_type_support_ids_t;

static const _GetSelection_Request_type_support_ids_t _GetSelection_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetSelection_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetSelection_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetSelection_Request_type_support_symbol_names_t _GetSelection_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rviz_polygon_selection_tool, srv, GetSelection_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_polygon_selection_tool, srv, GetSelection_Request)),
  }
};

typedef struct _GetSelection_Request_type_support_data_t
{
  void * data[2];
} _GetSelection_Request_type_support_data_t;

static _GetSelection_Request_type_support_data_t _GetSelection_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetSelection_Request_message_typesupport_map = {
  2,
  "rviz_polygon_selection_tool",
  &_GetSelection_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetSelection_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetSelection_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetSelection_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetSelection_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rviz_polygon_selection_tool

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rviz_polygon_selection_tool, srv, GetSelection_Request)() {
  return &::rviz_polygon_selection_tool::srv::rosidl_typesupport_c::GetSelection_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rviz_polygon_selection_tool/srv/detail/get_selection__struct.h"
// already included above
// #include "rviz_polygon_selection_tool/srv/detail/get_selection__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rviz_polygon_selection_tool
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetSelection_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetSelection_Response_type_support_ids_t;

static const _GetSelection_Response_type_support_ids_t _GetSelection_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetSelection_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetSelection_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetSelection_Response_type_support_symbol_names_t _GetSelection_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rviz_polygon_selection_tool, srv, GetSelection_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_polygon_selection_tool, srv, GetSelection_Response)),
  }
};

typedef struct _GetSelection_Response_type_support_data_t
{
  void * data[2];
} _GetSelection_Response_type_support_data_t;

static _GetSelection_Response_type_support_data_t _GetSelection_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetSelection_Response_message_typesupport_map = {
  2,
  "rviz_polygon_selection_tool",
  &_GetSelection_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetSelection_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetSelection_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetSelection_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetSelection_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rviz_polygon_selection_tool

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rviz_polygon_selection_tool, srv, GetSelection_Response)() {
  return &::rviz_polygon_selection_tool::srv::rosidl_typesupport_c::GetSelection_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rviz_polygon_selection_tool/srv/detail/get_selection__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rviz_polygon_selection_tool
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetSelection_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetSelection_type_support_ids_t;

static const _GetSelection_type_support_ids_t _GetSelection_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetSelection_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetSelection_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetSelection_type_support_symbol_names_t _GetSelection_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rviz_polygon_selection_tool, srv, GetSelection)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_polygon_selection_tool, srv, GetSelection)),
  }
};

typedef struct _GetSelection_type_support_data_t
{
  void * data[2];
} _GetSelection_type_support_data_t;

static _GetSelection_type_support_data_t _GetSelection_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetSelection_service_typesupport_map = {
  2,
  "rviz_polygon_selection_tool",
  &_GetSelection_service_typesupport_ids.typesupport_identifier[0],
  &_GetSelection_service_typesupport_symbol_names.symbol_name[0],
  &_GetSelection_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetSelection_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetSelection_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rviz_polygon_selection_tool

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, rviz_polygon_selection_tool, srv, GetSelection)() {
  return &::rviz_polygon_selection_tool::srv::rosidl_typesupport_c::GetSelection_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
