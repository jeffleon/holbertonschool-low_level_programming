#include "holberton.h"
#include <stdlib.h>
/**
 * print_last_digit - Entry point
 * @c: sadjlaks
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
	int a, b;

	a = abs(c);
	b = a % 10;
	_putchar(b + '0');
	return (a % 10);
}
