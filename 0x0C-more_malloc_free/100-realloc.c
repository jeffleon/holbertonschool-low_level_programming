#include "holberton.h"
/**
 * _realloc - put other points
 * @ptr: 6-6-6 the number of the best
 * @old_size: the argv array
 * @new_size: the number
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		ptr = malloc(sizeof(char) * new_size);
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(sizeof(char) * new_size);
		return (ptr);
	}
	return (ptr);
}

