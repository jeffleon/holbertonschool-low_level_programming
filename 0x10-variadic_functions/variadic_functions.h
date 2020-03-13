#ifndef OP
#define OP
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
