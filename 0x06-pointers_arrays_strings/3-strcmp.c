#include "holberton.h"
/**
 * _strcmp - check the code for Holberton School students.
 * @s1: entry pointer
 * @s2: entry pointer
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int cantidad = 0, i = 0;

	for (i = 0; *(s1 + i) != 0 && *(s2 + i) != 0; i++)
	{
		cantidad = s1[i] - s2[i];
		if (cantidad == 0)
		continue;
		else
		break;
	}
	return (cantidad);
}
