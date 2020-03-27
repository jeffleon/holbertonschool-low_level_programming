#include "holberton.h"
/**
 * flip_bits - singly linked list
 * @n: number - (malloc'ed string)
 * @m: number
 * Return: a number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int resultado = n ^ m;
	int count = 0;

	while (resultado > 0)
	{
		count += resultado & 1;
		resultado >>= 1;
	}
	return (count);

}
