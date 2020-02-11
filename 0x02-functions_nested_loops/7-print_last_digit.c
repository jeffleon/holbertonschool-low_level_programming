#include "holberton.h"
/**
 * print_last_digit - Entry point
 * @c: sadjlaks
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
	if (c < 0)
	c = c * -1;
	_putchar(c % 10 + '0');
	return (c % 10);
}
