#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - print all digits except 2 and 4
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i == 50 || i == 52)
			i++;
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
