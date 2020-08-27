#include "search_algos.h"
/**
 * printarray - print a array
 * array: is a entry point
 * left: side to print
 * rigth: side to print
 */
void printarray(int *array, int left, int rigth)
{
  char sep = '\0';
  printf("Searching in array:");
  for(;left <= rigth; left++)
  {
    sep = left == rigth ? '\0': ',';
    printf(" %d%c", array[left],sep);
  }
  printf("\n");
  
}

/**
 * binary_search - find in array
 * array: entry point
 * size: the size of the array
 * value: the value to find
 * Return: the index of the value
 */
int binary_search(int *array, size_t size, int value)
{
  int left = 0;
  int rigth = size - 1;
  int mid = 0;
  while(left <= rigth)
  {
    printarray(array, left, rigth);
    mid = (left + rigth)/2;
    if (array[mid] == value)
      return(mid);
    else if (array[mid] < value)
      left = mid + 1;
    else if (array[mid] > value)
      rigth = mid -1;
  }
  return(-1);
}
