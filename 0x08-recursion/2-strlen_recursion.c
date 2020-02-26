#include <stdio.h>
#include "holberton.h"
/**
 * _strlen_recursion - prints buffer in hexa
 * @s: its a variable
 * Return: Nothing.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
