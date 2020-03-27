#include "holberton.h"
/**
 * binary_to_uint - singly linked list
 * @b: string - (malloc'ed string)
 *
 * Return: a number
 */
unsigned int binary_to_uint(const char *b)
{
	int count = 1, i = 0;
	unsigned int numero = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		i++;
	}
	i--;
	count = count << i;
	i = 0;
	while (b[i])
	{
		if (b[i] != '0' || b[i] != '1')
		{
			if (b[i] == '1')
				numero += count;
			else if (b[i] != '0')
				return (0);
			i++;
			count = count >> 1;
		}
		else
			return (0);
	}
	return (numero);
}
