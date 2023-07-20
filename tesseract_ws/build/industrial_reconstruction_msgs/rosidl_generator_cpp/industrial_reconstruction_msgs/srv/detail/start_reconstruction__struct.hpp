// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from industrial_reconstruction_msgs:srv/StartReconstruction.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__START_RECONSTRUCTION__STRUCT_HPP_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__START_RECONSTRUCTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tsdf_params'
#include "industrial_reconstruction_msgs/msg/detail/tsdf_volume_params__struct.hpp"
// Member 'rgbd_params'
#include "industrial_reconstruction_msgs/msg/detail/rgbd_image_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__industrial_reconstruction_msgs__srv__StartReconstruction_Request __attribute__((deprecated))
#else
# define DEPRECATED__industrial_reconstruction_msgs__srv__StartReconstruction_Request __declspec(deprecated)
#endif

namespace industrial_reconstruction_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartReconstruction_Request_
{
  using Type = StartReconstruction_Request_<ContainerAllocator>;

  explicit StartReconstruction_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tsdf_params(_init),
    rgbd_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracking_frame = "";
      this->relative_frame = "";
      this->translation_distance = 0.0f;
      this->rotational_distance = 0.0f;
      this->live = false;
    }
  }

  explicit StartReconstruction_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tracking_frame(_alloc),
    relative_frame(_alloc),
    tsdf_params(_alloc, _init),
    rgbd_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracking_frame = "";
      this->relative_frame = "";
      this->translation_distance = 0.0f;
      this->rotational_distance = 0.0f;
      this->live = false;
    }
  }

  // field types and members
  using _tracking_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tracking_frame_type tracking_frame;
  using _relative_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _relative_frame_type relative_frame;
  using _translation_distance_type =
    float;
  _translation_distance_type translation_distance;
  using _rotational_distance_type =
    float;
  _rotational_distance_type rotational_distance;
  using _live_type =
    bool;
  _live_type live;
  using _tsdf_params_type =
    industrial_reconstruction_msgs::msg::TSDFVolumeParams_<ContainerAllocator>;
  _tsdf_params_type tsdf_params;
  using _rgbd_params_type =
    industrial_reconstruction_msgs::msg::RGBDImageParams_<ContainerAllocator>;
  _rgbd_params_type rgbd_params;

  // setters for named parameter idiom
  Type & set__tracking_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tracking_frame = _arg;
    return *this;
  }
  Type & set__relative_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->relative_frame = _arg;
    return *this;
  }
  Type & set__translation_distance(
    const float & _arg)
  {
    this->translation_distance = _arg;
    return *this;
  }
  Type & set__rotational_distance(
    const float & _arg)
  {
    this->rotational_distance = _arg;
    return *this;
  }
  Type & set__live(
    const bool & _arg)
  {
    this->live = _arg;
    return *this;
  }
  Type & set__tsdf_params(
    const industrial_reconstruction_msgs::msg::TSDFVolumeParams_<ContainerAllocator> & _arg)
  {
    this->tsdf_params = _arg;
    return *this;
  }
  Type & set__rgbd_params(
    const industrial_reconstruction_msgs::msg::RGBDImageParams_<ContainerAllocator> & _arg)
  {
    this->rgbd_params = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    industrial_reconstruction_msgs::srv::StartReconstruction_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const industrial_reconstruction_msgs::srv::StartReconstruction_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      industrial_reconstruction_msgs::srv::StartReconstruction_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      industrial_reconstruction_msgs::srv::StartReconstruction_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__industrial_reconstruction_msgs__srv__StartReconstruction_Request
    std::shared_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__industrial_reconstruction_msgs__srv__StartReconstruction_Request
    std::shared_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartReconstruction_Request_ & other) const
  {
    if (this->tracking_frame != other.tracking_frame) {
      return false;
    }
    if (this->relative_frame != other.relative_frame) {
      return false;
    }
    if (this->translation_distance != other.translation_distance) {
      return false;
    }
    if (this->rotational_distance != other.rotational_distance) {
      return false;
    }
    if (this->live != other.live) {
      return false;
    }
    if (this->tsdf_params != other.tsdf_params) {
      return false;
    }
    if (this->rgbd_params != other.rgbd_params) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartReconstruction_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartReconstruction_Request_

// alias to use template instance with default allocator
using StartReconstruction_Request =
  industrial_reconstruction_msgs::srv::StartReconstruction_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace industrial_reconstruction_msgs


#ifndef _WIN32
# define DEPRECATED__industrial_reconstruction_msgs__srv__StartReconstruction_Response __attribute__((deprecated))
#else
# define DEPRECATED__industrial_reconstruction_msgs__srv__StartReconstruction_Response __declspec(deprecated)
#endif

namespace industrial_reconstruction_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartReconstruction_Response_
{
  using Type = StartReconstruction_Response_<ContainerAllocator>;

  explicit StartReconstruction_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit StartReconstruction_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    industrial_reconstruction_msgs::srv::StartReconstruction_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const industrial_reconstruction_msgs::srv::StartReconstruction_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      industrial_reconstruction_msgs::srv::StartReconstruction_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      industrial_reconstruction_msgs::srv::StartReconstruction_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__industrial_reconstruction_msgs__srv__StartReconstruction_Response
    std::shared_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__industrial_reconstruction_msgs__srv__StartReconstruction_Response
    std::shared_ptr<industrial_reconstruction_msgs::srv::StartReconstruction_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartReconstruction_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartReconstruction_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartReconstruction_Response_

// alias to use template instance with default allocator
using StartReconstruction_Response =
  industrial_reconstruction_msgs::srv::StartReconstruction_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace industrial_reconstruction_msgs

namespace industrial_reconstruction_msgs
{

namespace srv
{

struct StartReconstruction
{
  using Request = industrial_reconstruction_msgs::srv::StartReconstruction_Request;
  using Response = industrial_reconstruction_msgs::srv::StartReconstruction_Response;
};

}  // namespace srv

}  // namespace industrial_reconstruction_msgs

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__START_RECONSTRUCTION__STRUCT_HPP_
