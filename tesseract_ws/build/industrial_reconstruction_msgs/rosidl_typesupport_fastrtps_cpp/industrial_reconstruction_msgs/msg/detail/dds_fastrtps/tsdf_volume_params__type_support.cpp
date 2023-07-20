// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from industrial_reconstruction_msgs:msg/TSDFVolumeParams.idl
// generated code does not contain a copyright notice
#include "industrial_reconstruction_msgs/msg/detail/tsdf_volume_params__rosidl_typesupport_fastrtps_cpp.hpp"
#include "industrial_reconstruction_msgs/msg/detail/tsdf_volume_params__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace industrial_reconstruction_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
cdr_serialize(
  const industrial_reconstruction_msgs::msg::TSDFVolumeParams & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: voxel_length
  cdr << ros_message.voxel_length;
  // Member: sdf_trunc
  cdr << ros_message.sdf_trunc;
  // Member: min_box_values
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.min_box_values,
    cdr);
  // Member: max_box_values
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.max_box_values,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  industrial_reconstruction_msgs::msg::TSDFVolumeParams & ros_message)
{
  // Member: voxel_length
  cdr >> ros_message.voxel_length;

  // Member: sdf_trunc
  cdr >> ros_message.sdf_trunc;

  // Member: min_box_values
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.min_box_values);

  // Member: max_box_values
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.max_box_values);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
get_serialized_size(
  const industrial_reconstruction_msgs::msg::TSDFVolumeParams & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: voxel_length
  {
    size_t item_size = sizeof(ros_message.voxel_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sdf_trunc
  {
    size_t item_size = sizeof(ros_message.sdf_trunc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_box_values

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.min_box_values, current_alignment);
  // Member: max_box_values

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.max_box_values, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_industrial_reconstruction_msgs
max_serialized_size_TSDFVolumeParams(
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


  // Member: voxel_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sdf_trunc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min_box_values
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: max_box_values
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TSDFVolumeParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const industrial_reconstruction_msgs::msg::TSDFVolumeParams *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TSDFVolumeParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<industrial_reconstruction_msgs::msg::TSDFVolumeParams *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TSDFVolumeParams__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const industrial_reconstruction_msgs::msg::TSDFVolumeParams *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TSDFVolumeParams__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TSDFVolumeParams(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TSDFVolumeParams__callbacks = {
  "industrial_reconstruction_msgs::msg",
  "TSDFVolumeParams",
  _TSDFVolumeParams__cdr_serialize,
  _TSDFVolumeParams__cdr_deserialize,
  _TSDFVolumeParams__get_serialized_size,
  _TSDFVolumeParams__max_serialized_size
};

static rosidl_message_type_support_t _TSDFVolumeParams__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TSDFVolumeParams__callbacks,
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
get_message_type_support_handle<industrial_reconstruction_msgs::msg::TSDFVolumeParams>()
{
  return &industrial_reconstruction_msgs::msg::typesupport_fastrtps_cpp::_TSDFVolumeParams__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, industrial_reconstruction_msgs, msg, TSDFVolumeParams)() {
  return &industrial_reconstruction_msgs::msg::typesupport_fastrtps_cpp::_TSDFVolumeParams__handle;
}

#ifdef __cplusplus
}
#endif
