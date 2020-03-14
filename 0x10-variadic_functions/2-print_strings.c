#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - check if a number is equal to 98
 * @separator: the integer to check
 * @n: its a int
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
			if (i != n - 1)
				printf("%s%s", va_arg(arguments, char*), separator);
			else
				printf("%s\n", va_arg(arguments, char*));
		}
	}
}
