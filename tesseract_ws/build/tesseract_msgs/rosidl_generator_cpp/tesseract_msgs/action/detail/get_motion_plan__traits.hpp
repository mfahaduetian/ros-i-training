// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:action/GetMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__ACTION__DETAIL__GET_MOTION_PLAN__TRAITS_HPP_
#define TESSERACT_MSGS__ACTION__DETAIL__GET_MOTION_PLAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/action/detail/get_motion_plan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "tesseract_msgs/msg/detail/planning_request__traits.hpp"

namespace tesseract_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetMotionPlan_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMotionPlan_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request:\n";
    to_block_style_yaml(msg.request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMotionPlan_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tesseract_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tesseract_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tesseract_msgs::action::GetMotionPlan_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::action::GetMotionPlan_Goal & msg)
{
  return tesseract_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::action::GetMotionPlan_Goal>()
{
  return "tesseract_msgs::action::GetMotionPlan_Goal";
}

template<>
inline const char * name<tesseract_msgs::action::GetMotionPlan_Goal>()
{
  return "tesseract_msgs/action/GetMotionPlan_Goal";
}

template<>
struct has_fixed_size<tesseract_msgs::action::GetMotionPlan_Goal>
  : std::integral_constant<bool, has_fixed_size<tesseract_msgs::msg::PlanningRequest>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::action::GetMotionPlan_Goal>
  : std::integral_constant<bool, has_bounded_size<tesseract_msgs::msg::PlanningRequest>::value> {};

template<>
struct is_message<tesseract_msgs::action::GetMotionPlan_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
#include "tesseract_msgs/msg/detail/planning_response__traits.hpp"

namespace tesseract_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetMotionPlan_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    to_flow_style_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMotionPlan_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response:\n";
    to_block_style_yaml(msg.response, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMotionPlan_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tesseract_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tesseract_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tesseract_msgs::action::GetMotionPlan_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::action::GetMotionPlan_Result & msg)
{
  return tesseract_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::action::GetMotionPlan_Result>()
{
  return "tesseract_msgs::action::GetMotionPlan_Result";
}

template<>
inline const char * name<tesseract_msgs::action::GetMotionPlan_Result>()
{
  return "tesseract_msgs/action/GetMotionPlan_Result";
}

template<>
struct has_fixed_size<tesseract_msgs::action::GetMotionPlan_Result>
  : std::integral_constant<bool, has_fixed_size<tesseract_msgs::msg::PlanningResponse>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::action::GetMotionPlan_Result>
  : std::integral_constant<bool, has_bounded_size<tesseract_msgs::msg::PlanningResponse>::value> {};

template<>
struct is_message<tesseract_msgs::action::GetMotionPlan_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tesseract_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetMotionPlan_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMotionPlan_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMotionPlan_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tesseract_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tesseract_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tesseract_msgs::action::GetMotionPlan_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::action::GetMotionPlan_Feedback & msg)
{
  return tesseract_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::action::GetMotionPlan_Feedback>()
{
  return "tesseract_msgs::action::GetMotionPlan_Feedback";
}

template<>
inline const char * name<tesseract_msgs::action::GetMotionPlan_Feedback>()
{
  return "tesseract_msgs/action/GetMotionPlan_Feedback";
}

template<>
struct has_fixed_size<tesseract_msgs::action::GetMotionPlan_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tesseract_msgs::action::GetMotionPlan_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tesseract_msgs::action::GetMotionPlan_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "tesseract_msgs/action/detail/get_motion_plan__traits.hpp"

namespace tesseract_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetMotionPlan_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMotionPlan_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMotionPlan_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tesseract_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tesseract_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tesseract_msgs::action::GetMotionPlan_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::action::GetMotionPlan_SendGoal_Request & msg)
{
  return tesseract_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::action::GetMotionPlan_SendGoal_Request>()
{
  return "tesseract_msgs::action::GetMotionPlan_SendGoal_Request";
}

template<>
inline const char * name<tesseract_msgs::action::GetMotionPlan_SendGoal_Request>()
{
  return "tesseract_msgs/action/GetMotionPlan_SendGoal_Request";
}

template<>
struct has_fixed_size<tesseract_msgs::action::GetMotionPlan_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<tesseract_msgs::action::GetMotionPlan_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::action::GetMotionPlan_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<tesseract_msgs::action::GetMotionPlan_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tesseract_msgs::action::GetMotionPlan_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace tesseract_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetMotionPlan_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMotionPlan_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMotionPlan_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tesseract_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tesseract_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tesseract_msgs::action::GetMotionPlan_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::action::GetMotionPlan_SendGoal_Response & msg)
{
  return tesseract_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::action::GetMotionPlan_SendGoal_Response>()
{
  return "tesseract_msgs::action::GetMotionPlan_SendGoal_Response";
}

template<>
inline const char * name<tesseract_msgs::action::GetMotionPlan_SendGoal_Response>()
{
  return "tesseract_msgs/action/GetMotionPlan_SendGoal_Response";
}

template<>
struct has_fixed_size<tesseract_msgs::action::GetMotionPlan_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::action::GetMotionPlan_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<tesseract_msgs::action::GetMotionPlan_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::action::GetMotionPlan_SendGoal>()
{
  return "tesseract_msgs::action::GetMotionPlan_SendGoal";
}

template<>
inline const char * name<tesseract_msgs::action::GetMotionPlan_SendGoal>()
{
  return "tesseract_msgs/action/GetMotionPlan_SendGoal";
}

template<>
struct has_fixed_size<tesseract_msgs::action::GetMotionPlan_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<tesseract_msgs::action::GetMotionPlan_SendGoal_Request>::value &&
    has_fixed_size<tesseract_msgs::action::GetMotionPlan_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<tesseract_msgs::action::GetMotionPlan_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<tesseract_msgs::action::GetMotionPlan_SendGoal_Request>::value &&
    has_bounded_size<tesseract_msgs::action::GetMotionPlan_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<tesseract_msgs::action::GetMotionPlan_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<tesseract_msgs::action::GetMotionPlan_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tesseract_msgs::action::GetMotionPlan_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace tesseract_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetMotionPlan_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMotionPlan_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMotionPlan_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tesseract_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tesseract_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tesseract_msgs::action::GetMotionPlan_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::action::GetMotionPlan_GetResult_Request & msg)
{
  return tesseract_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::action::GetMotionPlan_GetResult_Request>()
{
  return "tesseract_msgs::action::GetMotionPlan_GetResult_Request";
}

template<>
inline const char * name<tesseract_msgs::action::GetMotionPlan_GetResult_Request>()
{
  return "tesseract_msgs/action/GetMotionPlan_GetResult_Request";
}

template<>
struct has_fixed_size<tesseract_msgs::action::GetMotionPlan_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::action::GetMotionPlan_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tesseract_msgs::action::GetMotionPlan_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "tesseract_msgs/action/detail/get_motion_plan__traits.hpp"

namespace tesseract_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetMotionPlan_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMotionPlan_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMotionPlan_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tesseract_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tesseract_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tesseract_msgs::action::GetMotionPlan_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::action::GetMotionPlan_GetResult_Response & msg)
{
  return tesseract_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::action::GetMotionPlan_GetResult_Response>()
{
  return "tesseract_msgs::action::GetMotionPlan_GetResult_Response";
}

template<>
inline const char * name<tesseract_msgs::action::GetMotionPlan_GetResult_Response>()
{
  return "tesseract_msgs/action/GetMotionPlan_GetResult_Response";
}

template<>
struct has_fixed_size<tesseract_msgs::action::GetMotionPlan_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<tesseract_msgs::action::GetMotionPlan_Result>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::action::GetMotionPlan_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<tesseract_msgs::action::GetMotionPlan_Result>::value> {};

template<>
struct is_message<tesseract_msgs::action::GetMotionPlan_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::action::GetMotionPlan_GetResult>()
{
  return "tesseract_msgs::action::GetMotionPlan_GetResult";
}

template<>
inline const char * name<tesseract_msgs::action::GetMotionPlan_GetResult>()
{
  return "tesseract_msgs/action/GetMotionPlan_GetResult";
}

template<>
struct has_fixed_size<tesseract_msgs::action::GetMotionPlan_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<tesseract_msgs::action::GetMotionPlan_GetResult_Request>::value &&
    has_fixed_size<tesseract_msgs::action::GetMotionPlan_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<tesseract_msgs::action::GetMotionPlan_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<tesseract_msgs::action::GetMotionPlan_GetResult_Request>::value &&
    has_bounded_size<tesseract_msgs::action::GetMotionPlan_GetResult_Response>::value
  >
{
};

template<>
struct is_service<tesseract_msgs::action::GetMotionPlan_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<tesseract_msgs::action::GetMotionPlan_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tesseract_msgs::action::GetMotionPlan_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "tesseract_msgs/action/detail/get_motion_plan__traits.hpp"

namespace tesseract_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetMotionPlan_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMotionPlan_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMotionPlan_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tesseract_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tesseract_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tesseract_msgs::action::GetMotionPlan_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::action::GetMotionPlan_FeedbackMessage & msg)
{
  return tesseract_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::action::GetMotionPlan_FeedbackMessage>()
{
  return "tesseract_msgs::action::GetMotionPlan_FeedbackMessage";
}

template<>
inline const char * name<tesseract_msgs::action::GetMotionPlan_FeedbackMessage>()
{
  return "tesseract_msgs/action/GetMotionPlan_FeedbackMessage";
}

template<>
struct has_fixed_size<tesseract_msgs::action::GetMotionPlan_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<tesseract_msgs::action::GetMotionPlan_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tesseract_msgs::action::GetMotionPlan_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<tesseract_msgs::action::GetMotionPlan_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tesseract_msgs::action::GetMotionPlan_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<tesseract_msgs::action::GetMotionPlan>
  : std::true_type
{
};

template<>
struct is_action_goal<tesseract_msgs::action::GetMotionPlan_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<tesseract_msgs::action::GetMotionPlan_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<tesseract_msgs::action::GetMotionPlan_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TESSERACT_MSGS__ACTION__DETAIL__GET_MOTION_PLAN__TRAITS_HPP_
