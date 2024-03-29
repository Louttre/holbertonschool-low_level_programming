#include "main.h"
/**
 * print_times_table - print tableau
 * @n: number of collumn
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 14)
		return;
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			k = j * i;
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
		}
		_putchar('\n');
	}
}
