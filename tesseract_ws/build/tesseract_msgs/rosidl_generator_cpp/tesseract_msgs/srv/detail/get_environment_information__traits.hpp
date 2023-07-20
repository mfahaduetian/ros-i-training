// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesseract_msgs:srv/GetEnvironmentInformation.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_INFORMATION__TRAITS_HPP_
#define TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_INFORMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesseract_msgs/srv/detail/get_environment_information__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tesseract_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetEnvironmentInformation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: flags
  {
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetEnvironmentInformation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEnvironmentInformation_Request & msg, bool use_flow_style = false)
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
  const tesseract_msgs::srv::GetEnvironmentInformation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::srv::GetEnvironmentInformation_Request & msg)
{
  return tesseract_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::srv::GetEnvironmentInformation_Request>()
{
  return "tesseract_msgs::srv::GetEnvironmentInformation_Request";
}

template<>
inline const char * name<tesseract_msgs::srv::GetEnvironmentInformation_Request>()
{
  return "tesseract_msgs/srv/GetEnvironmentInformation_Request";
}

template<>
struct has_fixed_size<tesseract_msgs::srv::GetEnvironmentInformation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tesseract_msgs::srv::GetEnvironmentInformation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tesseract_msgs::srv::GetEnvironmentInformation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'command_history'
#include "tesseract_msgs/msg/detail/environment_command__traits.hpp"
// Member 'links'
#include "tesseract_msgs/msg/detail/link__traits.hpp"
// Member 'joints'
#include "tesseract_msgs/msg/detail/joint__traits.hpp"
// Member 'link_transforms'
// Member 'joint_transforms'
#include "tesseract_msgs/msg/detail/transform_map__traits.hpp"
// Member 'allowed_collision_matrix'
#include "tesseract_msgs/msg/detail/allowed_collision_entry__traits.hpp"
// Member 'kinematics_information'
#include "tesseract_msgs/msg/detail/kinematics_information__traits.hpp"
// Member 'joint_states'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"

namespace tesseract_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetEnvironmentInformation_Response & msg,
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

  // member: command_history
  {
    if (msg.command_history.size() == 0) {
      out << "command_history: []";
    } else {
      out << "command_history: [";
      size_t pending_items = msg.command_history.size();
      for (auto item : msg.command_history) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: links
  {
    if (msg.links.size() == 0) {
      out << "links: []";
    } else {
      out << "links: [";
      size_t pending_items = msg.links.size();
      for (auto item : msg.links) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joints
  {
    if (msg.joints.size() == 0) {
      out << "joints: []";
    } else {
      out << "joints: [";
      size_t pending_items = msg.joints.size();
      for (auto item : msg.joints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: link_names
  {
    if (msg.link_names.size() == 0) {
      out << "link_names: []";
    } else {
      out << "link_names: [";
      size_t pending_items = msg.link_names.size();
      for (auto item : msg.link_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_names
  {
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []";
    } else {
      out << "joint_names: [";
      size_t pending_items = msg.joint_names.size();
      for (auto item : msg.joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: active_link_names
  {
    if (msg.active_link_names.size() == 0) {
      out << "active_link_names: []";
    } else {
      out << "active_link_names: [";
      size_t pending_items = msg.active_link_names.size();
      for (auto item : msg.active_link_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: active_joint_names
  {
    if (msg.active_joint_names.size() == 0) {
      out << "active_joint_names: []";
    } else {
      out << "active_joint_names: [";
      size_t pending_items = msg.active_joint_names.size();
      for (auto item : msg.active_joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: link_transforms
  {
    out << "link_transforms: ";
    to_flow_style_yaml(msg.link_transforms, out);
    out << ", ";
  }

  // member: joint_transforms
  {
    out << "joint_transforms: ";
    to_flow_style_yaml(msg.joint_transforms, out);
    out << ", ";
  }

  // member: allowed_collision_matrix
  {
    if (msg.allowed_collision_matrix.size() == 0) {
      out << "allowed_collision_matrix: []";
    } else {
      out << "allowed_collision_matrix: [";
      size_t pending_items = msg.allowed_collision_matrix.size();
      for (auto item : msg.allowed_collision_matrix) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: kinematics_information
  {
    out << "kinematics_information: ";
    to_flow_style_yaml(msg.kinematics_information, out);
    out << ", ";
  }

  // member: joint_states
  {
    out << "joint_states: ";
    to_flow_style_yaml(msg.joint_states, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetEnvironmentInformation_Response & msg,
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

  // member: command_history
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.command_history.size() == 0) {
      out << "command_history: []\n";
    } else {
      out << "command_history:\n";
      for (auto item : msg.command_history) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: links
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.links.size() == 0) {
      out << "links: []\n";
    } else {
      out << "links:\n";
      for (auto item : msg.links) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints.size() == 0) {
      out << "joints: []\n";
    } else {
      out << "joints:\n";
      for (auto item : msg.joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: link_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_names.size() == 0) {
      out << "link_names: []\n";
    } else {
      out << "link_names:\n";
      for (auto item : msg.link_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []\n";
    } else {
      out << "joint_names:\n";
      for (auto item : msg.joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: active_link_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active_link_names.size() == 0) {
      out << "active_link_names: []\n";
    } else {
      out << "active_link_names:\n";
      for (auto item : msg.active_link_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: active_joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active_joint_names.size() == 0) {
      out << "active_joint_names: []\n";
    } else {
      out << "active_joint_names:\n";
      for (auto item : msg.active_joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: link_transforms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_transforms:\n";
    to_block_style_yaml(msg.link_transforms, out, indentation + 2);
  }

  // member: joint_transforms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_transforms:\n";
    to_block_style_yaml(msg.joint_transforms, out, indentation + 2);
  }

  // member: allowed_collision_matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.allowed_collision_matrix.size() == 0) {
      out << "allowed_collision_matrix: []\n";
    } else {
      out << "allowed_collision_matrix:\n";
      for (auto item : msg.allowed_collision_matrix) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: kinematics_information
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kinematics_information:\n";
    to_block_style_yaml(msg.kinematics_information, out, indentation + 2);
  }

  // member: joint_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_states:\n";
    to_block_style_yaml(msg.joint_states, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEnvironmentInformation_Response & msg, bool use_flow_style = false)
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
  const tesseract_msgs::srv::GetEnvironmentInformation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesseract_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesseract_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tesseract_msgs::srv::GetEnvironmentInformation_Response & msg)
{
  return tesseract_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tesseract_msgs::srv::GetEnvironmentInformation_Response>()
{
  return "tesseract_msgs::srv::GetEnvironmentInformation_Response";
}

template<>
inline const char * name<tesseract_msgs::srv::GetEnvironmentInformation_Response>()
{
  return "tesseract_msgs/srv/GetEnvironmentInformation_Response";
}

template<>
struct has_fixed_size<tesseract_msgs::srv::GetEnvironmentInformation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tesseract_msgs::srv::GetEnvironmentInformation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tesseract_msgs::srv::GetEnvironmentInformation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesseract_msgs::srv::GetEnvironmentInformation>()
{
  return "tesseract_msgs::srv::GetEnvironmentInformation";
}

template<>
inline const char * name<tesseract_msgs::srv::GetEnvironmentInformation>()
{
  return "tesseract_msgs/srv/GetEnvironmentInformation";
}

template<>
struct has_fixed_size<tesseract_msgs::srv::GetEnvironmentInformation>
  : std::integral_constant<
    bool,
    has_fixed_size<tesseract_msgs::srv::GetEnvironmentInformation_Request>::value &&
    has_fixed_size<tesseract_msgs::srv::GetEnvironmentInformation_Response>::value
  >
{
};

template<>
struct has_bounded_size<tesseract_msgs::srv::GetEnvironmentInformation>
  : std::integral_constant<
    bool,
    has_bounded_size<tesseract_msgs::srv::GetEnvironmentInformation_Request>::value &&
    has_bounded_size<tesseract_msgs::srv::GetEnvironmentInformation_Response>::value
  >
{
};

template<>
struct is_service<tesseract_msgs::srv::GetEnvironmentInformation>
  : std::true_type
{
};

template<>
struct is_service_request<tesseract_msgs::srv::GetEnvironmentInformation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tesseract_msgs::srv::GetEnvironmentInformation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TESSERACT_MSGS__SRV__DETAIL__GET_ENVIRONMENT_INFORMATION__TRAITS_HPP_
