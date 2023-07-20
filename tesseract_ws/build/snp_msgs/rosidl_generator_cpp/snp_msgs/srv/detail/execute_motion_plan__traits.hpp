// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from snp_msgs:srv/ExecuteMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__SRV__DETAIL__EXECUTE_MOTION_PLAN__TRAITS_HPP_
#define SNP_MSGS__SRV__DETAIL__EXECUTE_MOTION_PLAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "snp_msgs/srv/detail/execute_motion_plan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'motion_plan'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"

namespace snp_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExecuteMotionPlan_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: motion_plan
  {
    out << "motion_plan: ";
    to_flow_style_yaml(msg.motion_plan, out);
    out << ", ";
  }

  // member: use_tool
  {
    out << "use_tool: ";
    rosidl_generator_traits::value_to_yaml(msg.use_tool, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteMotionPlan_Request & msg,
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

  // member: use_tool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_tool: ";
    rosidl_generator_traits::value_to_yaml(msg.use_tool, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteMotionPlan_Request & msg, bool use_flow_style = false)
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
  const snp_msgs::srv::ExecuteMotionPlan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  snp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use snp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const snp_msgs::srv::ExecuteMotionPlan_Request & msg)
{
  return snp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<snp_msgs::srv::ExecuteMotionPlan_Request>()
{
  return "snp_msgs::srv::ExecuteMotionPlan_Request";
}

template<>
inline const char * name<snp_msgs::srv::ExecuteMotionPlan_Request>()
{
  return "snp_msgs/srv/ExecuteMotionPlan_Request";
}

template<>
struct has_fixed_size<snp_msgs::srv::ExecuteMotionPlan_Request>
  : std::integral_constant<bool, has_fixed_size<trajectory_msgs::msg::JointTrajectory>::value> {};

template<>
struct has_bounded_size<snp_msgs::srv::ExecuteMotionPlan_Request>
  : std::integral_constant<bool, has_bounded_size<trajectory_msgs::msg::JointTrajectory>::value> {};

template<>
struct is_message<snp_msgs::srv::ExecuteMotionPlan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace snp_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExecuteMotionPlan_Response & msg,
  std::ostream & out)
{
  out << "{";
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
  const ExecuteMotionPlan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const ExecuteMotionPlan_Response & msg, bool use_flow_style = false)
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
  const snp_msgs::srv::ExecuteMotionPlan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  snp_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use snp_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const snp_msgs::srv::ExecuteMotionPlan_Response & msg)
{
  return snp_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<snp_msgs::srv::ExecuteMotionPlan_Response>()
{
  return "snp_msgs::srv::ExecuteMotionPlan_Response";
}

template<>
inline const char * name<snp_msgs::srv::ExecuteMotionPlan_Response>()
{
  return "snp_msgs/srv/ExecuteMotionPlan_Response";
}

template<>
struct has_fixed_size<snp_msgs::srv::ExecuteMotionPlan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<snp_msgs::srv::ExecuteMotionPlan_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<snp_msgs::srv::ExecuteMotionPlan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<snp_msgs::srv::ExecuteMotionPlan>()
{
  return "snp_msgs::srv::ExecuteMotionPlan";
}

template<>
inline const char * name<snp_msgs::srv::ExecuteMotionPlan>()
{
  return "snp_msgs/srv/ExecuteMotionPlan";
}

template<>
struct has_fixed_size<snp_msgs::srv::ExecuteMotionPlan>
  : std::integral_constant<
    bool,
    has_fixed_size<snp_msgs::srv::ExecuteMotionPlan_Request>::value &&
    has_fixed_size<snp_msgs::srv::ExecuteMotionPlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<snp_msgs::srv::ExecuteMotionPlan>
  : std::integral_constant<
    bool,
    has_bounded_size<snp_msgs::srv::ExecuteMotionPlan_Request>::value &&
    has_bounded_size<snp_msgs::srv::ExecuteMotionPlan_Response>::value
  >
{
};

template<>
struct is_service<snp_msgs::srv::ExecuteMotionPlan>
  : std::true_type
{
};

template<>
struct is_service_request<snp_msgs::srv::ExecuteMotionPlan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<snp_msgs::srv::ExecuteMotionPlan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SNP_MSGS__SRV__DETAIL__EXECUTE_MOTION_PLAN__TRAITS_HPP_
