#include <stdio.h>
#include "holberton.h"
/**
 * _devuelve_tamano - prints buffer in hexa
 * @s: letter
 * Return: Nothing.
 */
int _devuelve_tamano(char *s)
{
	if (*s != 0)
	return (1 + _devuelve_tamano(s + 1));
	return (0);
}
/**
 * find_palindrome - prints buffer in hexa
 * @s: letter
 * @ini: inicio
 * @fin: final
 * Return: Nothing.
 */
int find_palindrome(char *s, int ini, int fin)
{
	if (ini >= fin)
		return (1);
	else if (s[ini] == s[fin])
		return (find_palindrome(s, ini + 1, fin - 1));
	else
		return (0);
}
/**
 * is_palindrome - prints buffer in hexa
 * @s: letter
 * Return: Nothing.
 */
int is_palindrome(char *s)
{
	int tamano = 0;

	tamano = _devuelve_tamano(s);
	tamano--;
	return (find_palindrome(s, 0, tamano));
}

