
#ifndef OP
#define OP
#include <stdarg.h>
/**
 * struct letras- check if a number is equal to 98
 * @letter: the integer to check
 * @f: funtion a puntero
 */
typedef struct letras
{
	char *letter;
	void (*f)(va_list);
}st;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
