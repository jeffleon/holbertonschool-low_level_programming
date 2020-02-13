#include "holberton.h"
/**
 * print_triangle - check the code for Holberton School students.
 * @size: variable input
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a, aux, b, otro;

	otro = size;
	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 1; a <= size; a++)
	{
		otro--;
		aux = otro;
		for (b = 1; b <= size; b++)
		{
			if (aux > 0)
			{
			_putchar(' ');
			aux--;
			}
			else
			_putchar('#');
		}
		_putchar('\n');
	}
}
