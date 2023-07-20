// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from snp_msgs:msg/ToolPath.idl
// generated code does not contain a copyright notice

#ifndef SNP_MSGS__MSG__DETAIL__TOOL_PATH__FUNCTIONS_H_
#define SNP_MSGS__MSG__DETAIL__TOOL_PATH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "snp_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "snp_msgs/msg/detail/tool_path__struct.h"

/// Initialize msg/ToolPath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * snp_msgs__msg__ToolPath
 * )) before or use
 * snp_msgs__msg__ToolPath__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
bool
snp_msgs__msg__ToolPath__init(snp_msgs__msg__ToolPath * msg);

/// Finalize msg/ToolPath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
void
snp_msgs__msg__ToolPath__fini(snp_msgs__msg__ToolPath * msg);

/// Create msg/ToolPath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * snp_msgs__msg__ToolPath__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
snp_msgs__msg__ToolPath *
snp_msgs__msg__ToolPath__create();

/// Destroy msg/ToolPath message.
/**
 * It calls
 * snp_msgs__msg__ToolPath__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
void
snp_msgs__msg__ToolPath__destroy(snp_msgs__msg__ToolPath * msg);

/// Check for msg/ToolPath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
bool
snp_msgs__msg__ToolPath__are_equal(const snp_msgs__msg__ToolPath * lhs, const snp_msgs__msg__ToolPath * rhs);

/// Copy a msg/ToolPath message.
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
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
bool
snp_msgs__msg__ToolPath__copy(
  const snp_msgs__msg__ToolPath * input,
  snp_msgs__msg__ToolPath * output);

/// Initialize array of msg/ToolPath messages.
/**
 * It allocates the memory for the number of elements and calls
 * snp_msgs__msg__ToolPath__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
bool
snp_msgs__msg__ToolPath__Sequence__init(snp_msgs__msg__ToolPath__Sequence * array, size_t size);

/// Finalize array of msg/ToolPath messages.
/**
 * It calls
 * snp_msgs__msg__ToolPath__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
void
snp_msgs__msg__ToolPath__Sequence__fini(snp_msgs__msg__ToolPath__Sequence * array);

/// Create array of msg/ToolPath messages.
/**
 * It allocates the memory for the array and calls
 * snp_msgs__msg__ToolPath__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
snp_msgs__msg__ToolPath__Sequence *
snp_msgs__msg__ToolPath__Sequence__create(size_t size);

/// Destroy array of msg/ToolPath messages.
/**
 * It calls
 * snp_msgs__msg__ToolPath__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
void
snp_msgs__msg__ToolPath__Sequence__destroy(snp_msgs__msg__ToolPath__Sequence * array);

/// Check for msg/ToolPath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
bool
snp_msgs__msg__ToolPath__Sequence__are_equal(const snp_msgs__msg__ToolPath__Sequence * lhs, const snp_msgs__msg__ToolPath__Sequence * rhs);

/// Copy an array of msg/ToolPath messages.
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
ROSIDL_GENERATOR_C_PUBLIC_snp_msgs
bool
snp_msgs__msg__ToolPath__Sequence__copy(
  const snp_msgs__msg__ToolPath__Sequence * input,
  snp_msgs__msg__ToolPath__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SNP_MSGS__MSG__DETAIL__TOOL_PATH__FUNCTIONS_H_
