#include "holberton.h"
/**
 * print_sign - Entry point
 * @x : djkajsd
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
int print_sign(int x)
{
	int y;

	if (x > 0)
	{
	_putchar ('+');
	y = 1;
	}
	else if (x < 0)
	{
	_putchar ('-');
	y = -1;
	}
	else if (x == 0)
	{
	_putchar ('0');
	y = 0;
	}
	return (y);
}

