// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/PlannerProfileRemapping.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLANNER_PROFILE_REMAPPING__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__PLANNER_PROFILE_REMAPPING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mapping'
#include "tesseract_msgs/msg/detail/profile_map__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__PlannerProfileRemapping __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__PlannerProfileRemapping __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlannerProfileRemapping_
{
  using Type = PlannerProfileRemapping_<ContainerAllocator>;

  explicit PlannerProfileRemapping_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PlannerProfileRemapping_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _planner_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _planner_type planner;
  using _mapping_type =
    std::vector<tesseract_msgs::msg::ProfileMap_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::ProfileMap_<ContainerAllocator>>>;
  _mapping_type mapping;

  // setters for named parameter idiom
  Type & set__planner(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->planner = _arg;
    return *this;
  }
  Type & set__mapping(
    const std::vector<tesseract_msgs::msg::ProfileMap_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::ProfileMap_<ContainerAllocator>>> & _arg)
  {
    this->mapping = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__PlannerProfileRemapping
    std::shared_ptr<tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__PlannerProfileRemapping
    std::shared_ptr<tesseract_msgs::msg::PlannerProfileRemapping_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlannerProfileRemapping_ & other) const
  {
    if (this->planner != other.planner) {
      return false;
    }
    if (this->mapping != other.mapping) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlannerProfileRemapping_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlannerProfileRemapping_

// alias to use template instance with default allocator
using PlannerProfileRemapping =
  tesseract_msgs::msg::PlannerProfileRemapping_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLANNER_PROFILE_REMAPPING__STRUCT_HPP_
