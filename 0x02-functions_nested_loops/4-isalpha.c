#include "holberton.h"
/**
 * _isalpha - Entry point
 * @x: dasdhjksakd
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
int _isalpha(int x)
{
	int y = 26, reto;
	char letra = 'a';
	char Letra = 'A';

	do {
	letra++;
	Letra++;
	if (letra == x || Letra == x)
	{
	reto = 1;
	break;
	}
	else
	reto = 0;
	y--;
	} while (y != 0);
	return (reto);
}
