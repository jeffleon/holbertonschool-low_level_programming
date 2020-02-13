#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	char *s;
	char b[4];

	for (a = 1; a <= 100; a++)
	{
		sprintf(b, "%d ", a);
		s = (a % 3 == 0) ? (a % 5 == 0) ? "Fizzbuzz " : "Fizz " :
		(a % 5 == 0) ? "Buzz " : b;
		printf("%s", s);
	}
	putchar('\n');
	return (0);
}
