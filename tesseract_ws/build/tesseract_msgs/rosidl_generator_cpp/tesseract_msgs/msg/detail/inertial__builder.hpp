// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tesseract_msgs:msg/Inertial.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__INERTIAL__BUILDER_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__INERTIAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tesseract_msgs/msg/detail/inertial__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tesseract_msgs
{

namespace msg
{

namespace builder
{

class Init_Inertial_empty
{
public:
  explicit Init_Inertial_empty(::tesseract_msgs::msg::Inertial & msg)
  : msg_(msg)
  {}
  ::tesseract_msgs::msg::Inertial empty(::tesseract_msgs::msg::Inertial::_empty_type arg)
  {
    msg_.empty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tesseract_msgs::msg::Inertial msg_;
};

class Init_Inertial_izz
{
public:
  explicit Init_Inertial_izz(::tesseract_msgs::msg::Inertial & msg)
  : msg_(msg)
  {}
  Init_Inertial_empty izz(::tesseract_msgs::msg::Inertial::_izz_type arg)
  {
    msg_.izz = std::move(arg);
    return Init_Inertial_empty(msg_);
  }

private:
  ::tesseract_msgs::msg::Inertial msg_;
};

class Init_Inertial_iyz
{
public:
  explicit Init_Inertial_iyz(::tesseract_msgs::msg::Inertial & msg)
  : msg_(msg)
  {}
  Init_Inertial_izz iyz(::tesseract_msgs::msg::Inertial::_iyz_type arg)
  {
    msg_.iyz = std::move(arg);
    return Init_Inertial_izz(msg_);
  }

private:
  ::tesseract_msgs::msg::Inertial msg_;
};

class Init_Inertial_iyy
{
public:
  explicit Init_Inertial_iyy(::tesseract_msgs::msg::Inertial & msg)
  : msg_(msg)
  {}
  Init_Inertial_iyz iyy(::tesseract_msgs::msg::Inertial::_iyy_type arg)
  {
    msg_.iyy = std::move(arg);
    return Init_Inertial_iyz(msg_);
  }

private:
  ::tesseract_msgs::msg::Inertial msg_;
};

class Init_Inertial_ixz
{
public:
  explicit Init_Inertial_ixz(::tesseract_msgs::msg::Inertial & msg)
  : msg_(msg)
  {}
  Init_Inertial_iyy ixz(::tesseract_msgs::msg::Inertial::_ixz_type arg)
  {
    msg_.ixz = std::move(arg);
    return Init_Inertial_iyy(msg_);
  }

private:
  ::tesseract_msgs::msg::Inertial msg_;
};

class Init_Inertial_ixy
{
public:
  explicit Init_Inertial_ixy(::tesseract_msgs::msg::Inertial & msg)
  : msg_(msg)
  {}
  Init_Inertial_ixz ixy(::tesseract_msgs::msg::Inertial::_ixy_type arg)
  {
    msg_.ixy = std::move(arg);
    return Init_Inertial_ixz(msg_);
  }

private:
  ::tesseract_msgs::msg::Inertial msg_;
};

class Init_Inertial_ixx
{
public:
  explicit Init_Inertial_ixx(::tesseract_msgs::msg::Inertial & msg)
  : msg_(msg)
  {}
  Init_Inertial_ixy ixx(::tesseract_msgs::msg::Inertial::_ixx_type arg)
  {
    msg_.ixx = std::move(arg);
    return Init_Inertial_ixy(msg_);
  }

private:
  ::tesseract_msgs::msg::Inertial msg_;
};

class Init_Inertial_mass
{
public:
  explicit Init_Inertial_mass(::tesseract_msgs::msg::Inertial & msg)
  : msg_(msg)
  {}
  Init_Inertial_ixx mass(::tesseract_msgs::msg::Inertial::_mass_type arg)
  {
    msg_.mass = std::move(arg);
    return Init_Inertial_ixx(msg_);
  }

private:
  ::tesseract_msgs::msg::Inertial msg_;
};

class Init_Inertial_origin
{
public:
  Init_Inertial_origin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Inertial_mass origin(::tesseract_msgs::msg::Inertial::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_Inertial_mass(msg_);
  }

private:
  ::tesseract_msgs::msg::Inertial msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tesseract_msgs::msg::Inertial>()
{
  return tesseract_msgs::msg::builder::Init_Inertial_origin();
}

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__INERTIAL__BUILDER_HPP_
