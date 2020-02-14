#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long i, primo = 1, primomax = 0, verificacion = 0;

	while (n != 1)
	{
		n = n / primo;
		for (i = 2; i <= n ; i++)
		{
			if (n % i == 0)
			{
				primo = i;
				break;
			}
		}
		for (i = 1; i <= primo ; i++)
		{
			if (primo % i == 0)
			{
				verificacion++;
			}
		}
		if (verificacion <= 2)
		{
			primomax = primo;
			verificacion = 0;
		}
	}
	printf("%lu\n", primomax);
	return (0);
}
