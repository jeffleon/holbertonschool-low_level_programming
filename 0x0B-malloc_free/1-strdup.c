#include "holberton.h"

/**
 * _strdup - put other points
 * @str: the address of memory to print
 *
 * Return: pointer char
 */
char *_strdup(char *str)
{
	char *point;
	int count = 0, i = 0;

	if (str == NULL)
		return (NULL);
	for (count = 0; *(str + count) != '\0'; count++)
	{}
	point = malloc(sizeof(*str) * count);
	if (point == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
		point[i] = str[i];
	return (point);
}
