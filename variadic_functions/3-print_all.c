#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>
/**
 * Char - print a char
 * @args: current arg
 */
void Char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * Int - print a char
 * @args: current arg
 */
void Int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * Float - print a char
 * @args: current arg
 */
void Float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * String - print a char
 * @args: current arg
 */
void String(va_list args)
{
	char *string = va_arg(args, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
/**
 * print_all - print every arguments of the list
 * @format: flags of all arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i;
	int j = 0;
	va_list args;
	PT array[] = {
		{"c", Char},
		{"i", Int},
		{"f", Float},
		{"s", String},
		{NULL, NULL}
	};
	char *separator = "";
	
	va_start(args, format);
	while (format != NULL && format[j])
	{
		i = 0;
		while (array[i].flag != NULL)
		{
			if (format[j] == *array[i].flag)
			{
				printf("%s", separator);
				array[i].f(args);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(args);
	putchar('\n');
}
