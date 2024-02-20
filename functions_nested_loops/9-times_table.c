#include "main.h"

void times_table(void)
{
	int n = 0;
	
	while (n < 10)
	{
		int i = 0;

		while (i < 10)
		{
			_putchar((i * n) + '0');
			if (i != 9)
			{	
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
		_putchar('$');
		_putchar('\n');
		n++;
	}
}
