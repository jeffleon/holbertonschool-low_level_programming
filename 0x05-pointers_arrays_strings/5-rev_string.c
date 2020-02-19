#include "holberton.h"
#include <string.h>
/**
 * rev_string - check the code for Holberton School students.
 * @s: entry pointer
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int count = 0, i;
	char *longitud = '\0', flag;

	longitud = s;
	while (*(longitud++) != '\0')
	count++;
	count--;
	for (i = 0; i < count / 2; i++)
	{
		flag = s[i];
		s[i] = s[count - i];
		s[count - i] = flag;
	}
}
