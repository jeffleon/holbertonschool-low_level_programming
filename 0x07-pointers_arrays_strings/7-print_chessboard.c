#include <stdio.h>
#include "holberton.h"

/**
 * print_chessboard - prints buffer in hexa
 * @a: the address of memory to print
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int length, aumentar;

	for (length = 0; length < 8; length++)
	{
		for (aumentar = 0; a[aumentar][7] != '\0'; aumentar++)
		{
			_putchar(a[length][aumentar]);
		}
		_putchar('\n');
	}
}
