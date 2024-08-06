// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces:action/Angle.idl
// generated code does not contain a copyright notice
#include "base_interfaces/action/detail/angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
base_interfaces__action__Angle_Goal__init(base_interfaces__action__Angle_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // req_angle1
  // req_angle2
  // req_angle3
  // req_angle4
  // req_angle5
  // req_angle6
  return true;
}

void
base_interfaces__action__Angle_Goal__fini(base_interfaces__action__Angle_Goal * msg)
{
  if (!msg) {
    return;
  }
  // req_angle1
  // req_angle2
  // req_angle3
  // req_angle4
  // req_angle5
  // req_angle6
}

bool
base_interfaces__action__Angle_Goal__are_equal(const base_interfaces__action__Angle_Goal * lhs, const base_interfaces__action__Angle_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // req_angle1
  if (lhs->req_angle1 != rhs->req_angle1) {
    return false;
  }
  // req_angle2
  if (lhs->req_angle2 != rhs->req_angle2) {
    return false;
  }
  // req_angle3
  if (lhs->req_angle3 != rhs->req_angle3) {
    return false;
  }
  // req_angle4
  if (lhs->req_angle4 != rhs->req_angle4) {
    return false;
  }
  // req_angle5
  if (lhs->req_angle5 != rhs->req_angle5) {
    return false;
  }
  // req_angle6
  if (lhs->req_angle6 != rhs->req_angle6) {
    return false;
  }
  return true;
}

bool
base_interfaces__action__Angle_Goal__copy(
  const base_interfaces__action__Angle_Goal * input,
  base_interfaces__action__Angle_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // req_angle1
  output->req_angle1 = input->req_angle1;
  // req_angle2
  output->req_angle2 = input->req_angle2;
  // req_angle3
  output->req_angle3 = input->req_angle3;
  // req_angle4
  output->req_angle4 = input->req_angle4;
  // req_angle5
  output->req_angle5 = input->req_angle5;
  // req_angle6
  output->req_angle6 = input->req_angle6;
  return true;
}

base_interfaces__action__Angle_Goal *
base_interfaces__action__Angle_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_Goal * msg = (base_interfaces__action__Angle_Goal *)allocator.allocate(sizeof(base_interfaces__action__Angle_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces__action__Angle_Goal));
  bool success = base_interfaces__action__Angle_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces__action__Angle_Goal__destroy(base_interfaces__action__Angle_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces__action__Angle_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces__action__Angle_Goal__Sequence__init(base_interfaces__action__Angle_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_Goal * data = NULL;

  if (size) {
    data = (base_interfaces__action__Angle_Goal *)allocator.zero_allocate(size, sizeof(base_interfaces__action__Angle_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces__action__Angle_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces__action__Angle_Goal__fini(&data[i - 1]);
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
base_interfaces__action__Angle_Goal__Sequence__fini(base_interfaces__action__Angle_Goal__Sequence * array)
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
      base_interfaces__action__Angle_Goal__fini(&array->data[i]);
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

base_interfaces__action__Angle_Goal__Sequence *
base_interfaces__action__Angle_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_Goal__Sequence * array = (base_interfaces__action__Angle_Goal__Sequence *)allocator.allocate(sizeof(base_interfaces__action__Angle_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces__action__Angle_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces__action__Angle_Goal__Sequence__destroy(base_interfaces__action__Angle_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces__action__Angle_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces__action__Angle_Goal__Sequence__are_equal(const base_interfaces__action__Angle_Goal__Sequence * lhs, const base_interfaces__action__Angle_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces__action__Angle_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces__action__Angle_Goal__Sequence__copy(
  const base_interfaces__action__Angle_Goal__Sequence * input,
  base_interfaces__action__Angle_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces__action__Angle_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces__action__Angle_Goal * data =
      (base_interfaces__action__Angle_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces__action__Angle_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces__action__Angle_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces__action__Angle_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
base_interfaces__action__Angle_Result__init(base_interfaces__action__Angle_Result * msg)
{
  if (!msg) {
    return false;
  }
  // current_angle1
  // current_angle2
  // current_angle3
  // current_angle4
  // current_angle5
  // current_angle6
  return true;
}

void
base_interfaces__action__Angle_Result__fini(base_interfaces__action__Angle_Result * msg)
{
  if (!msg) {
    return;
  }
  // current_angle1
  // current_angle2
  // current_angle3
  // current_angle4
  // current_angle5
  // current_angle6
}

bool
base_interfaces__action__Angle_Result__are_equal(const base_interfaces__action__Angle_Result * lhs, const base_interfaces__action__Angle_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_angle1
  if (lhs->current_angle1 != rhs->current_angle1) {
    return false;
  }
  // current_angle2
  if (lhs->current_angle2 != rhs->current_angle2) {
    return false;
  }
  // current_angle3
  if (lhs->current_angle3 != rhs->current_angle3) {
    return false;
  }
  // current_angle4
  if (lhs->current_angle4 != rhs->current_angle4) {
    return false;
  }
  // current_angle5
  if (lhs->current_angle5 != rhs->current_angle5) {
    return false;
  }
  // current_angle6
  if (lhs->current_angle6 != rhs->current_angle6) {
    return false;
  }
  return true;
}

bool
base_interfaces__action__Angle_Result__copy(
  const base_interfaces__action__Angle_Result * input,
  base_interfaces__action__Angle_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // current_angle1
  output->current_angle1 = input->current_angle1;
  // current_angle2
  output->current_angle2 = input->current_angle2;
  // current_angle3
  output->current_angle3 = input->current_angle3;
  // current_angle4
  output->current_angle4 = input->current_angle4;
  // current_angle5
  output->current_angle5 = input->current_angle5;
  // current_angle6
  output->current_angle6 = input->current_angle6;
  return true;
}

base_interfaces__action__Angle_Result *
base_interfaces__action__Angle_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_Result * msg = (base_interfaces__action__Angle_Result *)allocator.allocate(sizeof(base_interfaces__action__Angle_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces__action__Angle_Result));
  bool success = base_interfaces__action__Angle_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces__action__Angle_Result__destroy(base_interfaces__action__Angle_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces__action__Angle_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces__action__Angle_Result__Sequence__init(base_interfaces__action__Angle_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_Result * data = NULL;

  if (size) {
    data = (base_interfaces__action__Angle_Result *)allocator.zero_allocate(size, sizeof(base_interfaces__action__Angle_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces__action__Angle_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces__action__Angle_Result__fini(&data[i - 1]);
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
base_interfaces__action__Angle_Result__Sequence__fini(base_interfaces__action__Angle_Result__Sequence * array)
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
      base_interfaces__action__Angle_Result__fini(&array->data[i]);
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

base_interfaces__action__Angle_Result__Sequence *
base_interfaces__action__Angle_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_Result__Sequence * array = (base_interfaces__action__Angle_Result__Sequence *)allocator.allocate(sizeof(base_interfaces__action__Angle_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces__action__Angle_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces__action__Angle_Result__Sequence__destroy(base_interfaces__action__Angle_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces__action__Angle_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces__action__Angle_Result__Sequence__are_equal(const base_interfaces__action__Angle_Result__Sequence * lhs, const base_interfaces__action__Angle_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces__action__Angle_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces__action__Angle_Result__Sequence__copy(
  const base_interfaces__action__Angle_Result__Sequence * input,
  base_interfaces__action__Angle_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces__action__Angle_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces__action__Angle_Result * data =
      (base_interfaces__action__Angle_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces__action__Angle_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces__action__Angle_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces__action__Angle_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
base_interfaces__action__Angle_Feedback__init(base_interfaces__action__Angle_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback_angle1
  // feedback_angle2
  // feedback_angle3
  // feedback_angle4
  // feedback_angle5
  // feedback_angle6
  return true;
}

void
base_interfaces__action__Angle_Feedback__fini(base_interfaces__action__Angle_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback_angle1
  // feedback_angle2
  // feedback_angle3
  // feedback_angle4
  // feedback_angle5
  // feedback_angle6
}

bool
base_interfaces__action__Angle_Feedback__are_equal(const base_interfaces__action__Angle_Feedback * lhs, const base_interfaces__action__Angle_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback_angle1
  if (lhs->feedback_angle1 != rhs->feedback_angle1) {
    return false;
  }
  // feedback_angle2
  if (lhs->feedback_angle2 != rhs->feedback_angle2) {
    return false;
  }
  // feedback_angle3
  if (lhs->feedback_angle3 != rhs->feedback_angle3) {
    return false;
  }
  // feedback_angle4
  if (lhs->feedback_angle4 != rhs->feedback_angle4) {
    return false;
  }
  // feedback_angle5
  if (lhs->feedback_angle5 != rhs->feedback_angle5) {
    return false;
  }
  // feedback_angle6
  if (lhs->feedback_angle6 != rhs->feedback_angle6) {
    return false;
  }
  return true;
}

bool
base_interfaces__action__Angle_Feedback__copy(
  const base_interfaces__action__Angle_Feedback * input,
  base_interfaces__action__Angle_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback_angle1
  output->feedback_angle1 = input->feedback_angle1;
  // feedback_angle2
  output->feedback_angle2 = input->feedback_angle2;
  // feedback_angle3
  output->feedback_angle3 = input->feedback_angle3;
  // feedback_angle4
  output->feedback_angle4 = input->feedback_angle4;
  // feedback_angle5
  output->feedback_angle5 = input->feedback_angle5;
  // feedback_angle6
  output->feedback_angle6 = input->feedback_angle6;
  return true;
}

base_interfaces__action__Angle_Feedback *
base_interfaces__action__Angle_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_Feedback * msg = (base_interfaces__action__Angle_Feedback *)allocator.allocate(sizeof(base_interfaces__action__Angle_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces__action__Angle_Feedback));
  bool success = base_interfaces__action__Angle_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces__action__Angle_Feedback__destroy(base_interfaces__action__Angle_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces__action__Angle_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces__action__Angle_Feedback__Sequence__init(base_interfaces__action__Angle_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_Feedback * data = NULL;

  if (size) {
    data = (base_interfaces__action__Angle_Feedback *)allocator.zero_allocate(size, sizeof(base_interfaces__action__Angle_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces__action__Angle_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces__action__Angle_Feedback__fini(&data[i - 1]);
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
base_interfaces__action__Angle_Feedback__Sequence__fini(base_interfaces__action__Angle_Feedback__Sequence * array)
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
      base_interfaces__action__Angle_Feedback__fini(&array->data[i]);
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

base_interfaces__action__Angle_Feedback__Sequence *
base_interfaces__action__Angle_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_Feedback__Sequence * array = (base_interfaces__action__Angle_Feedback__Sequence *)allocator.allocate(sizeof(base_interfaces__action__Angle_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces__action__Angle_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces__action__Angle_Feedback__Sequence__destroy(base_interfaces__action__Angle_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces__action__Angle_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces__action__Angle_Feedback__Sequence__are_equal(const base_interfaces__action__Angle_Feedback__Sequence * lhs, const base_interfaces__action__Angle_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces__action__Angle_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces__action__Angle_Feedback__Sequence__copy(
  const base_interfaces__action__Angle_Feedback__Sequence * input,
  base_interfaces__action__Angle_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces__action__Angle_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces__action__Angle_Feedback * data =
      (base_interfaces__action__Angle_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces__action__Angle_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces__action__Angle_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces__action__Angle_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "base_interfaces/action/detail/angle__functions.h"

bool
base_interfaces__action__Angle_SendGoal_Request__init(base_interfaces__action__Angle_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    base_interfaces__action__Angle_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!base_interfaces__action__Angle_Goal__init(&msg->goal)) {
    base_interfaces__action__Angle_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
base_interfaces__action__Angle_SendGoal_Request__fini(base_interfaces__action__Angle_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  base_interfaces__action__Angle_Goal__fini(&msg->goal);
}

bool
base_interfaces__action__Angle_SendGoal_Request__are_equal(const base_interfaces__action__Angle_SendGoal_Request * lhs, const base_interfaces__action__Angle_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!base_interfaces__action__Angle_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
base_interfaces__action__Angle_SendGoal_Request__copy(
  const base_interfaces__action__Angle_SendGoal_Request * input,
  base_interfaces__action__Angle_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!base_interfaces__action__Angle_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

base_interfaces__action__Angle_SendGoal_Request *
base_interfaces__action__Angle_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_SendGoal_Request * msg = (base_interfaces__action__Angle_SendGoal_Request *)allocator.allocate(sizeof(base_interfaces__action__Angle_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces__action__Angle_SendGoal_Request));
  bool success = base_interfaces__action__Angle_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces__action__Angle_SendGoal_Request__destroy(base_interfaces__action__Angle_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces__action__Angle_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces__action__Angle_SendGoal_Request__Sequence__init(base_interfaces__action__Angle_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_SendGoal_Request * data = NULL;

  if (size) {
    data = (base_interfaces__action__Angle_SendGoal_Request *)allocator.zero_allocate(size, sizeof(base_interfaces__action__Angle_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces__action__Angle_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces__action__Angle_SendGoal_Request__fini(&data[i - 1]);
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
base_interfaces__action__Angle_SendGoal_Request__Sequence__fini(base_interfaces__action__Angle_SendGoal_Request__Sequence * array)
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
      base_interfaces__action__Angle_SendGoal_Request__fini(&array->data[i]);
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

base_interfaces__action__Angle_SendGoal_Request__Sequence *
base_interfaces__action__Angle_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_SendGoal_Request__Sequence * array = (base_interfaces__action__Angle_SendGoal_Request__Sequence *)allocator.allocate(sizeof(base_interfaces__action__Angle_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces__action__Angle_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces__action__Angle_SendGoal_Request__Sequence__destroy(base_interfaces__action__Angle_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces__action__Angle_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces__action__Angle_SendGoal_Request__Sequence__are_equal(const base_interfaces__action__Angle_SendGoal_Request__Sequence * lhs, const base_interfaces__action__Angle_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces__action__Angle_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces__action__Angle_SendGoal_Request__Sequence__copy(
  const base_interfaces__action__Angle_SendGoal_Request__Sequence * input,
  base_interfaces__action__Angle_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces__action__Angle_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces__action__Angle_SendGoal_Request * data =
      (base_interfaces__action__Angle_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces__action__Angle_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces__action__Angle_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces__action__Angle_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
base_interfaces__action__Angle_SendGoal_Response__init(base_interfaces__action__Angle_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    base_interfaces__action__Angle_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
base_interfaces__action__Angle_SendGoal_Response__fini(base_interfaces__action__Angle_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
base_interfaces__action__Angle_SendGoal_Response__are_equal(const base_interfaces__action__Angle_SendGoal_Response * lhs, const base_interfaces__action__Angle_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
base_interfaces__action__Angle_SendGoal_Response__copy(
  const base_interfaces__action__Angle_SendGoal_Response * input,
  base_interfaces__action__Angle_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

base_interfaces__action__Angle_SendGoal_Response *
base_interfaces__action__Angle_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_SendGoal_Response * msg = (base_interfaces__action__Angle_SendGoal_Response *)allocator.allocate(sizeof(base_interfaces__action__Angle_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces__action__Angle_SendGoal_Response));
  bool success = base_interfaces__action__Angle_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces__action__Angle_SendGoal_Response__destroy(base_interfaces__action__Angle_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces__action__Angle_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces__action__Angle_SendGoal_Response__Sequence__init(base_interfaces__action__Angle_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_SendGoal_Response * data = NULL;

  if (size) {
    data = (base_interfaces__action__Angle_SendGoal_Response *)allocator.zero_allocate(size, sizeof(base_interfaces__action__Angle_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces__action__Angle_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces__action__Angle_SendGoal_Response__fini(&data[i - 1]);
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
base_interfaces__action__Angle_SendGoal_Response__Sequence__fini(base_interfaces__action__Angle_SendGoal_Response__Sequence * array)
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
      base_interfaces__action__Angle_SendGoal_Response__fini(&array->data[i]);
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

base_interfaces__action__Angle_SendGoal_Response__Sequence *
base_interfaces__action__Angle_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_SendGoal_Response__Sequence * array = (base_interfaces__action__Angle_SendGoal_Response__Sequence *)allocator.allocate(sizeof(base_interfaces__action__Angle_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces__action__Angle_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces__action__Angle_SendGoal_Response__Sequence__destroy(base_interfaces__action__Angle_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces__action__Angle_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces__action__Angle_SendGoal_Response__Sequence__are_equal(const base_interfaces__action__Angle_SendGoal_Response__Sequence * lhs, const base_interfaces__action__Angle_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces__action__Angle_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces__action__Angle_SendGoal_Response__Sequence__copy(
  const base_interfaces__action__Angle_SendGoal_Response__Sequence * input,
  base_interfaces__action__Angle_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces__action__Angle_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces__action__Angle_SendGoal_Response * data =
      (base_interfaces__action__Angle_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces__action__Angle_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces__action__Angle_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces__action__Angle_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
base_interfaces__action__Angle_GetResult_Request__init(base_interfaces__action__Angle_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    base_interfaces__action__Angle_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
base_interfaces__action__Angle_GetResult_Request__fini(base_interfaces__action__Angle_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
base_interfaces__action__Angle_GetResult_Request__are_equal(const base_interfaces__action__Angle_GetResult_Request * lhs, const base_interfaces__action__Angle_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
base_interfaces__action__Angle_GetResult_Request__copy(
  const base_interfaces__action__Angle_GetResult_Request * input,
  base_interfaces__action__Angle_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

base_interfaces__action__Angle_GetResult_Request *
base_interfaces__action__Angle_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_GetResult_Request * msg = (base_interfaces__action__Angle_GetResult_Request *)allocator.allocate(sizeof(base_interfaces__action__Angle_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces__action__Angle_GetResult_Request));
  bool success = base_interfaces__action__Angle_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces__action__Angle_GetResult_Request__destroy(base_interfaces__action__Angle_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces__action__Angle_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces__action__Angle_GetResult_Request__Sequence__init(base_interfaces__action__Angle_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_GetResult_Request * data = NULL;

  if (size) {
    data = (base_interfaces__action__Angle_GetResult_Request *)allocator.zero_allocate(size, sizeof(base_interfaces__action__Angle_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces__action__Angle_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces__action__Angle_GetResult_Request__fini(&data[i - 1]);
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
base_interfaces__action__Angle_GetResult_Request__Sequence__fini(base_interfaces__action__Angle_GetResult_Request__Sequence * array)
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
      base_interfaces__action__Angle_GetResult_Request__fini(&array->data[i]);
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

base_interfaces__action__Angle_GetResult_Request__Sequence *
base_interfaces__action__Angle_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_GetResult_Request__Sequence * array = (base_interfaces__action__Angle_GetResult_Request__Sequence *)allocator.allocate(sizeof(base_interfaces__action__Angle_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces__action__Angle_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces__action__Angle_GetResult_Request__Sequence__destroy(base_interfaces__action__Angle_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces__action__Angle_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces__action__Angle_GetResult_Request__Sequence__are_equal(const base_interfaces__action__Angle_GetResult_Request__Sequence * lhs, const base_interfaces__action__Angle_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces__action__Angle_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces__action__Angle_GetResult_Request__Sequence__copy(
  const base_interfaces__action__Angle_GetResult_Request__Sequence * input,
  base_interfaces__action__Angle_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces__action__Angle_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces__action__Angle_GetResult_Request * data =
      (base_interfaces__action__Angle_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces__action__Angle_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces__action__Angle_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces__action__Angle_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "base_interfaces/action/detail/angle__functions.h"

bool
base_interfaces__action__Angle_GetResult_Response__init(base_interfaces__action__Angle_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!base_interfaces__action__Angle_Result__init(&msg->result)) {
    base_interfaces__action__Angle_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
base_interfaces__action__Angle_GetResult_Response__fini(base_interfaces__action__Angle_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  base_interfaces__action__Angle_Result__fini(&msg->result);
}

bool
base_interfaces__action__Angle_GetResult_Response__are_equal(const base_interfaces__action__Angle_GetResult_Response * lhs, const base_interfaces__action__Angle_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!base_interfaces__action__Angle_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
base_interfaces__action__Angle_GetResult_Response__copy(
  const base_interfaces__action__Angle_GetResult_Response * input,
  base_interfaces__action__Angle_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!base_interfaces__action__Angle_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

base_interfaces__action__Angle_GetResult_Response *
base_interfaces__action__Angle_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_GetResult_Response * msg = (base_interfaces__action__Angle_GetResult_Response *)allocator.allocate(sizeof(base_interfaces__action__Angle_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces__action__Angle_GetResult_Response));
  bool success = base_interfaces__action__Angle_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces__action__Angle_GetResult_Response__destroy(base_interfaces__action__Angle_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces__action__Angle_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces__action__Angle_GetResult_Response__Sequence__init(base_interfaces__action__Angle_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_GetResult_Response * data = NULL;

  if (size) {
    data = (base_interfaces__action__Angle_GetResult_Response *)allocator.zero_allocate(size, sizeof(base_interfaces__action__Angle_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces__action__Angle_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces__action__Angle_GetResult_Response__fini(&data[i - 1]);
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
base_interfaces__action__Angle_GetResult_Response__Sequence__fini(base_interfaces__action__Angle_GetResult_Response__Sequence * array)
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
      base_interfaces__action__Angle_GetResult_Response__fini(&array->data[i]);
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

base_interfaces__action__Angle_GetResult_Response__Sequence *
base_interfaces__action__Angle_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_GetResult_Response__Sequence * array = (base_interfaces__action__Angle_GetResult_Response__Sequence *)allocator.allocate(sizeof(base_interfaces__action__Angle_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces__action__Angle_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces__action__Angle_GetResult_Response__Sequence__destroy(base_interfaces__action__Angle_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces__action__Angle_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces__action__Angle_GetResult_Response__Sequence__are_equal(const base_interfaces__action__Angle_GetResult_Response__Sequence * lhs, const base_interfaces__action__Angle_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces__action__Angle_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces__action__Angle_GetResult_Response__Sequence__copy(
  const base_interfaces__action__Angle_GetResult_Response__Sequence * input,
  base_interfaces__action__Angle_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces__action__Angle_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces__action__Angle_GetResult_Response * data =
      (base_interfaces__action__Angle_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces__action__Angle_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces__action__Angle_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces__action__Angle_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "base_interfaces/action/detail/angle__functions.h"

bool
base_interfaces__action__Angle_FeedbackMessage__init(base_interfaces__action__Angle_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    base_interfaces__action__Angle_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!base_interfaces__action__Angle_Feedback__init(&msg->feedback)) {
    base_interfaces__action__Angle_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
base_interfaces__action__Angle_FeedbackMessage__fini(base_interfaces__action__Angle_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  base_interfaces__action__Angle_Feedback__fini(&msg->feedback);
}

bool
base_interfaces__action__Angle_FeedbackMessage__are_equal(const base_interfaces__action__Angle_FeedbackMessage * lhs, const base_interfaces__action__Angle_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!base_interfaces__action__Angle_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
base_interfaces__action__Angle_FeedbackMessage__copy(
  const base_interfaces__action__Angle_FeedbackMessage * input,
  base_interfaces__action__Angle_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!base_interfaces__action__Angle_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

base_interfaces__action__Angle_FeedbackMessage *
base_interfaces__action__Angle_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_FeedbackMessage * msg = (base_interfaces__action__Angle_FeedbackMessage *)allocator.allocate(sizeof(base_interfaces__action__Angle_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces__action__Angle_FeedbackMessage));
  bool success = base_interfaces__action__Angle_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces__action__Angle_FeedbackMessage__destroy(base_interfaces__action__Angle_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces__action__Angle_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces__action__Angle_FeedbackMessage__Sequence__init(base_interfaces__action__Angle_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_FeedbackMessage * data = NULL;

  if (size) {
    data = (base_interfaces__action__Angle_FeedbackMessage *)allocator.zero_allocate(size, sizeof(base_interfaces__action__Angle_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces__action__Angle_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces__action__Angle_FeedbackMessage__fini(&data[i - 1]);
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
base_interfaces__action__Angle_FeedbackMessage__Sequence__fini(base_interfaces__action__Angle_FeedbackMessage__Sequence * array)
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
      base_interfaces__action__Angle_FeedbackMessage__fini(&array->data[i]);
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

base_interfaces__action__Angle_FeedbackMessage__Sequence *
base_interfaces__action__Angle_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces__action__Angle_FeedbackMessage__Sequence * array = (base_interfaces__action__Angle_FeedbackMessage__Sequence *)allocator.allocate(sizeof(base_interfaces__action__Angle_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces__action__Angle_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces__action__Angle_FeedbackMessage__Sequence__destroy(base_interfaces__action__Angle_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces__action__Angle_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces__action__Angle_FeedbackMessage__Sequence__are_equal(const base_interfaces__action__Angle_FeedbackMessage__Sequence * lhs, const base_interfaces__action__Angle_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces__action__Angle_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces__action__Angle_FeedbackMessage__Sequence__copy(
  const base_interfaces__action__Angle_FeedbackMessage__Sequence * input,
  base_interfaces__action__Angle_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces__action__Angle_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces__action__Angle_FeedbackMessage * data =
      (base_interfaces__action__Angle_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces__action__Angle_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces__action__Angle_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces__action__Angle_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
