#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
/**
 * struct PrintType - struct
 * @flag: type of argument
 * @f: the function associated
 */
struct PrintType
{
	char *flag;
	void (*f)(va_list);
};
typedef struct PrintType PT;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
