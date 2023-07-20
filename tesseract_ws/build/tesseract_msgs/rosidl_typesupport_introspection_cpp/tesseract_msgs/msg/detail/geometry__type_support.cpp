// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tesseract_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tesseract_msgs/msg/detail/geometry__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tesseract_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Geometry_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tesseract_msgs::msg::Geometry(_init);
}

void Geometry_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tesseract_msgs::msg::Geometry *>(message_memory);
  typed_message->~Geometry();
}

size_t size_function__Geometry__cylinder_dimensions(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Geometry__cylinder_dimensions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Geometry__cylinder_dimensions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Geometry__cylinder_dimensions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Geometry__cylinder_dimensions(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Geometry__cylinder_dimensions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Geometry__cylinder_dimensions(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__Geometry__capsule_dimensions(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Geometry__capsule_dimensions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Geometry__capsule_dimensions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Geometry__capsule_dimensions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Geometry__capsule_dimensions(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Geometry__capsule_dimensions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Geometry__capsule_dimensions(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__Geometry__cone_dimensions(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__Geometry__cone_dimensions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__Geometry__cone_dimensions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__Geometry__cone_dimensions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Geometry__cone_dimensions(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Geometry__cone_dimensions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Geometry__cone_dimensions(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__Geometry__box_dimensions(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Geometry__box_dimensions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Geometry__box_dimensions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__Geometry__box_dimensions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Geometry__box_dimensions(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Geometry__box_dimensions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Geometry__box_dimensions(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__Geometry__plane_coeff(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__Geometry__plane_coeff(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__Geometry__plane_coeff(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__Geometry__plane_coeff(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Geometry__plane_coeff(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Geometry__plane_coeff(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Geometry__plane_coeff(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Geometry_message_member_array[10] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Geometry, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sphere_radius",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Geometry, sphere_radius),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cylinder_dimensions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Geometry, cylinder_dimensions),  // bytes offset in struct
    nullptr,  // default value
    size_function__Geometry__cylinder_dimensions,  // size() function pointer
    get_const_function__Geometry__cylinder_dimensions,  // get_const(index) function pointer
    get_function__Geometry__cylinder_dimensions,  // get(index) function pointer
    fetch_function__Geometry__cylinder_dimensions,  // fetch(index, &value) function pointer
    assign_function__Geometry__cylinder_dimensions,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "capsule_dimensions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Geometry, capsule_dimensions),  // bytes offset in struct
    nullptr,  // default value
    size_function__Geometry__capsule_dimensions,  // size() function pointer
    get_const_function__Geometry__capsule_dimensions,  // get_const(index) function pointer
    get_function__Geometry__capsule_dimensions,  // get(index) function pointer
    fetch_function__Geometry__capsule_dimensions,  // fetch(index, &value) function pointer
    assign_function__Geometry__capsule_dimensions,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cone_dimensions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Geometry, cone_dimensions),  // bytes offset in struct
    nullptr,  // default value
    size_function__Geometry__cone_dimensions,  // size() function pointer
    get_const_function__Geometry__cone_dimensions,  // get_const(index) function pointer
    get_function__Geometry__cone_dimensions,  // get(index) function pointer
    fetch_function__Geometry__cone_dimensions,  // fetch(index, &value) function pointer
    assign_function__Geometry__cone_dimensions,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "box_dimensions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Geometry, box_dimensions),  // bytes offset in struct
    nullptr,  // default value
    size_function__Geometry__box_dimensions,  // size() function pointer
    get_const_function__Geometry__box_dimensions,  // get_const(index) function pointer
    get_function__Geometry__box_dimensions,  // get(index) function pointer
    fetch_function__Geometry__box_dimensions,  // fetch(index, &value) function pointer
    assign_function__Geometry__box_dimensions,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "plane_coeff",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Geometry, plane_coeff),  // bytes offset in struct
    nullptr,  // default value
    size_function__Geometry__plane_coeff,  // size() function pointer
    get_const_function__Geometry__plane_coeff,  // get_const(index) function pointer
    get_function__Geometry__plane_coeff,  // get(index) function pointer
    fetch_function__Geometry__plane_coeff,  // fetch(index, &value) function pointer
    assign_function__Geometry__plane_coeff,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mesh",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::Mesh>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Geometry, mesh),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "octomap",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<octomap_msgs::msg::Octomap>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Geometry, octomap),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "octomap_sub_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tesseract_msgs::msg::OctreeSubType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tesseract_msgs::msg::Geometry, octomap_sub_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Geometry_message_members = {
  "tesseract_msgs::msg",  // message namespace
  "Geometry",  // message name
  10,  // number of fields
  sizeof(tesseract_msgs::msg::Geometry),
  Geometry_message_member_array,  // message members
  Geometry_init_function,  // function to initialize message memory (memory has to be allocated)
  Geometry_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Geometry_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Geometry_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tesseract_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tesseract_msgs::msg::Geometry>()
{
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::Geometry_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tesseract_msgs, msg, Geometry)() {
  return &::tesseract_msgs::msg::rosidl_typesupport_introspection_cpp::Geometry_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
