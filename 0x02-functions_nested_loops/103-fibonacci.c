#include <stdio.h>
/**
 * main - Entry point
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long long int flag, A_af = 1, A_be = 1, sum = 0;

	for (a = 1; a < 4000000; a++)
	{
		flag = A_af;
		A_af = A_be + A_af;
		A_be = flag;
		if (A_af % 2 == 0)
		{
			sum = sum + A_af;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
