#include "holberton.h"
/**
 * print_binary - singly linked list
 * @n: string - (malloc'ed string)
 *
 * Return: a number
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int aux = n;

	while (aux > 0)
	{
		aux = aux >> 1;
		i++;
	}
	if (i != 0)
	{
		aux++, i--;
		aux = aux << i;
	}
	else
		_putchar('0');
	while (aux > 0)
	{
		if (aux & n)
			_putchar('1');
		else
			_putchar('0');
		aux = aux >> 1;
	}
}
