#include "main.h"

void times_table(void)
{
	int n = 0;

	while (n < 10)
	{
		int i = 1;
	
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		while (i < 10)
		{
			int j = i * n;

			if ((j / 10) != 0)
				_putchar((j / 10) + '0');
			else 
				_putchar(' ');

			_putchar((j % 10) + '0');
			
			if (i != 9)
			{	
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
		_putchar('\n');
		n++;
	}
}
