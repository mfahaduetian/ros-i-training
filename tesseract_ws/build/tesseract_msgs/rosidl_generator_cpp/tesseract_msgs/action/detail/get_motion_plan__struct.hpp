// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:action/GetMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__ACTION__DETAIL__GET_MOTION_PLAN__STRUCT_HPP_
#define TESSERACT_MSGS__ACTION__DETAIL__GET_MOTION_PLAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request'
#include "tesseract_msgs/msg/detail/planning_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_Goal __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_Goal __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetMotionPlan_Goal_
{
  using Type = GetMotionPlan_Goal_<ContainerAllocator>;

  explicit GetMotionPlan_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    (void)_init;
  }

  explicit GetMotionPlan_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _request_type =
    tesseract_msgs::msg::PlanningRequest_<ContainerAllocator>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const tesseract_msgs::msg::PlanningRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::action::GetMotionPlan_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::action::GetMotionPlan_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_Goal
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_Goal
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMotionPlan_Goal_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMotionPlan_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMotionPlan_Goal_

// alias to use template instance with default allocator
using GetMotionPlan_Goal =
  tesseract_msgs::action::GetMotionPlan_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tesseract_msgs


// Include directives for member types
// Member 'response'
#include "tesseract_msgs/msg/detail/planning_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_Result __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_Result __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetMotionPlan_Result_
{
  using Type = GetMotionPlan_Result_<ContainerAllocator>;

  explicit GetMotionPlan_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_init)
  {
    (void)_init;
  }

  explicit GetMotionPlan_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _response_type =
    tesseract_msgs::msg::PlanningResponse_<ContainerAllocator>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const tesseract_msgs::msg::PlanningResponse_<ContainerAllocator> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::action::GetMotionPlan_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::action::GetMotionPlan_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_Result
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_Result
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMotionPlan_Result_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMotionPlan_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMotionPlan_Result_

// alias to use template instance with default allocator
using GetMotionPlan_Result =
  tesseract_msgs::action::GetMotionPlan_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tesseract_msgs


#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_Feedback __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetMotionPlan_Feedback_
{
  using Type = GetMotionPlan_Feedback_<ContainerAllocator>;

  explicit GetMotionPlan_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetMotionPlan_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    tesseract_msgs::action::GetMotionPlan_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::action::GetMotionPlan_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_Feedback
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_Feedback
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMotionPlan_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMotionPlan_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMotionPlan_Feedback_

// alias to use template instance with default allocator
using GetMotionPlan_Feedback =
  tesseract_msgs::action::GetMotionPlan_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tesseract_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "tesseract_msgs/action/detail/get_motion_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_SendGoal_Request __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetMotionPlan_SendGoal_Request_
{
  using Type = GetMotionPlan_SendGoal_Request_<ContainerAllocator>;

  explicit GetMotionPlan_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GetMotionPlan_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    tesseract_msgs::action::GetMotionPlan_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const tesseract_msgs::action::GetMotionPlan_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::action::GetMotionPlan_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::action::GetMotionPlan_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_SendGoal_Request
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_SendGoal_Request
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMotionPlan_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMotionPlan_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMotionPlan_SendGoal_Request_

// alias to use template instance with default allocator
using GetMotionPlan_SendGoal_Request =
  tesseract_msgs::action::GetMotionPlan_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tesseract_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_SendGoal_Response __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetMotionPlan_SendGoal_Response_
{
  using Type = GetMotionPlan_SendGoal_Response_<ContainerAllocator>;

  explicit GetMotionPlan_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GetMotionPlan_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::action::GetMotionPlan_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::action::GetMotionPlan_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_SendGoal_Response
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_SendGoal_Response
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMotionPlan_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMotionPlan_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMotionPlan_SendGoal_Response_

// alias to use template instance with default allocator
using GetMotionPlan_SendGoal_Response =
  tesseract_msgs::action::GetMotionPlan_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tesseract_msgs

namespace tesseract_msgs
{

namespace action
{

struct GetMotionPlan_SendGoal
{
  using Request = tesseract_msgs::action::GetMotionPlan_SendGoal_Request;
  using Response = tesseract_msgs::action::GetMotionPlan_SendGoal_Response;
};

}  // namespace action

}  // namespace tesseract_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_GetResult_Request __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetMotionPlan_GetResult_Request_
{
  using Type = GetMotionPlan_GetResult_Request_<ContainerAllocator>;

  explicit GetMotionPlan_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GetMotionPlan_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::action::GetMotionPlan_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::action::GetMotionPlan_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_GetResult_Request
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_GetResult_Request
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMotionPlan_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMotionPlan_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMotionPlan_GetResult_Request_

// alias to use template instance with default allocator
using GetMotionPlan_GetResult_Request =
  tesseract_msgs::action::GetMotionPlan_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tesseract_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "tesseract_msgs/action/detail/get_motion_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_GetResult_Response __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetMotionPlan_GetResult_Response_
{
  using Type = GetMotionPlan_GetResult_Response_<ContainerAllocator>;

  explicit GetMotionPlan_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GetMotionPlan_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    tesseract_msgs::action::GetMotionPlan_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const tesseract_msgs::action::GetMotionPlan_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::action::GetMotionPlan_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::action::GetMotionPlan_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_GetResult_Response
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_GetResult_Response
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMotionPlan_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMotionPlan_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMotionPlan_GetResult_Response_

// alias to use template instance with default allocator
using GetMotionPlan_GetResult_Response =
  tesseract_msgs::action::GetMotionPlan_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tesseract_msgs

namespace tesseract_msgs
{

namespace action
{

struct GetMotionPlan_GetResult
{
  using Request = tesseract_msgs::action::GetMotionPlan_GetResult_Request;
  using Response = tesseract_msgs::action::GetMotionPlan_GetResult_Response;
};

}  // namespace action

}  // namespace tesseract_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "tesseract_msgs/action/detail/get_motion_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__action__GetMotionPlan_FeedbackMessage __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GetMotionPlan_FeedbackMessage_
{
  using Type = GetMotionPlan_FeedbackMessage_<ContainerAllocator>;

  explicit GetMotionPlan_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GetMotionPlan_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    tesseract_msgs::action::GetMotionPlan_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const tesseract_msgs::action::GetMotionPlan_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::action::GetMotionPlan_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::action::GetMotionPlan_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::action::GetMotionPlan_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::action::GetMotionPlan_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::action::GetMotionPlan_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_FeedbackMessage
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__action__GetMotionPlan_FeedbackMessage
    std::shared_ptr<tesseract_msgs::action::GetMotionPlan_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMotionPlan_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMotionPlan_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMotionPlan_FeedbackMessage_

// alias to use template instance with default allocator
using GetMotionPlan_FeedbackMessage =
  tesseract_msgs::action::GetMotionPlan_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tesseract_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace tesseract_msgs
{

namespace action
{

struct GetMotionPlan
{
  /// The goal message defined in the action definition.
  using Goal = tesseract_msgs::action::GetMotionPlan_Goal;
  /// The result message defined in the action definition.
  using Result = tesseract_msgs::action::GetMotionPlan_Result;
  /// The feedback message defined in the action definition.
  using Feedback = tesseract_msgs::action::GetMotionPlan_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = tesseract_msgs::action::GetMotionPlan_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = tesseract_msgs::action::GetMotionPlan_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = tesseract_msgs::action::GetMotionPlan_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GetMotionPlan GetMotionPlan;

}  // namespace action

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__ACTION__DETAIL__GET_MOTION_PLAN__STRUCT_HPP_
