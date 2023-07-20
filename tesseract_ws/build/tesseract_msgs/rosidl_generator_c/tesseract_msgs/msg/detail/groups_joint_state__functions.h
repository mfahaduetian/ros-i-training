// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tesseract_msgs:msg/GroupsJointState.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATE__FUNCTIONS_H_
#define TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tesseract_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tesseract_msgs/msg/detail/groups_joint_state__struct.h"

/// Initialize msg/GroupsJointState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tesseract_msgs__msg__GroupsJointState
 * )) before or use
 * tesseract_msgs__msg__GroupsJointState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__msg__GroupsJointState__init(tesseract_msgs__msg__GroupsJointState * msg);

/// Finalize msg/GroupsJointState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__msg__GroupsJointState__fini(tesseract_msgs__msg__GroupsJointState * msg);

/// Create msg/GroupsJointState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tesseract_msgs__msg__GroupsJointState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__msg__GroupsJointState *
tesseract_msgs__msg__GroupsJointState__create();

/// Destroy msg/GroupsJointState message.
/**
 * It calls
 * tesseract_msgs__msg__GroupsJointState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__msg__GroupsJointState__destroy(tesseract_msgs__msg__GroupsJointState * msg);

/// Check for msg/GroupsJointState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__msg__GroupsJointState__are_equal(const tesseract_msgs__msg__GroupsJointState * lhs, const tesseract_msgs__msg__GroupsJointState * rhs);

/// Copy a msg/GroupsJointState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__msg__GroupsJointState__copy(
  const tesseract_msgs__msg__GroupsJointState * input,
  tesseract_msgs__msg__GroupsJointState * output);

/// Initialize array of msg/GroupsJointState messages.
/**
 * It allocates the memory for the number of elements and calls
 * tesseract_msgs__msg__GroupsJointState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__msg__GroupsJointState__Sequence__init(tesseract_msgs__msg__GroupsJointState__Sequence * array, size_t size);

/// Finalize array of msg/GroupsJointState messages.
/**
 * It calls
 * tesseract_msgs__msg__GroupsJointState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__msg__GroupsJointState__Sequence__fini(tesseract_msgs__msg__GroupsJointState__Sequence * array);

/// Create array of msg/GroupsJointState messages.
/**
 * It allocates the memory for the array and calls
 * tesseract_msgs__msg__GroupsJointState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__msg__GroupsJointState__Sequence *
tesseract_msgs__msg__GroupsJointState__Sequence__create(size_t size);

/// Destroy array of msg/GroupsJointState messages.
/**
 * It calls
 * tesseract_msgs__msg__GroupsJointState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__msg__GroupsJointState__Sequence__destroy(tesseract_msgs__msg__GroupsJointState__Sequence * array);

/// Check for msg/GroupsJointState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__msg__GroupsJointState__Sequence__are_equal(const tesseract_msgs__msg__GroupsJointState__Sequence * lhs, const tesseract_msgs__msg__GroupsJointState__Sequence * rhs);

/// Copy an array of msg/GroupsJointState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__msg__GroupsJointState__Sequence__copy(
  const tesseract_msgs__msg__GroupsJointState__Sequence * input,
  tesseract_msgs__msg__GroupsJointState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__DETAIL__GROUPS_JOINT_STATE__FUNCTIONS_H_
