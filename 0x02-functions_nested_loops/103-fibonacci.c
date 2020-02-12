#include <stdio.h>
/**
 * main - Get the sum of even Fibonnaci numbers up to 4 million
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a;
	long int flag, A_af = 1, A_be = 1;
	unsigned long sum = 0;

	for (a = 1; a < 33; a++)
	{
	flag = A_af;
	A_af = A_be + A_af;
	A_be = flag;
	if (A_af % 2 == 0)
	{
		sum = sum + A_af;
	}
	}
	printf("%lu", sum);
	putchar('\n');
	return (0);
}
