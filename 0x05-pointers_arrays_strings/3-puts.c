#include "holberton.h"
/**
 * _puts - check the code for Holberton School students.
 * @*str
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

