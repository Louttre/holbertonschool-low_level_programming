#include <stdio.h>
#include "main.h"
/**
 * print_line - print \ n times
 * @n: number of \
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			int j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
