#include "holberton.h"
/**
 * _strcat - check the code for Holberton School students.
 * @dest: entry pointer
 * @src: entry pointer
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char *concat = dest;
	int longitud1, longitud2, lonconcat;

	while (*concat)
	*concat++;
	while (*src)
	{
		*concat++ = *src++;
	}
	concat = 0;
	return (dest);

}
