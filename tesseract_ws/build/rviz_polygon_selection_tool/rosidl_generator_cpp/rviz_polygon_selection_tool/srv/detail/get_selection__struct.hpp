// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rviz_polygon_selection_tool:srv/GetSelection.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__STRUCT_HPP_
#define RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rviz_polygon_selection_tool__srv__GetSelection_Request __attribute__((deprecated))
#else
# define DEPRECATED__rviz_polygon_selection_tool__srv__GetSelection_Request __declspec(deprecated)
#endif

namespace rviz_polygon_selection_tool
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSelection_Request_
{
  using Type = GetSelection_Request_<ContainerAllocator>;

  explicit GetSelection_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetSelection_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    rviz_polygon_selection_tool::srv::GetSelection_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rviz_polygon_selection_tool::srv::GetSelection_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rviz_polygon_selection_tool::srv::GetSelection_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rviz_polygon_selection_tool::srv::GetSelection_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rviz_polygon_selection_tool::srv::GetSelection_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rviz_polygon_selection_tool::srv::GetSelection_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rviz_polygon_selection_tool::srv::GetSelection_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rviz_polygon_selection_tool::srv::GetSelection_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rviz_polygon_selection_tool::srv::GetSelection_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rviz_polygon_selection_tool::srv::GetSelection_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rviz_polygon_selection_tool__srv__GetSelection_Request
    std::shared_ptr<rviz_polygon_selection_tool::srv::GetSelection_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rviz_polygon_selection_tool__srv__GetSelection_Request
    std::shared_ptr<rviz_polygon_selection_tool::srv::GetSelection_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSelection_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSelection_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSelection_Request_

// alias to use template instance with default allocator
using GetSelection_Request =
  rviz_polygon_selection_tool::srv::GetSelection_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rviz_polygon_selection_tool


// Include directives for member types
// Member 'selection'
#include "geometry_msgs/msg/detail/point_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rviz_polygon_selection_tool__srv__GetSelection_Response __attribute__((deprecated))
#else
# define DEPRECATED__rviz_polygon_selection_tool__srv__GetSelection_Response __declspec(deprecated)
#endif

namespace rviz_polygon_selection_tool
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSelection_Response_
{
  using Type = GetSelection_Response_<ContainerAllocator>;

  explicit GetSelection_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetSelection_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _selection_type =
    std::vector<geometry_msgs::msg::PointStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PointStamped_<ContainerAllocator>>>;
  _selection_type selection;

  // setters for named parameter idiom
  Type & set__selection(
    const std::vector<geometry_msgs::msg::PointStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PointStamped_<ContainerAllocator>>> & _arg)
  {
    this->selection = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rviz_polygon_selection_tool::srv::GetSelection_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rviz_polygon_selection_tool::srv::GetSelection_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rviz_polygon_selection_tool::srv::GetSelection_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rviz_polygon_selection_tool::srv::GetSelection_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rviz_polygon_selection_tool::srv::GetSelection_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rviz_polygon_selection_tool::srv::GetSelection_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rviz_polygon_selection_tool::srv::GetSelection_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rviz_polygon_selection_tool::srv::GetSelection_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rviz_polygon_selection_tool::srv::GetSelection_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rviz_polygon_selection_tool::srv::GetSelection_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rviz_polygon_selection_tool__srv__GetSelection_Response
    std::shared_ptr<rviz_polygon_selection_tool::srv::GetSelection_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rviz_polygon_selection_tool__srv__GetSelection_Response
    std::shared_ptr<rviz_polygon_selection_tool::srv::GetSelection_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSelection_Response_ & other) const
  {
    if (this->selection != other.selection) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSelection_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSelection_Response_

// alias to use template instance with default allocator
using GetSelection_Response =
  rviz_polygon_selection_tool::srv::GetSelection_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rviz_polygon_selection_tool

namespace rviz_polygon_selection_tool
{

namespace srv
{

struct GetSelection
{
  using Request = rviz_polygon_selection_tool::srv::GetSelection_Request;
  using Response = rviz_polygon_selection_tool::srv::GetSelection_Response;
};

}  // namespace srv

}  // namespace rviz_polygon_selection_tool

#endif  // RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__STRUCT_HPP_
