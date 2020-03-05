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
	unsigned int count = 0, i = 0, count1 = 0;
	char *firword;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (count = 0; s1[count]; count++)
	{}
	for (count1 = 0; s2[count1]; count1++)
	{}
	if (n > count1)
		n = count1;
	firword = malloc((count + n + 1) * sizeof(char));
	if (firword == NULL)
		return (NULL);
	for (i = 0; *s1; i++)
	{
		firword[i] = *s1;
		s1++;
	}
	for (; i < count + n; i++)
	{
		firword[i] = *s2;
		s2++;
	}
	firword[i] = '\0';
	return (firword);
}

