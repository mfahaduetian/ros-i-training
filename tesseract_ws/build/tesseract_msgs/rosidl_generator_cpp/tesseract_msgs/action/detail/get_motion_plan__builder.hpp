// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:action/GetMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__ACTION__DETAIL__GET_MOTION_PLAN__BUILDER_HPP_
#define TESSERACT_MSGS__ACTION__DETAIL__GET_MOTION_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/action/detail/get_motion_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace action
{

namespace builder
{

class Init_GetMotionPlan_Goal_request
{
public:
  Init_GetMotionPlan_Goal_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesseract_msgs::action::GetMotionPlan_Goal request(::tesseract_msgs::action::GetMotionPlan_Goal::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::action::GetMotionPlan_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::action::GetMotionPlan_Goal>()
{
  return tesseract_msgs::action::builder::Init_GetMotionPlan_Goal_request();
}

}  // namespace tesseract_msgs


namespace tesseract_msgs
{

namespace action
{

namespace builder
{

class Init_GetMotionPlan_Result_response
{
public:
  Init_GetMotionPlan_Result_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesseract_msgs::action::GetMotionPlan_Result response(::tesseract_msgs::action::GetMotionPlan_Result::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::action::GetMotionPlan_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::action::GetMotionPlan_Result>()
{
  return tesseract_msgs::action::builder::Init_GetMotionPlan_Result_response();
}

}  // namespace tesseract_msgs


namespace tesseract_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::action::GetMotionPlan_Feedback>()
{
  return ::tesseract_msgs::action::GetMotionPlan_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tesseract_msgs


namespace tesseract_msgs
{

namespace action
{

namespace builder
{

class Init_GetMotionPlan_SendGoal_Request_goal
{
public:
  explicit Init_GetMotionPlan_SendGoal_Request_goal(::tesseract_msgs::action::GetMotionPlan_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::action::GetMotionPlan_SendGoal_Request goal(::tesseract_msgs::action::GetMotionPlan_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::action::GetMotionPlan_SendGoal_Request msg_;
};

class Init_GetMotionPlan_SendGoal_Request_goal_id
{
public:
  Init_GetMotionPlan_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMotionPlan_SendGoal_Request_goal goal_id(::tesseract_msgs::action::GetMotionPlan_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GetMotionPlan_SendGoal_Request_goal(msg_);
  }

private:
  ::tesseract_msgs::action::GetMotionPlan_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::action::GetMotionPlan_SendGoal_Request>()
{
  return tesseract_msgs::action::builder::Init_GetMotionPlan_SendGoal_Request_goal_id();
}

}  // namespace tesseract_msgs


namespace tesseract_msgs
{

namespace action
{

namespace builder
{

class Init_GetMotionPlan_SendGoal_Response_stamp
{
public:
  explicit Init_GetMotionPlan_SendGoal_Response_stamp(::tesseract_msgs::action::GetMotionPlan_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::action::GetMotionPlan_SendGoal_Response stamp(::tesseract_msgs::action::GetMotionPlan_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::action::GetMotionPlan_SendGoal_Response msg_;
};

class Init_GetMotionPlan_SendGoal_Response_accepted
{
public:
  Init_GetMotionPlan_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMotionPlan_SendGoal_Response_stamp accepted(::tesseract_msgs::action::GetMotionPlan_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GetMotionPlan_SendGoal_Response_stamp(msg_);
  }

private:
  ::tesseract_msgs::action::GetMotionPlan_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::action::GetMotionPlan_SendGoal_Response>()
{
  return tesseract_msgs::action::builder::Init_GetMotionPlan_SendGoal_Response_accepted();
}

}  // namespace tesseract_msgs


namespace tesseract_msgs
{

namespace action
{

namespace builder
{

class Init_GetMotionPlan_GetResult_Request_goal_id
{
public:
  Init_GetMotionPlan_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesseract_msgs::action::GetMotionPlan_GetResult_Request goal_id(::tesseract_msgs::action::GetMotionPlan_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::action::GetMotionPlan_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::action::GetMotionPlan_GetResult_Request>()
{
  return tesseract_msgs::action::builder::Init_GetMotionPlan_GetResult_Request_goal_id();
}

}  // namespace tesseract_msgs


namespace tesseract_msgs
{

namespace action
{

namespace builder
{

class Init_GetMotionPlan_GetResult_Response_result
{
public:
  explicit Init_GetMotionPlan_GetResult_Response_result(::tesseract_msgs::action::GetMotionPlan_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::action::GetMotionPlan_GetResult_Response result(::tesseract_msgs::action::GetMotionPlan_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::action::GetMotionPlan_GetResult_Response msg_;
};

class Init_GetMotionPlan_GetResult_Response_status
{
public:
  Init_GetMotionPlan_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMotionPlan_GetResult_Response_result status(::tesseract_msgs::action::GetMotionPlan_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetMotionPlan_GetResult_Response_result(msg_);
  }

private:
  ::tesseract_msgs::action::GetMotionPlan_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::action::GetMotionPlan_GetResult_Response>()
{
  return tesseract_msgs::action::builder::Init_GetMotionPlan_GetResult_Response_status();
}

}  // namespace tesseract_msgs


namespace tesseract_msgs
{

namespace action
{

namespace builder
{

class Init_GetMotionPlan_FeedbackMessage_feedback
{
public:
  explicit Init_GetMotionPlan_FeedbackMessage_feedback(::tesseract_msgs::action::GetMotionPlan_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::action::GetMotionPlan_FeedbackMessage feedback(::tesseract_msgs::action::GetMotionPlan_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::action::GetMotionPlan_FeedbackMessage msg_;
};

class Init_GetMotionPlan_FeedbackMessage_goal_id
{
public:
  Init_GetMotionPlan_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMotionPlan_FeedbackMessage_feedback goal_id(::tesseract_msgs::action::GetMotionPlan_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GetMotionPlan_FeedbackMessage_feedback(msg_);
  }

private:
  ::tesseract_msgs::action::GetMotionPlan_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::action::GetMotionPlan_FeedbackMessage>()
{
  return tesseract_msgs::action::builder::Init_GetMotionPlan_FeedbackMessage_goal_id();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__ACTION__DETAIL__GET_MOTION_PLAN__BUILDER_HPP_
