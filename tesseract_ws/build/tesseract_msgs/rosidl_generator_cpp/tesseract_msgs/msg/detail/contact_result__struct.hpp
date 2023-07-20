// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/ContactResult.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'nearest_points'
// Member 'nearest_points_local'
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'transform'
// Member 'cc_transform'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__ContactResult __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__ContactResult __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ContactResult_
{
  using Type = ContactResult_<ContainerAllocator>;

  explicit ContactResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    normal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->type_id.begin(), this->type_id.end(), 0);
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 2>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->link_names.begin(), this->link_names.end(), "");
      std::fill<typename std::array<uint64_t, 2>::iterator, uint64_t>(this->shape_id.begin(), this->shape_id.end(), 0ull);
      std::fill<typename std::array<uint64_t, 2>::iterator, uint64_t>(this->subshape_id.begin(), this->subshape_id.end(), 0ull);
      this->nearest_points.fill(geometry_msgs::msg::Vector3_<ContainerAllocator>{_init});
      this->nearest_points_local.fill(geometry_msgs::msg::Vector3_<ContainerAllocator>{_init});
      this->transform.fill(geometry_msgs::msg::Pose_<ContainerAllocator>{_init});
      std::fill<typename std::array<double, 2>::iterator, double>(this->cc_time.begin(), this->cc_time.end(), 0.0);
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->cc_type.begin(), this->cc_type.end(), 0);
      this->cc_transform.fill(geometry_msgs::msg::Pose_<ContainerAllocator>{_init});
    }
  }

  explicit ContactResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    type_id(_alloc),
    link_names(_alloc),
    shape_id(_alloc),
    subshape_id(_alloc),
    nearest_points(_alloc),
    nearest_points_local(_alloc),
    transform(_alloc),
    normal(_alloc, _init),
    cc_time(_alloc),
    cc_type(_alloc),
    cc_transform(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->type_id.begin(), this->type_id.end(), 0);
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 2>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->link_names.begin(), this->link_names.end(), "");
      std::fill<typename std::array<uint64_t, 2>::iterator, uint64_t>(this->shape_id.begin(), this->shape_id.end(), 0ull);
      std::fill<typename std::array<uint64_t, 2>::iterator, uint64_t>(this->subshape_id.begin(), this->subshape_id.end(), 0ull);
      this->nearest_points.fill(geometry_msgs::msg::Vector3_<ContainerAllocator>{_alloc, _init});
      this->nearest_points_local.fill(geometry_msgs::msg::Vector3_<ContainerAllocator>{_alloc, _init});
      this->transform.fill(geometry_msgs::msg::Pose_<ContainerAllocator>{_alloc, _init});
      std::fill<typename std::array<double, 2>::iterator, double>(this->cc_time.begin(), this->cc_time.end(), 0.0);
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->cc_type.begin(), this->cc_type.end(), 0);
      this->cc_transform.fill(geometry_msgs::msg::Pose_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _distance_type =
    double;
  _distance_type distance;
  using _type_id_type =
    std::array<uint8_t, 2>;
  _type_id_type type_id;
  using _link_names_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 2>;
  _link_names_type link_names;
  using _shape_id_type =
    std::array<uint64_t, 2>;
  _shape_id_type shape_id;
  using _subshape_id_type =
    std::array<uint64_t, 2>;
  _subshape_id_type subshape_id;
  using _nearest_points_type =
    std::array<geometry_msgs::msg::Vector3_<ContainerAllocator>, 2>;
  _nearest_points_type nearest_points;
  using _nearest_points_local_type =
    std::array<geometry_msgs::msg::Vector3_<ContainerAllocator>, 2>;
  _nearest_points_local_type nearest_points_local;
  using _transform_type =
    std::array<geometry_msgs::msg::Pose_<ContainerAllocator>, 2>;
  _transform_type transform;
  using _normal_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _normal_type normal;
  using _cc_time_type =
    std::array<double, 2>;
  _cc_time_type cc_time;
  using _cc_type_type =
    std::array<uint8_t, 2>;
  _cc_type_type cc_type;
  using _cc_transform_type =
    std::array<geometry_msgs::msg::Pose_<ContainerAllocator>, 2>;
  _cc_transform_type cc_transform;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__type_id(
    const std::array<uint8_t, 2> & _arg)
  {
    this->type_id = _arg;
    return *this;
  }
  Type & set__link_names(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 2> & _arg)
  {
    this->link_names = _arg;
    return *this;
  }
  Type & set__shape_id(
    const std::array<uint64_t, 2> & _arg)
  {
    this->shape_id = _arg;
    return *this;
  }
  Type & set__subshape_id(
    const std::array<uint64_t, 2> & _arg)
  {
    this->subshape_id = _arg;
    return *this;
  }
  Type & set__nearest_points(
    const std::array<geometry_msgs::msg::Vector3_<ContainerAllocator>, 2> & _arg)
  {
    this->nearest_points = _arg;
    return *this;
  }
  Type & set__nearest_points_local(
    const std::array<geometry_msgs::msg::Vector3_<ContainerAllocator>, 2> & _arg)
  {
    this->nearest_points_local = _arg;
    return *this;
  }
  Type & set__transform(
    const std::array<geometry_msgs::msg::Pose_<ContainerAllocator>, 2> & _arg)
  {
    this->transform = _arg;
    return *this;
  }
  Type & set__normal(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->normal = _arg;
    return *this;
  }
  Type & set__cc_time(
    const std::array<double, 2> & _arg)
  {
    this->cc_time = _arg;
    return *this;
  }
  Type & set__cc_type(
    const std::array<uint8_t, 2> & _arg)
  {
    this->cc_type = _arg;
    return *this;
  }
  Type & set__cc_transform(
    const std::array<geometry_msgs::msg::Pose_<ContainerAllocator>, 2> & _arg)
  {
    this->cc_transform = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CCTYPE_NONE =
    0u;
  static constexpr uint8_t CCTYPE_TIME0 =
    1u;
  static constexpr uint8_t CCTYPE_TIME1 =
    2u;
  static constexpr uint8_t CCTYPE_BETWEEN =
    3u;

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::ContactResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::ContactResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::ContactResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::ContactResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::ContactResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::ContactResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::ContactResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::ContactResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::ContactResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::ContactResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__ContactResult
    std::shared_ptr<tesseract_msgs::msg::ContactResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__ContactResult
    std::shared_ptr<tesseract_msgs::msg::ContactResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContactResult_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->type_id != other.type_id) {
      return false;
    }
    if (this->link_names != other.link_names) {
      return false;
    }
    if (this->shape_id != other.shape_id) {
      return false;
    }
    if (this->subshape_id != other.subshape_id) {
      return false;
    }
    if (this->nearest_points != other.nearest_points) {
      return false;
    }
    if (this->nearest_points_local != other.nearest_points_local) {
      return false;
    }
    if (this->transform != other.transform) {
      return false;
    }
    if (this->normal != other.normal) {
      return false;
    }
    if (this->cc_time != other.cc_time) {
      return false;
    }
    if (this->cc_type != other.cc_type) {
      return false;
    }
    if (this->cc_transform != other.cc_transform) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContactResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContactResult_

// alias to use template instance with default allocator
using ContactResult =
  tesseract_msgs::msg::ContactResult_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ContactResult_<ContainerAllocator>::CCTYPE_NONE;
template<typename ContainerAllocator>
constexpr uint8_t ContactResult_<ContainerAllocator>::CCTYPE_TIME0;
template<typename ContainerAllocator>
constexpr uint8_t ContactResult_<ContainerAllocator>::CCTYPE_TIME1;
template<typename ContainerAllocator>
constexpr uint8_t ContactResult_<ContainerAllocator>::CCTYPE_BETWEEN;

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__DETAIL__CONTACT_RESULT__STRUCT_HPP_
