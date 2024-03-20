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
		printf("(nil)");
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

	va_start(args, format);
	while (format[j] != '\0')
	{
		i = 0;
		while (array[i].flag != NULL)
		{
			if (format[j] == *array[i].flag)
			{
				if (format[j + 1] == '\0')
				{
					array[i].f(args);
					putchar('\n');
					break;
				}
				array[i].f(args);
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		j++;
	}
	va_end(args);
}
