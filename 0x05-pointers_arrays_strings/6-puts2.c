#include "holberton.h"
#include <string.h>
/**
 * puts2 - check the code for Holberton School students.
 * @str: entry pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	int count = 0, i = 0;
	char *longitud = '\0';

	longitud = str;
	while (*longitud++ != '\0')
	count++;
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
