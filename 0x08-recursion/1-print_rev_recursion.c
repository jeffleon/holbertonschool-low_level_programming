#include <stdio.h>
#include "holberton.h"
/**
 * _print_rev_recursion - prints buffer in hexa
 * @s: its a variable
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
