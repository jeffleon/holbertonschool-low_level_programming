#include "holberton.h"
/**
 * _isdigit - check the code for Holberton School students.
 * @c: init value
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int bandera = 0;

	if (c >= '0' && c <= '9')
	bandera = 1;
	else
	bandera = 0;
	return (bandera);
}
