#include "variadic_functions.h"
/**
 * sum_them_all - check if a number is equal to 98
 * @n: the integer to check
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	int sum = 0;

	if (n == 0)
		return(0)
	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, unsigned int);
	}
	va_end(arguments);
	return (sum);
}
