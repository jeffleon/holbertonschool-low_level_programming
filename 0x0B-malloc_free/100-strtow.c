#include "holberton.h"
/**
 * palabras - splits a string into words
 * @str: given string
 *
 * Return: a pointer to an array of strings (words)
 * NULL if str == NULL or str == ""
 */
int palabras(char *str)
{
	int countwords = 0, i = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i + 1] == ' ')
			countwords++;
	}
	return (countwords);
}
/**
 * letras - splits a string into words
 * @str: given string
 *
 * Return: a pointer to an array of strings (words)
 * NULL if str == NULL or str == ""
 */
int letras(char *str)
{
	int j = 0, pal = 0, palgran = 0;

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
	return (palgran);
}
/**
 * strtow - splits a string into words
 * @str: given string
 *
 * Return: a pointer to an array of strings (words)
 * NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	int countwords = 0, i = 0, palgran = 0, k = 0, p = -1, m = 0;
	char **output;

	countwords = palabras(str);
	palgran = letras(str);
	if (str == NULL)
		return (NULL);
	output = malloc(1 + countwords * sizeof(char *));
	if (output == NULL)
		return (NULL);
	for (i = 0; i < countwords; i++)
	{
		output[i] = malloc((palgran + countwords) * sizeof(char));
		if (output[i] == NULL)
		{
			while (--i)
				free(output[i]);
			free(output);
			return (NULL);
		}
	}
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
