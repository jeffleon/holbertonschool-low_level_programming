#include <stdio.h>

/**
 * main - put other points
 * @argc: 6-6-6 the number of the best
 * @argv: the argv array
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	argv[0] = 0;
	argc -= 1;
	printf("%d\n", argc);
	return (0);
}
