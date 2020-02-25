#include "holberton.h"
#include <stdio.h>

/**
 * _memset - put other points
 * @s: the address of memory to print
 * @b: the size of the memory to print
 * @n: entry int
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
