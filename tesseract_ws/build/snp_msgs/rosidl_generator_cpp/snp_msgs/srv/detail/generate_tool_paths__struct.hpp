// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from snp_msgs:srv/GenerateToolPaths.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__STRUCT_HPP_
#define SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__snp_msgs__srv__GenerateToolPaths_Request __attribute__((deprecated))
#else
# define DEPRECATED__snp_msgs__srv__GenerateToolPaths_Request __declspec(deprecated)
#endif

namespace snp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenerateToolPaths_Request_
{
  using Type = GenerateToolPaths_Request_<ContainerAllocator>;

  explicit GenerateToolPaths_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mesh_filename = "";
      this->mesh_frame = "";
    }
  }

  explicit GenerateToolPaths_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mesh_filename(_alloc),
    mesh_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mesh_filename = "";
      this->mesh_frame = "";
    }
  }

  // field types and members
  using _mesh_filename_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mesh_filename_type mesh_filename;
  using _mesh_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mesh_frame_type mesh_frame;

  // setters for named parameter idiom
  Type & set__mesh_filename(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mesh_filename = _arg;
    return *this;
  }
  Type & set__mesh_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mesh_frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snp_msgs::srv::GenerateToolPaths_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const snp_msgs::srv::GenerateToolPaths_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snp_msgs::srv::GenerateToolPaths_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snp_msgs::srv::GenerateToolPaths_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snp_msgs::srv::GenerateToolPaths_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::srv::GenerateToolPaths_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snp_msgs::srv::GenerateToolPaths_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::srv::GenerateToolPaths_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snp_msgs::srv::GenerateToolPaths_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snp_msgs::srv::GenerateToolPaths_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snp_msgs__srv__GenerateToolPaths_Request
    std::shared_ptr<snp_msgs::srv::GenerateToolPaths_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snp_msgs__srv__GenerateToolPaths_Request
    std::shared_ptr<snp_msgs::srv::GenerateToolPaths_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateToolPaths_Request_ & other) const
  {
    if (this->mesh_filename != other.mesh_filename) {
      return false;
    }
    if (this->mesh_frame != other.mesh_frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateToolPaths_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateToolPaths_Request_

// alias to use template instance with default allocator
using GenerateToolPaths_Request =
  snp_msgs::srv::GenerateToolPaths_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace snp_msgs


// Include directives for member types
// Member 'tool_paths'
#include "snp_msgs/msg/detail/tool_paths__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snp_msgs__srv__GenerateToolPaths_Response __attribute__((deprecated))
#else
# define DEPRECATED__snp_msgs__srv__GenerateToolPaths_Response __declspec(deprecated)
#endif

namespace snp_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GenerateToolPaths_Response_
{
  using Type = GenerateToolPaths_Response_<ContainerAllocator>;

  explicit GenerateToolPaths_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tool_paths(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit GenerateToolPaths_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tool_paths(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _tool_paths_type =
    snp_msgs::msg::ToolPaths_<ContainerAllocator>;
  _tool_paths_type tool_paths;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__tool_paths(
    const snp_msgs::msg::ToolPaths_<ContainerAllocator> & _arg)
  {
    this->tool_paths = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snp_msgs::srv::GenerateToolPaths_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const snp_msgs::srv::GenerateToolPaths_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snp_msgs::srv::GenerateToolPaths_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snp_msgs::srv::GenerateToolPaths_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snp_msgs::srv::GenerateToolPaths_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::srv::GenerateToolPaths_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snp_msgs::srv::GenerateToolPaths_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snp_msgs::srv::GenerateToolPaths_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snp_msgs::srv::GenerateToolPaths_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snp_msgs::srv::GenerateToolPaths_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snp_msgs__srv__GenerateToolPaths_Response
    std::shared_ptr<snp_msgs::srv::GenerateToolPaths_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snp_msgs__srv__GenerateToolPaths_Response
    std::shared_ptr<snp_msgs::srv::GenerateToolPaths_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenerateToolPaths_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->tool_paths != other.tool_paths) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenerateToolPaths_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenerateToolPaths_Response_

// alias to use template instance with default allocator
using GenerateToolPaths_Response =
  snp_msgs::srv::GenerateToolPaths_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace snp_msgs

namespace snp_msgs
{

namespace srv
{

struct GenerateToolPaths
{
  using Request = snp_msgs::srv::GenerateToolPaths_Request;
  using Response = snp_msgs::srv::GenerateToolPaths_Response;
};

}  // namespace srv

}  // namespace snp_msgs

#endif  // SNP_MSGS__SRV__DETAIL__GENERATE_TOOL_PATHS__STRUCT_HPP_
