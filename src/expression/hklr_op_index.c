#include <assert.h>

#include "hkl_deque.h"
#include "hkl_value.h"

HklValue* hklr_op_index(HklValue* array, HklValue* index)
{
  assert(array->type == HKL_TYPE_REF);
  assert(index->type == HKL_TYPE_INT);
  assert(array != NULL);
  assert(index != NULL);
  array = hklr_object_dereference(array->as.object);
  return hkl_deque_findn(array->as.deque, index->as.integer);
}