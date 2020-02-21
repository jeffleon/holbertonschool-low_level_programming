#include "holberton.h"
/**
 * print_number - check the code for Holberton School students.
 * @n: variable input
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n > 999)
	{
		_putchar(n / 1000 + '0');
		_putchar(((n % 1000) / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
	}
	else if (n > 99)
	{
		_putchar(n / 100 + '0');
		_putchar(((n % 100) / 10) + '0');
	}
	else if (n > 9)
	{
		_putchar(n / 10 + '0');
	}
	_putchar(n % 10 + '0');
}
