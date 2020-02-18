#include "holberton.h"
#include <string.h>
/**
 * print_rev - check the code for Holberton School students.
 * @*s
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int count = 1, i;
	char *puntero = '\0';

	puntero = s;
	while (*s++)
	count++;
	for (i = count; i > 1; i--)
	{
		_putchar(puntero[i - 2]);
	}
	_putchar('\n');
}

