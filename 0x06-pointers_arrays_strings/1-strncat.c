#include "holberton.h"
/**
 * _strncat - check the code for Holberton School students.
 * @dest: entry pointer
 * @src: entry pointer
 * @n: variable
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *concat = dest;
	int numero = 0;

	while (*concat)
	concat++;

	while (n > numero && *src != '\0')
	{
		*concat++ = *src++;
		numero++;
	}
	return (dest);
}
