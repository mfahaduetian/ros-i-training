// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:srv/GetEnvironmentChanges.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_CHANGES__TRAITS_HPP_
#define TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_CHANGES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/srv/detail/get_environment_changes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tesseract_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetEnvironmentChanges_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: revision
  {
    out << "revision: ";
    rosidl_generator_traits::value_to_yaml(msg.revision, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetEnvironmentChanges_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "revision: ";
    rosidl_generator_traits::value_to_yaml(msg.revision, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEnvironmentChanges_Request & msg, bool use_flow_style = false)
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
  const tesseract_msgs::srv::GetEnvironmentChanges_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::srv::GetEnvironmentChanges_Request & msg)
{
  return tesseract_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::srv::GetEnvironmentChanges_Request>()
{
  return "tesseract_msgs::srv::GetEnvironmentChanges_Request";
}

template<>
inline const char * name<tesseract_msgs::srv::GetEnvironmentChanges_Request>()
{
  return "tesseract_msgs/srv/GetEnvironmentChanges_Request";
}

template<>
struct has_fixed_size<tesseract_msgs::srv::GetEnvironmentChanges_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tesseract_msgs::srv::GetEnvironmentChanges_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tesseract_msgs::srv::GetEnvironmentChanges_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'commands'
#include "tesseract_msgs/msg/detail/environment_command__traits.hpp"

namespace tesseract_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetEnvironmentChanges_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: revision
  {
    out << "revision: ";
    rosidl_generator_traits::value_to_yaml(msg.revision, out);
    out << ", ";
  }

  // member: commands
  {
    if (msg.commands.size() == 0) {
      out << "commands: []";
    } else {
      out << "commands: [";
      size_t pending_items = msg.commands.size();
      for (auto item : msg.commands) {
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
  const GetEnvironmentChanges_Response & msg,
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "revision: ";
    rosidl_generator_traits::value_to_yaml(msg.revision, out);
    out << "\n";
  }

  // member: commands
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.commands.size() == 0) {
      out << "commands: []\n";
    } else {
      out << "commands:\n";
      for (auto item : msg.commands) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEnvironmentChanges_Response & msg, bool use_flow_style = false)
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
  const tesseract_msgs::srv::GetEnvironmentChanges_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::srv::GetEnvironmentChanges_Response & msg)
{
  return tesseract_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::srv::GetEnvironmentChanges_Response>()
{
  return "tesseract_msgs::srv::GetEnvironmentChanges_Response";
}

template<>
inline const char * name<tesseract_msgs::srv::GetEnvironmentChanges_Response>()
{
  return "tesseract_msgs/srv/GetEnvironmentChanges_Response";
}

template<>
struct has_fixed_size<tesseract_msgs::srv::GetEnvironmentChanges_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::srv::GetEnvironmentChanges_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::srv::GetEnvironmentChanges_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::srv::GetEnvironmentChanges>()
{
  return "tesseract_msgs::srv::GetEnvironmentChanges";
}

template<>
inline const char * name<tesseract_msgs::srv::GetEnvironmentChanges>()
{
  return "tesseract_msgs/srv/GetEnvironmentChanges";
}

template<>
struct has_fixed_size<tesseract_msgs::srv::GetEnvironmentChanges>
  : std::integral_constant<
    bool,
    has_fixed_size<tesseract_msgs::srv::GetEnvironmentChanges_Request>::value &&
    has_fixed_size<tesseract_msgs::srv::GetEnvironmentChanges_Response>::value
  >
{
};

template<>
struct has_bounded_size<tesseract_msgs::srv::GetEnvironmentChanges>
  : std::integral_constant<
    bool,
    has_bounded_size<tesseract_msgs::srv::GetEnvironmentChanges_Request>::value &&
    has_bounded_size<tesseract_msgs::srv::GetEnvironmentChanges_Response>::value
  >
{
};

template<>
struct is_service<tesseract_msgs::srv::GetEnvironmentChanges>
  : std::true_type
{
};

template<>
struct is_service_request<tesseract_msgs::srv::GetEnvironmentChanges_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tesseract_msgs::srv::GetEnvironmentChanges_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_CHANGES__TRAITS_HPP_
