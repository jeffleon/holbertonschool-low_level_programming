#include "holberton.h"
/**
 * binary_to_uint - singly linked list
 * @b: string - (malloc'ed string)
 *
 * Return: a number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, expo = 1;
	unsigned int numero = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
				numero += expo;
			expo *= 2;
		}
		else
			return (0);
	}
	return (numero);
}
