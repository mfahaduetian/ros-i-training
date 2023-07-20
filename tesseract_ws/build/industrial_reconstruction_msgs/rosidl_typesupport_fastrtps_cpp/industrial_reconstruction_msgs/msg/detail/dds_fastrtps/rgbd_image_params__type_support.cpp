// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from industrial_reconstruction_msgs:msg/RGBDImageParams.idl
// generated code does not contain a copyright notice
#include "industrial_reconstruction_msgs/msg/detail/rgbd_image_params__rosidl_typesupport_fastrtps_cpp.hpp"
#include "industrial_reconstruction_msgs/msg/detail/rgbd_image_params__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
cdr_serialize(
  const industrial_reconstruction_msgs::msg::RGBDImageParams & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: depth_scale
  cdr << ros_message.depth_scale;
  // Member: depth_trunc
  cdr << ros_message.depth_trunc;
  // Member: convert_rgb_to_intensity
  cdr << (ros_message.convert_rgb_to_intensity ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  industrial_reconstruction_msgs::msg::RGBDImageParams & ros_message)
{
  // Member: depth_scale
  cdr >> ros_message.depth_scale;

  // Member: depth_trunc
  cdr >> ros_message.depth_trunc;

  // Member: convert_rgb_to_intensity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.convert_rgb_to_intensity = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
get_serialized_size(
  const industrial_reconstruction_msgs::msg::RGBDImageParams & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: depth_scale
  {
    size_t item_size = sizeof(ros_message.depth_scale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: depth_trunc
  {
    size_t item_size = sizeof(ros_message.depth_trunc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: convert_rgb_to_intensity
  {
    size_t item_size = sizeof(ros_message.convert_rgb_to_intensity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
max_serialized_size_RGBDImageParams(
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


  // Member: depth_scale
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: depth_trunc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: convert_rgb_to_intensity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RGBDImageParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const industrial_reconstruction_msgs::msg::RGBDImageParams *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RGBDImageParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<industrial_reconstruction_msgs::msg::RGBDImageParams *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RGBDImageParams__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const industrial_reconstruction_msgs::msg::RGBDImageParams *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RGBDImageParams__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RGBDImageParams(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RGBDImageParams__callbacks = {
  "industrial_reconstruction_msgs::msg",
  "RGBDImageParams",
  _RGBDImageParams__cdr_serialize,
  _RGBDImageParams__cdr_deserialize,
  _RGBDImageParams__get_serialized_size,
  _RGBDImageParams__max_serialized_size
};

static rosidl_message_type_support_t _RGBDImageParams__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RGBDImageParams__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace industrial_reconstruction_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_industrial_reconstruction_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<industrial_reconstruction_msgs::msg::RGBDImageParams>()
{
  return &industrial_reconstruction_msgs::msg::typesupport_fastrtps_cpp::_RGBDImageParams__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, industrial_reconstruction_msgs, msg, RGBDImageParams)() {
  return &industrial_reconstruction_msgs::msg::typesupport_fastrtps_cpp::_RGBDImageParams__handle;
}

#ifdef __cplusplus
}
#endif
