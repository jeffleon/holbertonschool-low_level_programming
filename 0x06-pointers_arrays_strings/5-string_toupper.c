#include "holberton.h"
/**
 * string_toupper - check the code for Holberton School students.
 * @s: entry pointer
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int index = 0;

	while (*(s + index))
	{
		if (*(s + index) >= 97 && *(s + index) <= 122)
		{
			*(s + index) -= 32;
		}
		index++;
	}
	return (s);
}
