// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rviz_polygon_selection_tool:srv/GetSelection.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__BUILDER_HPP_
#define RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rviz_polygon_selection_tool/srv/detail/get_selection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rviz_polygon_selection_tool
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rviz_polygon_selection_tool::srv::GetSelection_Request>()
{
  return ::rviz_polygon_selection_tool::srv::GetSelection_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rviz_polygon_selection_tool


namespace rviz_polygon_selection_tool
{

namespace srv
{

namespace builder
{

class Init_GetSelection_Response_selection
{
public:
  Init_GetSelection_Response_selection()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rviz_polygon_selection_tool::srv::GetSelection_Response selection(::rviz_polygon_selection_tool::srv::GetSelection_Response::_selection_type arg)
  {
    msg_.selection = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rviz_polygon_selection_tool::srv::GetSelection_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rviz_polygon_selection_tool::srv::GetSelection_Response>()
{
  return rviz_polygon_selection_tool::srv::builder::Init_GetSelection_Response_selection();
}

}  // namespace rviz_polygon_selection_tool

#endif  // RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__BUILDER_HPP_
