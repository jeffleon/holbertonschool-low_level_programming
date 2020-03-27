#include "holberton.h"
/**
 * get_bit - singly linked list
 * @n: string - (malloc'ed string)
 * @index: de
 * Return: a number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int aux = n;

	while (aux > 0)
	{
		if (index == i)
		{
			if (n & 1 << index)
				return (1);
			else
				return (0);
		}
	i++;
	}
	return (-1);
}
