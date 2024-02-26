#include <stdio.h>
#include "main.h"
/**
 * _puts - print a char
 * @str: array of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
