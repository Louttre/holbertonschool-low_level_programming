#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>
/**
 * Char - print a char
 * @args: current arg
 */
void _char(va_list args)
{
    printf("%c", va_arg(args, int));
}

/**
 * Int - print a char
 * @args: current arg
 */
void _int(va_list args)
{
    printf("%d", va_arg(args, int));
}

/**
 * Float - print a char
 * @args: current arg
 */
void _float(va_list args)
{
    printf("%f", va_arg(args, double));
}

/**
 * String - print a char
 * @args: current arg
 */
void _string(va_list args)
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
        {"c", _char},
        {"i", _int},
        {"f", _float},
        {"s", _string},
        {NULL, NULL}
    };
    char *separator;

    va_start(args, format);
    while (format != NULL && format[j])
    {
        i = 0;
        while (array[i].flag != NULL)
        {
            if (format[j] == *array[i].flag)
            {
                separator && printf("%s", separator);
                array[i].f(args);
                separator = ", ";
            }
            i++;
        }
        j++;
    }
    printf("\n");
    va_end(args);
}
