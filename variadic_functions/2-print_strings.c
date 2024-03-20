#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 * @separator: separator between args
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;
	va_list args;

	if (separator == NULL)
		separator = "";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(args, char*);
		if (i + 1 == n && j != NULL)
			printf("%s", j);
		else if (i + 1 == n && j == NULL)
		{
			printf("(nil)");
			break;
		}
		else if (j == NULL)
			printf("(nil)%s", separator);
		else
			printf("%s%s", j, separator);
	}
	putchar('\n');
	va_end(args);
}
