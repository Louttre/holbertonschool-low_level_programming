#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print tableau
 */
void print_times_table(int n)
{
	int i = 0;

	if ( n < 0 || n > 14)
		return;
	for (; i <= n; i++)
	{
		int j = 1;

		_putchar('0');
		if (n == 0)
		{
			_putchar('\n');
			return;
		}
		_putchar(',');

		for (; j <= n; j++)
		{
			int k = j * i;

			if (k < 10)
			{		
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k < 100 && k > 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else if (k < 1000 && k > 99)
			{
				_putchar(' ');
				_putchar((k / 100) + '0');
				_putchar(((k / 10) % 10) + '0');
				_putchar((k % 10) + '0');
			}
			if (j == n)
				_putchar('\n');
			else
				_putchar(',');
		}
	}
}
