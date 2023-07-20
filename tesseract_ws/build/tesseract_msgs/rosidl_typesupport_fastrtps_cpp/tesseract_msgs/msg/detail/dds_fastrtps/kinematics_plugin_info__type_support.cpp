// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/KinematicsPluginInfo.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/kinematics_plugin_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tesseract_msgs/msg/detail/kinematics_plugin_info__struct.hpp"

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
namespace tesseract_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tesseract_msgs::msg::GroupsKinematicPlugins &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tesseract_msgs::msg::GroupsKinematicPlugins &);
size_t get_serialized_size(
  const tesseract_msgs::msg::GroupsKinematicPlugins &,
  size_t current_alignment);
size_t
max_serialized_size_GroupsKinematicPlugins(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tesseract_msgs

namespace tesseract_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tesseract_msgs::msg::GroupsKinematicPlugins &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tesseract_msgs::msg::GroupsKinematicPlugins &);
size_t get_serialized_size(
  const tesseract_msgs::msg::GroupsKinematicPlugins &,
  size_t current_alignment);
size_t
max_serialized_size_GroupsKinematicPlugins(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tesseract_msgs


namespace tesseract_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesseract_msgs
cdr_serialize(
  const tesseract_msgs::msg::KinematicsPluginInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: search_paths
  {
    cdr << ros_message.search_paths;
  }
  // Member: search_libraries
  {
    cdr << ros_message.search_libraries;
  }
  // Member: group_fwd_plugins
  {
    size_t size = ros_message.group_fwd_plugins.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.group_fwd_plugins[i],
        cdr);
    }
  }
  // Member: group_inv_plugins
  {
    size_t size = ros_message.group_inv_plugins.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.group_inv_plugins[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesseract_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tesseract_msgs::msg::KinematicsPluginInfo & ros_message)
{
  // Member: search_paths
  {
    cdr >> ros_message.search_paths;
  }

  // Member: search_libraries
  {
    cdr >> ros_message.search_libraries;
  }

  // Member: group_fwd_plugins
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.group_fwd_plugins.resize(size);
    for (size_t i = 0; i < size; i++) {
      tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.group_fwd_plugins[i]);
    }
  }

  // Member: group_inv_plugins
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.group_inv_plugins.resize(size);
    for (size_t i = 0; i < size; i++) {
      tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.group_inv_plugins[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesseract_msgs
get_serialized_size(
  const tesseract_msgs::msg::KinematicsPluginInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: search_paths
  {
    size_t array_size = ros_message.search_paths.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.search_paths[index].size() + 1);
    }
  }
  // Member: search_libraries
  {
    size_t array_size = ros_message.search_libraries.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.search_libraries[index].size() + 1);
    }
  }
  // Member: group_fwd_plugins
  {
    size_t array_size = ros_message.group_fwd_plugins.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tesseract_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.group_fwd_plugins[index], current_alignment);
    }
  }
  // Member: group_inv_plugins
  {
    size_t array_size = ros_message.group_inv_plugins.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tesseract_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.group_inv_plugins[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesseract_msgs
max_serialized_size_KinematicsPluginInfo(
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


  // Member: search_paths
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: search_libraries
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: group_fwd_plugins
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
        tesseract_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GroupsKinematicPlugins(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: group_inv_plugins
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
        tesseract_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GroupsKinematicPlugins(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _KinematicsPluginInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tesseract_msgs::msg::KinematicsPluginInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _KinematicsPluginInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tesseract_msgs::msg::KinematicsPluginInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _KinematicsPluginInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tesseract_msgs::msg::KinematicsPluginInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _KinematicsPluginInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_KinematicsPluginInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _KinematicsPluginInfo__callbacks = {
  "tesseract_msgs::msg",
  "KinematicsPluginInfo",
  _KinematicsPluginInfo__cdr_serialize,
  _KinematicsPluginInfo__cdr_deserialize,
  _KinematicsPluginInfo__get_serialized_size,
  _KinematicsPluginInfo__max_serialized_size
};

static rosidl_message_type_support_t _KinematicsPluginInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_KinematicsPluginInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tesseract_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tesseract_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tesseract_msgs::msg::KinematicsPluginInfo>()
{
  return &tesseract_msgs::msg::typesupport_fastrtps_cpp::_KinematicsPluginInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tesseract_msgs, msg, KinematicsPluginInfo)() {
  return &tesseract_msgs::msg::typesupport_fastrtps_cpp::_KinematicsPluginInfo__handle;
}

#ifdef __cplusplus
}
#endif
