// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from myworkcell_core:srv/LocalizePart.idl
// generated code does not contain a copyright notice

#ifndef MYWORKCELL_CORE__SRV__DETAIL__LOCALIZE_PART__TRAITS_HPP_
#define MYWORKCELL_CORE__SRV__DETAIL__LOCALIZE_PART__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "myworkcell_core/srv/detail/localize_part__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace myworkcell_core
{

namespace srv
{

inline void to_flow_style_yaml(
  const LocalizePart_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: base_frame
  {
    out << "base_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.base_frame, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LocalizePart_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: base_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.base_frame, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocalizePart_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace myworkcell_core

namespace rosidl_generator_traits
{

[[deprecated("use myworkcell_core::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const myworkcell_core::srv::LocalizePart_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  myworkcell_core::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use myworkcell_core::srv::to_yaml() instead")]]
inline std::string to_yaml(const myworkcell_core::srv::LocalizePart_Request & msg)
{
  return myworkcell_core::srv::to_yaml(msg);
}

template<>
inline const char * data_type<myworkcell_core::srv::LocalizePart_Request>()
{
  return "myworkcell_core::srv::LocalizePart_Request";
}

template<>
inline const char * name<myworkcell_core::srv::LocalizePart_Request>()
{
  return "myworkcell_core/srv/LocalizePart_Request";
}

template<>
struct has_fixed_size<myworkcell_core::srv::LocalizePart_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<myworkcell_core::srv::LocalizePart_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<myworkcell_core::srv::LocalizePart_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace myworkcell_core
{

namespace srv
{

inline void to_flow_style_yaml(
  const LocalizePart_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LocalizePart_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocalizePart_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace myworkcell_core

namespace rosidl_generator_traits
{

[[deprecated("use myworkcell_core::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const myworkcell_core::srv::LocalizePart_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  myworkcell_core::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use myworkcell_core::srv::to_yaml() instead")]]
inline std::string to_yaml(const myworkcell_core::srv::LocalizePart_Response & msg)
{
  return myworkcell_core::srv::to_yaml(msg);
}

template<>
inline const char * data_type<myworkcell_core::srv::LocalizePart_Response>()
{
  return "myworkcell_core::srv::LocalizePart_Response";
}

template<>
inline const char * name<myworkcell_core::srv::LocalizePart_Response>()
{
  return "myworkcell_core/srv/LocalizePart_Response";
}

template<>
struct has_fixed_size<myworkcell_core::srv::LocalizePart_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<myworkcell_core::srv::LocalizePart_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<myworkcell_core::srv::LocalizePart_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<myworkcell_core::srv::LocalizePart>()
{
  return "myworkcell_core::srv::LocalizePart";
}

template<>
inline const char * name<myworkcell_core::srv::LocalizePart>()
{
  return "myworkcell_core/srv/LocalizePart";
}

template<>
struct has_fixed_size<myworkcell_core::srv::LocalizePart>
  : std::integral_constant<
    bool,
    has_fixed_size<myworkcell_core::srv::LocalizePart_Request>::value &&
    has_fixed_size<myworkcell_core::srv::LocalizePart_Response>::value
  >
{
};

template<>
struct has_bounded_size<myworkcell_core::srv::LocalizePart>
  : std::integral_constant<
    bool,
    has_bounded_size<myworkcell_core::srv::LocalizePart_Request>::value &&
    has_bounded_size<myworkcell_core::srv::LocalizePart_Response>::value
  >
{
};

template<>
struct is_service<myworkcell_core::srv::LocalizePart>
  : std::true_type
{
};

template<>
struct is_service_request<myworkcell_core::srv::LocalizePart_Request>
  : std::true_type
{
};

template<>
struct is_service_response<myworkcell_core::srv::LocalizePart_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYWORKCELL_CORE__SRV__DETAIL__LOCALIZE_PART__TRAITS_HPP_
