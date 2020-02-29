#include <stdio.h>
#include <stdlib.h>

/**
 * main - put other points
 * @argv: the array string
 * @argc: array size
 *
 * Return: Nothing.
*/
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
