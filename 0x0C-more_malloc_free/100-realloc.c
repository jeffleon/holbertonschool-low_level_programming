#include "holberton.h"
/**
 * string_nconcat - put other points
 * @s1: 6-6-6 the number of the best
 * @s2: the argv array
 * @n: the number
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	free(ptr);
	ptr = malloc(sizeof(char) * new_size);
	return (ptr);
}

