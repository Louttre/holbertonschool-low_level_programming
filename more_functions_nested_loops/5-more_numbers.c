#include "main.h"
#include <stdio.h>

void more_numbers(void)
{
	int i,j,k;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 58; j++)
		{
			_putchar(j);
		}
		for (k = 48; k < 53; k++)
		{
			_putchar(49);
			_putchar(k);
		}
		_putchar('\n');
	}
}
