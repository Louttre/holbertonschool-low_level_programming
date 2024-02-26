#include <stdio.h>
#include "main.h"
/**
 * puts2 - print a char
 * @str: array of the string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		}
		else
			i++;
	}
	_putchar('\n');
}
