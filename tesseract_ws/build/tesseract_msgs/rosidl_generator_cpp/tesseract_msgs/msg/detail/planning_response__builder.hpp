// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/PlanningResponse.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLANNING_RESPONSE__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__PLANNING_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/planning_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningResponse_status_string
{
public:
  explicit Init_PlanningResponse_status_string(::tesseract_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::PlanningResponse status_string(::tesseract_msgs::msg::PlanningResponse::_status_string_type arg)
  {
    msg_.status_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_successful
{
public:
  explicit Init_PlanningResponse_successful(::tesseract_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  Init_PlanningResponse_status_string successful(::tesseract_msgs::msg::PlanningResponse::_successful_type arg)
  {
    msg_.successful = std::move(arg);
    return Init_PlanningResponse_status_string(msg_);
  }

private:
  ::tesseract_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_dotgraph
{
public:
  explicit Init_PlanningResponse_dotgraph(::tesseract_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  Init_PlanningResponse_successful dotgraph(::tesseract_msgs::msg::PlanningResponse::_dotgraph_type arg)
  {
    msg_.dotgraph = std::move(arg);
    return Init_PlanningResponse_successful(msg_);
  }

private:
  ::tesseract_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_initial_state
{
public:
  explicit Init_PlanningResponse_initial_state(::tesseract_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  Init_PlanningResponse_dotgraph initial_state(::tesseract_msgs::msg::PlanningResponse::_initial_state_type arg)
  {
    msg_.initial_state = std::move(arg);
    return Init_PlanningResponse_dotgraph(msg_);
  }

private:
  ::tesseract_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_results
{
public:
  Init_PlanningResponse_results()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningResponse_initial_state results(::tesseract_msgs::msg::PlanningResponse::_results_type arg)
  {
    msg_.results = std::move(arg);
    return Init_PlanningResponse_initial_state(msg_);
  }

private:
  ::tesseract_msgs::msg::PlanningResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::PlanningResponse>()
{
  return tesseract_msgs::msg::builder::Init_PlanningResponse_results();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLANNING_RESPONSE__BUILDER_HPP_
