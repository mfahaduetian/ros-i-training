// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from industrial_reconstruction_msgs:srv/StartReconstruction.idl
// generated code does not contain a copyright notice

#ifndef INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__START_RECONSTRUCTION__FUNCTIONS_H_
#define INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__START_RECONSTRUCTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "industrial_reconstruction_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "industrial_reconstruction_msgs/srv/detail/start_reconstruction__struct.h"

/// Initialize srv/StartReconstruction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * industrial_reconstruction_msgs__srv__StartReconstruction_Request
 * )) before or use
 * industrial_reconstruction_msgs__srv__StartReconstruction_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
bool
industrial_reconstruction_msgs__srv__StartReconstruction_Request__init(industrial_reconstruction_msgs__srv__StartReconstruction_Request * msg);

/// Finalize srv/StartReconstruction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
void
industrial_reconstruction_msgs__srv__StartReconstruction_Request__fini(industrial_reconstruction_msgs__srv__StartReconstruction_Request * msg);

/// Create srv/StartReconstruction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * industrial_reconstruction_msgs__srv__StartReconstruction_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
industrial_reconstruction_msgs__srv__StartReconstruction_Request *
industrial_reconstruction_msgs__srv__StartReconstruction_Request__create();

/// Destroy srv/StartReconstruction message.
/**
 * It calls
 * industrial_reconstruction_msgs__srv__StartReconstruction_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
void
industrial_reconstruction_msgs__srv__StartReconstruction_Request__destroy(industrial_reconstruction_msgs__srv__StartReconstruction_Request * msg);

/// Check for srv/StartReconstruction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
bool
industrial_reconstruction_msgs__srv__StartReconstruction_Request__are_equal(const industrial_reconstruction_msgs__srv__StartReconstruction_Request * lhs, const industrial_reconstruction_msgs__srv__StartReconstruction_Request * rhs);

/// Copy a srv/StartReconstruction message.
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
industrial_reconstruction_msgs__srv__StartReconstruction_Request__copy(
  const industrial_reconstruction_msgs__srv__StartReconstruction_Request * input,
  industrial_reconstruction_msgs__srv__StartReconstruction_Request * output);

/// Initialize array of srv/StartReconstruction messages.
/**
 * It allocates the memory for the number of elements and calls
 * industrial_reconstruction_msgs__srv__StartReconstruction_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
bool
industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__init(industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence * array, size_t size);

/// Finalize array of srv/StartReconstruction messages.
/**
 * It calls
 * industrial_reconstruction_msgs__srv__StartReconstruction_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
void
industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__fini(industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence * array);

/// Create array of srv/StartReconstruction messages.
/**
 * It allocates the memory for the array and calls
 * industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence *
industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__create(size_t size);

/// Destroy array of srv/StartReconstruction messages.
/**
 * It calls
 * industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
void
industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__destroy(industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence * array);

/// Check for srv/StartReconstruction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
bool
industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__are_equal(const industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence * lhs, const industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence * rhs);

/// Copy an array of srv/StartReconstruction messages.
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
industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence__copy(
  const industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence * input,
  industrial_reconstruction_msgs__srv__StartReconstruction_Request__Sequence * output);

/// Initialize srv/StartReconstruction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * industrial_reconstruction_msgs__srv__StartReconstruction_Response
 * )) before or use
 * industrial_reconstruction_msgs__srv__StartReconstruction_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
bool
industrial_reconstruction_msgs__srv__StartReconstruction_Response__init(industrial_reconstruction_msgs__srv__StartReconstruction_Response * msg);

/// Finalize srv/StartReconstruction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
void
industrial_reconstruction_msgs__srv__StartReconstruction_Response__fini(industrial_reconstruction_msgs__srv__StartReconstruction_Response * msg);

/// Create srv/StartReconstruction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * industrial_reconstruction_msgs__srv__StartReconstruction_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
industrial_reconstruction_msgs__srv__StartReconstruction_Response *
industrial_reconstruction_msgs__srv__StartReconstruction_Response__create();

/// Destroy srv/StartReconstruction message.
/**
 * It calls
 * industrial_reconstruction_msgs__srv__StartReconstruction_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
void
industrial_reconstruction_msgs__srv__StartReconstruction_Response__destroy(industrial_reconstruction_msgs__srv__StartReconstruction_Response * msg);

/// Check for srv/StartReconstruction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
bool
industrial_reconstruction_msgs__srv__StartReconstruction_Response__are_equal(const industrial_reconstruction_msgs__srv__StartReconstruction_Response * lhs, const industrial_reconstruction_msgs__srv__StartReconstruction_Response * rhs);

/// Copy a srv/StartReconstruction message.
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
industrial_reconstruction_msgs__srv__StartReconstruction_Response__copy(
  const industrial_reconstruction_msgs__srv__StartReconstruction_Response * input,
  industrial_reconstruction_msgs__srv__StartReconstruction_Response * output);

/// Initialize array of srv/StartReconstruction messages.
/**
 * It allocates the memory for the number of elements and calls
 * industrial_reconstruction_msgs__srv__StartReconstruction_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
bool
industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__init(industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence * array, size_t size);

/// Finalize array of srv/StartReconstruction messages.
/**
 * It calls
 * industrial_reconstruction_msgs__srv__StartReconstruction_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
void
industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__fini(industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence * array);

/// Create array of srv/StartReconstruction messages.
/**
 * It allocates the memory for the array and calls
 * industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence *
industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__create(size_t size);

/// Destroy array of srv/StartReconstruction messages.
/**
 * It calls
 * industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
void
industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__destroy(industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence * array);

/// Check for srv/StartReconstruction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_industrial_reconstruction_msgs
bool
industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__are_equal(const industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence * lhs, const industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence * rhs);

/// Copy an array of srv/StartReconstruction messages.
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
industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence__copy(
  const industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence * input,
  industrial_reconstruction_msgs__srv__StartReconstruction_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INDUSTRIAL_RECONSTRUCTION_MSGS__SRV__DETAIL__START_RECONSTRUCTION__FUNCTIONS_H_
