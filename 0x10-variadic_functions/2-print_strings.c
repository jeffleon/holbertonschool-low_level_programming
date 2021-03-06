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
	char *aux;

	va_start(arguments, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			aux = va_arg(arguments, char*);
			if (aux != NULL)
			{
				if (separator == NULL || i == n - 1)
					printf("%s", aux);
				else
					printf("%s%s", aux, separator);
			}
			else
				printf("(nil)");
		}
	}
	va_end(arguments);
	printf("\n");
}
