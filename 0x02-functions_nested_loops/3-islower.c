#include "holberton.h"
/**
 * _islower - Entry point
 * @x:hkdjhaks
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
int _islower(int x)
{
	int w, reto = 0;

	for (w = 'a'; w < 'z'; w++)
	{
	if (w == x)
	{
	reto = 1;
	break;
	}
	else
	reto = 0;
	}
	return (reto);
}
