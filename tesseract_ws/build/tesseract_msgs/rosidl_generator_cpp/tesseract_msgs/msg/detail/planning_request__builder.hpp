// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/PlanningRequest.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLANNING_REQUEST__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__PLANNING_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/planning_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningRequest_composite_profile_remapping
{
public:
  explicit Init_PlanningRequest_composite_profile_remapping(::tesseract_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::PlanningRequest composite_profile_remapping(::tesseract_msgs::msg::PlanningRequest::_composite_profile_remapping_type arg)
  {
    msg_.composite_profile_remapping = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_move_profile_remapping
{
public:
  explicit Init_PlanningRequest_move_profile_remapping(::tesseract_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  Init_PlanningRequest_composite_profile_remapping move_profile_remapping(::tesseract_msgs::msg::PlanningRequest::_move_profile_remapping_type arg)
  {
    msg_.move_profile_remapping = std::move(arg);
    return Init_PlanningRequest_composite_profile_remapping(msg_);
  }

private:
  ::tesseract_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_save_io
{
public:
  explicit Init_PlanningRequest_save_io(::tesseract_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  Init_PlanningRequest_move_profile_remapping save_io(::tesseract_msgs::msg::PlanningRequest::_save_io_type arg)
  {
    msg_.save_io = std::move(arg);
    return Init_PlanningRequest_move_profile_remapping(msg_);
  }

private:
  ::tesseract_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_debug
{
public:
  explicit Init_PlanningRequest_debug(::tesseract_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  Init_PlanningRequest_save_io debug(::tesseract_msgs::msg::PlanningRequest::_debug_type arg)
  {
    msg_.debug = std::move(arg);
    return Init_PlanningRequest_save_io(msg_);
  }

private:
  ::tesseract_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_dotgraph
{
public:
  explicit Init_PlanningRequest_dotgraph(::tesseract_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  Init_PlanningRequest_debug dotgraph(::tesseract_msgs::msg::PlanningRequest::_dotgraph_type arg)
  {
    msg_.dotgraph = std::move(arg);
    return Init_PlanningRequest_debug(msg_);
  }

private:
  ::tesseract_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_instructions
{
public:
  explicit Init_PlanningRequest_instructions(::tesseract_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  Init_PlanningRequest_dotgraph instructions(::tesseract_msgs::msg::PlanningRequest::_instructions_type arg)
  {
    msg_.instructions = std::move(arg);
    return Init_PlanningRequest_dotgraph(msg_);
  }

private:
  ::tesseract_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_executor
{
public:
  explicit Init_PlanningRequest_executor(::tesseract_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  Init_PlanningRequest_instructions executor(::tesseract_msgs::msg::PlanningRequest::_executor_type arg)
  {
    msg_.executor = std::move(arg);
    return Init_PlanningRequest_instructions(msg_);
  }

private:
  ::tesseract_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_name
{
public:
  explicit Init_PlanningRequest_name(::tesseract_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  Init_PlanningRequest_executor name(::tesseract_msgs::msg::PlanningRequest::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_PlanningRequest_executor(msg_);
  }

private:
  ::tesseract_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_commands
{
public:
  explicit Init_PlanningRequest_commands(::tesseract_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  Init_PlanningRequest_name commands(::tesseract_msgs::msg::PlanningRequest::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return Init_PlanningRequest_name(msg_);
  }

private:
  ::tesseract_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_environment_state
{
public:
  Init_PlanningRequest_environment_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningRequest_commands environment_state(::tesseract_msgs::msg::PlanningRequest::_environment_state_type arg)
  {
    msg_.environment_state = std::move(arg);
    return Init_PlanningRequest_commands(msg_);
  }

private:
  ::tesseract_msgs::msg::PlanningRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::PlanningRequest>()
{
  return tesseract_msgs::msg::builder::Init_PlanningRequest_environment_state();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLANNING_REQUEST__BUILDER_HPP_
