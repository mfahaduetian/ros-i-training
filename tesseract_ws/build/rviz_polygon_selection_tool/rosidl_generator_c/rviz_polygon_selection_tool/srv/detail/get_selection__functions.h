// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rviz_polygon_selection_tool:srv/GetSelection.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__FUNCTIONS_H_
#define RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rviz_polygon_selection_tool/msg/rosidl_generator_c__visibility_control.h"

#include "rviz_polygon_selection_tool/srv/detail/get_selection__struct.h"

/// Initialize srv/GetSelection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rviz_polygon_selection_tool__srv__GetSelection_Request
 * )) before or use
 * rviz_polygon_selection_tool__srv__GetSelection_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
bool
rviz_polygon_selection_tool__srv__GetSelection_Request__init(rviz_polygon_selection_tool__srv__GetSelection_Request * msg);

/// Finalize srv/GetSelection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
void
rviz_polygon_selection_tool__srv__GetSelection_Request__fini(rviz_polygon_selection_tool__srv__GetSelection_Request * msg);

/// Create srv/GetSelection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rviz_polygon_selection_tool__srv__GetSelection_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
rviz_polygon_selection_tool__srv__GetSelection_Request *
rviz_polygon_selection_tool__srv__GetSelection_Request__create();

/// Destroy srv/GetSelection message.
/**
 * It calls
 * rviz_polygon_selection_tool__srv__GetSelection_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
void
rviz_polygon_selection_tool__srv__GetSelection_Request__destroy(rviz_polygon_selection_tool__srv__GetSelection_Request * msg);

/// Check for srv/GetSelection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
bool
rviz_polygon_selection_tool__srv__GetSelection_Request__are_equal(const rviz_polygon_selection_tool__srv__GetSelection_Request * lhs, const rviz_polygon_selection_tool__srv__GetSelection_Request * rhs);

/// Copy a srv/GetSelection message.
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
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
bool
rviz_polygon_selection_tool__srv__GetSelection_Request__copy(
  const rviz_polygon_selection_tool__srv__GetSelection_Request * input,
  rviz_polygon_selection_tool__srv__GetSelection_Request * output);

/// Initialize array of srv/GetSelection messages.
/**
 * It allocates the memory for the number of elements and calls
 * rviz_polygon_selection_tool__srv__GetSelection_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
bool
rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__init(rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetSelection messages.
/**
 * It calls
 * rviz_polygon_selection_tool__srv__GetSelection_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
void
rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__fini(rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence * array);

/// Create array of srv/GetSelection messages.
/**
 * It allocates the memory for the array and calls
 * rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence *
rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetSelection messages.
/**
 * It calls
 * rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
void
rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__destroy(rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence * array);

/// Check for srv/GetSelection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
bool
rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__are_equal(const rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence * lhs, const rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence * rhs);

/// Copy an array of srv/GetSelection messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
bool
rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence__copy(
  const rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence * input,
  rviz_polygon_selection_tool__srv__GetSelection_Request__Sequence * output);

/// Initialize srv/GetSelection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rviz_polygon_selection_tool__srv__GetSelection_Response
 * )) before or use
 * rviz_polygon_selection_tool__srv__GetSelection_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
bool
rviz_polygon_selection_tool__srv__GetSelection_Response__init(rviz_polygon_selection_tool__srv__GetSelection_Response * msg);

/// Finalize srv/GetSelection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
void
rviz_polygon_selection_tool__srv__GetSelection_Response__fini(rviz_polygon_selection_tool__srv__GetSelection_Response * msg);

/// Create srv/GetSelection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rviz_polygon_selection_tool__srv__GetSelection_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
rviz_polygon_selection_tool__srv__GetSelection_Response *
rviz_polygon_selection_tool__srv__GetSelection_Response__create();

/// Destroy srv/GetSelection message.
/**
 * It calls
 * rviz_polygon_selection_tool__srv__GetSelection_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
void
rviz_polygon_selection_tool__srv__GetSelection_Response__destroy(rviz_polygon_selection_tool__srv__GetSelection_Response * msg);

/// Check for srv/GetSelection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
bool
rviz_polygon_selection_tool__srv__GetSelection_Response__are_equal(const rviz_polygon_selection_tool__srv__GetSelection_Response * lhs, const rviz_polygon_selection_tool__srv__GetSelection_Response * rhs);

/// Copy a srv/GetSelection message.
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
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
bool
rviz_polygon_selection_tool__srv__GetSelection_Response__copy(
  const rviz_polygon_selection_tool__srv__GetSelection_Response * input,
  rviz_polygon_selection_tool__srv__GetSelection_Response * output);

/// Initialize array of srv/GetSelection messages.
/**
 * It allocates the memory for the number of elements and calls
 * rviz_polygon_selection_tool__srv__GetSelection_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
bool
rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__init(rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetSelection messages.
/**
 * It calls
 * rviz_polygon_selection_tool__srv__GetSelection_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
void
rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__fini(rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence * array);

/// Create array of srv/GetSelection messages.
/**
 * It allocates the memory for the array and calls
 * rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence *
rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetSelection messages.
/**
 * It calls
 * rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
void
rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__destroy(rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence * array);

/// Check for srv/GetSelection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
bool
rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__are_equal(const rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence * lhs, const rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence * rhs);

/// Copy an array of srv/GetSelection messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rviz_polygon_selection_tool
bool
rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence__copy(
  const rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence * input,
  rviz_polygon_selection_tool__srv__GetSelection_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_POLYGON_SELECTION_TOOL__SRV__DETAIL__GET_SELECTION__FUNCTIONS_H_
