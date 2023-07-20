// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:srv/ComputeContactResultVector.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__DETAIL__COMPUTE_CONTACT_RESULT_VECTOR__STRUCT_HPP_
#define TESSERACT_MSGS__SRV__DETAIL__COMPUTE_CONTACT_RESULT_VECTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joint_states'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__srv__ComputeContactResultVector_Request __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__srv__ComputeContactResultVector_Request __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeContactResultVector_Request_
{
  using Type = ComputeContactResultVector_Request_<ContainerAllocator>;

  explicit ComputeContactResultVector_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_states(_init)
  {
    (void)_init;
  }

  explicit ComputeContactResultVector_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_states(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _joint_states_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _joint_states_type joint_states;

  // setters for named parameter idiom
  Type & set__joint_states(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->joint_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::srv::ComputeContactResultVector_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::srv::ComputeContactResultVector_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::srv::ComputeContactResultVector_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::srv::ComputeContactResultVector_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::ComputeContactResultVector_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::ComputeContactResultVector_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::ComputeContactResultVector_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::ComputeContactResultVector_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::srv::ComputeContactResultVector_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::srv::ComputeContactResultVector_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__srv__ComputeContactResultVector_Request
    std::shared_ptr<tesseract_msgs::srv::ComputeContactResultVector_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__srv__ComputeContactResultVector_Request
    std::shared_ptr<tesseract_msgs::srv::ComputeContactResultVector_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeContactResultVector_Request_ & other) const
  {
    if (this->joint_states != other.joint_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeContactResultVector_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeContactResultVector_Request_

// alias to use template instance with default allocator
using ComputeContactResultVector_Request =
  tesseract_msgs::srv::ComputeContactResultVector_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tesseract_msgs


// Include directives for member types
// Member 'collision_result'
#include "tesseract_msgs/msg/detail/contact_result_vector__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__srv__ComputeContactResultVector_Response __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__srv__ComputeContactResultVector_Response __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputeContactResultVector_Response_
{
  using Type = ComputeContactResultVector_Response_<ContainerAllocator>;

  explicit ComputeContactResultVector_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : collision_result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ComputeContactResultVector_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : collision_result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _collision_result_type =
    tesseract_msgs::msg::ContactResultVector_<ContainerAllocator>;
  _collision_result_type collision_result;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__collision_result(
    const tesseract_msgs::msg::ContactResultVector_<ContainerAllocator> & _arg)
  {
    this->collision_result = _arg;
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
    tesseract_msgs::srv::ComputeContactResultVector_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::srv::ComputeContactResultVector_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::srv::ComputeContactResultVector_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::srv::ComputeContactResultVector_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::ComputeContactResultVector_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::ComputeContactResultVector_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::ComputeContactResultVector_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::ComputeContactResultVector_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::srv::ComputeContactResultVector_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::srv::ComputeContactResultVector_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__srv__ComputeContactResultVector_Response
    std::shared_ptr<tesseract_msgs::srv::ComputeContactResultVector_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__srv__ComputeContactResultVector_Response
    std::shared_ptr<tesseract_msgs::srv::ComputeContactResultVector_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputeContactResultVector_Response_ & other) const
  {
    if (this->collision_result != other.collision_result) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputeContactResultVector_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputeContactResultVector_Response_

// alias to use template instance with default allocator
using ComputeContactResultVector_Response =
  tesseract_msgs::srv::ComputeContactResultVector_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tesseract_msgs

namespace tesseract_msgs
{

namespace srv
{

struct ComputeContactResultVector
{
  using Request = tesseract_msgs::srv::ComputeContactResultVector_Request;
  using Response = tesseract_msgs::srv::ComputeContactResultVector_Response;
};

}  // namespace srv

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__SRV__DETAIL__COMPUTE_CONTACT_RESULT_VECTOR__STRUCT_HPP_
