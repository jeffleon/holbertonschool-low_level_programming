#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 * @n: variable input
 * Return: Always 0.
 */
void print_line(int n)
{
	int a;

	if (n > -1)
	{
	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
}

