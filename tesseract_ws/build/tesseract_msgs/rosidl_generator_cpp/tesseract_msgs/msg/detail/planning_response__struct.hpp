// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/PlanningResponse.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__PLANNING_RESPONSE__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__PLANNING_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'initial_state'
#include "tesseract_msgs/msg/detail/string_double_pair__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__PlanningResponse __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__PlanningResponse __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningResponse_
{
  using Type = PlanningResponse_<ContainerAllocator>;

  explicit PlanningResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->results = "";
      this->dotgraph = "";
      this->successful = false;
      this->status_string = "";
    }
  }

  explicit PlanningResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : results(_alloc),
    dotgraph(_alloc),
    status_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->results = "";
      this->dotgraph = "";
      this->successful = false;
      this->status_string = "";
    }
  }

  // field types and members
  using _results_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _results_type results;
  using _initial_state_type =
    std::vector<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>>>;
  _initial_state_type initial_state;
  using _dotgraph_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _dotgraph_type dotgraph;
  using _successful_type =
    bool;
  _successful_type successful;
  using _status_string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_string_type status_string;

  // setters for named parameter idiom
  Type & set__results(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->results = _arg;
    return *this;
  }
  Type & set__initial_state(
    const std::vector<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::StringDoublePair_<ContainerAllocator>>> & _arg)
  {
    this->initial_state = _arg;
    return *this;
  }
  Type & set__dotgraph(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->dotgraph = _arg;
    return *this;
  }
  Type & set__successful(
    const bool & _arg)
  {
    this->successful = _arg;
    return *this;
  }
  Type & set__status_string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_string = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::PlanningResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::PlanningResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::PlanningResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::PlanningResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::PlanningResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::PlanningResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::PlanningResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::PlanningResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::PlanningResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::PlanningResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__PlanningResponse
    std::shared_ptr<tesseract_msgs::msg::PlanningResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__PlanningResponse
    std::shared_ptr<tesseract_msgs::msg::PlanningResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningResponse_ & other) const
  {
    if (this->results != other.results) {
      return false;
    }
    if (this->initial_state != other.initial_state) {
      return false;
    }
    if (this->dotgraph != other.dotgraph) {
      return false;
    }
    if (this->successful != other.successful) {
      return false;
    }
    if (this->status_string != other.status_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningResponse_

// alias to use template instance with default allocator
using PlanningResponse =
  tesseract_msgs::msg::PlanningResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__PLANNING_RESPONSE__STRUCT_HPP_
