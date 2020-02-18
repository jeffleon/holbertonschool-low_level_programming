#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 * @*s
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i, count;

	while (*s != '\0')
	{
		*s++;
		count++;
	}
	return (count);
}

