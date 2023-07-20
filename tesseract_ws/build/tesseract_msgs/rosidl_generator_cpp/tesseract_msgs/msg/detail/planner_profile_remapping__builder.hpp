// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/PlannerProfileRemapping.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLANNER_PROFILE_REMAPPING__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__PLANNER_PROFILE_REMAPPING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/planner_profile_remapping__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_PlannerProfileRemapping_mapping
{
public:
  explicit Init_PlannerProfileRemapping_mapping(::tesseract_msgs::msg::PlannerProfileRemapping & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::PlannerProfileRemapping mapping(::tesseract_msgs::msg::PlannerProfileRemapping::_mapping_type arg)
  {
    msg_.mapping = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::PlannerProfileRemapping msg_;
};

class Init_PlannerProfileRemapping_planner
{
public:
  Init_PlannerProfileRemapping_planner()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlannerProfileRemapping_mapping planner(::tesseract_msgs::msg::PlannerProfileRemapping::_planner_type arg)
  {
    msg_.planner = std::move(arg);
    return Init_PlannerProfileRemapping_mapping(msg_);
  }

private:
  ::tesseract_msgs::msg::PlannerProfileRemapping msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::PlannerProfileRemapping>()
{
  return tesseract_msgs::msg::builder::Init_PlannerProfileRemapping_planner();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLANNER_PROFILE_REMAPPING__BUILDER_HPP_
