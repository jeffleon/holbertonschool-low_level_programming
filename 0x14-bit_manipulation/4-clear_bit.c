#include "holberton.h"
/**
 * clear_bit - singly linked list
 * @n: string - (malloc'ed string)
 * @index: indice
 * Return: a number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = (~(1 << index) & *n);
	return (1);
}
