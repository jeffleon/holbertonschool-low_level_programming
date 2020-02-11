#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - Entry point
 * @n:ajksld
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int bandera, i, restar;

	bandera = 98 - n;
	if (bandera > 0)
	{
		for (i = 0; i <= bandera; i++)
		{
		printf("%d", n);
		if (i != bandera)
		printf(", ");
		n += 1;
		}
	}
	else if (bandera < 0)
	{
	restar = abs(bandera);
		for (i = 0; i <= restar; i++)
		{
		printf("%d", n);
		if (i != restar)
		printf(", ");
		n -= 1;
		}
	}
	else if (bandera == 0)
	printf("98");
putchar('\n');
}
