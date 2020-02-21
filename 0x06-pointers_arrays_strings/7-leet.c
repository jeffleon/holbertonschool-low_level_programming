#include "holberton.h"
/**
 * leet - check the code for Holberton School students.
 * @s: entry pointer
 * Return: Always 0.
 */
char *leet(char *s)
{
	char letras[] = "AaEeOoTtLl";
	char numeros[] = "4433007711";
	int length = 0, length1 = 0;

	while (*(s + length))
	{
		for (length1 = 0; length1 < 10 ; length1++)
		{
			if (*(s + length) == *(letras + length1))
			*(s + length) = *(numeros + length1);
		}
		length++;
	}
	return (s);
}
