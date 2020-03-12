#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - check the code for Holberton School students.
 * @array: this is and a array
 * @size: this is the size of the
 * @cmp: this is pointer to function
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j == 0)
				return (i);
		}
	}
	return (-1);
}
