#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - check the code for Holberton School students.
 * @s: pointer
 * Return: Always 0.
 */
int _atoi(char *s)
{
	char *copia = s, numeros[10];
	int count = 0;

	while (*copia++ != '\0')
	{
		if (*copia >= 48 && *copia <= 57 || *copia == 45 || *copia == 43)
		{
		numeros[0] = *copia;
		count++;
		}
	}
}
