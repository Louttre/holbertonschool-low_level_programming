#include <stdio.h>
#include "main.h"

void print_times_table(int n)
{
	int i = 0;
	
	if ( n < 0 || n > 14)
		return;
	for (; i < n + 1; i++)
	{
		int j = 1;

		printf("0,");

		for (; j < n + 1; j++)
		{	
			int k = j * i;

			if (k < 10)
			{			
				putchar(' ');
				putchar(' ');
				putchar(' ');
				putchar(k + '0');
			}
			else if (k < 100 && k > 9)
			{	
				putchar(' ');
				putchar(' ');
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
			}
			else if (k < 1000 && k > 99)
			{
				putchar(' ');
				putchar((k / 100) + '0');
				putchar(((k / 10) % 10) + '0');
				putchar((k % 10) + '0');
			}
			else
				printf("%d", k);
			if (j == n)
				printf("\n");
			else
				printf(",");
		}
	}
}	
