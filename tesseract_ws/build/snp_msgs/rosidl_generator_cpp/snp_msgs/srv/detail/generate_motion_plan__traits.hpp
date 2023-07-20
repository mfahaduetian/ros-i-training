// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from snp_msgs:srv/GenerateMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__SRV__DETAIL__GENERATE_MOTION_PLAN__TRAITS_HPP_
#define SNP_MSGS__SRV__DETAIL__GENERATE_MOTION_PLAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "snp_msgs/srv/detail/generate_motion_plan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tool_paths'
#include "snp_msgs/msg/detail/tool_paths__traits.hpp"

namespace snp_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateMotionPlan_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: tool_paths
  {
    out << "tool_paths: ";
    to_flow_style_yaml(msg.tool_paths, out);
    out << ", ";
  }

  // member: motion_group
  {
    out << "motion_group: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_group, out);
    out << ", ";
  }

  // member: tcp_frame
  {
    out << "tcp_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.tcp_frame, out);
    out << ", ";
  }

  // member: mesh_filename
  {
    out << "mesh_filename: ";
    rosidl_generator_traits::value_to_yaml(msg.mesh_filename, out);
    out << ", ";
  }

  // member: mesh_frame
  {
    out << "mesh_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.mesh_frame, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateMotionPlan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tool_paths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_paths:\n";
    to_block_style_yaml(msg.tool_paths, out, indentation + 2);
  }

  // member: motion_group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_group: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_group, out);
    out << "\n";
  }

  // member: tcp_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tcp_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.tcp_frame, out);
    out << "\n";
  }

  // member: mesh_filename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mesh_filename: ";
    rosidl_generator_traits::value_to_yaml(msg.mesh_filename, out);
    out << "\n";
  }

  // member: mesh_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mesh_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.mesh_frame, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateMotionPlan_Request & msg, bool use_flow_style = false)
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

}  // namespace snp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use snp_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const snp_msgs::srv::GenerateMotionPlan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  snp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use snp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const snp_msgs::srv::GenerateMotionPlan_Request & msg)
{
  return snp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<snp_msgs::srv::GenerateMotionPlan_Request>()
{
  return "snp_msgs::srv::GenerateMotionPlan_Request";
}

template<>
inline const char * name<snp_msgs::srv::GenerateMotionPlan_Request>()
{
  return "snp_msgs/srv/GenerateMotionPlan_Request";
}

template<>
struct has_fixed_size<snp_msgs::srv::GenerateMotionPlan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<snp_msgs::srv::GenerateMotionPlan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<snp_msgs::srv::GenerateMotionPlan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'motion_plan'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"

namespace snp_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateMotionPlan_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: motion_plan
  {
    out << "motion_plan: ";
    to_flow_style_yaml(msg.motion_plan, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateMotionPlan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motion_plan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_plan:\n";
    to_block_style_yaml(msg.motion_plan, out, indentation + 2);
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateMotionPlan_Response & msg, bool use_flow_style = false)
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

}  // namespace snp_msgs

namespace rosidl_generator_traits
{

[[deprecated("use snp_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const snp_msgs::srv::GenerateMotionPlan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  snp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use snp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const snp_msgs::srv::GenerateMotionPlan_Response & msg)
{
  return snp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<snp_msgs::srv::GenerateMotionPlan_Response>()
{
  return "snp_msgs::srv::GenerateMotionPlan_Response";
}

template<>
inline const char * name<snp_msgs::srv::GenerateMotionPlan_Response>()
{
  return "snp_msgs/srv/GenerateMotionPlan_Response";
}

template<>
struct has_fixed_size<snp_msgs::srv::GenerateMotionPlan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<snp_msgs::srv::GenerateMotionPlan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<snp_msgs::srv::GenerateMotionPlan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<snp_msgs::srv::GenerateMotionPlan>()
{
  return "snp_msgs::srv::GenerateMotionPlan";
}

template<>
inline const char * name<snp_msgs::srv::GenerateMotionPlan>()
{
  return "snp_msgs/srv/GenerateMotionPlan";
}

template<>
struct has_fixed_size<snp_msgs::srv::GenerateMotionPlan>
  : std::integral_constant<
    bool,
    has_fixed_size<snp_msgs::srv::GenerateMotionPlan_Request>::value &&
    has_fixed_size<snp_msgs::srv::GenerateMotionPlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<snp_msgs::srv::GenerateMotionPlan>
  : std::integral_constant<
    bool,
    has_bounded_size<snp_msgs::srv::GenerateMotionPlan_Request>::value &&
    has_bounded_size<snp_msgs::srv::GenerateMotionPlan_Response>::value
  >
{
};

template<>
struct is_service<snp_msgs::srv::GenerateMotionPlan>
  : std::true_type
{
};

template<>
struct is_service_request<snp_msgs::srv::GenerateMotionPlan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<snp_msgs::srv::GenerateMotionPlan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SNP_MSGS__SRV__DETAIL__GENERATE_MOTION_PLAN__TRAITS_HPP_
