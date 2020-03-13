#include <stdarg.h>
/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int sum = 0, i = 0;

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
