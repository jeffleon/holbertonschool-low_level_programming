#include <stdio.h>
#include "holberton.h"
/**
 * _find_root - prints buffer in hexa
 * @n: number
 * @j: the number we find root
 * Return: Nothing.
 */
int _find_root(int n, int j)
{
	if (n == j * j)
	return (j);
	else if (n < j)
	return (-1);
	return (_find_root(n, j + 1));
}
/**
 * _sqrt_recursion - prints buffer in hexa
 * @n: its a number
 * Return: Nothing.
 */
int _sqrt_recursion(int n)
{
	return (_find_root(n, 0));
}


