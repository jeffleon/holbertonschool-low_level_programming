#include "holberton.h"
/**
 * string_nconcat - put other points
 * @s1: 6-6-6 the number of the best
 * @s2: the argv array
 * @n: the number
 * Return: Nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count = 0, count1 = 0, i = 0;
	char *firword;

	for (count = 0; s1[count]; count++)
	{}
	for (count1 = 0; s2[count1]; count1++)
	{}
	firword = malloc(count + n + 1);
	for (i = 0; i < count + n; i++)
	{
		if (i < count)
			firword[i] = s1[i];
		else
			firword[i] = s2[i - count];
	}
	return (firword);
}
