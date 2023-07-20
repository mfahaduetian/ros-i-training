// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:srv/SaveSceneGraph.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__DETAIL__SAVE_SCENE_GRAPH__BUILDER_HPP_
#define TESSERACT_MSGS__SRV__DETAIL__SAVE_SCENE_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/srv/detail/save_scene_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveSceneGraph_Request_filepath
{
public:
  Init_SaveSceneGraph_Request_filepath()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesseract_msgs::srv::SaveSceneGraph_Request filepath(::tesseract_msgs::srv::SaveSceneGraph_Request::_filepath_type arg)
  {
    msg_.filepath = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::srv::SaveSceneGraph_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::srv::SaveSceneGraph_Request>()
{
  return tesseract_msgs::srv::builder::Init_SaveSceneGraph_Request_filepath();
}

}  // namespace tesseract_msgs


namespace tesseract_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveSceneGraph_Response_revision
{
public:
  explicit Init_SaveSceneGraph_Response_revision(::tesseract_msgs::srv::SaveSceneGraph_Response & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::srv::SaveSceneGraph_Response revision(::tesseract_msgs::srv::SaveSceneGraph_Response::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::srv::SaveSceneGraph_Response msg_;
};

class Init_SaveSceneGraph_Response_id
{
public:
  explicit Init_SaveSceneGraph_Response_id(::tesseract_msgs::srv::SaveSceneGraph_Response & msg)
  : msg_(msg)
  {}
  Init_SaveSceneGraph_Response_revision id(::tesseract_msgs::srv::SaveSceneGraph_Response::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SaveSceneGraph_Response_revision(msg_);
  }

private:
  ::tesseract_msgs::srv::SaveSceneGraph_Response msg_;
};

class Init_SaveSceneGraph_Response_success
{
public:
  Init_SaveSceneGraph_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveSceneGraph_Response_id success(::tesseract_msgs::srv::SaveSceneGraph_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SaveSceneGraph_Response_id(msg_);
  }

private:
  ::tesseract_msgs::srv::SaveSceneGraph_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::srv::SaveSceneGraph_Response>()
{
  return tesseract_msgs::srv::builder::Init_SaveSceneGraph_Response_success();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__SRV__DETAIL__SAVE_SCENE_GRAPH__BUILDER_HPP_
