#include "holberton.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 * @x: dasdhjksakd
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
int _isalpha(int x)
{
	int reto;

	if (isalpha(x) != 0)
	reto = 1;
	else
	reto = 0;
	return (reto);
}
