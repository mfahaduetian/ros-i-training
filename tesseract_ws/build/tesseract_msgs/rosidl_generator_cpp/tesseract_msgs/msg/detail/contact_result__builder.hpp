// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/ContactResult.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/contact_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_ContactResult_cc_transform
{
public:
  explicit Init_ContactResult_cc_transform(::tesseract_msgs::msg::ContactResult & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::ContactResult cc_transform(::tesseract_msgs::msg::ContactResult::_cc_transform_type arg)
  {
    msg_.cc_transform = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactResult msg_;
};

class Init_ContactResult_cc_type
{
public:
  explicit Init_ContactResult_cc_type(::tesseract_msgs::msg::ContactResult & msg)
  : msg_(msg)
  {}
  Init_ContactResult_cc_transform cc_type(::tesseract_msgs::msg::ContactResult::_cc_type_type arg)
  {
    msg_.cc_type = std::move(arg);
    return Init_ContactResult_cc_transform(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactResult msg_;
};

class Init_ContactResult_cc_time
{
public:
  explicit Init_ContactResult_cc_time(::tesseract_msgs::msg::ContactResult & msg)
  : msg_(msg)
  {}
  Init_ContactResult_cc_type cc_time(::tesseract_msgs::msg::ContactResult::_cc_time_type arg)
  {
    msg_.cc_time = std::move(arg);
    return Init_ContactResult_cc_type(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactResult msg_;
};

class Init_ContactResult_normal
{
public:
  explicit Init_ContactResult_normal(::tesseract_msgs::msg::ContactResult & msg)
  : msg_(msg)
  {}
  Init_ContactResult_cc_time normal(::tesseract_msgs::msg::ContactResult::_normal_type arg)
  {
    msg_.normal = std::move(arg);
    return Init_ContactResult_cc_time(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactResult msg_;
};

class Init_ContactResult_transform
{
public:
  explicit Init_ContactResult_transform(::tesseract_msgs::msg::ContactResult & msg)
  : msg_(msg)
  {}
  Init_ContactResult_normal transform(::tesseract_msgs::msg::ContactResult::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return Init_ContactResult_normal(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactResult msg_;
};

class Init_ContactResult_nearest_points_local
{
public:
  explicit Init_ContactResult_nearest_points_local(::tesseract_msgs::msg::ContactResult & msg)
  : msg_(msg)
  {}
  Init_ContactResult_transform nearest_points_local(::tesseract_msgs::msg::ContactResult::_nearest_points_local_type arg)
  {
    msg_.nearest_points_local = std::move(arg);
    return Init_ContactResult_transform(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactResult msg_;
};

class Init_ContactResult_nearest_points
{
public:
  explicit Init_ContactResult_nearest_points(::tesseract_msgs::msg::ContactResult & msg)
  : msg_(msg)
  {}
  Init_ContactResult_nearest_points_local nearest_points(::tesseract_msgs::msg::ContactResult::_nearest_points_type arg)
  {
    msg_.nearest_points = std::move(arg);
    return Init_ContactResult_nearest_points_local(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactResult msg_;
};

class Init_ContactResult_subshape_id
{
public:
  explicit Init_ContactResult_subshape_id(::tesseract_msgs::msg::ContactResult & msg)
  : msg_(msg)
  {}
  Init_ContactResult_nearest_points subshape_id(::tesseract_msgs::msg::ContactResult::_subshape_id_type arg)
  {
    msg_.subshape_id = std::move(arg);
    return Init_ContactResult_nearest_points(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactResult msg_;
};

class Init_ContactResult_shape_id
{
public:
  explicit Init_ContactResult_shape_id(::tesseract_msgs::msg::ContactResult & msg)
  : msg_(msg)
  {}
  Init_ContactResult_subshape_id shape_id(::tesseract_msgs::msg::ContactResult::_shape_id_type arg)
  {
    msg_.shape_id = std::move(arg);
    return Init_ContactResult_subshape_id(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactResult msg_;
};

class Init_ContactResult_link_names
{
public:
  explicit Init_ContactResult_link_names(::tesseract_msgs::msg::ContactResult & msg)
  : msg_(msg)
  {}
  Init_ContactResult_shape_id link_names(::tesseract_msgs::msg::ContactResult::_link_names_type arg)
  {
    msg_.link_names = std::move(arg);
    return Init_ContactResult_shape_id(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactResult msg_;
};

class Init_ContactResult_type_id
{
public:
  explicit Init_ContactResult_type_id(::tesseract_msgs::msg::ContactResult & msg)
  : msg_(msg)
  {}
  Init_ContactResult_link_names type_id(::tesseract_msgs::msg::ContactResult::_type_id_type arg)
  {
    msg_.type_id = std::move(arg);
    return Init_ContactResult_link_names(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactResult msg_;
};

class Init_ContactResult_distance
{
public:
  explicit Init_ContactResult_distance(::tesseract_msgs::msg::ContactResult & msg)
  : msg_(msg)
  {}
  Init_ContactResult_type_id distance(::tesseract_msgs::msg::ContactResult::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_ContactResult_type_id(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactResult msg_;
};

class Init_ContactResult_stamp
{
public:
  Init_ContactResult_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContactResult_distance stamp(::tesseract_msgs::msg::ContactResult::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ContactResult_distance(msg_);
  }

private:
  ::tesseract_msgs::msg::ContactResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::ContactResult>()
{
  return tesseract_msgs::msg::builder::Init_ContactResult_stamp();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT__BUILDER_HPP_
