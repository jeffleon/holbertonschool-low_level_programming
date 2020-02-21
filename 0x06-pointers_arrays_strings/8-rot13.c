#include "holberton.h"
/**
 * rot13 - check the code for Holberton School students.
 * @s: entry pointer
 * Return: Always 0.
 */
char *rot13(char *s)
{
	char orgin[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rot13[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int length = 0, lenrot = 0;

	while (*(s + length))
	{
		for (lenrot = 0; *(orgin + lenrot); lenrot++)
		{
			if (*(s + length) == *(orgin + lenrot))
			{
				*(s + length) = *(rot13 + lenrot);
				break;
			}
		}
	length++;
	}
	return (s);
}
