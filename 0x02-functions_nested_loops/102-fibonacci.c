#include <stdio.h>
/**
 * main - Entry point
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int flag, A_af = 1, A_be = 0;

	for (a = 1; a <= 49; a++)
	{
		flag = A_af;
		A_af = A_be + A_af;
		A_be = flag;
		printf("%ld", A_af);
		if (a != 49)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
