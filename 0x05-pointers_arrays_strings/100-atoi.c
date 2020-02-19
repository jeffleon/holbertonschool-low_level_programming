#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - check the code for Holberton School students.
 * @s: pointer
 * Return: Always 0.
 */
int _atoi(char *s)
{
	char *copia = s;
	int count = 0, nosignos = 0;
	unsigned int numero = 0;

	do {
		if (*copia >= 48 && *copia <= 57)
		{
			numero = (numero * 10) + (*copia - 48);
			count++;
		}
		else if (*copia == 45)
		nosignos++;
		else
		if (count > 0)
		break;
	} while (*copia++ != '\0');
	if (nosignos % 2 != 0)
	numero *= -1;
	return (numero);
}
