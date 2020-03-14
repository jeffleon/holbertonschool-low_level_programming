
#include "variadic_functions.h"
#include <stdio.h>
/**
 * opf - check if a number is equal to 98
 * @flotante: the integer to check
 *
 */
void opf(va_list flotante)
{
	printf("%f", va_arg(flotante, double));
}
/**
 * ops - check if a number is equal to 98
 * @letras: the integer to check
 *
 */
void ops(va_list letras)
{
	if (letras == NULL)
	printf("(nil)");
	printf("%s", va_arg(letras, char*));
}
/**
 * opc - check if a number is equal to 98
 * @caracter: the integer to check
 *
 */
void opc(va_list caracter)
{
	printf("%c", va_arg(caracter, int));
}
/**
 * opi - check if a number is equal to 98
 * @entero: the integer to check
 *
 */
void opi(va_list entero)
{
	printf("%i", va_arg(entero, int));
}
/**
 * print_all - function that prints anything.
 * struct letras - structura
 * @format: input
 * Return: output
*/
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *coma = "";
	struct letras choice[] = {
				{"i", opi},
				{"f", opf},
				{"c", opc},
				{"s", ops},
				};
	va_list arguments;

	va_start(arguments, format);
	while (format && format[i])
	{
	j = 0;
	while (j < 4)
	{
		if (choice[j].letter[0] == format[i])
		{
			printf("%s", coma);
			choice[j].f(arguments);
			coma = ", ";
		}
		j++;
	}
	i++;
	}
	va_end(arguments);
	printf("\n");
}
