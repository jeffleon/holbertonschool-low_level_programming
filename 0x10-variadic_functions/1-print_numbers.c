
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - check if a number is equal to 98
 * @separator: the integer to check
 * @n: this is it
 *
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
			if (i != n - 1)
				printf("%d%s", va_arg(arguments, int), separator);
			else
				printf("%d\n", va_arg(arguments, int));
		}
	}
	else if (separator == NULL)
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(arguments, int));
		printf("\n");
	}
	else
		printf("\n");
	va_end(arguments);
}
