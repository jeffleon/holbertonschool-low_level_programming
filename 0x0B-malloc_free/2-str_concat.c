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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (count = 0; s1[count]; count++)
	{}
	for (count1 = 0; s2[count1]; count1++)
	{}
	contot = count + count1 + 1;
	concat = malloc(sizeof(char) * contot);
	if (concat == NULL)
		return (NULL);
	for (i = 0; *s1; i++)
	{
		concat[i] = *s1;
		s1++;
	}
	for (; *s2; i++)
	{
		concat[i] = *s2;
		s2++;
	}
	concat[i] = '\0';
	return (concat);
}
