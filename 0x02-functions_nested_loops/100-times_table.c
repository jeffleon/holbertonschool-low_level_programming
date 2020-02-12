#include "holberton.h"
/**
 * print_times_table - Entry point
 * @n: kasjdadlsajk
 */
void print_times_table(int n)
{
	int x, y, c;

	if (n <= 15)
	{
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			c = x * y;
		if (c > 9 && c <= 99)
		{
			if (y != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		else if (c > 99)
		{
			if (y != 0)
			{
			_putchar(',');
			_putchar(' ');
			}
			_putchar(c / 100 + '0');
			_putchar(((c % 100) / 10) + '0');
			_putchar(c % 10 + '0');
		}
		else
		{
			if (y != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			}
			_putchar(c % 10 + '0');
		}
		}
		_putchar('\n');
	}
	}
}

