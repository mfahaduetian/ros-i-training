// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from industrial_reconstruction_msgs:msg/NormalFilterParams.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__NORMAL_FILTER_PARAMS__FUNCTIONS_H_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__NORMAL_FILTER_PARAMS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "industrial_reconstruction_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "industrial_reconstruction_msgs/msg/detail/normal_filter_params__struct.h"

/// Initialize msg/NormalFilterParams message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * industrial_reconstruction_msgs__msg__NormalFilterParams
 * )) before or use
 * industrial_reconstruction_msgs__msg__NormalFilterParams__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
bool
industrial_reconstruction_msgs__msg__NormalFilterParams__init(industrial_reconstruction_msgs__msg__NormalFilterParams * msg);

/// Finalize msg/NormalFilterParams message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
void
industrial_reconstruction_msgs__msg__NormalFilterParams__fini(industrial_reconstruction_msgs__msg__NormalFilterParams * msg);

/// Create msg/NormalFilterParams message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * industrial_reconstruction_msgs__msg__NormalFilterParams__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
industrial_reconstruction_msgs__msg__NormalFilterParams *
industrial_reconstruction_msgs__msg__NormalFilterParams__create();

/// Destroy msg/NormalFilterParams message.
/**
 * It calls
 * industrial_reconstruction_msgs__msg__NormalFilterParams__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
void
industrial_reconstruction_msgs__msg__NormalFilterParams__destroy(industrial_reconstruction_msgs__msg__NormalFilterParams * msg);

/// Check for msg/NormalFilterParams message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
bool
industrial_reconstruction_msgs__msg__NormalFilterParams__are_equal(const industrial_reconstruction_msgs__msg__NormalFilterParams * lhs, const industrial_reconstruction_msgs__msg__NormalFilterParams * rhs);

/// Copy a msg/NormalFilterParams message.
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
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
bool
industrial_reconstruction_msgs__msg__NormalFilterParams__copy(
  const industrial_reconstruction_msgs__msg__NormalFilterParams * input,
  industrial_reconstruction_msgs__msg__NormalFilterParams * output);

/// Initialize array of msg/NormalFilterParams messages.
/**
 * It allocates the memory for the number of elements and calls
 * industrial_reconstruction_msgs__msg__NormalFilterParams__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
bool
industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__init(industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * array, size_t size);

/// Finalize array of msg/NormalFilterParams messages.
/**
 * It calls
 * industrial_reconstruction_msgs__msg__NormalFilterParams__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
void
industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__fini(industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * array);

/// Create array of msg/NormalFilterParams messages.
/**
 * It allocates the memory for the array and calls
 * industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence *
industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__create(size_t size);

/// Destroy array of msg/NormalFilterParams messages.
/**
 * It calls
 * industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
void
industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__destroy(industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * array);

/// Check for msg/NormalFilterParams message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
bool
industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__are_equal(const industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * lhs, const industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * rhs);

/// Copy an array of msg/NormalFilterParams messages.
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
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
bool
industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence__copy(
  const industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * input,
  industrial_reconstruction_msgs__msg__NormalFilterParams__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__MSG__DETAIL__NORMAL_FILTER_PARAMS__FUNCTIONS_H_
