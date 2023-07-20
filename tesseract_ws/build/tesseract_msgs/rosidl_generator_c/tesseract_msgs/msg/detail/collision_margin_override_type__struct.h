// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/CollisionMarginOverrideType.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__COLLISION_MARGIN_OVERRIDE_TYPE__STRUCT_H_
#define TESSERACT_MSGS__MSG__DETAIL__COLLISION_MARGIN_OVERRIDE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  tesseract_msgs__msg__CollisionMarginOverrideType__NONE = 0
};

/// Constant 'REPLACE'.
/**
  * Replace the contact manager's CollisionMarginData
 */
enum
{
  tesseract_msgs__msg__CollisionMarginOverrideType__REPLACE = 1
};

/// Constant 'MODIFY'.
/**
  * Modify the contact managers default margin and pair margin.
  * This will preserve existing pairs not being modified by the provided margin data.
  * If a pair already exist it will be updated with the provided margin data.
 */
enum
{
  tesseract_msgs__msg__CollisionMarginOverrideType__MODIFY = 2
};

/// Constant 'OVERRIDE_DEFAULT_MARGIN'.
/**
  * Override the contact managers default margin only
 */
enum
{
  tesseract_msgs__msg__CollisionMarginOverrideType__OVERRIDE_DEFAULT_MARGIN = 3
};

/// Constant 'OVERRIDE_PAIR_MARGIN'.
/**
  * Override the contact managers pair margin only. This does not preserve any existing pair margin data
 */
enum
{
  tesseract_msgs__msg__CollisionMarginOverrideType__OVERRIDE_PAIR_MARGIN = 4
};

/// Constant 'MODIFY_PAIR_MARGIN'.
/**
  * Modify the contact managers pair margin only.
  * This will preserve existing pairs not being modified by the provided margin data.
  * If a pair already exist it will be updated with the provided margin data.
 */
enum
{
  tesseract_msgs__msg__CollisionMarginOverrideType__MODIFY_PAIR_MARGIN = 5
};

/// Struct defined in msg/CollisionMarginOverrideType in the package tesseract_msgs.
/**
  * Possible Override Types
  * Do not apply contact margin data
 */
typedef struct tesseract_msgs__msg__CollisionMarginOverrideType
{
  /// one of the option above
  uint8_t type;
} tesseract_msgs__msg__CollisionMarginOverrideType;

// Struct for a sequence of tesseract_msgs__msg__CollisionMarginOverrideType.
typedef struct tesseract_msgs__msg__CollisionMarginOverrideType__Sequence
{
  tesseract_msgs__msg__CollisionMarginOverrideType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tesseract_msgs__msg__CollisionMarginOverrideType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__COLLISION_MARGIN_OVERRIDE_TYPE__STRUCT_H_
