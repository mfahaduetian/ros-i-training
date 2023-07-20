// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'parent_to_joint_origin_transform'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'limits'
#include "tesseract_msgs/msg/detail/joint_limits__struct.hpp"
// Member 'dynamics'
#include "tesseract_msgs/msg/detail/joint_dynamics__struct.hpp"
// Member 'safety'
#include "tesseract_msgs/msg/detail/joint_safety__struct.hpp"
// Member 'calibration'
#include "tesseract_msgs/msg/detail/joint_calibration__struct.hpp"
// Member 'mimic'
#include "tesseract_msgs/msg/detail/joint_mimic__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__Joint __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__Joint __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Joint_
{
  using Type = Joint_<ContainerAllocator>;

  explicit Joint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parent_to_joint_origin_transform(_init),
    limits(_init),
    dynamics(_init),
    safety(_init),
    calibration(_init),
    mimic(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = 0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->axis.begin(), this->axis.end(), 0.0);
      this->child_link_name = "";
      this->parent_link_name = "";
    }
  }

  explicit Joint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    axis(_alloc),
    child_link_name(_alloc),
    parent_link_name(_alloc),
    parent_to_joint_origin_transform(_alloc, _init),
    limits(_alloc, _init),
    dynamics(_alloc, _init),
    safety(_alloc, _init),
    calibration(_alloc, _init),
    mimic(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = 0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->axis.begin(), this->axis.end(), 0.0);
      this->child_link_name = "";
      this->parent_link_name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _type_type =
    uint8_t;
  _type_type type;
  using _axis_type =
    std::array<double, 3>;
  _axis_type axis;
  using _child_link_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _child_link_name_type child_link_name;
  using _parent_link_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _parent_link_name_type parent_link_name;
  using _parent_to_joint_origin_transform_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _parent_to_joint_origin_transform_type parent_to_joint_origin_transform;
  using _limits_type =
    tesseract_msgs::msg::JointLimits_<ContainerAllocator>;
  _limits_type limits;
  using _dynamics_type =
    tesseract_msgs::msg::JointDynamics_<ContainerAllocator>;
  _dynamics_type dynamics;
  using _safety_type =
    tesseract_msgs::msg::JointSafety_<ContainerAllocator>;
  _safety_type safety;
  using _calibration_type =
    tesseract_msgs::msg::JointCalibration_<ContainerAllocator>;
  _calibration_type calibration;
  using _mimic_type =
    tesseract_msgs::msg::JointMimic_<ContainerAllocator>;
  _mimic_type mimic;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__axis(
    const std::array<double, 3> & _arg)
  {
    this->axis = _arg;
    return *this;
  }
  Type & set__child_link_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->child_link_name = _arg;
    return *this;
  }
  Type & set__parent_link_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->parent_link_name = _arg;
    return *this;
  }
  Type & set__parent_to_joint_origin_transform(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->parent_to_joint_origin_transform = _arg;
    return *this;
  }
  Type & set__limits(
    const tesseract_msgs::msg::JointLimits_<ContainerAllocator> & _arg)
  {
    this->limits = _arg;
    return *this;
  }
  Type & set__dynamics(
    const tesseract_msgs::msg::JointDynamics_<ContainerAllocator> & _arg)
  {
    this->dynamics = _arg;
    return *this;
  }
  Type & set__safety(
    const tesseract_msgs::msg::JointSafety_<ContainerAllocator> & _arg)
  {
    this->safety = _arg;
    return *this;
  }
  Type & set__calibration(
    const tesseract_msgs::msg::JointCalibration_<ContainerAllocator> & _arg)
  {
    this->calibration = _arg;
    return *this;
  }
  Type & set__mimic(
    const tesseract_msgs::msg::JointMimic_<ContainerAllocator> & _arg)
  {
    this->mimic = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t REVOLUTE =
    1u;
  static constexpr uint8_t CONTINUOUS =
    2u;
  static constexpr uint8_t PRISMATIC =
    3u;
  static constexpr uint8_t FLOATING =
    4u;
  static constexpr uint8_t PLANAR =
    5u;
  static constexpr uint8_t FIXED =
    6u;

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::Joint_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::Joint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::Joint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::Joint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::Joint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::Joint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::Joint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::Joint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::Joint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::Joint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__Joint
    std::shared_ptr<tesseract_msgs::msg::Joint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__Joint
    std::shared_ptr<tesseract_msgs::msg::Joint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Joint_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->axis != other.axis) {
      return false;
    }
    if (this->child_link_name != other.child_link_name) {
      return false;
    }
    if (this->parent_link_name != other.parent_link_name) {
      return false;
    }
    if (this->parent_to_joint_origin_transform != other.parent_to_joint_origin_transform) {
      return false;
    }
    if (this->limits != other.limits) {
      return false;
    }
    if (this->dynamics != other.dynamics) {
      return false;
    }
    if (this->safety != other.safety) {
      return false;
    }
    if (this->calibration != other.calibration) {
      return false;
    }
    if (this->mimic != other.mimic) {
      return false;
    }
    return true;
  }
  bool operator!=(const Joint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Joint_

// alias to use template instance with default allocator
using Joint =
  tesseract_msgs::msg::Joint_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Joint_<ContainerAllocator>::UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t Joint_<ContainerAllocator>::REVOLUTE;
template<typename ContainerAllocator>
constexpr uint8_t Joint_<ContainerAllocator>::CONTINUOUS;
template<typename ContainerAllocator>
constexpr uint8_t Joint_<ContainerAllocator>::PRISMATIC;
template<typename ContainerAllocator>
constexpr uint8_t Joint_<ContainerAllocator>::FLOATING;
template<typename ContainerAllocator>
constexpr uint8_t Joint_<ContainerAllocator>::PLANAR;
template<typename ContainerAllocator>
constexpr uint8_t Joint_<ContainerAllocator>::FIXED;

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT__STRUCT_HPP_
