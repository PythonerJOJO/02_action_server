// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces:srv/FirmToRos.idl
// generated code does not contain a copyright notice
#include "base_interfaces/srv/detail/firm_to_ros__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `data2`
// Member `data3`
// Member `data4`
// Member `data5`
#include "rosidl_runtime_c/string_functions.h"

bool
base_interfaces__srv__FirmToRos_Request__init(base_interfaces__srv__FirmToRos_Request * msg)
{
  if (!msg) {
    return false;
  }
  // data2
  if (!rosidl_runtime_c__String__init(&msg->data2)) {
    base_interfaces__srv__FirmToRos_Request__fini(msg);
    return false;
  }
  // data3
  if (!rosidl_runtime_c__String__init(&msg->data3)) {
    base_interfaces__srv__FirmToRos_Request__fini(msg);
    return false;
  }
  // data4
  if (!rosidl_runtime_c__String__init(&msg->data4)) {
    base_interfaces__srv__FirmToRos_Request__fini(msg);
    return false;
  }
  // data5
  if (!rosidl_runtime_c__String__init(&msg->data5)) {
    base_interfaces__srv__FirmToRos_Request__fini(msg);
    return false;
  }
  return true;
}

void
base_interfaces__srv__FirmToRos_Request__fini(base_interfaces__srv__FirmToRos_Request * msg)
{
  if (!msg) {
    return;
  }
  // data2
  rosidl_runtime_c__String__fini(&msg->data2);
  // data3
  rosidl_runtime_c__String__fini(&msg->data3);
  // data4
  rosidl_runtime_c__String__fini(&msg->data4);
  // data5
  rosidl_runtime_c__String__fini(&msg->data5);
}

bool
base_interfaces__srv__FirmToRos_Request__are_equal(const base_interfaces__srv__FirmToRos_Request * lhs, const base_interfaces__srv__FirmToRos_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data2), &(rhs->data2)))
  {
    return false;
  }
  // data3
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data3), &(rhs->data3)))
  {
    return false;
  }
  // data4
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data4), &(rhs->data4)))
  {
    return false;
  }
  // data5
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data5), &(rhs->data5)))
  {
    return false;
  }
  return true;
}

bool
base_interfaces__srv__FirmToRos_Request__copy(
  const base_interfaces__srv__FirmToRos_Request * input,
  base_interfaces__srv__FirmToRos_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // data2
  if (!rosidl_runtime_c__String__copy(
      &(input->data2), &(output->data2)))
  {
    return false;
  }
  // data3
  if (!rosidl_runtime_c__String__copy(
      &(input->data3), &(output->data3)))
  {
    return false;
  }
  // data4
  if (!rosidl_runtime_c__String__copy(
      &(input->data4), &(output->data4)))
  {
    return false;
  }
  // data5
  if (!rosidl_runtime_c__String__copy(
      &(input->data5), &(output->data5)))
  {
    return false;
  }
  return true;
}

base_interfaces__srv__FirmToRos_Request *
base_interfaces__srv__FirmToRos_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__srv__FirmToRos_Request * msg = (base_interfaces__srv__FirmToRos_Request *)allocator.allocate(sizeof(base_interfaces__srv__FirmToRos_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces__srv__FirmToRos_Request));
  bool success = base_interfaces__srv__FirmToRos_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces__srv__FirmToRos_Request__destroy(base_interfaces__srv__FirmToRos_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces__srv__FirmToRos_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces__srv__FirmToRos_Request__Sequence__init(base_interfaces__srv__FirmToRos_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__srv__FirmToRos_Request * data = NULL;

  if (size) {
    data = (base_interfaces__srv__FirmToRos_Request *)allocator.zero_allocate(size, sizeof(base_interfaces__srv__FirmToRos_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces__srv__FirmToRos_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces__srv__FirmToRos_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_interfaces__srv__FirmToRos_Request__Sequence__fini(base_interfaces__srv__FirmToRos_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces__srv__FirmToRos_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_interfaces__srv__FirmToRos_Request__Sequence *
base_interfaces__srv__FirmToRos_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__srv__FirmToRos_Request__Sequence * array = (base_interfaces__srv__FirmToRos_Request__Sequence *)allocator.allocate(sizeof(base_interfaces__srv__FirmToRos_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces__srv__FirmToRos_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces__srv__FirmToRos_Request__Sequence__destroy(base_interfaces__srv__FirmToRos_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces__srv__FirmToRos_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces__srv__FirmToRos_Request__Sequence__are_equal(const base_interfaces__srv__FirmToRos_Request__Sequence * lhs, const base_interfaces__srv__FirmToRos_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces__srv__FirmToRos_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces__srv__FirmToRos_Request__Sequence__copy(
  const base_interfaces__srv__FirmToRos_Request__Sequence * input,
  base_interfaces__srv__FirmToRos_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces__srv__FirmToRos_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces__srv__FirmToRos_Request * data =
      (base_interfaces__srv__FirmToRos_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces__srv__FirmToRos_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces__srv__FirmToRos_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces__srv__FirmToRos_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `node_id`
// Member `result_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
base_interfaces__srv__FirmToRos_Response__init(base_interfaces__srv__FirmToRos_Response * msg)
{
  if (!msg) {
    return false;
  }
  // node_id
  if (!rosidl_runtime_c__String__init(&msg->node_id)) {
    base_interfaces__srv__FirmToRos_Response__fini(msg);
    return false;
  }
  // result_msg
  if (!rosidl_runtime_c__String__init(&msg->result_msg)) {
    base_interfaces__srv__FirmToRos_Response__fini(msg);
    return false;
  }
  return true;
}

void
base_interfaces__srv__FirmToRos_Response__fini(base_interfaces__srv__FirmToRos_Response * msg)
{
  if (!msg) {
    return;
  }
  // node_id
  rosidl_runtime_c__String__fini(&msg->node_id);
  // result_msg
  rosidl_runtime_c__String__fini(&msg->result_msg);
}

bool
base_interfaces__srv__FirmToRos_Response__are_equal(const base_interfaces__srv__FirmToRos_Response * lhs, const base_interfaces__srv__FirmToRos_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_id), &(rhs->node_id)))
  {
    return false;
  }
  // result_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result_msg), &(rhs->result_msg)))
  {
    return false;
  }
  return true;
}

bool
base_interfaces__srv__FirmToRos_Response__copy(
  const base_interfaces__srv__FirmToRos_Response * input,
  base_interfaces__srv__FirmToRos_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // node_id
  if (!rosidl_runtime_c__String__copy(
      &(input->node_id), &(output->node_id)))
  {
    return false;
  }
  // result_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->result_msg), &(output->result_msg)))
  {
    return false;
  }
  return true;
}

base_interfaces__srv__FirmToRos_Response *
base_interfaces__srv__FirmToRos_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__srv__FirmToRos_Response * msg = (base_interfaces__srv__FirmToRos_Response *)allocator.allocate(sizeof(base_interfaces__srv__FirmToRos_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces__srv__FirmToRos_Response));
  bool success = base_interfaces__srv__FirmToRos_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces__srv__FirmToRos_Response__destroy(base_interfaces__srv__FirmToRos_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces__srv__FirmToRos_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces__srv__FirmToRos_Response__Sequence__init(base_interfaces__srv__FirmToRos_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__srv__FirmToRos_Response * data = NULL;

  if (size) {
    data = (base_interfaces__srv__FirmToRos_Response *)allocator.zero_allocate(size, sizeof(base_interfaces__srv__FirmToRos_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces__srv__FirmToRos_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces__srv__FirmToRos_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_interfaces__srv__FirmToRos_Response__Sequence__fini(base_interfaces__srv__FirmToRos_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces__srv__FirmToRos_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_interfaces__srv__FirmToRos_Response__Sequence *
base_interfaces__srv__FirmToRos_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__srv__FirmToRos_Response__Sequence * array = (base_interfaces__srv__FirmToRos_Response__Sequence *)allocator.allocate(sizeof(base_interfaces__srv__FirmToRos_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces__srv__FirmToRos_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces__srv__FirmToRos_Response__Sequence__destroy(base_interfaces__srv__FirmToRos_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces__srv__FirmToRos_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces__srv__FirmToRos_Response__Sequence__are_equal(const base_interfaces__srv__FirmToRos_Response__Sequence * lhs, const base_interfaces__srv__FirmToRos_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces__srv__FirmToRos_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces__srv__FirmToRos_Response__Sequence__copy(
  const base_interfaces__srv__FirmToRos_Response__Sequence * input,
  base_interfaces__srv__FirmToRos_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces__srv__FirmToRos_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces__srv__FirmToRos_Response * data =
      (base_interfaces__srv__FirmToRos_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces__srv__FirmToRos_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces__srv__FirmToRos_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces__srv__FirmToRos_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
