// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from industrial_reconstruction_msgs:srv/StopReconstruction.idl
// generated code does not contain a copyright notice
#include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__rosidl_typesupport_fastrtps_cpp.hpp"
#include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace industrial_reconstruction_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const industrial_reconstruction_msgs::msg::NormalFilterParams &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  industrial_reconstruction_msgs::msg::NormalFilterParams &);
size_t get_serialized_size(
  const industrial_reconstruction_msgs::msg::NormalFilterParams &,
  size_t current_alignment);
size_t
max_serialized_size_NormalFilterParams(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace industrial_reconstruction_msgs


namespace industrial_reconstruction_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
cdr_serialize(
  const industrial_reconstruction_msgs::srv::StopReconstruction_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: archive_directory
  cdr << ros_message.archive_directory;
  // Member: mesh_filepath
  cdr << ros_message.mesh_filepath;
  // Member: min_num_faces
  cdr << ros_message.min_num_faces;
  // Member: normal_filters
  {
    size_t size = ros_message.normal_filters.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      industrial_reconstruction_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.normal_filters[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  industrial_reconstruction_msgs::srv::StopReconstruction_Request & ros_message)
{
  // Member: archive_directory
  cdr >> ros_message.archive_directory;

  // Member: mesh_filepath
  cdr >> ros_message.mesh_filepath;

  // Member: min_num_faces
  cdr >> ros_message.min_num_faces;

  // Member: normal_filters
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.normal_filters.resize(size);
    for (size_t i = 0; i < size; i++) {
      industrial_reconstruction_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.normal_filters[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
get_serialized_size(
  const industrial_reconstruction_msgs::srv::StopReconstruction_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: archive_directory
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.archive_directory.size() + 1);
  // Member: mesh_filepath
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mesh_filepath.size() + 1);
  // Member: min_num_faces
  {
    size_t item_size = sizeof(ros_message.min_num_faces);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: normal_filters
  {
    size_t array_size = ros_message.normal_filters.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        industrial_reconstruction_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.normal_filters[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
max_serialized_size_StopReconstruction_Request(
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


  // Member: archive_directory
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

  // Member: mesh_filepath
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

  // Member: min_num_faces
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: normal_filters
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
        industrial_reconstruction_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NormalFilterParams(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _StopReconstruction_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const industrial_reconstruction_msgs::srv::StopReconstruction_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StopReconstruction_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<industrial_reconstruction_msgs::srv::StopReconstruction_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StopReconstruction_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const industrial_reconstruction_msgs::srv::StopReconstruction_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StopReconstruction_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StopReconstruction_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StopReconstruction_Request__callbacks = {
  "industrial_reconstruction_msgs::srv",
  "StopReconstruction_Request",
  _StopReconstruction_Request__cdr_serialize,
  _StopReconstruction_Request__cdr_deserialize,
  _StopReconstruction_Request__get_serialized_size,
  _StopReconstruction_Request__max_serialized_size
};

static rosidl_message_type_support_t _StopReconstruction_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StopReconstruction_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace industrial_reconstruction_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_industrial_reconstruction_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<industrial_reconstruction_msgs::srv::StopReconstruction_Request>()
{
  return &industrial_reconstruction_msgs::srv::typesupport_fastrtps_cpp::_StopReconstruction_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, industrial_reconstruction_msgs, srv, StopReconstruction_Request)() {
  return &industrial_reconstruction_msgs::srv::typesupport_fastrtps_cpp::_StopReconstruction_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace industrial_reconstruction_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
cdr_serialize(
  const industrial_reconstruction_msgs::srv::StopReconstruction_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  industrial_reconstruction_msgs::srv::StopReconstruction_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
get_serialized_size(
  const industrial_reconstruction_msgs::srv::StopReconstruction_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
max_serialized_size_StopReconstruction_Response(
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


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _StopReconstruction_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const industrial_reconstruction_msgs::srv::StopReconstruction_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StopReconstruction_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<industrial_reconstruction_msgs::srv::StopReconstruction_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StopReconstruction_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const industrial_reconstruction_msgs::srv::StopReconstruction_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StopReconstruction_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StopReconstruction_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StopReconstruction_Response__callbacks = {
  "industrial_reconstruction_msgs::srv",
  "StopReconstruction_Response",
  _StopReconstruction_Response__cdr_serialize,
  _StopReconstruction_Response__cdr_deserialize,
  _StopReconstruction_Response__get_serialized_size,
  _StopReconstruction_Response__max_serialized_size
};

static rosidl_message_type_support_t _StopReconstruction_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StopReconstruction_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace industrial_reconstruction_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_industrial_reconstruction_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<industrial_reconstruction_msgs::srv::StopReconstruction_Response>()
{
  return &industrial_reconstruction_msgs::srv::typesupport_fastrtps_cpp::_StopReconstruction_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, industrial_reconstruction_msgs, srv, StopReconstruction_Response)() {
  return &industrial_reconstruction_msgs::srv::typesupport_fastrtps_cpp::_StopReconstruction_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace industrial_reconstruction_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _StopReconstruction__callbacks = {
  "industrial_reconstruction_msgs::srv",
  "StopReconstruction",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, industrial_reconstruction_msgs, srv, StopReconstruction_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, industrial_reconstruction_msgs, srv, StopReconstruction_Response)(),
};

static rosidl_service_type_support_t _StopReconstruction__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StopReconstruction__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace industrial_reconstruction_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_industrial_reconstruction_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<industrial_reconstruction_msgs::srv::StopReconstruction>()
{
  return &industrial_reconstruction_msgs::srv::typesupport_fastrtps_cpp::_StopReconstruction__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, industrial_reconstruction_msgs, srv, StopReconstruction)() {
  return &industrial_reconstruction_msgs::srv::typesupport_fastrtps_cpp::_StopReconstruction__handle;
}

#ifdef __cplusplus
}
#endif
