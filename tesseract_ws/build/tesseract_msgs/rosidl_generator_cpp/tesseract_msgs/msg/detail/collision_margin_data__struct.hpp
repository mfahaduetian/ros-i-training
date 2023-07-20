// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/CollisionMarginData.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__COLLISION_MARGIN_DATA__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__COLLISION_MARGIN_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'margin_pairs'
#include "tesseract_msgs/msg/detail/contact_margin_pair__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__CollisionMarginData __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__CollisionMarginData __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CollisionMarginData_
{
  using Type = CollisionMarginData_<ContainerAllocator>;

  explicit CollisionMarginData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_margin = 0.0;
    }
  }

  explicit CollisionMarginData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->default_margin = 0.0;
    }
  }

  // field types and members
  using _default_margin_type =
    double;
  _default_margin_type default_margin;
  using _margin_pairs_type =
    std::vector<tesseract_msgs::msg::ContactMarginPair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::ContactMarginPair_<ContainerAllocator>>>;
  _margin_pairs_type margin_pairs;

  // setters for named parameter idiom
  Type & set__default_margin(
    const double & _arg)
  {
    this->default_margin = _arg;
    return *this;
  }
  Type & set__margin_pairs(
    const std::vector<tesseract_msgs::msg::ContactMarginPair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::ContactMarginPair_<ContainerAllocator>>> & _arg)
  {
    this->margin_pairs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::CollisionMarginData_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::CollisionMarginData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::CollisionMarginData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::CollisionMarginData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::CollisionMarginData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::CollisionMarginData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::CollisionMarginData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::CollisionMarginData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::CollisionMarginData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::CollisionMarginData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__CollisionMarginData
    std::shared_ptr<tesseract_msgs::msg::CollisionMarginData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__CollisionMarginData
    std::shared_ptr<tesseract_msgs::msg::CollisionMarginData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollisionMarginData_ & other) const
  {
    if (this->default_margin != other.default_margin) {
      return false;
    }
    if (this->margin_pairs != other.margin_pairs) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollisionMarginData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollisionMarginData_

// alias to use template instance with default allocator
using CollisionMarginData =
  tesseract_msgs::msg::CollisionMarginData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__COLLISION_MARGIN_DATA__STRUCT_HPP_
