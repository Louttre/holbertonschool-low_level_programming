#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @separator: separator between args
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list args;

	if (separator == NULL)
		separator = "";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		if (i + 1 == n)
			printf("%d\n", j);
		else
			printf("%d%s ", j, separator);
	}
	va_end(args);
}
