// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from myworkcell_core:srv/LocalizePart.idl
// generated code does not contain a copyright notice

#ifndef MYWORKCELL_CORE__SRV__DETAIL__LOCALIZE_PART__STRUCT_HPP_
#define MYWORKCELL_CORE__SRV__DETAIL__LOCALIZE_PART__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__myworkcell_core__srv__LocalizePart_Request __attribute__((deprecated))
#else
# define DEPRECATED__myworkcell_core__srv__LocalizePart_Request __declspec(deprecated)
#endif

namespace myworkcell_core
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LocalizePart_Request_
{
  using Type = LocalizePart_Request_<ContainerAllocator>;

  explicit LocalizePart_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_frame = "";
    }
  }

  explicit LocalizePart_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_frame = "";
    }
  }

  // field types and members
  using _base_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _base_frame_type base_frame;

  // setters for named parameter idiom
  Type & set__base_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->base_frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    myworkcell_core::srv::LocalizePart_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const myworkcell_core::srv::LocalizePart_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<myworkcell_core::srv::LocalizePart_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<myworkcell_core::srv::LocalizePart_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      myworkcell_core::srv::LocalizePart_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<myworkcell_core::srv::LocalizePart_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      myworkcell_core::srv::LocalizePart_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<myworkcell_core::srv::LocalizePart_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<myworkcell_core::srv::LocalizePart_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<myworkcell_core::srv::LocalizePart_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__myworkcell_core__srv__LocalizePart_Request
    std::shared_ptr<myworkcell_core::srv::LocalizePart_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__myworkcell_core__srv__LocalizePart_Request
    std::shared_ptr<myworkcell_core::srv::LocalizePart_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalizePart_Request_ & other) const
  {
    if (this->base_frame != other.base_frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalizePart_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalizePart_Request_

// alias to use template instance with default allocator
using LocalizePart_Request =
  myworkcell_core::srv::LocalizePart_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace myworkcell_core


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__myworkcell_core__srv__LocalizePart_Response __attribute__((deprecated))
#else
# define DEPRECATED__myworkcell_core__srv__LocalizePart_Response __declspec(deprecated)
#endif

namespace myworkcell_core
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LocalizePart_Response_
{
  using Type = LocalizePart_Response_<ContainerAllocator>;

  explicit LocalizePart_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit LocalizePart_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    myworkcell_core::srv::LocalizePart_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const myworkcell_core::srv::LocalizePart_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<myworkcell_core::srv::LocalizePart_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<myworkcell_core::srv::LocalizePart_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      myworkcell_core::srv::LocalizePart_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<myworkcell_core::srv::LocalizePart_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      myworkcell_core::srv::LocalizePart_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<myworkcell_core::srv::LocalizePart_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<myworkcell_core::srv::LocalizePart_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<myworkcell_core::srv::LocalizePart_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__myworkcell_core__srv__LocalizePart_Response
    std::shared_ptr<myworkcell_core::srv::LocalizePart_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__myworkcell_core__srv__LocalizePart_Response
    std::shared_ptr<myworkcell_core::srv::LocalizePart_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalizePart_Response_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalizePart_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalizePart_Response_

// alias to use template instance with default allocator
using LocalizePart_Response =
  myworkcell_core::srv::LocalizePart_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace myworkcell_core

namespace myworkcell_core
{

namespace srv
{

struct LocalizePart
{
  using Request = myworkcell_core::srv::LocalizePart_Request;
  using Response = myworkcell_core::srv::LocalizePart_Response;
};

}  // namespace srv

}  // namespace myworkcell_core

#endif  // MYWORKCELL_CORE__SRV__DETAIL__LOCALIZE_PART__STRUCT_HPP_
