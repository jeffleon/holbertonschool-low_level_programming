#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
  size_t idx;
  for(idx = 0; idx < size; idx++)
  {
      if(array[idx] == value)
        return(idx);
      printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
  }
  return(-1);
}

