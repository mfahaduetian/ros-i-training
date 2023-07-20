// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/SceneGraph.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__SCENE_GRAPH__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__SCENE_GRAPH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'links'
#include "tesseract_msgs/msg/detail/link__struct.hpp"
// Member 'joints'
#include "tesseract_msgs/msg/detail/joint__struct.hpp"
// Member 'acm'
#include "tesseract_msgs/msg/detail/allowed_collision_entry__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__SceneGraph __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__SceneGraph __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SceneGraph_
{
  using Type = SceneGraph_<ContainerAllocator>;

  explicit SceneGraph_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->root = "";
    }
  }

  explicit SceneGraph_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    root(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->root = "";
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _root_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _root_type root;
  using _links_type =
    std::vector<tesseract_msgs::msg::Link_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::Link_<ContainerAllocator>>>;
  _links_type links;
  using _joints_type =
    std::vector<tesseract_msgs::msg::Joint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::Joint_<ContainerAllocator>>>;
  _joints_type joints;
  using _invisible_links_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _invisible_links_type invisible_links;
  using _disabled_collision_links_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _disabled_collision_links_type disabled_collision_links;
  using _acm_type =
    std::vector<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>>;
  _acm_type acm;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__root(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->root = _arg;
    return *this;
  }
  Type & set__links(
    const std::vector<tesseract_msgs::msg::Link_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::Link_<ContainerAllocator>>> & _arg)
  {
    this->links = _arg;
    return *this;
  }
  Type & set__joints(
    const std::vector<tesseract_msgs::msg::Joint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::Joint_<ContainerAllocator>>> & _arg)
  {
    this->joints = _arg;
    return *this;
  }
  Type & set__invisible_links(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->invisible_links = _arg;
    return *this;
  }
  Type & set__disabled_collision_links(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->disabled_collision_links = _arg;
    return *this;
  }
  Type & set__acm(
    const std::vector<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tesseract_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>> & _arg)
  {
    this->acm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::SceneGraph_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::SceneGraph_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::SceneGraph_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::SceneGraph_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__SceneGraph
    std::shared_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__SceneGraph
    std::shared_ptr<tesseract_msgs::msg::SceneGraph_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SceneGraph_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->root != other.root) {
      return false;
    }
    if (this->links != other.links) {
      return false;
    }
    if (this->joints != other.joints) {
      return false;
    }
    if (this->invisible_links != other.invisible_links) {
      return false;
    }
    if (this->disabled_collision_links != other.disabled_collision_links) {
      return false;
    }
    if (this->acm != other.acm) {
      return false;
    }
    return true;
  }
  bool operator!=(const SceneGraph_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SceneGraph_

// alias to use template instance with default allocator
using SceneGraph =
  tesseract_msgs::msg::SceneGraph_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__SCENE_GRAPH__STRUCT_HPP_
