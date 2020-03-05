#include "holberton.h"

/**
 * array_range - put other points
 * @min: 6-6-6 the number of the best
 * @max: the argv array
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *numeros = malloc(sizeof(int) * (max - min + 1)), i = 0;

	if (min > max)
		return (NULL);
	if (numeros == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		numeros[i] = min++;
	return (numeros);
}

