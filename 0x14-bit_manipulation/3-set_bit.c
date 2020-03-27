#include "holberton.h"
/**
 * set_bit - singly linked list
 * @n: string - (malloc'ed string)
 * @index: indice
 * Return: a number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = (*n | 1 << index);
	return (1);
}
