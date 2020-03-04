#include "holberton.h"

/**
 * str_concat - put other points
 * @s1: the address of memory to print
 * @s2: the size of the memory to print
 *
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int count = 0, count1 = 0, i = 0, contot = 0;

	for (count = 0; *(s1 + count); count++)
	{}
	for (count1 = 0; *(s2 + count1); count1++)
	{}
	contot = count + count1 + 1;
	concat = malloc(sizeof(*s1) * contot);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < count + count1; i++)
	{
		if (i < count)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - count];
	}
	return (concat);
}
