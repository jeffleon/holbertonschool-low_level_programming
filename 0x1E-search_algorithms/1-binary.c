#include "search_algos.h"

/**
 * printarray - is a function to print the array to search
 * @array: is a pointer to the first element of the array to search in
 * @left: is the index to begin to print
 * @rigth: is the index to end to print
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
 * binary_search - its a function that searches for a value in a sorted array
 * @array: its a array to search
 * @size: its the number of elements in array
 * @value: its the value to search for
 *
 * Return: -1 if value is not present in array or if array is NULL, otherwise
 * the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
  int left = 0;
  int rigth = size - 1;
  int mid = 0;
  
  if (array == NULL)
    return (-1);
  while (left <= rigth)
  {
    printarray(array, left, rigth);
    mid = (left + rigth)/2;
    if (array[mid] == value)
      return (mid);
    else if (array[mid] < value)
      left = mid + 1;
    else if (array[mid] > value)
      rigth = mid -1;
  }
  return (-1);
}
