// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__JOINT__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__JOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  tesseract_msgs__msg__Joint__UNKNOWN = 0
};

/// Constant 'REVOLUTE'.
enum
{
  tesseract_msgs__msg__Joint__REVOLUTE = 1
};

/// Constant 'CONTINUOUS'.
enum
{
  tesseract_msgs__msg__Joint__CONTINUOUS = 2
};

/// Constant 'PRISMATIC'.
enum
{
  tesseract_msgs__msg__Joint__PRISMATIC = 3
};

/// Constant 'FLOATING'.
enum
{
  tesseract_msgs__msg__Joint__FLOATING = 4
};

/// Constant 'PLANAR'.
enum
{
  tesseract_msgs__msg__Joint__PLANAR = 5
};

/// Constant 'FIXED'.
enum
{
  tesseract_msgs__msg__Joint__FIXED = 6
};

// Include directives for member types
// Member 'name'
// Member 'child_link_name'
// Member 'parent_link_name'
#include "rosidl_runtime_c/string.h"
// Member 'parent_to_joint_origin_transform'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'limits'
#include "tesseract_msgs/msg/detail/joint_limits__struct.h"
// Member 'dynamics'
#include "tesseract_msgs/msg/detail/joint_dynamics__struct.h"
// Member 'safety'
#include "tesseract_msgs/msg/detail/joint_safety__struct.h"
// Member 'calibration'
#include "tesseract_msgs/msg/detail/joint_calibration__struct.h"
// Member 'mimic'
#include "tesseract_msgs/msg/detail/joint_mimic__struct.h"

/// Struct defined in msg/Joint in the package tesseract_msgs.
typedef struct tesseract_msgs__msg__Joint
{
  /// Required Parameters
  rosidl_runtime_c__String name;
  /// (UNKNOWN, REVOLUTE, CONTINUOUS, PRISMATIC, FLOATING, PLANAR, FIXED)
  uint8_t type;
  /// rief     type_       meaning of axis_
  /// ------------------------------------------------------
  ///            UNKNOWN     unknown type
  ///            REVOLUTE    rotation axis
  ///            PRISMATIC   translation axis
  ///            FLOATING    N/A
  ///            PLANAR      plane normal axis
  ///            FIXED       N/
  double axis[3];
  rosidl_runtime_c__String child_link_name;
  rosidl_runtime_c__String parent_link_name;
  geometry_msgs__msg__Pose parent_to_joint_origin_transform;
  tesseract_msgs__msg__JointLimits limits;
  /// Optional Parameters
  tesseract_msgs__msg__JointDynamics dynamics;
  tesseract_msgs__msg__JointSafety safety;
  tesseract_msgs__msg__JointCalibration calibration;
  tesseract_msgs__msg__JointMimic mimic;
} tesseract_msgs__msg__Joint;

// Struct for a sequence of tesseract_msgs__msg__Joint.
typedef struct tesseract_msgs__msg__Joint__Sequence
{
  tesseract_msgs__msg__Joint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__Joint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__JOINT__STRUCT_H_
