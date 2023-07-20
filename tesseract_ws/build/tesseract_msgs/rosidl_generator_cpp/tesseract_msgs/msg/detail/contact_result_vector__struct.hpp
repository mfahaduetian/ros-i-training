// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/ContactResultVector.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT_VECTOR__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT_VECTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'contacts'
#include "tesseract_msgs/msg/detail/contact_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__ContactResultVector __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__ContactResultVector __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ContactResultVector_
{
  using Type = ContactResultVector_<ContainerAllocator>;

  explicit ContactResultVector_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ContactResultVector_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _contacts_type =
    std::vector<tesseract_msgs::msg::ContactResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::ContactResult_<ContainerAllocator>>>;
  _contacts_type contacts;

  // setters for named parameter idiom
  Type & set__contacts(
    const std::vector<tesseract_msgs::msg::ContactResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::ContactResult_<ContainerAllocator>>> & _arg)
  {
    this->contacts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::ContactResultVector_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::ContactResultVector_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::ContactResultVector_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::ContactResultVector_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::ContactResultVector_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::ContactResultVector_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::ContactResultVector_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::ContactResultVector_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::ContactResultVector_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::ContactResultVector_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__ContactResultVector
    std::shared_ptr<tesseract_msgs::msg::ContactResultVector_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__ContactResultVector
    std::shared_ptr<tesseract_msgs::msg::ContactResultVector_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContactResultVector_ & other) const
  {
    if (this->contacts != other.contacts) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContactResultVector_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContactResultVector_

// alias to use template instance with default allocator
using ContactResultVector =
  tesseract_msgs::msg::ContactResultVector_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT_VECTOR__STRUCT_HPP_
