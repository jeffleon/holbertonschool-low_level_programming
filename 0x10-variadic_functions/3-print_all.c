#include <stdarg.h>
#include <stdio.h>
/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
void opf (va_list flotante)
{
 	printf("%f", va_arg(flotante, double));
	va_end(flotante);
}
void ops (va_list letras)
{
	printf("%s", va_arg(letras, char*));
	va_end(letras);
}
void opc (va_list caracter)
{
	printf("%c", va_arg(caracter, int));
	va_end(caracter);
}
void opi (va_list entero)
{
	printf("%i", va_arg(entero, int));
	va_end(entero);
}
struct letras {
	char *letter;
	void (*f)();
};

void print_all(const char * const format, ...)
{
	int i = 0,j = 0;
	void (*ptr)();
 	struct letras choice[] ={{"i", opi},
                                {"f", opf},
                                {"c", opc},
                                {"s", ops},
                                {NULL,NULL}};
	va_list arguments;
	va_start(arguments, format);
	while (*format != '\0')
	{
		while (i < 4)
		{
			if (choice[i].letter[0] == *(format + j))
			{
				ptr = (choice[i].f);
				ptr(arguments);
			}
			i++;
		}
		++j;
	}

}
