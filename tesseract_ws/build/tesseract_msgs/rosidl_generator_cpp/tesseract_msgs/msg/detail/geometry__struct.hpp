// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GEOMETRY__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__GEOMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mesh'
#include "tesseract_msgs/msg/detail/mesh__struct.hpp"
// Member 'octomap'
#include "octomap_msgs/msg/detail/octomap__struct.hpp"
// Member 'octomap_sub_type'
#include "tesseract_msgs/msg/detail/octree_sub_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__Geometry __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__Geometry __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Geometry_
{
  using Type = Geometry_<ContainerAllocator>;

  explicit Geometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mesh(_init),
    octomap(_init),
    octomap_sub_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->sphere_radius = 0.0;
      std::fill<typename std::array<double, 2>::iterator, double>(this->cylinder_dimensions.begin(), this->cylinder_dimensions.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->capsule_dimensions.begin(), this->capsule_dimensions.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->cone_dimensions.begin(), this->cone_dimensions.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->box_dimensions.begin(), this->box_dimensions.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(this->plane_coeff.begin(), this->plane_coeff.end(), 0.0);
    }
  }

  explicit Geometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cylinder_dimensions(_alloc),
    capsule_dimensions(_alloc),
    cone_dimensions(_alloc),
    box_dimensions(_alloc),
    plane_coeff(_alloc),
    mesh(_alloc, _init),
    octomap(_alloc, _init),
    octomap_sub_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->sphere_radius = 0.0;
      std::fill<typename std::array<double, 2>::iterator, double>(this->cylinder_dimensions.begin(), this->cylinder_dimensions.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->capsule_dimensions.begin(), this->capsule_dimensions.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->cone_dimensions.begin(), this->cone_dimensions.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->box_dimensions.begin(), this->box_dimensions.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(this->plane_coeff.begin(), this->plane_coeff.end(), 0.0);
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _sphere_radius_type =
    double;
  _sphere_radius_type sphere_radius;
  using _cylinder_dimensions_type =
    std::array<double, 2>;
  _cylinder_dimensions_type cylinder_dimensions;
  using _capsule_dimensions_type =
    std::array<double, 2>;
  _capsule_dimensions_type capsule_dimensions;
  using _cone_dimensions_type =
    std::array<double, 2>;
  _cone_dimensions_type cone_dimensions;
  using _box_dimensions_type =
    std::array<double, 3>;
  _box_dimensions_type box_dimensions;
  using _plane_coeff_type =
    std::array<double, 4>;
  _plane_coeff_type plane_coeff;
  using _mesh_type =
    tesseract_msgs::msg::Mesh_<ContainerAllocator>;
  _mesh_type mesh;
  using _octomap_type =
    octomap_msgs::msg::Octomap_<ContainerAllocator>;
  _octomap_type octomap;
  using _octomap_sub_type_type =
    tesseract_msgs::msg::OctreeSubType_<ContainerAllocator>;
  _octomap_sub_type_type octomap_sub_type;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__sphere_radius(
    const double & _arg)
  {
    this->sphere_radius = _arg;
    return *this;
  }
  Type & set__cylinder_dimensions(
    const std::array<double, 2> & _arg)
  {
    this->cylinder_dimensions = _arg;
    return *this;
  }
  Type & set__capsule_dimensions(
    const std::array<double, 2> & _arg)
  {
    this->capsule_dimensions = _arg;
    return *this;
  }
  Type & set__cone_dimensions(
    const std::array<double, 2> & _arg)
  {
    this->cone_dimensions = _arg;
    return *this;
  }
  Type & set__box_dimensions(
    const std::array<double, 3> & _arg)
  {
    this->box_dimensions = _arg;
    return *this;
  }
  Type & set__plane_coeff(
    const std::array<double, 4> & _arg)
  {
    this->plane_coeff = _arg;
    return *this;
  }
  Type & set__mesh(
    const tesseract_msgs::msg::Mesh_<ContainerAllocator> & _arg)
  {
    this->mesh = _arg;
    return *this;
  }
  Type & set__octomap(
    const octomap_msgs::msg::Octomap_<ContainerAllocator> & _arg)
  {
    this->octomap = _arg;
    return *this;
  }
  Type & set__octomap_sub_type(
    const tesseract_msgs::msg::OctreeSubType_<ContainerAllocator> & _arg)
  {
    this->octomap_sub_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SPHERE =
    1u;
  static constexpr uint8_t CYLINDER =
    2u;
  static constexpr uint8_t CAPSULE =
    10u;
  static constexpr uint8_t CONE =
    3u;
  static constexpr uint8_t BOX =
    4u;
  static constexpr uint8_t PLANE =
    5u;
  static constexpr uint8_t MESH =
    6u;
  static constexpr uint8_t CONVEX_MESH =
    7u;
  static constexpr uint8_t SDF_MESH =
    8u;
  static constexpr uint8_t OCTREE =
    9u;

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::Geometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::Geometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::Geometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::Geometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::Geometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::Geometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::Geometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::Geometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::Geometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::Geometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__Geometry
    std::shared_ptr<tesseract_msgs::msg::Geometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__Geometry
    std::shared_ptr<tesseract_msgs::msg::Geometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Geometry_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->sphere_radius != other.sphere_radius) {
      return false;
    }
    if (this->cylinder_dimensions != other.cylinder_dimensions) {
      return false;
    }
    if (this->capsule_dimensions != other.capsule_dimensions) {
      return false;
    }
    if (this->cone_dimensions != other.cone_dimensions) {
      return false;
    }
    if (this->box_dimensions != other.box_dimensions) {
      return false;
    }
    if (this->plane_coeff != other.plane_coeff) {
      return false;
    }
    if (this->mesh != other.mesh) {
      return false;
    }
    if (this->octomap != other.octomap) {
      return false;
    }
    if (this->octomap_sub_type != other.octomap_sub_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const Geometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Geometry_

// alias to use template instance with default allocator
using Geometry =
  tesseract_msgs::msg::Geometry_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Geometry_<ContainerAllocator>::SPHERE;
template<typename ContainerAllocator>
constexpr uint8_t Geometry_<ContainerAllocator>::CYLINDER;
template<typename ContainerAllocator>
constexpr uint8_t Geometry_<ContainerAllocator>::CAPSULE;
template<typename ContainerAllocator>
constexpr uint8_t Geometry_<ContainerAllocator>::CONE;
template<typename ContainerAllocator>
constexpr uint8_t Geometry_<ContainerAllocator>::BOX;
template<typename ContainerAllocator>
constexpr uint8_t Geometry_<ContainerAllocator>::PLANE;
template<typename ContainerAllocator>
constexpr uint8_t Geometry_<ContainerAllocator>::MESH;
template<typename ContainerAllocator>
constexpr uint8_t Geometry_<ContainerAllocator>::CONVEX_MESH;
template<typename ContainerAllocator>
constexpr uint8_t Geometry_<ContainerAllocator>::SDF_MESH;
template<typename ContainerAllocator>
constexpr uint8_t Geometry_<ContainerAllocator>::OCTREE;

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__GEOMETRY__STRUCT_HPP_
