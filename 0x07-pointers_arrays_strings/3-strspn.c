#include <stdio.h>
#include "holberton.h"
/**
 * _strspn - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 *
 * Return: Nothing.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0, length1 = 0, aux = 0, count = 0;

	while (*(s + length))
	{
		aux = 0;
		length1 = 0;
		while (*(accept + length1))
		{
			if (*(accept + length1) == *(s + length))
			{
				aux++;
				count++;
				break;
			}
			length1++;
		}
		length++;
		if (aux == 0)
			break;
	}
	return (count);
}
