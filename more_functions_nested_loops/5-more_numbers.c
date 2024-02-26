#include "main.h"
#include <stdio.h>

void more_numbers(void)
{
	int i,j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 62; j++)
		{
			if (j > 58)
				_putchar((j / 10) +'0');
			 _putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
