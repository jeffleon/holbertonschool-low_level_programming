#include <stdarg.h>
#include <stdio.h>
/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arguments;
	va_start(arguments, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n-1)
				printf("%s%s", va_arg(arguments, char*), separator);
			else
				printf("%s\n", va_arg(arguments, char*));
		}
	}
}
