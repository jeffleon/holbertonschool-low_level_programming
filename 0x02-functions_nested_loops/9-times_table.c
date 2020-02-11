#include "holberton.h"
/**
 * times_table - Entry point
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int x, y, c, p, t;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			c = x * y;
			p = c / 10;
			t = c % 10;
			if (c > 9)
			{
				if (y != 0)
				{
				_putchar(',');
				_putchar(' ');
				}
				_putchar(p + '0');
				_putchar(t + '0');
			}
			else
			{
				if (y != 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				_putchar(t + '0');
			}
		}
				_putchar('\n');
	}





}
