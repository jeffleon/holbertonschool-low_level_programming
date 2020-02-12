#include <stdio.h>
/**
 * main - Entry point
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
void main(void)
{
	int a;
	long long flag, A_af = 1, A_be = 0;

	for (a = 1; a <= 50; a++)
	{
		flag = A_af;
		A_af = A_be + A_af;
		A_be = flag;
		printf("%lld", A_af);
		if (a != 50)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
