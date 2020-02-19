#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 * @s: entry pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count;

	while (*s++ != '\0')
	{
		count++;
	}
	return (count);
}

