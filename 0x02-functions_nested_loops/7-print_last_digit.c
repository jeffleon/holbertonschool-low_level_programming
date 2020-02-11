#include "holberton.h"
/**
 * print_last_digit - Entry point
 * @c: sadjlaks
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
	int l = c % 10;

	if (l < 0)
	l = l * -1;
	_putchar(l + '0');
	return (l);
}
