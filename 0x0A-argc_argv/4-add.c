#include <stdio.h>
#include <stdlib.h>

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
			if (atoi(argv[i]) >= 0 && atoi(argv[i]))
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
