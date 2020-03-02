#include <stdio.h>
#include <stdlib.h>
/**
 * finddig - find a digit char
 * @s: Pointer to the char
 * Return: 1 if is char and 0 if is number
 */
int finddig(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
			i++;
		else
			return (1);
	}
	return (0);
}
/**
 * main - put other points
 * @argc: the size of array
 * @argv: the array
 *
 * Return: Nothing.
*/
int main(int argc, char *argv[])
{
	int i, add = 0;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (finddig(argv[i]) == 0)
				add += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
	}
	else
		printf("0\n");
	return (0);
}
