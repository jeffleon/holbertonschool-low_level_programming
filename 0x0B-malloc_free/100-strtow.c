#include "holberton.h"

/**
 * strtow - splits a string into words
 * @str: given string
 *
 * Return: a pointer to an array of strings (words)
 * NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	int countwords = 0, i = 0, palgran = 0, pal = 0, j = 0, k = 0, p = -1, m = 0;
	char **output;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i + 1] == ' ')
			countwords++;
	}
	for (j = 0; str[j]; j++)
	{
		if (str[j] != ' ')
			pal++;
		else if (str[j] == ' ' && str[j + 1] != ' ')
		{
			if (palgran < pal)
			{
				palgran = pal;
			}
			pal = 0;
		}
	}
	output = malloc(1 + countwords * sizeof(char *));
	for (i = 0; i < countwords; i++)
		output[i] = malloc((palgran + countwords) * sizeof(char));
	for (k = 0; str[k]; k++)
	{
		if (str[k] != ' ')
		{
			output[p][m] = str[k];
			m++;
		}
		else if (str[k] == ' ' && str[k + 1] != ' ')
		{
			if (p >= 0)
			{
				output[p][m] = '\0';
			}
			p++;
			m = 0;
		}
	}
	return (output);
}
