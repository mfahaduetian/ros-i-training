// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rviz_polygon_selection_tool:srv/GetSelection.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__TRAITS_HPP_
#define RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rviz_polygon_selection_tool/srv/detail/get_selection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rviz_polygon_selection_tool
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSelection_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetSelection_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetSelection_Request & msg, bool use_flow_style = false)
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

}  // namespace rviz_polygon_selection_tool

namespace rosidl_generator_traits
{

[[deprecated("use rviz_polygon_selection_tool::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rviz_polygon_selection_tool::srv::GetSelection_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rviz_polygon_selection_tool::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rviz_polygon_selection_tool::srv::to_yaml() instead")]]
inline std::string to_yaml(const rviz_polygon_selection_tool::srv::GetSelection_Request & msg)
{
  return rviz_polygon_selection_tool::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rviz_polygon_selection_tool::srv::GetSelection_Request>()
{
  return "rviz_polygon_selection_tool::srv::GetSelection_Request";
}

template<>
inline const char * name<rviz_polygon_selection_tool::srv::GetSelection_Request>()
{
  return "rviz_polygon_selection_tool/srv/GetSelection_Request";
}

template<>
struct has_fixed_size<rviz_polygon_selection_tool::srv::GetSelection_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rviz_polygon_selection_tool::srv::GetSelection_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rviz_polygon_selection_tool::srv::GetSelection_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'selection'
#include "geometry_msgs/msg/detail/point_stamped__traits.hpp"

namespace rviz_polygon_selection_tool
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSelection_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: selection
  {
    if (msg.selection.size() == 0) {
      out << "selection: []";
    } else {
      out << "selection: [";
      size_t pending_items = msg.selection.size();
      for (auto item : msg.selection) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetSelection_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: selection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.selection.size() == 0) {
      out << "selection: []\n";
    } else {
      out << "selection:\n";
      for (auto item : msg.selection) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetSelection_Response & msg, bool use_flow_style = false)
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

}  // namespace rviz_polygon_selection_tool

namespace rosidl_generator_traits
{

[[deprecated("use rviz_polygon_selection_tool::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rviz_polygon_selection_tool::srv::GetSelection_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rviz_polygon_selection_tool::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rviz_polygon_selection_tool::srv::to_yaml() instead")]]
inline std::string to_yaml(const rviz_polygon_selection_tool::srv::GetSelection_Response & msg)
{
  return rviz_polygon_selection_tool::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rviz_polygon_selection_tool::srv::GetSelection_Response>()
{
  return "rviz_polygon_selection_tool::srv::GetSelection_Response";
}

template<>
inline const char * name<rviz_polygon_selection_tool::srv::GetSelection_Response>()
{
  return "rviz_polygon_selection_tool/srv/GetSelection_Response";
}

template<>
struct has_fixed_size<rviz_polygon_selection_tool::srv::GetSelection_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rviz_polygon_selection_tool::srv::GetSelection_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rviz_polygon_selection_tool::srv::GetSelection_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rviz_polygon_selection_tool::srv::GetSelection>()
{
  return "rviz_polygon_selection_tool::srv::GetSelection";
}

template<>
inline const char * name<rviz_polygon_selection_tool::srv::GetSelection>()
{
  return "rviz_polygon_selection_tool/srv/GetSelection";
}

template<>
struct has_fixed_size<rviz_polygon_selection_tool::srv::GetSelection>
  : std::integral_constant<
    bool,
    has_fixed_size<rviz_polygon_selection_tool::srv::GetSelection_Request>::value &&
    has_fixed_size<rviz_polygon_selection_tool::srv::GetSelection_Response>::value
  >
{
};

template<>
struct has_bounded_size<rviz_polygon_selection_tool::srv::GetSelection>
  : std::integral_constant<
    bool,
    has_bounded_size<rviz_polygon_selection_tool::srv::GetSelection_Request>::value &&
    has_bounded_size<rviz_polygon_selection_tool::srv::GetSelection_Response>::value
  >
{
};

template<>
struct is_service<rviz_polygon_selection_tool::srv::GetSelection>
  : std::true_type
{
};

template<>
struct is_service_request<rviz_polygon_selection_tool::srv::GetSelection_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rviz_polygon_selection_tool::srv::GetSelection_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__TRAITS_HPP_
