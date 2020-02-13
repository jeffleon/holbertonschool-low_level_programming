#include <stdio.h>
#include "holberton.h"
/**
 * _isupper - check if a parameter is uppercase or not.
 * @c: init value
 * Return: Always 0.
 */
int _isupper(int c)
{
	int bandera = 0;

	if (c >= 65 && c <= 90)
	bandera = 1;
	else
	bandera = 0;
	return (bandera);
}
