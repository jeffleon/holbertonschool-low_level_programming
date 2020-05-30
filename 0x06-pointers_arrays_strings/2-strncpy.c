#include "holberton.h"
/**
 * _strncpy - check the code for Holberton School students.
 * @dest: entry pointer
 * @src: entry pointer
 * @n: variable
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int numero = 0;

	for (numero = 0; numero < n && src[numero] != '\0'; numero++)
	{
		dest[numero] = src[numero];
	}
	dest[numero] = '\0';
	return (dest);
}
