#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - check the code for Holberton School students.
 * @dest: pointer entry
 * @src: pointer entry
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	char *copia = dest;

	while (*src != '\0')
	{
		*copia = *src;
		copia++;
		src++;
	}
	*copia = '\0';
	return (dest);
}
