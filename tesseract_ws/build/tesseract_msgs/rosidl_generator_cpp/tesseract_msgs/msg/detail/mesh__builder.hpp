// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__MESH__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__MESH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/mesh__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_Mesh_scale
{
public:
  explicit Init_Mesh_scale(::tesseract_msgs::msg::Mesh & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::Mesh scale(::tesseract_msgs::msg::Mesh::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::Mesh msg_;
};

class Init_Mesh_file_path
{
public:
  explicit Init_Mesh_file_path(::tesseract_msgs::msg::Mesh & msg)
  : msg_(msg)
  {}
  Init_Mesh_scale file_path(::tesseract_msgs::msg::Mesh::_file_path_type arg)
  {
    msg_.file_path = std::move(arg);
    return Init_Mesh_scale(msg_);
  }

private:
  ::tesseract_msgs::msg::Mesh msg_;
};

class Init_Mesh_faces
{
public:
  explicit Init_Mesh_faces(::tesseract_msgs::msg::Mesh & msg)
  : msg_(msg)
  {}
  Init_Mesh_file_path faces(::tesseract_msgs::msg::Mesh::_faces_type arg)
  {
    msg_.faces = std::move(arg);
    return Init_Mesh_file_path(msg_);
  }

private:
  ::tesseract_msgs::msg::Mesh msg_;
};

class Init_Mesh_vertices
{
public:
  Init_Mesh_vertices()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mesh_faces vertices(::tesseract_msgs::msg::Mesh::_vertices_type arg)
  {
    msg_.vertices = std::move(arg);
    return Init_Mesh_faces(msg_);
  }

private:
  ::tesseract_msgs::msg::Mesh msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::Mesh>()
{
  return tesseract_msgs::msg::builder::Init_Mesh_vertices();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__MESH__BUILDER_HPP_
