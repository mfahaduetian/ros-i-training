// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/TaskComposerNodeInfo.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__TASK_COMPOSER_NODE_INFO__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__TASK_COMPOSER_NODE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/task_composer_node_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskComposerNodeInfo_elapsed_time
{
public:
  explicit Init_TaskComposerNodeInfo_elapsed_time(::tesseract_msgs::msg::TaskComposerNodeInfo & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::TaskComposerNodeInfo elapsed_time(::tesseract_msgs::msg::TaskComposerNodeInfo::_elapsed_time_type arg)
  {
    msg_.elapsed_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::TaskComposerNodeInfo msg_;
};

class Init_TaskComposerNodeInfo_message
{
public:
  explicit Init_TaskComposerNodeInfo_message(::tesseract_msgs::msg::TaskComposerNodeInfo & msg)
  : msg_(msg)
  {}
  Init_TaskComposerNodeInfo_elapsed_time message(::tesseract_msgs::msg::TaskComposerNodeInfo::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_TaskComposerNodeInfo_elapsed_time(msg_);
  }

private:
  ::tesseract_msgs::msg::TaskComposerNodeInfo msg_;
};

class Init_TaskComposerNodeInfo_return_value
{
public:
  explicit Init_TaskComposerNodeInfo_return_value(::tesseract_msgs::msg::TaskComposerNodeInfo & msg)
  : msg_(msg)
  {}
  Init_TaskComposerNodeInfo_message return_value(::tesseract_msgs::msg::TaskComposerNodeInfo::_return_value_type arg)
  {
    msg_.return_value = std::move(arg);
    return Init_TaskComposerNodeInfo_message(msg_);
  }

private:
  ::tesseract_msgs::msg::TaskComposerNodeInfo msg_;
};

class Init_TaskComposerNodeInfo_output_keys
{
public:
  explicit Init_TaskComposerNodeInfo_output_keys(::tesseract_msgs::msg::TaskComposerNodeInfo & msg)
  : msg_(msg)
  {}
  Init_TaskComposerNodeInfo_return_value output_keys(::tesseract_msgs::msg::TaskComposerNodeInfo::_output_keys_type arg)
  {
    msg_.output_keys = std::move(arg);
    return Init_TaskComposerNodeInfo_return_value(msg_);
  }

private:
  ::tesseract_msgs::msg::TaskComposerNodeInfo msg_;
};

class Init_TaskComposerNodeInfo_input_keys
{
public:
  explicit Init_TaskComposerNodeInfo_input_keys(::tesseract_msgs::msg::TaskComposerNodeInfo & msg)
  : msg_(msg)
  {}
  Init_TaskComposerNodeInfo_output_keys input_keys(::tesseract_msgs::msg::TaskComposerNodeInfo::_input_keys_type arg)
  {
    msg_.input_keys = std::move(arg);
    return Init_TaskComposerNodeInfo_output_keys(msg_);
  }

private:
  ::tesseract_msgs::msg::TaskComposerNodeInfo msg_;
};

class Init_TaskComposerNodeInfo_outbound_edges
{
public:
  explicit Init_TaskComposerNodeInfo_outbound_edges(::tesseract_msgs::msg::TaskComposerNodeInfo & msg)
  : msg_(msg)
  {}
  Init_TaskComposerNodeInfo_input_keys outbound_edges(::tesseract_msgs::msg::TaskComposerNodeInfo::_outbound_edges_type arg)
  {
    msg_.outbound_edges = std::move(arg);
    return Init_TaskComposerNodeInfo_input_keys(msg_);
  }

private:
  ::tesseract_msgs::msg::TaskComposerNodeInfo msg_;
};

class Init_TaskComposerNodeInfo_inbound_edges
{
public:
  explicit Init_TaskComposerNodeInfo_inbound_edges(::tesseract_msgs::msg::TaskComposerNodeInfo & msg)
  : msg_(msg)
  {}
  Init_TaskComposerNodeInfo_outbound_edges inbound_edges(::tesseract_msgs::msg::TaskComposerNodeInfo::_inbound_edges_type arg)
  {
    msg_.inbound_edges = std::move(arg);
    return Init_TaskComposerNodeInfo_outbound_edges(msg_);
  }

private:
  ::tesseract_msgs::msg::TaskComposerNodeInfo msg_;
};

class Init_TaskComposerNodeInfo_uuid
{
public:
  explicit Init_TaskComposerNodeInfo_uuid(::tesseract_msgs::msg::TaskComposerNodeInfo & msg)
  : msg_(msg)
  {}
  Init_TaskComposerNodeInfo_inbound_edges uuid(::tesseract_msgs::msg::TaskComposerNodeInfo::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_TaskComposerNodeInfo_inbound_edges(msg_);
  }

private:
  ::tesseract_msgs::msg::TaskComposerNodeInfo msg_;
};

class Init_TaskComposerNodeInfo_name
{
public:
  Init_TaskComposerNodeInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskComposerNodeInfo_uuid name(::tesseract_msgs::msg::TaskComposerNodeInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TaskComposerNodeInfo_uuid(msg_);
  }

private:
  ::tesseract_msgs::msg::TaskComposerNodeInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::TaskComposerNodeInfo>()
{
  return tesseract_msgs::msg::builder::Init_TaskComposerNodeInfo_name();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__TASK_COMPOSER_NODE_INFO__BUILDER_HPP_
