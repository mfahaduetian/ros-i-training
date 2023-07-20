// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:srv/ModifyEnvironment.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__DETAIL__MODIFY_ENVIRONMENT__STRUCT_HPP_
#define TESSERACT_MSGS__SRV__DETAIL__MODIFY_ENVIRONMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'commands'
#include "tesseract_msgs/msg/detail/environment_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__srv__ModifyEnvironment_Request __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__srv__ModifyEnvironment_Request __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ModifyEnvironment_Request_
{
  using Type = ModifyEnvironment_Request_<ContainerAllocator>;

  explicit ModifyEnvironment_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->revision = 0ull;
      this->append = false;
    }
  }

  explicit ModifyEnvironment_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->revision = 0ull;
      this->append = false;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _revision_type =
    uint64_t;
  _revision_type revision;
  using _append_type =
    bool;
  _append_type append;
  using _commands_type =
    std::vector<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>>;
  _commands_type commands;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__revision(
    const uint64_t & _arg)
  {
    this->revision = _arg;
    return *this;
  }
  Type & set__append(
    const bool & _arg)
  {
    this->append = _arg;
    return *this;
  }
  Type & set__commands(
    const std::vector<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>> & _arg)
  {
    this->commands = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::srv::ModifyEnvironment_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::srv::ModifyEnvironment_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::srv::ModifyEnvironment_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::srv::ModifyEnvironment_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::ModifyEnvironment_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::ModifyEnvironment_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::ModifyEnvironment_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::ModifyEnvironment_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::srv::ModifyEnvironment_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::srv::ModifyEnvironment_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__srv__ModifyEnvironment_Request
    std::shared_ptr<tesseract_msgs::srv::ModifyEnvironment_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__srv__ModifyEnvironment_Request
    std::shared_ptr<tesseract_msgs::srv::ModifyEnvironment_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModifyEnvironment_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->revision != other.revision) {
      return false;
    }
    if (this->append != other.append) {
      return false;
    }
    if (this->commands != other.commands) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModifyEnvironment_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModifyEnvironment_Request_

// alias to use template instance with default allocator
using ModifyEnvironment_Request =
  tesseract_msgs::srv::ModifyEnvironment_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tesseract_msgs


#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__srv__ModifyEnvironment_Response __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__srv__ModifyEnvironment_Response __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ModifyEnvironment_Response_
{
  using Type = ModifyEnvironment_Response_<ContainerAllocator>;

  explicit ModifyEnvironment_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->revision = 0ull;
    }
  }

  explicit ModifyEnvironment_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->revision = 0ull;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _revision_type =
    uint64_t;
  _revision_type revision;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__revision(
    const uint64_t & _arg)
  {
    this->revision = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::srv::ModifyEnvironment_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::srv::ModifyEnvironment_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::srv::ModifyEnvironment_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::srv::ModifyEnvironment_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::ModifyEnvironment_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::ModifyEnvironment_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::ModifyEnvironment_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::ModifyEnvironment_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::srv::ModifyEnvironment_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::srv::ModifyEnvironment_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__srv__ModifyEnvironment_Response
    std::shared_ptr<tesseract_msgs::srv::ModifyEnvironment_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__srv__ModifyEnvironment_Response
    std::shared_ptr<tesseract_msgs::srv::ModifyEnvironment_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModifyEnvironment_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->revision != other.revision) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModifyEnvironment_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModifyEnvironment_Response_

// alias to use template instance with default allocator
using ModifyEnvironment_Response =
  tesseract_msgs::srv::ModifyEnvironment_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tesseract_msgs

namespace tesseract_msgs
{

namespace srv
{

struct ModifyEnvironment
{
  using Request = tesseract_msgs::srv::ModifyEnvironment_Request;
  using Response = tesseract_msgs::srv::ModifyEnvironment_Response;
};

}  // namespace srv

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__SRV__DETAIL__MODIFY_ENVIRONMENT__STRUCT_HPP_
