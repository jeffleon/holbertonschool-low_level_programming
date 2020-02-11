#include "holberton.h"
/**
 * jack_bauer - Entry point
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i, f;

	for (i = 0; i <= 23; i++)
	{
		for (f = 0; f <= 59; f++)
		{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar(':');
		_putchar(f / 10 + '0');
		_putchar(f % 10 + '0');
		_putchar('\n');
		}
	}


}
