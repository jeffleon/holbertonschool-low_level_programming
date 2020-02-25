#include <stdio.h>
#include "holberton.h"
/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: integer n
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
