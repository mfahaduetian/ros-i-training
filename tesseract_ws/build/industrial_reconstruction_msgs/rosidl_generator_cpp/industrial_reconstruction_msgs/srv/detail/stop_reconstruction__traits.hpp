// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from industrial_reconstruction_msgs:srv/StopReconstruction.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__STOP_RECONSTRUCTION__TRAITS_HPP_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__STOP_RECONSTRUCTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "industrial_reconstruction_msgs/srv/detail/stop_reconstruction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'normal_filters'
#include "industrial_reconstruction_msgs/msg/detail/normal_filter_params__traits.hpp"

namespace industrial_reconstruction_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const StopReconstruction_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: archive_directory
  {
    out << "archive_directory: ";
    rosidl_generator_traits::value_to_yaml(msg.archive_directory, out);
    out << ", ";
  }

  // member: mesh_filepath
  {
    out << "mesh_filepath: ";
    rosidl_generator_traits::value_to_yaml(msg.mesh_filepath, out);
    out << ", ";
  }

  // member: min_num_faces
  {
    out << "min_num_faces: ";
    rosidl_generator_traits::value_to_yaml(msg.min_num_faces, out);
    out << ", ";
  }

  // member: normal_filters
  {
    if (msg.normal_filters.size() == 0) {
      out << "normal_filters: []";
    } else {
      out << "normal_filters: [";
      size_t pending_items = msg.normal_filters.size();
      for (auto item : msg.normal_filters) {
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
  const StopReconstruction_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: archive_directory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "archive_directory: ";
    rosidl_generator_traits::value_to_yaml(msg.archive_directory, out);
    out << "\n";
  }

  // member: mesh_filepath
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mesh_filepath: ";
    rosidl_generator_traits::value_to_yaml(msg.mesh_filepath, out);
    out << "\n";
  }

  // member: min_num_faces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_num_faces: ";
    rosidl_generator_traits::value_to_yaml(msg.min_num_faces, out);
    out << "\n";
  }

  // member: normal_filters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.normal_filters.size() == 0) {
      out << "normal_filters: []\n";
    } else {
      out << "normal_filters:\n";
      for (auto item : msg.normal_filters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StopReconstruction_Request & msg, bool use_flow_style = false)
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

}  // namespace industrial_reconstruction_msgs

namespace rosidl_generator_traits
{

[[deprecated("use industrial_reconstruction_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const industrial_reconstruction_msgs::srv::StopReconstruction_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  industrial_reconstruction_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use industrial_reconstruction_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const industrial_reconstruction_msgs::srv::StopReconstruction_Request & msg)
{
  return industrial_reconstruction_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<industrial_reconstruction_msgs::srv::StopReconstruction_Request>()
{
  return "industrial_reconstruction_msgs::srv::StopReconstruction_Request";
}

template<>
inline const char * name<industrial_reconstruction_msgs::srv::StopReconstruction_Request>()
{
  return "industrial_reconstruction_msgs/srv/StopReconstruction_Request";
}

template<>
struct has_fixed_size<industrial_reconstruction_msgs::srv::StopReconstruction_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<industrial_reconstruction_msgs::srv::StopReconstruction_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<industrial_reconstruction_msgs::srv::StopReconstruction_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace industrial_reconstruction_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const StopReconstruction_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StopReconstruction_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StopReconstruction_Response & msg, bool use_flow_style = false)
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

}  // namespace industrial_reconstruction_msgs

namespace rosidl_generator_traits
{

[[deprecated("use industrial_reconstruction_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const industrial_reconstruction_msgs::srv::StopReconstruction_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  industrial_reconstruction_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use industrial_reconstruction_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const industrial_reconstruction_msgs::srv::StopReconstruction_Response & msg)
{
  return industrial_reconstruction_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<industrial_reconstruction_msgs::srv::StopReconstruction_Response>()
{
  return "industrial_reconstruction_msgs::srv::StopReconstruction_Response";
}

template<>
inline const char * name<industrial_reconstruction_msgs::srv::StopReconstruction_Response>()
{
  return "industrial_reconstruction_msgs/srv/StopReconstruction_Response";
}

template<>
struct has_fixed_size<industrial_reconstruction_msgs::srv::StopReconstruction_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<industrial_reconstruction_msgs::srv::StopReconstruction_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<industrial_reconstruction_msgs::srv::StopReconstruction_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<industrial_reconstruction_msgs::srv::StopReconstruction>()
{
  return "industrial_reconstruction_msgs::srv::StopReconstruction";
}

template<>
inline const char * name<industrial_reconstruction_msgs::srv::StopReconstruction>()
{
  return "industrial_reconstruction_msgs/srv/StopReconstruction";
}

template<>
struct has_fixed_size<industrial_reconstruction_msgs::srv::StopReconstruction>
  : std::integral_constant<
    bool,
    has_fixed_size<industrial_reconstruction_msgs::srv::StopReconstruction_Request>::value &&
    has_fixed_size<industrial_reconstruction_msgs::srv::StopReconstruction_Response>::value
  >
{
};

template<>
struct has_bounded_size<industrial_reconstruction_msgs::srv::StopReconstruction>
  : std::integral_constant<
    bool,
    has_bounded_size<industrial_reconstruction_msgs::srv::StopReconstruction_Request>::value &&
    has_bounded_size<industrial_reconstruction_msgs::srv::StopReconstruction_Response>::value
  >
{
};

template<>
struct is_service<industrial_reconstruction_msgs::srv::StopReconstruction>
  : std::true_type
{
};

template<>
struct is_service_request<industrial_reconstruction_msgs::srv::StopReconstruction_Request>
  : std::true_type
{
};

template<>
struct is_service_response<industrial_reconstruction_msgs::srv::StopReconstruction_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__STOP_RECONSTRUCTION__TRAITS_HPP_
