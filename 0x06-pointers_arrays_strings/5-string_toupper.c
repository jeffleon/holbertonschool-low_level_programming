#include "holberton.h"
/**
 * _string_toupper - check the code for Holberton School students.
 * @s: entry pointer
 * Return: Always 0.
 */
char *_string_toupper(char *s)
{
	int cantidad, index = 0;

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
