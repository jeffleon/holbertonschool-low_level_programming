#include <stdio.h>
#include "holberton.h"
/**
 * _strchr - prints buffer in hexa
 * @s: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
	while (c != *s && *s != '\0')
	s++;
	return (!c ? s : NULL);
}
