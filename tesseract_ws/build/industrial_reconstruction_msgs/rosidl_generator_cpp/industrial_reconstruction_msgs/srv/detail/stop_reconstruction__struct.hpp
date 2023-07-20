// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from industrial_reconstruction_msgs:srv/StopReconstruction.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__STOP_RECONSTRUCTION__STRUCT_HPP_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__STOP_RECONSTRUCTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'normal_filters'
#include "industrial_reconstruction_msgs/msg/detail/normal_filter_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__industrial_reconstruction_msgs__srv__StopReconstruction_Request __attribute__((deprecated))
#else
# define DEPRECATED__industrial_reconstruction_msgs__srv__StopReconstruction_Request __declspec(deprecated)
#endif

namespace industrial_reconstruction_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StopReconstruction_Request_
{
  using Type = StopReconstruction_Request_<ContainerAllocator>;

  explicit StopReconstruction_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->archive_directory = "";
      this->mesh_filepath = "";
      this->min_num_faces = 0ul;
    }
  }

  explicit StopReconstruction_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : archive_directory(_alloc),
    mesh_filepath(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->archive_directory = "";
      this->mesh_filepath = "";
      this->min_num_faces = 0ul;
    }
  }

  // field types and members
  using _archive_directory_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _archive_directory_type archive_directory;
  using _mesh_filepath_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mesh_filepath_type mesh_filepath;
  using _min_num_faces_type =
    uint32_t;
  _min_num_faces_type min_num_faces;
  using _normal_filters_type =
    std::vector<industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator>>>;
  _normal_filters_type normal_filters;

  // setters for named parameter idiom
  Type & set__archive_directory(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->archive_directory = _arg;
    return *this;
  }
  Type & set__mesh_filepath(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mesh_filepath = _arg;
    return *this;
  }
  Type & set__min_num_faces(
    const uint32_t & _arg)
  {
    this->min_num_faces = _arg;
    return *this;
  }
  Type & set__normal_filters(
    const std::vector<industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<industrial_reconstruction_msgs::msg::NormalFilterParams_<ContainerAllocator>>> & _arg)
  {
    this->normal_filters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    industrial_reconstruction_msgs::srv::StopReconstruction_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const industrial_reconstruction_msgs::srv::StopReconstruction_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      industrial_reconstruction_msgs::srv::StopReconstruction_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      industrial_reconstruction_msgs::srv::StopReconstruction_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__industrial_reconstruction_msgs__srv__StopReconstruction_Request
    std::shared_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__industrial_reconstruction_msgs__srv__StopReconstruction_Request
    std::shared_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopReconstruction_Request_ & other) const
  {
    if (this->archive_directory != other.archive_directory) {
      return false;
    }
    if (this->mesh_filepath != other.mesh_filepath) {
      return false;
    }
    if (this->min_num_faces != other.min_num_faces) {
      return false;
    }
    if (this->normal_filters != other.normal_filters) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopReconstruction_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopReconstruction_Request_

// alias to use template instance with default allocator
using StopReconstruction_Request =
  industrial_reconstruction_msgs::srv::StopReconstruction_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace industrial_reconstruction_msgs


#ifndef _WIN32
# define DEPRECATED__industrial_reconstruction_msgs__srv__StopReconstruction_Response __attribute__((deprecated))
#else
# define DEPRECATED__industrial_reconstruction_msgs__srv__StopReconstruction_Response __declspec(deprecated)
#endif

namespace industrial_reconstruction_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StopReconstruction_Response_
{
  using Type = StopReconstruction_Response_<ContainerAllocator>;

  explicit StopReconstruction_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit StopReconstruction_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    industrial_reconstruction_msgs::srv::StopReconstruction_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const industrial_reconstruction_msgs::srv::StopReconstruction_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      industrial_reconstruction_msgs::srv::StopReconstruction_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      industrial_reconstruction_msgs::srv::StopReconstruction_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__industrial_reconstruction_msgs__srv__StopReconstruction_Response
    std::shared_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__industrial_reconstruction_msgs__srv__StopReconstruction_Response
    std::shared_ptr<industrial_reconstruction_msgs::srv::StopReconstruction_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopReconstruction_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopReconstruction_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopReconstruction_Response_

// alias to use template instance with default allocator
using StopReconstruction_Response =
  industrial_reconstruction_msgs::srv::StopReconstruction_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace industrial_reconstruction_msgs

namespace industrial_reconstruction_msgs
{

namespace srv
{

struct StopReconstruction
{
  using Request = industrial_reconstruction_msgs::srv::StopReconstruction_Request;
  using Response = industrial_reconstruction_msgs::srv::StopReconstruction_Response;
};

}  // namespace srv

}  // namespace industrial_reconstruction_msgs

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__STOP_RECONSTRUCTION__STRUCT_HPP_
