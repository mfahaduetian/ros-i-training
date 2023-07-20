// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from industrial_reconstruction_msgs:msg/NormalFilterParams.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "industrial_reconstruction_msgs/msg/detail/normal_filter_params__struct.h"
#include "industrial_reconstruction_msgs/msg/detail/normal_filter_params__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace industrial_reconstruction_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _NormalFilterParams_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NormalFilterParams_type_support_ids_t;

static const _NormalFilterParams_type_support_ids_t _NormalFilterParams_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NormalFilterParams_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NormalFilterParams_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NormalFilterParams_type_support_symbol_names_t _NormalFilterParams_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, msg, NormalFilterParams)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, industrial_reconstruction_msgs, msg, NormalFilterParams)),
  }
};

typedef struct _NormalFilterParams_type_support_data_t
{
  void * data[2];
} _NormalFilterParams_type_support_data_t;

static _NormalFilterParams_type_support_data_t _NormalFilterParams_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NormalFilterParams_message_typesupport_map = {
  2,
  "industrial_reconstruction_msgs",
  &_NormalFilterParams_message_typesupport_ids.typesupport_identifier[0],
  &_NormalFilterParams_message_typesupport_symbol_names.symbol_name[0],
  &_NormalFilterParams_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NormalFilterParams_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NormalFilterParams_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace industrial_reconstruction_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, industrial_reconstruction_msgs, msg, NormalFilterParams)() {
  return &::industrial_reconstruction_msgs::msg::rosidl_typesupport_c::NormalFilterParams_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
