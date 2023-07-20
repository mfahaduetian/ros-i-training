// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from industrial_reconstruction_msgs:srv/StartReconstruction.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__START_RECONSTRUCTION__TRAITS_HPP_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__START_RECONSTRUCTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "industrial_reconstruction_msgs/srv/detail/start_reconstruction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tsdf_params'
#include "industrial_reconstruction_msgs/msg/detail/tsdf_volume_params__traits.hpp"
// Member 'rgbd_params'
#include "industrial_reconstruction_msgs/msg/detail/rgbd_image_params__traits.hpp"

namespace industrial_reconstruction_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartReconstruction_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: tracking_frame
  {
    out << "tracking_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_frame, out);
    out << ", ";
  }

  // member: relative_frame
  {
    out << "relative_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_frame, out);
    out << ", ";
  }

  // member: translation_distance
  {
    out << "translation_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.translation_distance, out);
    out << ", ";
  }

  // member: rotational_distance
  {
    out << "rotational_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.rotational_distance, out);
    out << ", ";
  }

  // member: live
  {
    out << "live: ";
    rosidl_generator_traits::value_to_yaml(msg.live, out);
    out << ", ";
  }

  // member: tsdf_params
  {
    out << "tsdf_params: ";
    to_flow_style_yaml(msg.tsdf_params, out);
    out << ", ";
  }

  // member: rgbd_params
  {
    out << "rgbd_params: ";
    to_flow_style_yaml(msg.rgbd_params, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartReconstruction_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tracking_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_frame, out);
    out << "\n";
  }

  // member: relative_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_frame, out);
    out << "\n";
  }

  // member: translation_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "translation_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.translation_distance, out);
    out << "\n";
  }

  // member: rotational_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotational_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.rotational_distance, out);
    out << "\n";
  }

  // member: live
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "live: ";
    rosidl_generator_traits::value_to_yaml(msg.live, out);
    out << "\n";
  }

  // member: tsdf_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tsdf_params:\n";
    to_block_style_yaml(msg.tsdf_params, out, indentation + 2);
  }

  // member: rgbd_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rgbd_params:\n";
    to_block_style_yaml(msg.rgbd_params, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartReconstruction_Request & msg, bool use_flow_style = false)
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
  const industrial_reconstruction_msgs::srv::StartReconstruction_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  industrial_reconstruction_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use industrial_reconstruction_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const industrial_reconstruction_msgs::srv::StartReconstruction_Request & msg)
{
  return industrial_reconstruction_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<industrial_reconstruction_msgs::srv::StartReconstruction_Request>()
{
  return "industrial_reconstruction_msgs::srv::StartReconstruction_Request";
}

template<>
inline const char * name<industrial_reconstruction_msgs::srv::StartReconstruction_Request>()
{
  return "industrial_reconstruction_msgs/srv/StartReconstruction_Request";
}

template<>
struct has_fixed_size<industrial_reconstruction_msgs::srv::StartReconstruction_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<industrial_reconstruction_msgs::srv::StartReconstruction_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<industrial_reconstruction_msgs::srv::StartReconstruction_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace industrial_reconstruction_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartReconstruction_Response & msg,
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
  const StartReconstruction_Response & msg,
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

inline std::string to_yaml(const StartReconstruction_Response & msg, bool use_flow_style = false)
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
  const industrial_reconstruction_msgs::srv::StartReconstruction_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  industrial_reconstruction_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use industrial_reconstruction_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const industrial_reconstruction_msgs::srv::StartReconstruction_Response & msg)
{
  return industrial_reconstruction_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<industrial_reconstruction_msgs::srv::StartReconstruction_Response>()
{
  return "industrial_reconstruction_msgs::srv::StartReconstruction_Response";
}

template<>
inline const char * name<industrial_reconstruction_msgs::srv::StartReconstruction_Response>()
{
  return "industrial_reconstruction_msgs/srv/StartReconstruction_Response";
}

template<>
struct has_fixed_size<industrial_reconstruction_msgs::srv::StartReconstruction_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<industrial_reconstruction_msgs::srv::StartReconstruction_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<industrial_reconstruction_msgs::srv::StartReconstruction_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<industrial_reconstruction_msgs::srv::StartReconstruction>()
{
  return "industrial_reconstruction_msgs::srv::StartReconstruction";
}

template<>
inline const char * name<industrial_reconstruction_msgs::srv::StartReconstruction>()
{
  return "industrial_reconstruction_msgs/srv/StartReconstruction";
}

template<>
struct has_fixed_size<industrial_reconstruction_msgs::srv::StartReconstruction>
  : std::integral_constant<
    bool,
    has_fixed_size<industrial_reconstruction_msgs::srv::StartReconstruction_Request>::value &&
    has_fixed_size<industrial_reconstruction_msgs::srv::StartReconstruction_Response>::value
  >
{
};

template<>
struct has_bounded_size<industrial_reconstruction_msgs::srv::StartReconstruction>
  : std::integral_constant<
    bool,
    has_bounded_size<industrial_reconstruction_msgs::srv::StartReconstruction_Request>::value &&
    has_bounded_size<industrial_reconstruction_msgs::srv::StartReconstruction_Response>::value
  >
{
};

template<>
struct is_service<industrial_reconstruction_msgs::srv::StartReconstruction>
  : std::true_type
{
};

template<>
struct is_service_request<industrial_reconstruction_msgs::srv::StartReconstruction_Request>
  : std::true_type
{
};

template<>
struct is_service_response<industrial_reconstruction_msgs::srv::StartReconstruction_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__START_RECONSTRUCTION__TRAITS_HPP_
