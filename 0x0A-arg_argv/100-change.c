#include <stdio.h>
#include <stdlib.h>
/**
 * main - put other points
 * @argc: this is a vairble
 * @argv: this is a variable
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int numero, change = 0;

	if (argc == 2)
	{
		numero = atoi(argv[1]);
		while (numero > 0)
		{
			if (numero - 25 >= 0)
			{
				numero -= 25;
				change++;
			}
			else if (numero - 10 >= 0)
			{
				numero -= 10;
				change++;
			}
			else if (numero - 5 >= 0)
			{
				numero -= 5;
				change++;
			}
			else if (numero - 2 >= 0)
			{
				numero -= 2;
				change++;
			}
			else if (numero - 1 >= 0)
			{
				numero -= 1;
				change++;
			}
		}
		printf("%d\n", change);
	}
	else
	printf("Error\n");
	return (0);
}

