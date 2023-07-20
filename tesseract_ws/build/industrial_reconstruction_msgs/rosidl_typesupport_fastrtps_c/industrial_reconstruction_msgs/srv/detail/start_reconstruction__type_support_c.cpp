// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from industrial_reconstruction_msgs:srv/StartReconstruction.idl
// generated code does not contain a copyright notice
#include "industrial_reconstruction_msgs/srv/detail/start_reconstruction__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "industrial_reconstruction_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "industrial_reconstruction_msgs/srv/detail/start_reconstruction__struct.h"
#include "industrial_reconstruction_msgs/srv/detail/start_reconstruction__functions.h"
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

#include "industrial_reconstruction_msgs/msg/detail/rgbd_image_params__functions.h"  // rgbd_params
#include "industrial_reconstruction_msgs/msg/detail/tsdf_volume_params__functions.h"  // tsdf_params
#include "rosidl_runtime_c/string.h"  // relative_frame, tracking_frame
#include "rosidl_runtime_c/string_functions.h"  // relative_frame, tracking_frame

// forward declare type support functions
size_t get_serialized_size_industrial_reconstruction_msgs__msg__RGBDImageParams(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_industrial_reconstruction_msgs__msg__RGBDImageParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, msg, RGBDImageParams)();
size_t get_serialized_size_industrial_reconstruction_msgs__msg__TSDFVolumeParams(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_industrial_reconstruction_msgs__msg__TSDFVolumeParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, msg, TSDFVolumeParams)();


using _StartReconstruction_Request__ros_msg_type = industrial_reconstruction_msgs__srv__StartReconstruction_Request;

static bool _StartReconstruction_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StartReconstruction_Request__ros_msg_type * ros_message = static_cast<const _StartReconstruction_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: tracking_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->tracking_frame;
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

  // Field name: relative_frame
  {
    const rosidl_runtime_c__String * str = &ros_message->relative_frame;
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

  // Field name: translation_distance
  {
    cdr << ros_message->translation_distance;
  }

  // Field name: rotational_distance
  {
    cdr << ros_message->rotational_distance;
  }

  // Field name: live
  {
    cdr << (ros_message->live ? true : false);
  }

  // Field name: tsdf_params
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, msg, TSDFVolumeParams
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tsdf_params, cdr))
    {
      return false;
    }
  }

  // Field name: rgbd_params
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, msg, RGBDImageParams
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rgbd_params, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _StartReconstruction_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StartReconstruction_Request__ros_msg_type * ros_message = static_cast<_StartReconstruction_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: tracking_frame
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tracking_frame.data) {
      rosidl_runtime_c__String__init(&ros_message->tracking_frame);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->tracking_frame,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tracking_frame'\n");
      return false;
    }
  }

  // Field name: relative_frame
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->relative_frame.data) {
      rosidl_runtime_c__String__init(&ros_message->relative_frame);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->relative_frame,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'relative_frame'\n");
      return false;
    }
  }

  // Field name: translation_distance
  {
    cdr >> ros_message->translation_distance;
  }

  // Field name: rotational_distance
  {
    cdr >> ros_message->rotational_distance;
  }

  // Field name: live
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->live = tmp ? true : false;
  }

  // Field name: tsdf_params
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, msg, TSDFVolumeParams
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tsdf_params))
    {
      return false;
    }
  }

  // Field name: rgbd_params
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, msg, RGBDImageParams
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rgbd_params))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_industrial_reconstruction_msgs
size_t get_serialized_size_industrial_reconstruction_msgs__srv__StartReconstruction_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StartReconstruction_Request__ros_msg_type * ros_message = static_cast<const _StartReconstruction_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tracking_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tracking_frame.size + 1);
  // field.name relative_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->relative_frame.size + 1);
  // field.name translation_distance
  {
    size_t item_size = sizeof(ros_message->translation_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotational_distance
  {
    size_t item_size = sizeof(ros_message->rotational_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name live
  {
    size_t item_size = sizeof(ros_message->live);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tsdf_params

  current_alignment += get_serialized_size_industrial_reconstruction_msgs__msg__TSDFVolumeParams(
    &(ros_message->tsdf_params), current_alignment);
  // field.name rgbd_params

  current_alignment += get_serialized_size_industrial_reconstruction_msgs__msg__RGBDImageParams(
    &(ros_message->rgbd_params), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _StartReconstruction_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_industrial_reconstruction_msgs__srv__StartReconstruction_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_industrial_reconstruction_msgs
size_t max_serialized_size_industrial_reconstruction_msgs__srv__StartReconstruction_Request(
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

  // member: tracking_frame
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
  // member: relative_frame
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
  // member: translation_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rotational_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: live
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tsdf_params
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_industrial_reconstruction_msgs__msg__TSDFVolumeParams(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rgbd_params
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_industrial_reconstruction_msgs__msg__RGBDImageParams(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _StartReconstruction_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_industrial_reconstruction_msgs__srv__StartReconstruction_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StartReconstruction_Request = {
  "industrial_reconstruction_msgs::srv",
  "StartReconstruction_Request",
  _StartReconstruction_Request__cdr_serialize,
  _StartReconstruction_Request__cdr_deserialize,
  _StartReconstruction_Request__get_serialized_size,
  _StartReconstruction_Request__max_serialized_size
};

static rosidl_message_type_support_t _StartReconstruction_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StartReconstruction_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, srv, StartReconstruction_Request)() {
  return &_StartReconstruction_Request__type_support;
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
// #include "industrial_reconstruction_msgs/srv/detail/start_reconstruction__struct.h"
// already included above
// #include "industrial_reconstruction_msgs/srv/detail/start_reconstruction__functions.h"
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


using _StartReconstruction_Response__ros_msg_type = industrial_reconstruction_msgs__srv__StartReconstruction_Response;

static bool _StartReconstruction_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StartReconstruction_Response__ros_msg_type * ros_message = static_cast<const _StartReconstruction_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _StartReconstruction_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StartReconstruction_Response__ros_msg_type * ros_message = static_cast<_StartReconstruction_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_industrial_reconstruction_msgs
size_t get_serialized_size_industrial_reconstruction_msgs__srv__StartReconstruction_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StartReconstruction_Response__ros_msg_type * ros_message = static_cast<const _StartReconstruction_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _StartReconstruction_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_industrial_reconstruction_msgs__srv__StartReconstruction_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_industrial_reconstruction_msgs
size_t max_serialized_size_industrial_reconstruction_msgs__srv__StartReconstruction_Response(
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

static size_t _StartReconstruction_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_industrial_reconstruction_msgs__srv__StartReconstruction_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StartReconstruction_Response = {
  "industrial_reconstruction_msgs::srv",
  "StartReconstruction_Response",
  _StartReconstruction_Response__cdr_serialize,
  _StartReconstruction_Response__cdr_deserialize,
  _StartReconstruction_Response__get_serialized_size,
  _StartReconstruction_Response__max_serialized_size
};

static rosidl_message_type_support_t _StartReconstruction_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StartReconstruction_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, srv, StartReconstruction_Response)() {
  return &_StartReconstruction_Response__type_support;
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
#include "industrial_reconstruction_msgs/srv/start_reconstruction.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t StartReconstruction__callbacks = {
  "industrial_reconstruction_msgs::srv",
  "StartReconstruction",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, srv, StartReconstruction_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, srv, StartReconstruction_Response)(),
};

static rosidl_service_type_support_t StartReconstruction__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &StartReconstruction__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, industrial_reconstruction_msgs, srv, StartReconstruction)() {
  return &StartReconstruction__handle;
}

#if defined(__cplusplus)
}
#endif
