#include <stdio.h>

/**
 * main - put other points
 * @argc: the size of the array
 * @argv: the array string
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
