
#include <stdarg.h>
#include <stdio.h>
/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	va_start(arguments, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n-1)
				printf("%d%s", va_arg(arguments, int), separator);
			else
				printf("%d\n", va_arg(arguments, int));
		}
	}
	va_end(arguments);
}
