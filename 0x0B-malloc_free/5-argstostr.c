#include "holberton.h"

/**
 * argstostr - put other points
 * @ac: the address of memory to print
 * @av: the size of the memory to print
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int length = 0, count = 0, i = 0, j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
		length++;
	}
	str = malloc(sizeof(char) * length + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[count++] = av[i][j];
		}
		str[count++] = '\n';
	}
	return (str);
}
