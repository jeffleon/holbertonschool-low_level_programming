#include "holberton.h"
#include <string.h>
/**
 * puts_half - check the code for Holberton School students.
 * @*str
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int count = 0, i, n = 0;
	char *longitud = '\0';

	longitud = str;
	while (*longitud++ != '\0')
	count++;
	if (count % 2 == 0)
	n = count / 2;
	else
	n = (count - 1) / 2;
	for (i = n; i < count; i++)
	_putchar(str[i]);
	_putchar('\n');
}
