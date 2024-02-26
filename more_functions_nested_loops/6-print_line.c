#include <stdio.h>
#include "main.h"
/**
 * print_line - print '_' n times
 * @n: number of '_'
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	_putchar('\n');
}
