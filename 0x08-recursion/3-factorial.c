#include <stdio.h>
#include "holberton.h"
/**
 * factorial - prints buffer in hexa
 * @n: its a variable
 * Return: Nothing.
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (1);
	else if (n <  0)
		return (-1);
	return (n * factorial(n - 1));
}

