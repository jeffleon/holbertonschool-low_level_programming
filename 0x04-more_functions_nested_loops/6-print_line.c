#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 * @n: variable input
 * Return: Always 0.
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n >= 0)
		putchar('_');
	}
	putchar('\n');
}

