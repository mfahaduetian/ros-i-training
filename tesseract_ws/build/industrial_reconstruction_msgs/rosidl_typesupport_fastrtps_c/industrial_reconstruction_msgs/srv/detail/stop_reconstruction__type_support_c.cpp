// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from industrial_reconstruction_msgs:srv/StopReconstruction.idl
// generated code does not contain a copyright notice
#include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "industrial_reconstruction_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__struct.h"
#include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "industrial_reconstruction_msgs/msg/detail/normal_filter_params__functions.h"  // normal_filters
#include "rosidl_runtime_c/string.h"  // archive_directory, mesh_filepath
#include "rosidl_runtime_c/string_functions.h"  // archive_directory, mesh_filepath

// forward declare type support functions
size_t get_serialized_size_industrial_reconstruction_msgs__msg__NormalFilterParams(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_industrial_reconstruction_msgs__msg__NormalFilterParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, msg, NormalFilterParams)();


using _StopReconstruction_Request__ros_msg_type = industrial_reconstruction_msgs__srv__StopReconstruction_Request;

static bool _StopReconstruction_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StopReconstruction_Request__ros_msg_type * ros_message = static_cast<const _StopReconstruction_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: archive_directory
  {
    const rosidl_runtime_c__String * str = &ros_message->archive_directory;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: mesh_filepath
  {
    const rosidl_runtime_c__String * str = &ros_message->mesh_filepath;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: min_num_faces
  {
    cdr << ros_message->min_num_faces;
  }

  // Field name: normal_filters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, msg, NormalFilterParams
      )()->data);
    size_t size = ros_message->normal_filters.size;
    auto array_ptr = ros_message->normal_filters.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _StopReconstruction_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StopReconstruction_Request__ros_msg_type * ros_message = static_cast<_StopReconstruction_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: archive_directory
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->archive_directory.data) {
      rosidl_runtime_c__String__init(&ros_message->archive_directory);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->archive_directory,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'archive_directory'\n");
      return false;
    }
  }

  // Field name: mesh_filepath
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mesh_filepath.data) {
      rosidl_runtime_c__String__init(&ros_message->mesh_filepath);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mesh_filepath,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mesh_filepath'\n");
      return false;
    }
  }

  // Field name: min_num_faces
  {
    cdr >> ros_message->min_num_faces;
  }

  // Field name: normal_filters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, msg, NormalFilterParams
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->normal_filters.data) {
      industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__fini(&ros_message->normal_filters);
    }
    if (!industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__init(&ros_message->normal_filters, size)) {
      fprintf(stderr, "failed to create array for field 'normal_filters'");
      return false;
    }
    auto array_ptr = ros_message->normal_filters.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_industrial_reconstruction_msgs
size_t get_serialized_size_industrial_reconstruction_msgs__srv__StopReconstruction_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StopReconstruction_Request__ros_msg_type * ros_message = static_cast<const _StopReconstruction_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name archive_directory
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->archive_directory.size + 1);
  // field.name mesh_filepath
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mesh_filepath.size + 1);
  // field.name min_num_faces
  {
    size_t item_size = sizeof(ros_message->min_num_faces);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name normal_filters
  {
    size_t array_size = ros_message->normal_filters.size;
    auto array_ptr = ros_message->normal_filters.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_industrial_reconstruction_msgs__msg__NormalFilterParams(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StopReconstruction_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_industrial_reconstruction_msgs__srv__StopReconstruction_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_industrial_reconstruction_msgs
size_t max_serialized_size_industrial_reconstruction_msgs__srv__StopReconstruction_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: archive_directory
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: mesh_filepath
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: min_num_faces
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: normal_filters
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_industrial_reconstruction_msgs__msg__NormalFilterParams(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _StopReconstruction_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_industrial_reconstruction_msgs__srv__StopReconstruction_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StopReconstruction_Request = {
  "industrial_reconstruction_msgs::srv",
  "StopReconstruction_Request",
  _StopReconstruction_Request__cdr_serialize,
  _StopReconstruction_Request__cdr_deserialize,
  _StopReconstruction_Request__get_serialized_size,
  _StopReconstruction_Request__max_serialized_size
};

static rosidl_message_type_support_t _StopReconstruction_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StopReconstruction_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, srv, StopReconstruction_Request)() {
  return &_StopReconstruction_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "industrial_reconstruction_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__struct.h"
// already included above
// #include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _StopReconstruction_Response__ros_msg_type = industrial_reconstruction_msgs__srv__StopReconstruction_Response;

static bool _StopReconstruction_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StopReconstruction_Response__ros_msg_type * ros_message = static_cast<const _StopReconstruction_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _StopReconstruction_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StopReconstruction_Response__ros_msg_type * ros_message = static_cast<_StopReconstruction_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_industrial_reconstruction_msgs
size_t get_serialized_size_industrial_reconstruction_msgs__srv__StopReconstruction_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StopReconstruction_Response__ros_msg_type * ros_message = static_cast<const _StopReconstruction_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StopReconstruction_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_industrial_reconstruction_msgs__srv__StopReconstruction_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_industrial_reconstruction_msgs
size_t max_serialized_size_industrial_reconstruction_msgs__srv__StopReconstruction_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _StopReconstruction_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_industrial_reconstruction_msgs__srv__StopReconstruction_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StopReconstruction_Response = {
  "industrial_reconstruction_msgs::srv",
  "StopReconstruction_Response",
  _StopReconstruction_Response__cdr_serialize,
  _StopReconstruction_Response__cdr_deserialize,
  _StopReconstruction_Response__get_serialized_size,
  _StopReconstruction_Response__max_serialized_size
};

static rosidl_message_type_support_t _StopReconstruction_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StopReconstruction_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, srv, StopReconstruction_Response)() {
  return &_StopReconstruction_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "industrial_reconstruction_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "industrial_reconstruction_msgs/srv/stop_reconstruction.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t StopReconstruction__callbacks = {
  "industrial_reconstruction_msgs::srv",
  "StopReconstruction",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, srv, StopReconstruction_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, srv, StopReconstruction_Response)(),
};

static rosidl_service_type_support_t StopReconstruction__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &StopReconstruction__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, srv, StopReconstruction)() {
  return &StopReconstruction__handle;
}

#if defined(__cplusplus)
}
#endif
