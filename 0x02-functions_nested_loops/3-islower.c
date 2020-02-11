#include "holberton.h"
#include <ctype.h>
/**
 * _islower - Entry point
 * @x:hkdjhaks
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
int _islower(int x)
{
	int low, reto = 0;

	low = islower(x);
	if (low != 0)
	reto = 1;
	else
	reto = 0;
	return (reto);
}
