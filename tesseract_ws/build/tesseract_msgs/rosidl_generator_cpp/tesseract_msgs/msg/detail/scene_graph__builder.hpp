// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/SceneGraph.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__SCENE_GRAPH__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__SCENE_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/scene_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_SceneGraph_acm
{
public:
  explicit Init_SceneGraph_acm(::tesseract_msgs::msg::SceneGraph & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::SceneGraph acm(::tesseract_msgs::msg::SceneGraph::_acm_type arg)
  {
    msg_.acm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::SceneGraph msg_;
};

class Init_SceneGraph_disabled_collision_links
{
public:
  explicit Init_SceneGraph_disabled_collision_links(::tesseract_msgs::msg::SceneGraph & msg)
  : msg_(msg)
  {}
  Init_SceneGraph_acm disabled_collision_links(::tesseract_msgs::msg::SceneGraph::_disabled_collision_links_type arg)
  {
    msg_.disabled_collision_links = std::move(arg);
    return Init_SceneGraph_acm(msg_);
  }

private:
  ::tesseract_msgs::msg::SceneGraph msg_;
};

class Init_SceneGraph_invisible_links
{
public:
  explicit Init_SceneGraph_invisible_links(::tesseract_msgs::msg::SceneGraph & msg)
  : msg_(msg)
  {}
  Init_SceneGraph_disabled_collision_links invisible_links(::tesseract_msgs::msg::SceneGraph::_invisible_links_type arg)
  {
    msg_.invisible_links = std::move(arg);
    return Init_SceneGraph_disabled_collision_links(msg_);
  }

private:
  ::tesseract_msgs::msg::SceneGraph msg_;
};

class Init_SceneGraph_joints
{
public:
  explicit Init_SceneGraph_joints(::tesseract_msgs::msg::SceneGraph & msg)
  : msg_(msg)
  {}
  Init_SceneGraph_invisible_links joints(::tesseract_msgs::msg::SceneGraph::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return Init_SceneGraph_invisible_links(msg_);
  }

private:
  ::tesseract_msgs::msg::SceneGraph msg_;
};

class Init_SceneGraph_links
{
public:
  explicit Init_SceneGraph_links(::tesseract_msgs::msg::SceneGraph & msg)
  : msg_(msg)
  {}
  Init_SceneGraph_joints links(::tesseract_msgs::msg::SceneGraph::_links_type arg)
  {
    msg_.links = std::move(arg);
    return Init_SceneGraph_joints(msg_);
  }

private:
  ::tesseract_msgs::msg::SceneGraph msg_;
};

class Init_SceneGraph_root
{
public:
  explicit Init_SceneGraph_root(::tesseract_msgs::msg::SceneGraph & msg)
  : msg_(msg)
  {}
  Init_SceneGraph_links root(::tesseract_msgs::msg::SceneGraph::_root_type arg)
  {
    msg_.root = std::move(arg);
    return Init_SceneGraph_links(msg_);
  }

private:
  ::tesseract_msgs::msg::SceneGraph msg_;
};

class Init_SceneGraph_id
{
public:
  Init_SceneGraph_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SceneGraph_root id(::tesseract_msgs::msg::SceneGraph::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SceneGraph_root(msg_);
  }

private:
  ::tesseract_msgs::msg::SceneGraph msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::SceneGraph>()
{
  return tesseract_msgs::msg::builder::Init_SceneGraph_id();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__SCENE_GRAPH__BUILDER_HPP_
