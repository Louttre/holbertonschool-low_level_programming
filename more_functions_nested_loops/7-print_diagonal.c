#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - print '\' n times with i spaces
 * @n: number pre establish
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
