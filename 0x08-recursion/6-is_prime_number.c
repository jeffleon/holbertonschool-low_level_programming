#include <stdio.h>
#include "holberton.h"
/**
 * _find_prime_number - prints buffer in hexa
 * @n: its a number
 * @j: its a number
 * Return: Nothing.
 */
int _find_prime_number(int n, int j)
{
	if (n == j)
		return (1);
	else if (n % j == 0)
		return (0);
	return (_find_prime_number(n, j + 1));
}
/**
 * is_prime_number - prints buffer in hexa
 * @n: its a number
 * Return: Nothing.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_find_prime_number(n, 2));
}
