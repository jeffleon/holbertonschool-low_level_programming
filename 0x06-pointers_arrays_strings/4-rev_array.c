#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: entry pointer
 * @n: variabley
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0, change, count;

	n--;
	for (i = 0; i < n; i++)
	{
		change = *(a + i);
		*(a + i) = *(a + n);
		*(a + n--) = change;
	}
}
