#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @*a
 * @*b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int flag;

	flag = *a;
	*a = *b;
	*b = flag;
}
