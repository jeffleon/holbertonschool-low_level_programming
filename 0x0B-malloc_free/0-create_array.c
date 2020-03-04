#include "holberton.h"
/**
 * *create_array - put other points
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: char pointer.
 */
char *create_array(unsigned int size, char c)
{
	char *point;
	unsigned int i = 0;

	if (size == 0)
		return (0);
	point = malloc(size);
	if (point == NULL)
		return (0);
	for (i = 0; i < size; i++)
	point[i] = c;
	return (point);
}
