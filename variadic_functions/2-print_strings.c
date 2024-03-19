#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char* j;
	va_list args;
	
	if (separator == NULL)
		separator = "";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(args, char*);
		if (i + 1 == n)
			printf("%s\n", j);
		else if (j == NULL)
			printf("(nil)%s ", separator);
		else
			printf("%s%s ", j, separator);
	}
	va_end(args);
}
