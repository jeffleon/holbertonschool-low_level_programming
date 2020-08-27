##include <math.h>include "search_algos.h"
/**
 * linear_search - its a function that search in array
 * @array: its array to search
 * @size: its the size to the array
 * @value: its the value to search
 *
 * Return: -1 if value is not present in array or if array is NULL, otherwise
 * the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
