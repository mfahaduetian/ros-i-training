// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:srv/ComputeContactResultVector.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__DETAIL__COMPUTE_CONTACT_RESULT_VECTOR__TRAITS_HPP_
#define TESSERACT_MSGS__SRV__DETAIL__COMPUTE_CONTACT_RESULT_VECTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/srv/detail/compute_contact_result_vector__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joint_states'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"

namespace tesseract_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ComputeContactResultVector_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_states
  {
    out << "joint_states: ";
    to_flow_style_yaml(msg.joint_states, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeContactResultVector_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_states:\n";
    to_block_style_yaml(msg.joint_states, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeContactResultVector_Request & msg, bool use_flow_style = false)
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

}  // namespace tesseract_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tesseract_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tesseract_msgs::srv::ComputeContactResultVector_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::srv::ComputeContactResultVector_Request & msg)
{
  return tesseract_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::srv::ComputeContactResultVector_Request>()
{
  return "tesseract_msgs::srv::ComputeContactResultVector_Request";
}

template<>
inline const char * name<tesseract_msgs::srv::ComputeContactResultVector_Request>()
{
  return "tesseract_msgs/srv/ComputeContactResultVector_Request";
}

template<>
struct has_fixed_size<tesseract_msgs::srv::ComputeContactResultVector_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::srv::ComputeContactResultVector_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct is_message<tesseract_msgs::srv::ComputeContactResultVector_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'collision_result'
#include "tesseract_msgs/msg/detail/contact_result_vector__traits.hpp"

namespace tesseract_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ComputeContactResultVector_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: collision_result
  {
    out << "collision_result: ";
    to_flow_style_yaml(msg.collision_result, out);
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
  const ComputeContactResultVector_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: collision_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_result:\n";
    to_block_style_yaml(msg.collision_result, out, indentation + 2);
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

inline std::string to_yaml(const ComputeContactResultVector_Response & msg, bool use_flow_style = false)
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

}  // namespace tesseract_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tesseract_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tesseract_msgs::srv::ComputeContactResultVector_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::srv::ComputeContactResultVector_Response & msg)
{
  return tesseract_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::srv::ComputeContactResultVector_Response>()
{
  return "tesseract_msgs::srv::ComputeContactResultVector_Response";
}

template<>
inline const char * name<tesseract_msgs::srv::ComputeContactResultVector_Response>()
{
  return "tesseract_msgs/srv/ComputeContactResultVector_Response";
}

template<>
struct has_fixed_size<tesseract_msgs::srv::ComputeContactResultVector_Response>
  : std::integral_constant<bool, has_fixed_size<tesseract_msgs::msg::ContactResultVector>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::srv::ComputeContactResultVector_Response>
  : std::integral_constant<bool, has_bounded_size<tesseract_msgs::msg::ContactResultVector>::value> {};

template<>
struct is_message<tesseract_msgs::srv::ComputeContactResultVector_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::srv::ComputeContactResultVector>()
{
  return "tesseract_msgs::srv::ComputeContactResultVector";
}

template<>
inline const char * name<tesseract_msgs::srv::ComputeContactResultVector>()
{
  return "tesseract_msgs/srv/ComputeContactResultVector";
}

template<>
struct has_fixed_size<tesseract_msgs::srv::ComputeContactResultVector>
  : std::integral_constant<
    bool,
    has_fixed_size<tesseract_msgs::srv::ComputeContactResultVector_Request>::value &&
    has_fixed_size<tesseract_msgs::srv::ComputeContactResultVector_Response>::value
  >
{
};

template<>
struct has_bounded_size<tesseract_msgs::srv::ComputeContactResultVector>
  : std::integral_constant<
    bool,
    has_bounded_size<tesseract_msgs::srv::ComputeContactResultVector_Request>::value &&
    has_bounded_size<tesseract_msgs::srv::ComputeContactResultVector_Response>::value
  >
{
};

template<>
struct is_service<tesseract_msgs::srv::ComputeContactResultVector>
  : std::true_type
{
};

template<>
struct is_service_request<tesseract_msgs::srv::ComputeContactResultVector_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tesseract_msgs::srv::ComputeContactResultVector_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__SRV__DETAIL__COMPUTE_CONTACT_RESULT_VECTOR__TRAITS_HPP_
