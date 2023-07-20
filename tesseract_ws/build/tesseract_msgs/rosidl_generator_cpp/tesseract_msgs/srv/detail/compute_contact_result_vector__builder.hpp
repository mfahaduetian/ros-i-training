// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:srv/ComputeContactResultVector.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__DETAIL__COMPUTE_CONTACT_RESULT_VECTOR__BUILDER_HPP_
#define TESSERACT_MSGS__SRV__DETAIL__COMPUTE_CONTACT_RESULT_VECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/srv/detail/compute_contact_result_vector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace srv
{

namespace builder
{

class Init_ComputeContactResultVector_Request_joint_states
{
public:
  Init_ComputeContactResultVector_Request_joint_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tesseract_msgs::srv::ComputeContactResultVector_Request joint_states(::tesseract_msgs::srv::ComputeContactResultVector_Request::_joint_states_type arg)
  {
    msg_.joint_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::srv::ComputeContactResultVector_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::srv::ComputeContactResultVector_Request>()
{
  return tesseract_msgs::srv::builder::Init_ComputeContactResultVector_Request_joint_states();
}

}  // namespace tesseract_msgs


namespace tesseract_msgs
{

namespace srv
{

namespace builder
{

class Init_ComputeContactResultVector_Response_success
{
public:
  explicit Init_ComputeContactResultVector_Response_success(::tesseract_msgs::srv::ComputeContactResultVector_Response & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::srv::ComputeContactResultVector_Response success(::tesseract_msgs::srv::ComputeContactResultVector_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::srv::ComputeContactResultVector_Response msg_;
};

class Init_ComputeContactResultVector_Response_collision_result
{
public:
  Init_ComputeContactResultVector_Response_collision_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeContactResultVector_Response_success collision_result(::tesseract_msgs::srv::ComputeContactResultVector_Response::_collision_result_type arg)
  {
    msg_.collision_result = std::move(arg);
    return Init_ComputeContactResultVector_Response_success(msg_);
  }

private:
  ::tesseract_msgs::srv::ComputeContactResultVector_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::srv::ComputeContactResultVector_Response>()
{
  return tesseract_msgs::srv::builder::Init_ComputeContactResultVector_Response_collision_result();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__SRV__DETAIL__COMPUTE_CONTACT_RESULT_VECTOR__BUILDER_HPP_
