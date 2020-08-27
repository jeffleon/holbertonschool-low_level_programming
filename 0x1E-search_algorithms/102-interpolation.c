#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - is a function to print the array to search
 * @array: is a pointer to the first element of the array to search in
 * @left: is the index to begin to prin
 * @value: is the index to end to print
 * Return: -1 if value is not present in array or if array is NULL, otherwise
 * the first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	int  left = 0;
	int rigth = size - 1;
	size_t pos;
	while(left != rigth || (array[left] < value && array[rigth] > value))
	{
		pos = left + (((double)(rigth - left) / (array[rigth] - array[left])) * (value - array[left])); 
		if (pos > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return(-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return(pos);
		else if(array[pos] > value)
			rigth = pos - 1;
		else if(array[pos] < value)
			left = pos + 1;
	}
	return (-1);
}
