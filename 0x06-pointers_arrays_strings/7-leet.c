#include "holberton.h"
#include <ctype.h>
/**
 * leet - check the code for Holberton School students.
 * @s: entry pointer
 * Return: Always 0.
 */
char *leet(char *s)
{
	char letras[] = {'a', 'e', 'o', 't', 'l'};
	char numeros[] = {'4', '3', '0', '7', '1'};
	int length = 0, length1 = 0;
	char caracter;

	while (*(s + length))
	{
		caracter = tolower(*(s + length));

		for (length1 = 0; length1 < 5 ; length1++)
		{
			if (caracter == letras[length1])
			{
				*(s + length) = numeros[length1];
			}
		}
		length++;
	}
	return (s);
}
