// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/CollisionGeometry.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/detail/collision_geometry__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tesseract_msgs/msg/detail/collision_geometry__struct.hpp"

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
  const geometry_msgs::msg::Pose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Pose &);
size_t get_serialized_size(
  const geometry_msgs::msg::Pose &,
  size_t current_alignment);
size_t
max_serialized_size_Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace tesseract_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tesseract_msgs::msg::Geometry &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tesseract_msgs::msg::Geometry &);
size_t get_serialized_size(
  const tesseract_msgs::msg::Geometry &,
  size_t current_alignment);
size_t
max_serialized_size_Geometry(
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
  const tesseract_msgs::msg::Material &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tesseract_msgs::msg::Material &);
size_t get_serialized_size(
  const tesseract_msgs::msg::Material &,
  size_t current_alignment);
size_t
max_serialized_size_Material(
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
  const tesseract_msgs::msg::CollisionGeometry & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: origin
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.origin,
    cdr);
  // Member: geometry
  tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.geometry,
    cdr);
  // Member: material
  tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.material,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesseract_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tesseract_msgs::msg::CollisionGeometry & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: origin
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.origin);

  // Member: geometry
  tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.geometry);

  // Member: material
  tesseract_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.material);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesseract_msgs
get_serialized_size(
  const tesseract_msgs::msg::CollisionGeometry & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: origin

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.origin, current_alignment);
  // Member: geometry

  current_alignment +=
    tesseract_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.geometry, current_alignment);
  // Member: material

  current_alignment +=
    tesseract_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.material, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesseract_msgs
max_serialized_size_CollisionGeometry(
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


  // Member: name
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

  // Member: origin
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: geometry
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        tesseract_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Geometry(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: material
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        tesseract_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Material(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _CollisionGeometry__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tesseract_msgs::msg::CollisionGeometry *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CollisionGeometry__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tesseract_msgs::msg::CollisionGeometry *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CollisionGeometry__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tesseract_msgs::msg::CollisionGeometry *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CollisionGeometry__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CollisionGeometry(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CollisionGeometry__callbacks = {
  "tesseract_msgs::msg",
  "CollisionGeometry",
  _CollisionGeometry__cdr_serialize,
  _CollisionGeometry__cdr_deserialize,
  _CollisionGeometry__get_serialized_size,
  _CollisionGeometry__max_serialized_size
};

static rosidl_message_type_support_t _CollisionGeometry__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CollisionGeometry__callbacks,
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
get_message_type_support_handle<tesseract_msgs::msg::CollisionGeometry>()
{
  return &tesseract_msgs::msg::typesupport_fastrtps_cpp::_CollisionGeometry__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tesseract_msgs, msg, CollisionGeometry)() {
  return &tesseract_msgs::msg::typesupport_fastrtps_cpp::_CollisionGeometry__handle;
}

#ifdef __cplusplus
}
#endif
