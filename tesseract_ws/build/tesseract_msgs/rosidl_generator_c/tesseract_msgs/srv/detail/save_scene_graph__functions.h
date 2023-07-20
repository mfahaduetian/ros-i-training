// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tesseract_msgs:srv/SaveSceneGraph.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__DETAIL__SAVE_SCENE_GRAPH__FUNCTIONS_H_
#define TESSERACT_MSGS__SRV__DETAIL__SAVE_SCENE_GRAPH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tesseract_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tesseract_msgs/srv/detail/save_scene_graph__struct.h"

/// Initialize srv/SaveSceneGraph message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tesseract_msgs__srv__SaveSceneGraph_Request
 * )) before or use
 * tesseract_msgs__srv__SaveSceneGraph_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__SaveSceneGraph_Request__init(tesseract_msgs__srv__SaveSceneGraph_Request * msg);

/// Finalize srv/SaveSceneGraph message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__SaveSceneGraph_Request__fini(tesseract_msgs__srv__SaveSceneGraph_Request * msg);

/// Create srv/SaveSceneGraph message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tesseract_msgs__srv__SaveSceneGraph_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__srv__SaveSceneGraph_Request *
tesseract_msgs__srv__SaveSceneGraph_Request__create();

/// Destroy srv/SaveSceneGraph message.
/**
 * It calls
 * tesseract_msgs__srv__SaveSceneGraph_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__SaveSceneGraph_Request__destroy(tesseract_msgs__srv__SaveSceneGraph_Request * msg);

/// Check for srv/SaveSceneGraph message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__SaveSceneGraph_Request__are_equal(const tesseract_msgs__srv__SaveSceneGraph_Request * lhs, const tesseract_msgs__srv__SaveSceneGraph_Request * rhs);

/// Copy a srv/SaveSceneGraph message.
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
tesseract_msgs__srv__SaveSceneGraph_Request__copy(
  const tesseract_msgs__srv__SaveSceneGraph_Request * input,
  tesseract_msgs__srv__SaveSceneGraph_Request * output);

/// Initialize array of srv/SaveSceneGraph messages.
/**
 * It allocates the memory for the number of elements and calls
 * tesseract_msgs__srv__SaveSceneGraph_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__SaveSceneGraph_Request__Sequence__init(tesseract_msgs__srv__SaveSceneGraph_Request__Sequence * array, size_t size);

/// Finalize array of srv/SaveSceneGraph messages.
/**
 * It calls
 * tesseract_msgs__srv__SaveSceneGraph_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__SaveSceneGraph_Request__Sequence__fini(tesseract_msgs__srv__SaveSceneGraph_Request__Sequence * array);

/// Create array of srv/SaveSceneGraph messages.
/**
 * It allocates the memory for the array and calls
 * tesseract_msgs__srv__SaveSceneGraph_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__srv__SaveSceneGraph_Request__Sequence *
tesseract_msgs__srv__SaveSceneGraph_Request__Sequence__create(size_t size);

/// Destroy array of srv/SaveSceneGraph messages.
/**
 * It calls
 * tesseract_msgs__srv__SaveSceneGraph_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__SaveSceneGraph_Request__Sequence__destroy(tesseract_msgs__srv__SaveSceneGraph_Request__Sequence * array);

/// Check for srv/SaveSceneGraph message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__SaveSceneGraph_Request__Sequence__are_equal(const tesseract_msgs__srv__SaveSceneGraph_Request__Sequence * lhs, const tesseract_msgs__srv__SaveSceneGraph_Request__Sequence * rhs);

/// Copy an array of srv/SaveSceneGraph messages.
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
tesseract_msgs__srv__SaveSceneGraph_Request__Sequence__copy(
  const tesseract_msgs__srv__SaveSceneGraph_Request__Sequence * input,
  tesseract_msgs__srv__SaveSceneGraph_Request__Sequence * output);

/// Initialize srv/SaveSceneGraph message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tesseract_msgs__srv__SaveSceneGraph_Response
 * )) before or use
 * tesseract_msgs__srv__SaveSceneGraph_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__SaveSceneGraph_Response__init(tesseract_msgs__srv__SaveSceneGraph_Response * msg);

/// Finalize srv/SaveSceneGraph message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__SaveSceneGraph_Response__fini(tesseract_msgs__srv__SaveSceneGraph_Response * msg);

/// Create srv/SaveSceneGraph message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tesseract_msgs__srv__SaveSceneGraph_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__srv__SaveSceneGraph_Response *
tesseract_msgs__srv__SaveSceneGraph_Response__create();

/// Destroy srv/SaveSceneGraph message.
/**
 * It calls
 * tesseract_msgs__srv__SaveSceneGraph_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__SaveSceneGraph_Response__destroy(tesseract_msgs__srv__SaveSceneGraph_Response * msg);

/// Check for srv/SaveSceneGraph message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__SaveSceneGraph_Response__are_equal(const tesseract_msgs__srv__SaveSceneGraph_Response * lhs, const tesseract_msgs__srv__SaveSceneGraph_Response * rhs);

/// Copy a srv/SaveSceneGraph message.
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
tesseract_msgs__srv__SaveSceneGraph_Response__copy(
  const tesseract_msgs__srv__SaveSceneGraph_Response * input,
  tesseract_msgs__srv__SaveSceneGraph_Response * output);

/// Initialize array of srv/SaveSceneGraph messages.
/**
 * It allocates the memory for the number of elements and calls
 * tesseract_msgs__srv__SaveSceneGraph_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__SaveSceneGraph_Response__Sequence__init(tesseract_msgs__srv__SaveSceneGraph_Response__Sequence * array, size_t size);

/// Finalize array of srv/SaveSceneGraph messages.
/**
 * It calls
 * tesseract_msgs__srv__SaveSceneGraph_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__SaveSceneGraph_Response__Sequence__fini(tesseract_msgs__srv__SaveSceneGraph_Response__Sequence * array);

/// Create array of srv/SaveSceneGraph messages.
/**
 * It allocates the memory for the array and calls
 * tesseract_msgs__srv__SaveSceneGraph_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__srv__SaveSceneGraph_Response__Sequence *
tesseract_msgs__srv__SaveSceneGraph_Response__Sequence__create(size_t size);

/// Destroy array of srv/SaveSceneGraph messages.
/**
 * It calls
 * tesseract_msgs__srv__SaveSceneGraph_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__SaveSceneGraph_Response__Sequence__destroy(tesseract_msgs__srv__SaveSceneGraph_Response__Sequence * array);

/// Check for srv/SaveSceneGraph message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__SaveSceneGraph_Response__Sequence__are_equal(const tesseract_msgs__srv__SaveSceneGraph_Response__Sequence * lhs, const tesseract_msgs__srv__SaveSceneGraph_Response__Sequence * rhs);

/// Copy an array of srv/SaveSceneGraph messages.
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
tesseract_msgs__srv__SaveSceneGraph_Response__Sequence__copy(
  const tesseract_msgs__srv__SaveSceneGraph_Response__Sequence * input,
  tesseract_msgs__srv__SaveSceneGraph_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__SRV__DETAIL__SAVE_SCENE_GRAPH__FUNCTIONS_H_
