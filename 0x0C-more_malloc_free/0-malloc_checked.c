#include "holberton.h"

/**
 * malloc_checked - put other points
 * @b: 6-6-6 the number of the best
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *numero = malloc(b);

	if (numero == NULL)
		exit(98);
	return (numero);
}
