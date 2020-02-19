#include "holberton.h"
#include <string.h>
/**
 * rev_string - check the code for Holberton School students.
 * @s: entry pointer
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int count = 1, i;
	char *longitud = '\0', p[100];

	longitud = s;
	while (*longitud++ != '\0')
	{
		p[count - 1] = s[count - 1];
		count++;
	}
	for (i = 1; i < count; i++)
	s[i - 1] = p[count - i - 1];
}
