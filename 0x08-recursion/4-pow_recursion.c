#include <stdio.h>
#include "holberton.h"
/**
 * _pow_recursion - prints buffer in hexa
 * @x: its a variable
 * @y: its a variable
 * Return: Nothing.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}

