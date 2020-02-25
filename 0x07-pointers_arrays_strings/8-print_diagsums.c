#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - prints buffer in hexa
 * @a: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int length, suml = 0, sumr = 0;

	for (length = 0; length < size; length++)
		suml += a[(size + 1) * length];
	for (length = 0; length <= size; length++)
		sumr += a[(size - 1) * length];
	printf("%d, %d\n", suml, sumr);
}
